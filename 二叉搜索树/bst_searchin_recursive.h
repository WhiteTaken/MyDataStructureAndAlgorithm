#pragma once
#include "binnode.h"

/**************************************************************

Author��hungry
Date:2016.12.10
Description:��������������

Analysis:
�� ���������������ӱȸ��ڵ�С���Һ��ӱȸ��ڵ��
�� �ݹ����searchIn����ֵe
�� �����ǰ�ڵ�Ϊ�ջ����ҵ���ֵ��e�����򷵻ظýڵ����
�� �����������������������
�� hotһֱ�ǲ��ҽڵ�ĸ��ڵ�

**************************************************************/

template<typename T>
static BinNodePosi(T)& searchIn(BinNodePosi(T)& v,const T& e,BinNodePosi(T)& hot)
{
	if (!v || e == v->data)
		return v;

	hot = v;

	return searchIn((e < v->data) ? v->lc : v->rc, e, hot);
}
