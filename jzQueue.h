

template <class Qt> class Queue {
public:
	Queue(); //Constructor;
	//~Queue(); // Destructor;
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
int Queue<Qt>::size()
{
	return num;
}


