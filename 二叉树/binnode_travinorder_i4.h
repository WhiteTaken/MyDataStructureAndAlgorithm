#pragma once
#include "binnode.h"
#include "binnode_macro_basic.h"

/**************************************************************

Author��hungry
Date:2016.11.30
Description:�ǵݹ�����������ģ�

Analysis:
�� ��������ӣ�������û������Ϊֹ
�� û�����ӣ�ֱ�Ӵ�ӡ
�� ���û���Һ��ӣ���ָ���̽ڵ㣬��ӡ�ýڵ�
�� һֱ���ݲ���ӡ��ֱ����ǰ�ڵ������Һ���
�� ָ��ǰ�ڵ���Һ���
�� û�к�̽ڵ������ȫ����������

**************************************************************/

template<typename T>
void travIn_I4(BinNodePosi(T) x)
{
	while (true)
	{
		if (HasLChild(*x))
		{
			x = x->lc;
		}else
		{
			cout << x->data << " ";
			while (!HasRChild(*x))
			{
				if (!(x = x->succ())) return;
				else cout << x->data << " ";
			}

			x = x->rc;
		}
	}
}
