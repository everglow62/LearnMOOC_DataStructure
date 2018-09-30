#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read();
void Print( List L );

List Merge( List L1, List L2 );

int main()
{
    List L1, L2, L;
    L1 = Read();
    L2 = Read();
    L = Merge(L1, L2);

    Print(L);
    Print(L1);
    Print(L2);
    return 0;
}

List Merge(List L1, List L2){
  List L3 = (List)malloc(sizeof(struct Node));
  PtrToNode p;
  p = L3;

  while(L1->Next != NULL && L2->Next != NULL){
    if(L1->Next->Data > L2->Next->Data){
      p->Next = L2->Next;
      L2->Next = L2->Next->Next;
      p->Next->Next = NULL;
      p = p->Next;
    }

    if(L2->Next == NULL){
      continue;
    }

    if(L1->Next->Data < L2->Next->Data || L1->Next->Data == L2->Next->Data){
      p->Next = L1->Next;
      L1->Next = L1->Next->Next;
      p->Next->Next = NULL;
      p = p->Next;
    }
  }


  if(L1->Next == NULL){
    p->Next = L2->Next;
    L2->Next = NULL;
  }

  if(L2->Next == NULL){
    p->Next = L1->Next;
    L1->Next = NULL;
  }

  return L3;
}

List Read(){
  List L = (List)malloc(sizeof(struct Node));
  PtrToNode p;
  p = L;

  int n;
  scanf("%d", &n);
  while(n--){
    PtrToNode q = (PtrToNode)malloc(sizeof(struct Node));
    scanf("%d", &q->Data);
    p->Next = q;
    p = p->Next;
  }

  return L;
}

void  Print(List L) {
  PtrToNode p;
  p = L->Next;
  while(p != NULL){
    printf("%d ", p->Data);
    p = p->Next;
  }
  if(L->Next == NULL)
    printf("%d", L->Data);
  printf("\n");
}
