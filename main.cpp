#include <iostream>
#include "jzQueue.h"

void test1();

int main()
{
	test1();
	system("pause >> NULL");
	return 0;
}

void test1()
{
	Queue<int> firstQ;
	Queue<char> secondQ;

	firstQ.push(25);
	firstQ.push(30);
	firstQ.push(6);
	firstQ.push(5);
	firstQ.push(84);
	firstQ.push(7);
	firstQ.push(124);
	firstQ.show();
	firstQ.show(2);
	firstQ.show(23);
	std::cout << std::endl << "Min value: " << firstQ.findMin() << std::endl;
	std::cout << std::endl << "Number of elements: " << firstQ.size() << std::endl;
	firstQ.sort(0, firstQ.size() - 1);
	firstQ.show();

	secondQ.push('A');
	secondQ.push('M');
	secondQ.push('b');
	secondQ.show();
	secondQ.sort(0, firstQ.size() - 1);
	secondQ.show();
}

