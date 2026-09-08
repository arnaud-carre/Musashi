#include <stdio.h>
#include <stdint.h>
#if 1
unsigned int  m68k_read_memory_8(unsigned int address)
{
	return 0;
}

unsigned int  m68k_read_memory_16(unsigned int address)
{
	return 0;
}

void m68k_write_memory_8(unsigned int address, unsigned int value)
{
}

void m68k_write_memory_16(unsigned int address, unsigned int value)
{
}

unsigned int  m68k_read_memory_32(unsigned int address)
{
	uint32_t r = m68k_read_memory_16(address) << 16;
	r |= m68k_read_memory_16(address + 2);
	return r;
}

void m68k_write_memory_32(unsigned int address, unsigned int value)
{
	m68k_write_memory_16(address, uint16_t(value >> 16));
	m68k_write_memory_16(address + 2, uint16_t(value));
}
#endif


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
	return 0;
}
void M68k_Write16(void* user, unsigned int address, unsigned int value)
{
	return 0;
}
void M68k_Write32(void* user, unsigned int address, unsigned int value)
{
	return 0;
}




int main()
{
	printf("foo\n");
	return 0;
}
