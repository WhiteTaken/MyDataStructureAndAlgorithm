#pragma once
#include "binnode.h"
#include <stack>

 /**************************************************************

 Author��hungry
 Date:2016.11.30
 Description:�ǵݹ����������һ��

 Analysis:
 �� ���ŵ�ǰ�ڵ㽫���Ӷ����뵽stack��
 �� ����һ����ӡ
 �� Ȼ��ת��ýڵ���Һ���
 �� �ظ�ǰ��Ĺ���

 **************************************************************/

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
