#define NOP 0x00
#define NUL 0x00
#define LNU 0x0000
#define EXE	0x01 /*	Execute function*/
#define EXT	0x02/*	Execute function if true*/
#define EXF	0x03 /*	Execute fucntion if false*/
#define ETT	0x04 /*	Execute tail function call if true*/
#define ETF	0x05 /*	Execute tail function call if false*/
#define ETL	0x06 /*	Execute tail function call*/
#define PUS 0x07 /*	Push a value on stack*/
#define POP	0x08 /*	Pops second to top value of stack into register at the top of the stack*/
#define SWP 0x09 /*	Swap top two values on stack*/
#define CYR	0x0A /*	Cycle num value on stack clockwise (RIGHT)*/
#define CYL	0x0B /*	Cycle num values on stack counter-clockwise (LEFT)*/
#define DUP	0x0C /*	Duplicate the top (n?) of the stack*/
#define STY	0x0D /*	Checks if the two objects are of the same or compatible type*/
#define TYP 0x0E /*	Gets the type of the object on the top of the stack*/
#define MEX	0x0F /*	Method Exist?*/
#define TYX	0x10 /*	Type Exist?*/
#define NEW	0x11 /*	Creates a new object of the type on the top of the stack*/
#define DEL	0x12 /*	Removed the object on the top of the stack*/
#define WTP	0x13 /*	Write to a µC port*/
#define RDP	0x14 /*	Read from a µC port*/
#define WTN	0x15 /*	Write to the network port*/
#define RDN	0x16 /*	Read from a network port*/
#define ADI	0x17 /*	Add two integers*/
#define SBI	0x18 /*	Subtract integers*/
#define MUI	0x19 /*	Multiply two integers*/
#define SHL	0x1A /*	Shift left*/
#define SHR	0x1B /*	Shift right*/
#define AND	0x1C /*	Bitwise AND*/
#define IOR	0x1D /*	Bitwise Inclusive OR*/
#define XOR	0x1E /*	Bitwise Exclusive OR*/
#define NOT	0x1f /*	Bitwise NOT*/
#define ANL	0x20 /*	Logical AND*/
#define ORL	0x21 /*	Logical Inclusive OR*/
#define XRL	0x22 /*	Logical XOR*/
#define NTL	0x23 /*	Logical NOT*/
#define TLZ	0x24 /*	Test less than 0*/
#define TEZ	0x25 /*	Test equal to 0*/
#define TGZ	0x26 /*	Test greater than 0*/
#define DII	0x27 /*	Divide two integers (giving integers)*/
#define MOI	0x28 /*	Modulo two integers*/
#define DMI	0x29 /*	Divide and modulo integers*/
#define BRT	0x2A /*	Branch if true*/
#define BRF	0x2B /*	Branch if false*/
#define TRW	0x2C /*	Throw exception*/
#define SEX	0x2D /*	Set Exception*/
#define ADF	0x2E /*	Add function to class (expensive)*/
#define RMF	0x2F /*	Remove function from a class (expensive)*/
#define RET	0x30 /*	Return from a function*/
#define ADV	0x31 /*	Add instance varaible (very expensive)*/
#define RMV	0x32 /*	Remove instance variable (very expensive)*/
#define ADC	0x33 /*	Create new class (expensive)*/
#define RMC	0x34 /*	Remove class*/
#define CPF	0x35 /*	Copy function from one class to another*/
#define ROJ	0x36 /*	Get a reference to an object and it's length in bytes (for debugging?)*/

#define RINT 0x01 /* Raw uint_16 type */
#define TYPE_SIZE(X) (!(X) ? 0 : (X) == RINT ? sizeof(uint_16) : sizeof(objID))
#define ERR LNU
#define UNCLEAN_STACK	0x01
#define POP_NULL	0x02
#define POP_BAD_TYPE 0x04