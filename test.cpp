#include"Stack.h"
#include<iostream>
int main()
{
	IceCola::Stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	while (!st.empty())
	{
		std::cout << st.top() << std::endl;
		st.pop();
	}
	return 0;
}
