#include "ucvm.h"

void add(){
	stack[SP - (sizeof(objID) + sizeof(uint_16))]= (uint_16)((unit_16)stack[SP-sizeof(uint_16)-sizeof(objID)] + 
		(unit_16)stack[SP-sizeof(uint_16)-sizeof(objID)-sizeof(uint_16)-sizeof(objID)]));
	SP -= (sizeof(uint_16)+sizeof(objID));
}