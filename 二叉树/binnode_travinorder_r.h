#pragma once
#include "binnode.h"
#include <ostream>

/*
�ݹ���������
*/

template <typename T> //Ԫ�����͡�������
void travIn_R(BinNodePosi(T) x)
{ //��������������㷨���ݹ�棩
	if (!x) return;

	travIn_R(x->lc);

	std::cout << x->data<<" ";

	travIn_R(x->rc);
}
