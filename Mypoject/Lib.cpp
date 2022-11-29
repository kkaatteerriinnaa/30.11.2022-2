#define FIRSTDLL_API extern "C" __declspec(dllexport)

#include "lib.h"

FIRSTDLL_API double sum(double a, double b)
{
	return a+b;
}

FIRSTDLL_API double Min(double a, double b)
{
	return a-b;
}

FIRSTDLL_API double mult(double a, double b)
{
	return a*b;
}

FIRSTDLL_API double dIv(double a, double b)
{
	return a/b;
}