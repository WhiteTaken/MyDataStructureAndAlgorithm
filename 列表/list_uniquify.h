#pragma once
#include "list.h"
#include "list_remove.h"

/*
 * �����޳��ظ�Ԫ��
 */

template <typename T>
int List<T>::uniquify()
{
	if (_size < 2)
		return;

	int oldSize = _size;

	ListNodePosi(T) p = first();
	ListNodePosi(T) q;

	while (trailer != (q = p->succ))
	{
		if (p->data != q->data)
			p = q;
		else
			remove(q);
	}

	return oldSize - _size;

}

