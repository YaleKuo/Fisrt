#include <stdbool.h>
#define MaxSize 50
typedef struct {
	int data[MaxSize];// ��̬��������Ԫ��
	int length;
}SqListStatic;

void InitList(SqListStatic* L);

bool ListInsert(SqListStatic* L, int i, int e);

PrintList(SqListStatic* L);