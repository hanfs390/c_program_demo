#include <stdio.h>

int main()
{
	unsigned char a = 0x17;
	unsigned char b = 0x23;
	unsigned char c;
	
	// a = 0001 0111
	//~a = 1110 1000 = 0xe8
	// b = 0010 0011
	//~b = 1101 1100 = 0xdc
	c = ~a;
	printf("a = %#x\n", a);
	printf("~a = %#x\n", c);
	c = ~b;
	printf("b = %#x\n", b);
	printf("~b = %#x\n", c);

	// a & b   
	// a = 0001 0111
	// b = 0010 0011
	// a & b = 0000 0011 = 0x3
	c = a & b;
	printf("a & b = %#x\n", c);

	// a | b = 0011 0111 = 0x37
	c = a | b;
	printf("a | b = %#x\n", c);

	//a ^ b = 0011 0100 = 0x34
	c = a ^ b;
	printf("a ^ b = %#x\n", c);

	// a >> 2 = 0000 0101 = 0x5
	c = a >> 2;
	printf("a >> 2 = %#x\n", c);

	// b << 3 = 0001 1000 = 0x18 
	c = b << 3;
	printf("b << 3 = %#x\n", c);


	return 0;
}
