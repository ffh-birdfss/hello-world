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

//静态分配 
typedef struct{
	int data[InitSize];
	int length;
}SqList;

/*动态分配 
typedef struct{
	int *data;
	int MaxSize,length;
}SeqList;
*/
//样本 
bool TestList1(SqList *L); //乱序表 
bool TestList2(SqList *L);//顺序表 
bool TestList3(SqList *L);//顺序表,有重复 

//初始化顺序表 ，静态分配 
bool InitList(SqList *L);
//返回顺序表长度 
int Length(SqList L);
//返回第一个与元素e相等的数据元素的位序，序号从1开始。  
int LocateElem(SqList L, ElemType e);
//得到顺序表中第i位的元素 
void GetElem(SqList L, int i, ElemType *e);
//将元素e插入到顺序表L中第i个位置
bool ListInsert(SqList *L, int i, ElemType e);
//删除第i位上的元素，并由e返回。 
bool ListDelete(SqList *L, int i, ElemType *e);
//按顺序输出顺序表L 
bool PrintList(SqList L);
//判断表是否为空 
bool IsEmpty(SqList L);
//动态数组时，释放内存 
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
//已知一维数组A[m+n]中依次存放着两个线性表(a1,a2,...,am)和(b1,b2,...,bn)
//将两个线性表位置互换， (b1,b2,...,bn)放到(a1,a2,...,am)
void reverse_a_b(SqList *L, int m, int n);//8
void Reverse2(SqList *L, int left, int right);//8
//有序顺序表，最少时间内查找数值为x的元素，找到与后继位置交换，没找到将其插入表中，并使表仍然有序。
void SearchExchangeInsert(SqList *L, ElemType x);
//test
int M_search(int A[], int B[], int n);
#endif
