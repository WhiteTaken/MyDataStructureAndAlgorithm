#pragma once
#include "binnode.h"
#include "binnode_macro_basic.h"

/**************************************************************

Author��hungry
Date:2016.11.30
Description:�ǵݹ��������������

Analysis:
�� ��root�ڵ㿪ʼ����
�� ������ǻ��ݲ��������ӣ���һֱ��������ĩ����ڵ�
�� ������ڻ��ݻ���û�������ˣ����ȴ�ӡ
�� ��ӡ֮������ýڵ����Һ��ӣ���ת���Һ��ӣ����رջ��ݱ�־
�� ���û���Һ��ӣ���ָ���̽ڵ㣬�������ݱ�־

**************************************************************/

template<typename T>
void travIn_I3(BinNodePosi(T) x)
{
	auto backtrack = false;

	while (true)
	{
		if(!backtrack && HasLChild(*x))
		{
			x = x->lc;
		}else
		{
			cout << x->data << " ";

			if(HasRChild(*x))
			{
				x = x->rc;
				backtrack = false;
			}else
			{
				if (!(x = x->succ())) break;
				backtrack = true;
			}
		}
	}
}
