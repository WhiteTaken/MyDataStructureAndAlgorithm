#pragma once

/*
 * ���ȼ�����
 */

template<typename T>
struct PQ
{
public:
	virtual void insert(T) = 0;
	virtual T getMax() = 0;
	virtual T delMax() = 0;
};
