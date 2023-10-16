#include "ReadPointer.h"

int main(void)
{

	DWORD address = 0x00729E34;
	std::vector<DWORD> offsets = { 0xC };
	ReadPointer(address, offsets);
	return 0;
}