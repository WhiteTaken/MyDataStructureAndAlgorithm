#pragma once
#include "binnode.h"
#include <stack>
#include "binnode_macro_basic.h"
#include <iostream>

/**************************************************************

Author��hungry
Date:2016.11.30
Description:�ǵݹ�����������һ��

Analysis:
�� ��root�ڵ����ջ��
�� ����һ���ڵ㣬ֱ�ӷ��ʣ�Ȼ�󽫸ýڵ���Һ��Ӻ����Ӱ�˳�����ջ��
�� �ظ����Ϲ��̣�ֱ��ջΪ��

**************************************************************/

template<typename T>
void travPre_I1(BinNodePosi(T) x)
{
	std::stack<BinNodePosi(T)> s;

	if (x != nullptr)
		s.push(x);

	while(!s.empty())
	{
		x = s.top(); s.pop();

		std::cout << x->data << " ";

		if (HasRChild(*x))	s.push(x->rc);
		if (HasLChild(*x))	s.push(x->lc);
	}
}
