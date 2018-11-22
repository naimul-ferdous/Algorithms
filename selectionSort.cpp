#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int min(int arr[], int l, int h) {
    int i, Midx;
    Midx= l;
    for(i= l+1; i<h; i++) {
        if(arr[i]<arr[Midx])
            Midx= i;
    }
    return Midx;
}

void select(int arr[], int n) {
    int i, Mx;
    for(i=0; i<n-1; i++) {
        Mx= min(arr, i, n);
        swap(arr[i], arr[Mx]);
    }
}

int main() {
    int a[]= {23, 61, 99, 34, 60, 38, 31, 45, 3, 6};
    int n= sizeof(a)/sizeof(a[0]);
    select(a, n);
    for(int i=0; i<n; i++) 
        cout<<a[i]<<"\t";
}