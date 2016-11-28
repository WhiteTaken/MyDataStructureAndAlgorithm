#pragma once
#include "list.h"
#include "list_insert.h"

template <typename T>
void List<T>::copyNodes(ListNode<T>* p, int n) 
{
	init();

	while (n--)
	{
		//����������ߣ��൱�ڸ���
		insertAsLast(p->data);
		p = p->succ;
	}
}

