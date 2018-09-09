#include <stdio.h>
#include <stdlib.h> 
#include "sqlist.h"

bool InitList(SqList *L){
	//L.data = (int*)malloc(InitSize*sizeof(int));   //这是动态分配的 
	L->length = 0;
	return true;
}

bool TestList1(SqList *L){
	int i;
	for(i=0;i<25;i++){
		L->data[i]= 120-i; 
	} 
	for(;i<50;i++){
		L->data[i]=i;
	}
	L->length=50;
	return true;
}

bool TestList2(SqList *L){
	int i;
	for(i=0;i<50;i++){
		L->data[i] = i+1;
	}
	L->length = 50;
	return true;
}

bool TestList3(SqList *L){
	int i;
	for(i=0;i<50;i++){
		L->data[i] = i/4+1;
	}
	L->length = 50;
	return true;
}

//将元素e插入到顺序表L中第i个位置
bool ListInsert(SqList *L, int i, ElemType e){

	if(i<1 || i>L->length+1){
		return false;
	} 
	
	if(L->length>=InitSize){
		return false;
	}
	
	int j;
	for(j=L->length;j>=i;j--){
		L->data[j] = L->data[j-1];
	}
	
	L->data[i-1]=e;
	L->length++;
	return true;	
}

bool ListDelete(SqList *L, int i, ElemType *e){
	if(i<1 || i>L->length){
		return false;
	}
	*e = L->data[i-1];
	int j;
	for(j=i;j<L->length;j++){
		L->data[j-1]=L->data[j];
	} 
	L->length--;
	return true;
}

int Length(SqList L){
	return L.length;
}

//返回第一个与元素e相等的数据元素的位序，序号从1开始。 
int LocateElem(SqList L, ElemType e){
	
	int i;
	for(i=0;i<L.length;i++){
	//	printf("locate=%d\n", L.length);
		if(L.data[i] == e){
			return i+1;
		}
	}
	return 0;
}

void GetElem(SqList L, int i, ElemType *e){
	ElemType k;
	if(i<1 || i>L.length){
		printf("i不在合理范围！");
	}else{
		*e = L.data[i-1];
	} 		
}

bool PrintList(SqList L){
	int i;		//序号 
	for(i=1;i<L.length+1;i++){
		printf("第%d位的值为%d\n", i,L.data[i-1]);
	}
}


bool IsEmpty(SqList L){
	return L.length>0?0:1;
}

bool DestroyList(SqList *L){
	free(L);
	return 0;
}

