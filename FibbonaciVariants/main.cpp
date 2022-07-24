#include<iostream>
#include "Fibonacci.h"


int main() {
	Fibonacci fib;

	for (int i = 0; i <= 20; i++) {
		std::cout <<"For i "<< i <<" fib = ";
		std::cout << fib.countFibByTailRec(i)<<std::endl;
	}
	std::cout<< fib.getCounter();

	return 0;
}