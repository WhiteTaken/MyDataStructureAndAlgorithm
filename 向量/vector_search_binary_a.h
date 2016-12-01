#pragma once
#include "vector.h"

/*
	���ֲ��ң�ǰ�����ź����vector
*/

template<typename T>
static Rank Bin_Search(T* A, T const& e, Rank lo, Rank hi)
{
	while (lo < hi)
	{
		Rank mi = (lo + hi) >> 1;		//ȡ��

		if (e < A[mi])					//[lo,mi)
			hi = mi;
		else if (e > A[mi])				//(mi,hi)
			lo = mi + 1;
		else
			return mi;
	}

	return -1;							//�Ҳ����򷵻�-1
}
