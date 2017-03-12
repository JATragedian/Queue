

template <class Qt> class Queue {
public:
<<<<<<< HEAD
	Queue(); // +
	void push(Qt x); // +
=======
	Queue(); //Constructor;
	//~Queue(); // Destructor;
	void push(Qt x);
>>>>>>> 943eb15fbe1bd251786c9f1f94931124c718b237
	void pop();
	void show(); // +
	void show(int n); // +
	void show(int *from, int *to);
	Qt findMin(); // +
	Qt findMax();
	int size(); // +
	int szof();
	bool empty();
	void qSort(); // QuickSort;


private:
	Qt *queue;
	int num;
};

<<<<<<< HEAD
////////////////////////// Methods ///////////////////////////
=======


>>>>>>> 943eb15fbe1bd251786c9f1f94931124c718b237

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
<<<<<<< HEAD

			return x;
		}

=======
			
			return x;
		} 
		
>>>>>>> 943eb15fbe1bd251786c9f1f94931124c718b237
		else return x;
	}

	else return 0;
}

template <class Qt>
int Queue<Qt>::size()
{
	return num;
}

<<<<<<< HEAD
template <class Qt>
int Queue<Qt>::szof()
{
	unsigned long size;

	size = sizeof(queue); // Doesn't showing the whole size!...
	return size;
}

template <class Qt>
void Queue<Qt>::show()
{
	if (num > 0) {
		for (size_t i = 0; i < num; i++) {
			std::cout << "Element " << i << ": " << queue[i] << std::endl;
		}
	}

	else std::cout << "\nQueue is empty!\n";
}

template <class Qt>
void Queue<Qt>::show(int n)
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
void Queue<Qt>::show(int *from, int *to)
{
	//...
}

#endif
=======

>>>>>>> 943eb15fbe1bd251786c9f1f94931124c718b237
