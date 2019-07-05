#include "Stack.h"

template<typename T>
Stack<T>::Stack()
{
	capacity = 1;
	data = new T[capacity];
	top = 0;
}

template<typename T>
void Stack<T>::push(T val)
{
	if (isFull())//(top < size - 1)
		reSize(capacity * 2);//top++;
	data[top++] = val;
}

template<typename T>
T Stack<T>::pop()
{
	if (isEmpty())//(top > -1)
		return -1;//top--;
				//return stkArray[top + 1];
	T val = data[--top];
	if (top > 0 && top == capacity / 4)
		reSize(capacity / 2);
	return val;
}

template<typename T>
void Stack<T>::reSize(int newSize)
{
	T*temp = new T[newSize];
	for (int i = 0; i < top; i++)
		temp[i] = data[i];
	(*this).~Stack();
	data = temp;
	capacity = newSize;
}

template<typename T>
T Stack<T>::stackTop()
{
	if (isEmpty())
		return -1;
	return data[top - 1];
}

template<typename T>
int Stack<T>::getCapacity()
{
	return capacity;
}

template<typename T>
int Stack<T>::getNumberOfElements()
{
	return top;
}

template<typename T>Stack<T>::Stack(const Stack<T> &ref)
{
	capacity = ref.capacity;
	top = ref.top;
	data = new T[capacity];
	for (int i = 0; i < capacity; i++)
		data[i] = ref.data[i];
}

template<typename T>Stack<T>& Stack<T> ::operator = (const Stack<T> &ref)
{
	capacity = ref.capacity;
	top = ref.top;
	data = new T[capacity];
	for (int i = 0; i < capacity; i++)
		data[i] = ref.data[i];
	return (*this);
}

template<typename T>
Stack<T>::~Stack()
{
	if (!data)
		return;
	delete[]data;
	//data = nullptr;
}
template<typename T>
bool Stack<T>::isEmpty()
{
	return top == 0;
	//if (top == -1)
	//return true;
	//return false;
}
template<typename T>
bool Stack<T>::isFull()
{
	return top == capacity;
	//if (top == size - 1)
	//return true;
	//return false;
}
template Stack<int>;