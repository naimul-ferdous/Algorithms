#include <bits/stdc++.h>
#define SIZE 101
using namespace std;

int A[SIZE];
int top=-1;

void push(int x) 
{
    if(top==SIZE-1) 
    {
        cout<<"Overflow\n";
        return;
    }
    A[++top]= x;
}

void pop() 
{
    if(top==-1) 
    {
        cout<<"Underflow\n";
        return;
    }
    top--;
}

void print() 
{
    int i;
    cout<<"Stack: ";
    for(i=0;i<=top;i++) 
    {
        cout<<" "<<A[i];
    }
    cout<<endl;
}

int main() 
{
    push(4); print();
    push(14); print();
    push(25); print();
    pop(); print();
    pop(); print();
    return 0;
}
