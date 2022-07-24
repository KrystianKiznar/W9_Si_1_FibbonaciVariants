#pragma once
class Fibonacci
{
	int counter{};
	int Fib[100];

public:
	Fibonacci();
	int getCounter();
	int countFibByIteration(int n);
	int countFibByRecursive(int n);
	int countFibByRecMemo(int n);
	int countFibByTailRec(int n);
	int countFibByTailRec(int n, int a, int b);
};

