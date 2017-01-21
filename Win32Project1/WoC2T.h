#pragma once
#ifdef _UNICODE
#define Cs2T(x) Towchar(x)
#else
#define Cs2T(x) Tochar(x)
#endif
#include <cstdlib>

wchar_t* Towchar(char* c) {
	size_t sourcelen = strlen(c);
	wchar_t* result = new wchar_t[sourcelen+1];
	size_t reslen;
	mbstowcs_s(&reslen, result, sourcelen+1, c, sourcelen);
	return result;
}

char* Tochar(char* c) {
	return c;
}