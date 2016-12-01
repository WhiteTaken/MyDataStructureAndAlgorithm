#pragma once
#include "vector.h"

/**************************************************************

Author��hungry
Date:2016.11.30
Description:���ֲ���

Analysis:
�� ��[lo,hi)�����Ԫ�ؽ��ж��ֲ���
�� ����ȡ�������ȵ��м�Ԫ�أ������������������Ϊ�м�Ԫ�أ������ż��������Ϊ���ȡ�����ĺ���һ��Ԫ�أ�
�� ���������Ԫ��С���м�Ԫ�أ���������С��[lo,mi)
�� ���������Ԫ�ش����м�Ԫ�أ���������С��(mi,hi)
�� �����ȣ���ֱ�ӷ��ظ���
�� ����ʧ�ܣ�����-1

**************************************************************/

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
