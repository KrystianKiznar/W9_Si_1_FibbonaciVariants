#include "Fibonacci.h"

Fibonacci::Fibonacci()
{
	for (int i = 0; i < 100; i++)
		Fib[i] = -1;
}

int Fibonacci::getCounter()
{
	return counter;
}

int Fibonacci::countFibByIteration(int n)
{
	int a = 0;
	int b = 1;
	int c = 1;
	if (n == 0) {
		counter++;
		return 0;
	}
	else if (n == 1 || n == 2) {
		counter++;
		return 1;
	}
	for (int i = 3; i <= n; i++) {
		a = b;
		b = c;
		c = a + b;
		counter++;
	}

	return c;
}

int Fibonacci::countFibByRecursive(int n)
{
	if (n == 0) {
		counter++;
		return 0;
	}
	else if (n == 1 || n == 2) {
		counter++;
		return 1;
	}
	else
		return countFibByRecursive(n - 1) + countFibByRecursive(n - 2);
}

int Fibonacci::countFibByRecMemo(int n)
{
	if (n <= 1) {
		counter++;
		return n;
	}
	if (Fib[n] != -1) {
		counter++;
		return Fib[n];
	}
	Fib[n] = countFibByRecMemo(n - 1) + countFibByRecMemo(n - 2);
	counter++;
	return Fib[n];
}

int Fibonacci::countFibByTailRec(int n) {
	counter++;
	return countFibByTailRec(n,0,1);
}

int Fibonacci::countFibByTailRec(int n, int a, int b)
{
	if (n == 0) {
		counter++;
		return a;
	}
	else if (n == 1) {
		counter++;
		return b;
	}
	counter++;
	return countFibByTailRec(n-1, b, a+b);
}
