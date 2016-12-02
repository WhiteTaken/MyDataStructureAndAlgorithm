#pragma once
#include "list.h"
#include <iostream>

using namespace std;

template <typename T>
void List<T>::printAll() const
{
	if (_size == 0)
	{
		std::cout << "���б�Ϊ�գ�" << std::endl;

		return;
	}

	ListNodePosi(T) p = header;

	while (trailer != (p = p->succ))
	{
		cout << p->data << "  ";
	}

	std::cout << std::endl;
}

