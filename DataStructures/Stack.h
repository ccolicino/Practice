#pragma once

template<class T> class Stack
{
	template<class T> class Node
	{
	public:
		Node<T> *Prev;
		T Element;
		Node() {}
	};

private:
	Node<T> *_Top;
public:
	Stack();
	~Stack();
	void Push(T &element);
	T Pop();
};

