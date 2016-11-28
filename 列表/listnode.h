#pragma once

typedef int Rank;

#define ListNodePosi(T) ListNode<T>*

template<typename T>
struct ListNode
{
	T data;

	ListNodePosi(T) pred, succ;

	ListNode(){}

	ListNode(T e,ListNodePosi(T) p = NULL,ListNodePosi(T) s = null) : data(e),pred(p),succ(s)
	{}

	ListNodePosi(T) insertAsPred(T const& e);	//���뵱ǰ�ڵ��ǰ��
	ListNodePosi(T) insertAsSucc(T const& e);	//���뵱ǰ�ڵ�ĺ���
};
