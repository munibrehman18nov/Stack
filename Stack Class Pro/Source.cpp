#include<iostream>
using namespace std;
#include"Stack.h"
int main()
{
	Stack<int> s;
	for (int i = 0; i < 15; i++)
		s.push(i);
	Stack<int>s1;
	s1 = s;
	while (!(s1.isEmpty()))
	{
		cout << s1.pop() << endl;
	}
	return 1;
}