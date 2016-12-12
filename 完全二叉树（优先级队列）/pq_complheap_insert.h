#pragma once
#include "pq_complheap.h"
#include "pq_complheap_percolateup.h"
#include "vector_insert.h"

//���뵽��ĩ�ˣ�ִ�����˲���

template <typename T>
void PQ_ComplHeap<T>::insert(T e)
{
	Vector<T>::insert(e);

	percolateUp(Vector<T>::_size - 1);
}

