#pragma once
#include "bintree.h"
#include <queue>

/**************************************************************

Author��hungry
Date:2016.11.30
Description:��α���

Analysis:
�� ʹ�ø�������
�� �����Һ��Ӷ��������
�� ѭ������ֱ������Ϊ��

**************************************************************/

template <typename T>
void BinNode<T>::travLevel()
{
	std::queue<BinNodePosi(T)> Q;

	Q.push(this);

	while (!Q.empty())
	{
		BinNodePosi(T) x = Q.front();
		
		std::cout << x->data << " ";

		Q.pop();

		if(HasLChild(*x)) Q.push(x->lc);
		if(HasRChild(*x)) Q.push(x->rc);
	}
}

