/*
µcvm - Virtual Machine for dynamic languages built for microcontrollers
Copyright (C) 2009 Jame sKeener

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/* Should not use any external includes */
#include "opcods.h"

typedef unsigned short int uint_16;
typedef char objID;
typedef char feildID;
typedef char regID;
/* Registers */
uint_16 IP; /* Instruction Pointer*/
uint_16 CT; /* Class table*/
uint_16 SP; /* Stack Pointer*/
uint_16 BP; /* Base of Stack*/
uint_16 EX; /* Exception Type*/
uint_16 SR; /* Status Register (from proc)*/
uint_16 WR; /* Warning register */
/*
0: Function exited with unclean stack
1: Bad stack size to pop 
2:
3:
4:
5:
6:
7:
*/

uint_16 GP[8]; /* General purpose registers */

/* Won't worry about these right now */
/*IS /* Inturrupt stack (list of interrupt numbers that occured)*/
/*IT /* Inturrupt Table*/

/*
	objID num_objects
	(
		objID id
		uint_16 offsett
	) * num_objects
	(
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
	) * num_objects
*/
char *def_obj_table;
char *obj_table;
char *stack;