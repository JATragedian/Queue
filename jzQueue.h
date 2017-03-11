template <class Qt> class Queue {
public:
	Queue() { int num = 0 }; // Конструктор;
	~Queue(); // Деструктор;
	void push(Qt x);
	void pop();
	void show();
	Qt findMin();
	Qt findMax();
	int size();
	bool empty();

private:
	Qt *queue = new Qt[];
	int num;
};