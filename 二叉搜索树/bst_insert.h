#pragma once
#include "binnode.h"
#include "bst.h"
#include "bintree.h"
#include "binree_updateheight.h"

/**************************************************************

Author��hungry
Date:2016.12.10
Description:�������Ĳ���ʵ��

Analysis:
�� ����һ����ֵe���ȵ��������������鿴�Ƿ��Ѿ��д�ֵ
�� ����Ѿ����д�ֵ����ֱ�ӷ��ظýڵ�
�� ���򷵻ص��Ǹýڵ��λ�ã����ýڵ��ֵ����Ϊe����Ϊ��ָ������ã����Ը�ָ���ָ�򼴿��޸ĸýڵ��ֵ��
�� ���ڵ����Լ�һ������������

**************************************************************/


template <typename T>
BinNode<T>* BST<T>::insert(const T& e)
{
	BinNodePosi(T)& x = search(e);

	if (x)
		return x;

	x = new BinNode<T>(e, _hot);

	++BinTree<T>::_size;

	BinTree<T>::updateHeightAbove(x);

	return x;
}

