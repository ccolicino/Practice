#include "Stack.h"


template<class T> Stack<T>::Stack()
{
	_Top = NULL;
}


template<class T> Stack<T>::~Stack()
{
	while (_Top != NULL) {
		Pop();
	}
}

template<class T> void Stack<T>::Push(T &element)
{
	Node<T> *node = new Node<T>();
	node->Element = element;
	node->Prev = _Top;
	_Top = node;
}

template<class T> T Stack<T>::Pop(void)
{
	Node<T> *node = _Top->Prev;
	T element = _Top->Element;
	delete _Top;
	_Top = node;
	return element;
}