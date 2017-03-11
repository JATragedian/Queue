#ifndef _JZQUEUE_H_
#define _JZQUEUE_H_

template <class Qt> class Queue {
public:
	Queue(); // Constructor;
	~Queue(); // Destructor;
	void push(Qt x);
	void pop();
	void show(); // We need to create an overload method here!;
	Qt findMin();
	Qt findMax();
	int size();
	bool empty();
	void qSort(); // QuickSort;

private:
	Qt *queue;
	int num;
};
#endif