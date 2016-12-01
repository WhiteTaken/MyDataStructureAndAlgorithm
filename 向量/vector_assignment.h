#pragma once
#include "vector.h"

template<typename T>
Vector<T>& Vector<T>::operator= (Vector<T> const& V)
{
	if (_elem)
		delete []_elem;			//ɾ���ɵ�_elem��ռ���ڴ�ռ䣬copyFrom������new

	copyFrom(V,0,V._size);

	return *this;				//*this��ȡ����
}
