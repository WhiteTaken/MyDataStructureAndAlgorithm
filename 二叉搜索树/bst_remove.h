#pragma once
#include "bst.h"
#include "bst_removeat.h"
#include "bintree.h"

/**************************************************************

Author��hungry
Date:2016.12.10
Description:�������������Ƴ�ʵ��

Analysis:
�� ���Ȳ��Ҹýڵ㣬���Ҳ������򲻱�ɾ��������false
�� ���ҵ��ˣ�����removeAt����
�� ��С�ڵ�������������

**************************************************************/

template <typename T>
bool BST<T>::remove(const T& e)
{
	BinNodePosi(T)& x = search(e);

	if (!x)
		return false;

	removeAt(x, _hot);

	--BinTree<T>::_size;

	BinTree<T>::updateHeightAbove(_hot);

	return true;
}

