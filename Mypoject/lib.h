#pragma once
#ifndef FIRSTDLL_API
#define FIRSTDLL_API extern "C" __declspec(dllimport)
#endif

FIRSTDLL_API double sum(double a, double b);
FIRSTDLL_API double Min(double a, double b);
FIRSTDLL_API double mult(double a, double b);
FIRSTDLL_API double dIv(double a, double b);
