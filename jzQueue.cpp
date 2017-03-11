#include "jzQueue.h"

template <class Qt>
void Queue<Qt>::push(Qt x)
{
	queue[num] = x;
	num++;
}

template <class Qt>
Qt Queue<Qt>::findMin()
{
	Qt x = Qt_MAX; // Нужно каким-то образом узнать маскимально возможное значение переменной используемого типа;

	for (size_t i = 0; i < num; i++) {
		if (x < queue[i]) x = queue[i];
	}

	return x;
}