#pragma once
#include "binnode.h"
#include <stack>

/**************************************************************

Author��hungry
Date:2016.11.30
Description:�ǵݹ���������������

Analysis:
�� ���ŵ�ǰ�ڵ�һֱ�������Ӳ�ֱ�ӷ��ʣ�Ȼ���Һ��ӷ���ջ��
�� ���ʵ�û������Ϊֹ��Ȼ���ջ�е���һ���ڵ�
�� �ظ����Ϲ��̣�ֱ��ջΪ��

**************************************************************/

template<typename T>
static void GoGlongLeftBranch(BinNodePosi(T) x,std::stack<BinNodePosi(T)> &s)
{
	while(x)
	{
		std::cout << x->data << " ";

		if(HasRChild(*x))  s.push(x->rc);

		x = x->lc;
	}
}

template<typename T>
void travPre_I2(BinNodePosi(T) x)
{
	std::stack<BinNodePosi(T)> s;

	while (true)
	{
		GoGlongLeftBranch(x,s);

		if (s.empty())	break;

		x = s.top(); s.pop();
	}
}
