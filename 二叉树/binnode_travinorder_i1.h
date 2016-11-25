#pragma once
#include "binnode.h"
#include <stack>
/*
 *								ʵ��ԭ��
 *						
 *	�������֧��һֱ���¼���ջ�У�����һ������ӡ֮��ת���������ӽڵ㣬�����ظ�ǰ��Ĺ��̡�
 */

template<typename T>
static void GoALongLeftBranch(BinNodePosi(T) x,std::stack<BinNodePosi(T)> &S)
{
	while(x)
	{
		S.push(x);
		x = x->lc;
	}
}

template<typename T>
void travIn_I1(BinNodePosi(T) x)
{
	std::stack<BinNodePosi(T)> S;
	
	while(true)
	{
		GoALongLeftBranch(x, S);

		if(S.empty())
			break;

		x = S.top(); S.pop();

		std::cout << x->data<<" ";

		x = x->rc;
	}
}
