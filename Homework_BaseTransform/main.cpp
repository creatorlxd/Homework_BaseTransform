#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	int num;
	int base;
	cin >> num >> base;
	Stack<char> s;
	while (num > 0)
	{
		int n = num % base;
		char c;
		num /= base;
		if (n >= 10)
			c = 'a' + (n - 10);
		else
			c = '0' + n;
		s.Push(c);
	}
	while (s.Empty() == false)
	{
		cout << s.Top();
		s.Pop();
	}
	cout << endl;
	return 0;
}