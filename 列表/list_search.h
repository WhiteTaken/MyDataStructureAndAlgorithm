#pragma once
#include "listnode.h"
#include "list.h"

/*
 * ��p��n��ǰ���У��ҵ�e
 */

template <typename T>
ListNodePosi(T) List<T>::search(T const& e, int n, ListNodePosi(T) p) const
{
	while(n--)
	{
		if ((p = p->pred)->data <= e)
			break;
	}

	return p;
}

