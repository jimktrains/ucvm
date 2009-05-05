#include "ucvm.h"

/*
Object Description format
	1 byte Class ID
	1 byte number variables
	1 byte number of methods
	1 byte type of val_1
	1 byte hash of val_1's name
	...
	1 byte type of val_n
	1 byte hash of val_n's name
	1 byte hash of fun_1's name
	2 byte offset from bottom
	...
	1 byte hash of fun_m's name
	2 byte offset from bottom
	start of code
*/

/*
	This function takes and object ID
	and returns the offset/address of the 
	object's definition on the 
	def_obj_table
*/	

unint_16 obj_get_def_address(objID oi){
	char *tot;
	objID i;
	uint_16 found;

	found = ERR;
	tot = def_obj_table;
	objCnt = *tot;
	tot += sizeof(objID);

	for(	i = 0; 
			i < *def_obj_table; 
			i++, tot += (sizeof(objID) + sizeof(uint_16))
		){
		if(*tot == oi){
			tot += sizeof(objID);
			found = *(uint_16 *)tot;
		}
	}
	
	return found;
}

/*
	This function takes a field and object id
	and returns the type fo that field
*/
objID obj_get_element_type(objID oi, fieldID fi){
	char *offset;
	feildID i;
	
	offset = def_obj_table;
	offset += obj_get_def_address(oi);
	offset += sizeof(objID);
	oi = ERR;
	/* will this limit go to a register or be recomputed? */
	
	for(	i = 0; 
			i < *(def_obj_table + sizeof(objID)); 
			i++, tot += (sizeof(objID) + sizeof(fieldID))
		){
		if(*offset == fi){
			offset += sizeof(fieldID);
			oi = *(objID *)offset;
		}
	}
	
	return oi;
}