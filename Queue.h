class Queue {
public:
	void push();
	void pop();
	int findMin();
	int findMax();
	int size();
	bool empty();

private:
	int *queue = new int[];
};