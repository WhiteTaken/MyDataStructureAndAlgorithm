#include <iostream>

using namespace std;

/**************************************************************

Author��hungry
Date:2016.11.30
Description:��������

Analysis:
�� �������˿��Ƶ������Ƶ�˳�򣬴ӵڶ����ƿ�ʼ
�� �ӵ�ǰ�Ƶ�ǰһ���ƿ�ʼ�����������ҵ������ڵ�ǰ�Ƶ�λ�ã��������ڸ��Ƶ����󡰼���
�� �����Ʒ��õ���λ��

**************************************************************/

static void insertSort(int* lists,int length)
{
	for (size_t i = 1; i < length; i++)
	{
		auto curr = lists[i];

		size_t j;

		for (j = i; j > 0 && lists[j - 1] > curr; j--)
			lists[j] = lists[j - 1];

		lists[j] = curr;
	}

	for (size_t i = 0; i < length; i++)
		cout << lists[i] << " ";
}

void main()
{
	int lists[] = {4,345,35,232,53,1,20,33,18,90};
	
	insertSort(lists, sizeof(lists) / sizeof(lists[0]));
	
	system("pause");
	
}