#ifndef  __LIST_HEAD__ 
#define  __LIST_HEAD__ 


#define InitSize 100
#define MaxSize 100
#define True 1
#define False 0
#define true 1
#define false 0
#define Error -1 
#define ElemType int
#define bool int

//��̬���� 
typedef struct{
	int data[InitSize];
	int length;
}SqList;

/*��̬���� 
typedef struct{
	int *data;
	int MaxSize,length;
}SeqList;
*/
//���� 
bool TestList1(SqList *L); //����� 
bool TestList2(SqList *L);//˳��� 
bool TestList3(SqList *L);//˳���,���ظ� 

//��ʼ��˳��� ����̬���� 
bool InitList(SqList *L);
//����˳����� 
int Length(SqList L);
//���ص�һ����Ԫ��e��ȵ�����Ԫ�ص�λ����Ŵ�1��ʼ��  
int LocateElem(SqList L, ElemType e);
//�õ�˳����е�iλ��Ԫ�� 
void GetElem(SqList L, int i, ElemType *e);
//��Ԫ��e���뵽˳���L�е�i��λ��
bool ListInsert(SqList *L, int i, ElemType e);
//ɾ����iλ�ϵ�Ԫ�أ�����e���ء� 
bool ListDelete(SqList *L, int i, ElemType *e);
//��˳�����˳���L 
bool PrintList(SqList L);
//�жϱ��Ƿ�Ϊ�� 
bool IsEmpty(SqList L);
//��̬����ʱ���ͷ��ڴ� 
bool DestroyList(SqList *L);

//ok
bool DeleteMini(SqList *L, ElemType *value);
void Reverse(SqList *L);
bool del_all_x(SqList *L, ElemType e);
bool del_order_s_t(SqList *L, ElemType s, ElemType t);
bool del_s_t(SqList *L, ElemType s, ElemType t);//5
bool del_s_t2(SqList *L, ElemType s, ElemType t);//5
bool del_order_same(SqList *L);//6
bool merge(SqList L1, SqList L2, SqList *L3); //7
//��֪һά����A[m+n]�����δ�����������Ա�(a1,a2,...,am)��(b1,b2,...,bn)
//���������Ա�λ�û����� (b1,b2,...,bn)�ŵ�(a1,a2,...,am)
void reverse_a_b(SqList *L, int m, int n);//8
void Reverse2(SqList *L, int left, int right);//8
//����˳�������ʱ���ڲ�����ֵΪx��Ԫ�أ��ҵ�����λ�ý�����û�ҵ����������У���ʹ����Ȼ����
void SearchExchangeInsert(SqList *L, ElemType x);
//test
int M_search(int A[], int B[], int n);
#endif
