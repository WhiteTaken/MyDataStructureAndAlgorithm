#pragma once

/**************************************************************

Author��hungry
Date:2016.12.10
Description:���ȼ�����

Analysis:
�� �в��뷽�����Ὣ��ֵ���뵽�ȶ���λ��
�� �ڲ�������״�ṹ���У����ڵ�������Һ��ӽڵ�
�� ������֤�˸��ڵ���Զ������
�� ɾ��������ɾ�����ڵ�

**************************************************************/

template<typename T>
struct PQ
{
public:
	virtual ~PQ()
	{
	}

	virtual void insert(T) = 0;
	virtual T getMax() = 0;
	virtual T delMax() = 0;
};
