#pragma once
#include<deque>

namespace IceCola
{
	template<class T, class Container = std::deque<T>>
	class Stack
	{
	public:

		Stack()
		{

		}

		void push(const T& x)
		{
			_c.push_back(x);
		}

		void pop()
		{
			_c.pop_back();
		}

		T& top()
		{
			return _c.back();
		}

		const T& top()const
		{
			return _c.back();
		}

		size_t size()const
		{
			return _c.size();
		}

		bool empty()const
		{
			return _c.empty();
		}

	private:
		Container _c;
		//push top pop empty 
	};
}
