#include "ucvm.h"

void erro(uint_16 num){
	warn(num);
	/*die?*/
}

void warn(uint_16 num){
	WR |= num;
}