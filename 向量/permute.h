#pragma once
#include "vector.h"
#include <cstdlib>
#include <vector>

//���б��������˳��

template<typename T>
static void permute(Vector<T> &V)
{
	for(int i = V.size(); i > 0; i--)
	{
		std::swap(V[i - 1], V[rand() % i]); //V[i-1] �� [0,i)��ĳһ��Ԫ�ؽ���
	}
}
