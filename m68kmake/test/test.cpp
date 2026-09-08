#include <stdio.h>
#include <stdint.h>


unsigned int M68k_Read8(void* user, unsigned int address)
{
	return 0;
}
unsigned int M68k_Read16(void* user, unsigned int address)
{
	return 0;
}
unsigned int M68k_Read32(void* user, unsigned int address)
{
	return 0;
}
void M68k_Write8(void* user, unsigned int address, unsigned int value)
{
}
void M68k_Write16(void* user, unsigned int address, unsigned int value)
{
}
void M68k_Write32(void* user, unsigned int address, unsigned int value)
{
}


int main()
{
	printf("foo\n");
	return 0;
}
