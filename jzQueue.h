#ifndef _JZQUEUE_H_
#define _JZQUEUE_H_

template <class Qt> class Queue {
public:
	Queue(); // +
	void push(Qt x); // +
	void pop();
	void show(); // +
	void show(size_t n); // +
	void show(Qt *from, Qt *to);
	Qt findMin(); // +
	Qt findMax();
	size_t size(); // +
	bool empty();
	void sort(size_t from, size_t to); // +

private:
	Qt *queue;
	size_t num;
};

////////////////////////// Methods ///////////////////////////

template <class Qt>
Queue<Qt>::Queue()
{
	num = 0;
	queue = new Qt[];
}

template <class Qt>
void Queue<Qt>::push(Qt x)
{
	queue[num] = x;
	num++;
}

template <class Qt>
Qt Queue<Qt>::findMin()
{
	if (num > 0) {
		Qt x = queue[0];

		if (num > 1) {
			for (size_t i = 1; i < num; i++) {
				if (x > queue[i]) x = queue[i];
			}

			return x;
		}

		else return x;
	}

	else return 0;
}

template <class Qt>
size_t Queue<Qt>::size()
{
	return num;
}

template <class Qt>
void Queue<Qt>::show()
{
	if (num > 0) {
		std::cout << std::endl;
		for (size_t i = 0; i < num; i++) {
			std::cout << "Element " << i << ": " << queue[i] << std::endl;
		}
	}

	else std::cout << "\nQueue is empty!\n";
}

template <class Qt>
void Queue<Qt>::show(size_t n)
{
	if (num > 0) {
		if (n < num) {
			std::cout << "\nElement " << n << ": " << queue[n] << std::endl;
		}

		else std::cout << "\nElement " << n << " isn't exicting in this queue!\n";
	}

	else std::cout << "\nQueue is empty!\n";
}

template <class Qt>
void Queue<Qt>::show(Qt *from, Qt *to)
{
	//...
}

template <class Qt>
void Queue<Qt>::sort(size_t from, size_t to)
{
	if (num > 1) {
		size_t left = from, right = to;
		Qt middle = queue[(left + right) / 2];

		while (left <= right)
		{
			while (queue[left] < middle)
				left++;
			while (queue[right] > middle)
				right--;
			if (left <= right)
				std::swap(queue[left++], queue[right--]);
		}

		if (from < right)
			sort(from, right);
		if (to > left)
			sort(left, to);
	}

	else if (num = 1) {
		std::cout << "\nThere is only one element in the queue!\n";
	}

	else std::cout << "\nQueue is empty!\n";
}

#endif