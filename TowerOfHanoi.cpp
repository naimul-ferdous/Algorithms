#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void tower(int n, char beg, char aux, char des) 
{
    if(n==0)
        return;
    tower(n-1, beg, des,aux);
    cout<<"peg:  "<<beg<<"-->"<<des<<endl;
    tower(n-1, aux, beg, des);
}

int main() 
{
    cout<<"Enter no. of disk: ";
    cout<<"\n";
    int n;
    cin>>n;
    tower(n, 'A', 'B', 'C');
    return 0;
}
