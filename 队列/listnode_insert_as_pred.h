#pragma once
#include "listnode.h"

template <typename T>
ListNode<T>* ListNode<T>::insertAsPred(T const& e)
{
	ListNodePosi(T) x = new ListNode(e, pred, this);

	//��ǰ�ڵ�ĺ����ڵ�ָ���½��ڵ�
	pred->succ = x;

	//����ǰ�ڵ��ǰ���ڵ�ָ���½��ڵ�
	this->pred = x;

	return x;
}

