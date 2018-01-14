#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef struct List {
    int data;
    struct List *next;
} node;

int main() {
    node *F= (node*)malloc(sizeof(node));
    node *S= (node*)malloc(sizeof(node));
    node *T= (node*)malloc(sizeof(node));
    F->data= 50;
    S->data= 40;
    T->data= 30;
    F->next= S;
    S->next= T;
    T->next= NULL;
    cout<<F->data<<"->"<<S->data<<"->"<<T->data;
    free(F);
    free(S);
    free(T);
    return 0;
}
