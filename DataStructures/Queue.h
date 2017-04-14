#pragma once

template<class T> class Queue
{
	template<class T> class Node 
	{
	public:
		Node() {Next = NULL};
		T Element;
		Node<T> *Next;
	};

private:
	Node<T> *Head;
	Node<T> *Tail;
public:
	Queue();
	~Queue();
	void Push(T &element);
	T Pop();
};

