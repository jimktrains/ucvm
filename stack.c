#include "ucvm.h"
/*
	This function pushes 
	a char array onto the stack
*/

void push(char *d, uint_16 l){
	for(;! (l & 0x8000);l--, d++,  SP++){
		stack[SP] = *d;
	}
}

void pop(regID r){
	uint_16 l;
	l = TYPE_SIZE(stack[SP]);
	if(!l) warn(POP_NULL);
	SP--;
	GP[r] = 0x0000;
/*FIXME		for(; l==-1; l-- ){  Would this work? */
	for(; ! (l & 0x8000); l-- ){
		GP[r] |= stack[SP];
		GP[r] <<= 8;
		SP--;
	}
}