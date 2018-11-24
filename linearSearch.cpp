#include <stdio.h>

void linear(int arr[], int n, int i) {
    arr[n]= i;
    int l= 0;
    while(arr[l] != i) {
        l++;
    }
    if(l == n)
        printf("Item not found");
    printf("Item found at index: %d", l);
}

void main(){

    int a[]= {89, 16, 62, 14, 12, 44};
    int n= sizeof(a)/sizeof(a[0]);
    linear(a, n, 89);
}