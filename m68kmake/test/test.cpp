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

void M68k_Reset_Callback(void* user)
{
}

int M68k_Illegal_Callback(void* user, int opcode)
{
	return 0;
}

int M68k_TrapN_Callback(void* user, int opcode)
{
	return 1;
}

int main()
{
	printf("foo\n");
	return 0;
}
