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
	Queue<double> thirdQ;

	std::cout << "\n  FIRST QUEUE:\n";

	firstQ.push(4);
	firstQ.push(34);
	firstQ.push(456);
	firstQ.push(42);
	firstQ.push(7);
	firstQ.show();
	firstQ.pop();
	firstQ.show();
	std::cout << "\nMin: " << firstQ.findMin();
	std::cout << "\nMax: " << firstQ.findMax();
	std::cout << "\nSize: " << firstQ.size() << '\n';
	firstQ.sort(0, 3);
	firstQ.show();

	std::cout << "\n  SECOND QUEUE:\n";

	secondQ.push('g');
	secondQ.push('e');
	secondQ.push('v');
	secondQ.push('J');
	secondQ.push('M');
	secondQ.show();
	secondQ.pop();
	secondQ.show();
	std::cout << "\nMin: " << secondQ.findMin();
	std::cout << "\nMax: " << secondQ.findMax();
	std::cout << "\nSize: " << secondQ.size() << '\n';
	secondQ.sort(0, 3);
	secondQ.show();
}

