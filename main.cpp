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

	firstQ.push(25);
	firstQ.push(30);
	firstQ.push(6);
	firstQ.push(75);
	firstQ.show();
	firstQ.show(2);
	firstQ.show(23);
	std::cout << std::endl << "Min value: " << firstQ.findMin() << std::endl;
	std::cout << std::endl << "Number of elements: " << firstQ.size() << std::endl;
	std::cout << std::endl << "Size of array: " << firstQ.szof() << std::endl; // Doesn't showing the whole size!...
	/*firstQ.sort();
	firstQ.show();*/
}

