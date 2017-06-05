// lab6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

static void Swap<T>(ref T lhs, ref T rhs)
{
	T temp;
	temp = lhs;
	lhs = rhs;
	rhs = temp;
}
static void SortDec3(ref double a, ref double b, ref double c)
{
	if (a < b)
		Swap(ref a, ref b);
	if (b < c)
		Swap(ref b, ref c);
	if (a < b)
		Swap(ref a, ref b);
}
static void Main(string[] args)
{
	double a1 = 1;
	double a2 = 2;
	double a3 = 3;
	Console.WriteLine("Неотсортированный набор: {0} {1} {2}", a1, a2, a3);
	SortDec3(ref a1, ref a2, ref a3);
	Console.WriteLine("Отсортированный набор: {0} {1} {2}", a1, a2, a3);

	a1 = 2;
	a2 = 10;
	a3 = 3;
	Console.WriteLine("Неотсортированный набор: {0} {1} {2}", a1, a2, a3);
	SortDec3(ref a1, ref a2, ref a3);
	Console.WriteLine("Отсортированный набор: {0} {1} {2}", a1, a2, a3);
}