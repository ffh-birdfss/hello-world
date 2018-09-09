#include <stdio.h>
#include <stdlib.h>
#include "sqlist.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	SqList list;
	InitList(&list);
	printf("%d\n", list.data[5]);
	*/
	SqList a,c;
	ElemType t = 25;
	SqList *list = &a;
	InitList(&a);
	TestList1(&a);
	PrintList(*list);
	Converse(&a, 12);
	PrintList(*list);
	
	/*
	ListInsert(list, 1, 1);
	ListInsert(list, 1, 2);
	printf("插入成功了没？%d\n", ListInsert(list, 1, 333232));
	printf("%d\n", list->data[0]);
	printf("length=%d\n", Length(*list));
	printf("%d\n", LocateElem(a, 1));
	*/
	return 0;
}


