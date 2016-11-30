#include <iostream>

using namespace std;

/**************************************************************

Author��hungry
Date:2016.11.30
Description:�鲢����

Analysis:
�� �Ƚ��зֽ⣬�ݹ�ؽ�һ���������Ϊһ������Ԫ�أ�Ȼ����кϲ�
�� ��һ������ĺϲ��ǣ�����ֻ��һ��Ԫ�ص�����ϲ�����һ��Ԫ�غ�����Ԫ�غϲ�
�� ����������Ԫ�غϲ�ʱ���������Ѿ��ź����������кϲ������磨4,5,6���ͣ�3,7,9��
�� ���Ͼ����ϲ�ʱ���Ȱ�3�ϲ���Ȼ��4,5,6������ֵ�һ��������ˣ���ѵڶ�������ʣ���ֱ�Ӻϲ�
�� �����ݹ���ϲ��������һ��ԭλ�����ź��������

**************************************************************/

static void merge(int* lists, int lo, int mi, int hi)
{
	int* A = lists + lo;			//ָ���lo��Ԫ��
	
	int lb = mi - lo;				//ǰ�벿��Ԫ�صĸ�����������mi��

	int* B = new int[lb];			

	for (size_t i = 0; i < lb; B[i] = A[i++]);	//��ǰ�벿�ֵ�Ԫ�ؿ�����B������

	int lc = hi - mi;							//��벿��Ԫ�صĸ�����������hi��

	int* C = lists + mi;						//ָ���mi��Ԫ��

	for (int i = 0, j = 0, k = 0; j < lb || k < lc;)	//��[lo,hi)��Ԫ�ؽ��й鲢
	{
		if ((j < lb) && (!(k < lc) || (B[j] <= C[k])))//���B��ǰ�����С��C��ǰ���������B��ֵ��ֵ��A��
			A[i++] = B[j++];						  //����C�е���ֵ�Ѿ�ȫ������鲢����B�е�ʣ����ֱ�Ӹ�ֵ��A

		if ((k < lc) && (!(j < lb) || C[k] < B[j]))	//���C��ǰ�����С��B��ǰ���������C��ֵ��ֵ��A
			A[i++] = C[k++];						//����B�е���ֵ�Ѿ�ȫ������鲢����C�е�ʣ����ֱ�Ӹ�ֵ��A
	}

	delete[] B;					
}

static void _mergeSort(int* lists, int lo, int hi)
{
	if (hi - lo < 2)			//���ֻʣ��һ����������Ԫ�أ�ֹͣ����
		return;

	int mi = (lo + hi) / 2;

	_mergeSort(lists, lo, mi);	//[lo,mi)
	_mergeSort(lists, mi, hi);	//[mi,hi)

	merge(lists, lo, mi, hi);	//��ʼ�鲢
}

static void mergeSort(int* lists, int length)
{
	_mergeSort(lists,0,length);
}

void main()
{
	int lists[] = {4,345,35,232,53,1,20,33,18,90};
	
	mergeSort(lists, sizeof(lists) / sizeof(lists[0]));
	
	for (size_t i = 0; i < sizeof(lists) / sizeof(lists[0]); i++)
		cout << lists[i] << " ";
	
	system("pause");
}