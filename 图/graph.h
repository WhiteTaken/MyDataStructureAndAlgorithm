#pragma once
#include <stack>

typedef enum {UNDISCOVERED,DISCOVERED,VISITED} VStatus;
typedef enum {UNDETERMINED,TREE,CROSS,FORWARD,BACKWARD} EType;

template<typename Tv,typename Te>
class Graph
{
public:
	void reset()
	{
		for (int i = 0; i < n; i++)
		{
			status(i) = UNDISCOVERED;
			dTime(i) = -1;
			fTime(i) = -1;
			parent(i) = -1;
			priority(i) = INT_MAX;

			for (int j = 0; j < n; j++)
			{
				if (exists(i, j))
					type(i,j) = EType::UNDETERMINED;
			}
		}
	}

	void BFS(int,int&);
	void DFS(int, int&);
	void BCC(int, int&, std::stack<int>&);		//����DFS��˫��ͨ�ֽ��㷨
	bool TSort(int, int&, std::stack<Tv>*);		//����DFS����������

public:
	int n;
	virtual int insert(Tv const&) = 0;	//���붥��
	virtual Tv remove(int) = 0;
	virtual Tv& vertex(int) = 0;
	virtual int inDegree(int) = 0;
	virtual int outDegree(int) = 0;
	virtual int firstNbr(int) = 0;			//��һ���ڽڵ�
	virtual int nextNbr(int,int) = 0;		//��һ���ٽӵ�

	virtual VStatus& status(int) = 0;
	virtual int& dTime(int) = 0;			//��һ�η��ʵ�ʱ��
	virtual int& fTime(int) = 0;			//�ڶ��η��ʵ�ʱ��
	virtual int& parent(int) = 0;	
	virtual int& priority(int) = 0;

	int e;
	virtual bool exists(int, int) = 0;
	virtual void insert(Te const&, int, int, int) = 0;
	virtual Te remove(int, int) = 0;
	virtual EType& type(int, int) = 0;
	virtual Te& edge(int, int) = 0;
	virtual int& weight(int, int) = 0;

	void dfs(int);
	void bfs(int);
	void bcc(int);

	std::stack<Tv>* tSort(int);		//����dfs����������

	void prim(int);					//��С֧����
	void dijkstra(int);				//���·���㷨
};
