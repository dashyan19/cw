#include "engineering.h"
#include "engineering.h"
#include <stdio.h>
void main()
{
	double pi = 0.1415926535;
	double e = 0.7182818284;

	int pii, ee;

	_asm {
		mov eax, 3
		mov pii, eax
	}

	_asm {
		mov eax, 2
		mov ee, eax
	}

	pi = pi + pii;
	e = e + ee;
}

