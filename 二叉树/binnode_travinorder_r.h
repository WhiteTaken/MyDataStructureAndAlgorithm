#pragma once
#include "binnode.h"
#include <ostream>

/**************************************************************

Author��hungry
Date:2016.11.30
Description:�ݹ��������

Analysis:
�� �ݹ�������
�� ��ӡ��ǰ�ڵ�
�� �ݹ�������
�� ��ǰ�ڵ�Ϊ�գ���return

**************************************************************/

template <typename T>
void travIn_R(BinNodePosi(T) x)
{ 
	if (!x) return;

	travIn_R(x->lc);

	std::cout << x->data<<" ";

	travIn_R(x->rc);
}
