#pragma once
#include "binnode.h"
#include <stack>
#include "binnode_macro_basic.h"

/**************************************************************

Author��hungry
Date:2016.11.30
Description:�ǵݹ��������

Analysis:
�� ��root�ڵ�push������ջ��
�� ���ջ�����ǵ�ǰԪ�صĸ��ڵ㣨���Ϊ�����֣�����ִ�Т�[������ڶ����ǵ������Ҫ��JB������˭���ϣ�]
   ����ִ�Т�
�� ��������ӣ����ȷ��Һ��ӣ����ڵĻ����ڷ����ӣ�����ֱ�ӷ��Һ���
�� ����ֹͣ״̬�ǽڵ�û�����Ӳ���û���Һ���
�� ��ջ�е���һ������ӡ
�� �ظ����Ϲ��̣�ֱ��ջΪ��

**************************************************************/

template<typename T>
static void gotoHLVFL(std::stack<BinNodePosi(T)> &S)
{
	while(BinNodePosi(T) x = S.top())
	{
		if(HasLChild(*x))
		{
			if (HasRChild(*x))
				S.push(x->rc);
			S.push(x->lc);
		}
		else
			S.push(x->rc);
	}

	S.pop();
}

template<typename T>
void travPost_I(BinNodePosi(T) x)
{
	std::stack<BinNodePosi(T)> S;

	if (x)	S.push(x);

	while (!S.empty())
	{
		if(S.top() != x->parent)	//ջ���Ǹ������֣������֣�������������������
		{
			gotoHLVFL(S);
		}
			
		x = S.top();  S.pop();

		std::cout << x->data << " ";
	}
}
