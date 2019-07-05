#ifndef STACK_H
#define STACK_H

template <typename T>
class Stack
{
	T *data;
	int capacity;
	int top;
	void reSize(int);
public:
	Stack();
	Stack(const Stack<T> &);
	Stack& operator = (const Stack<T> &);
	void push(const T);
	T pop();
	T stackTop();
	bool isFull();
	bool isEmpty();
	int getCapacity();
	int getNumberOfElements();
	~Stack();

	//	void clear();
	//	void showStructure();
	//	void reverse(char*);
	//	void toPostFix(char*);
	//	void toPreFix(char*);

	//	int getTopVal();
};

#endif
