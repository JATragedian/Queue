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

template <class Qt>
void Queue<Qt>::show()
{
	if (num > 0) {
		for (size_t i = 0; i < num; i++) {
			std::cout << "Element " << i << ": " << queue[i] << std::endl;
		}
		std::cout << std::endl;
	}

	else std::cout << "\nQueue is empty!\n";
}