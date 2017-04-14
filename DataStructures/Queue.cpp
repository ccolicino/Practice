#include "Queue.h"
#include <exception>

template<class T> Queue<T>::Queue()
{
	Head = NULL;
	Tail = NULL;
}


template<class T> Queue<T>::~Queue()
{
}

template<class T> void Queue<T>::Push(T &element)
{
	Node<T> *node = new Node<T>();
	node->Element = element;
	if (Tail == NULL) {
		Head = node;
		Tail = node;
	}
	else {
		Tail->Next = node;
		Tail = node;
	}
}

template<class T> T Queue<T>::Pop()
{
	if (Head == NULL)
		throw new std::exception("No element at Head");
	Node<T> *node = Head;
	T element = node->Element;
	Head = Head->Next;
	delete node;
	return element;
}