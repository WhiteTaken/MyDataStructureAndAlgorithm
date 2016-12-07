#pragma once
#include "bintree.h"
#include "binnode_macro_basic.h"

/*
 * �ο����㷨���ۡ���ʵ�ָ��߲�εķ�װ�������
 */

template <typename T>
void BinTree<T>::insert(T const& e)
{
	if (_root == nullptr)
	{
		insertAsRoot(e);
		return;
	}
		
	BinNodePosi(T) currNode = _root;

	while (true)
	{
		while (e < currNode->data && currNode->parent)
		{
			currNode = currNode->lc;
		}

		if (!HasChild(*currNode))
			insertAsLC(currNode, e);
	}
}

