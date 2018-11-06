#include <stdio.h>

void insertSort(int arr[], int n) {
    int k, temp, ptr;
    for(k=1;k<n;k++) {
        temp= arr[k];
        ptr= k-1;
        while(temp<arr[ptr]) {
            arr[ptr+1]= arr[ptr];
            ptr--;
        }
        arr[ptr+1]= temp;
    }
}

void main(){

    int a[]= {89, 16, 62, 14, 12, 44};
    int num= sizeof(a)/sizeof(a[0]);
    insertSort(a, num);
    printf("Now the array is: \n");
    int i;
    for(i =0;i <num; i ++) {
        printf("%d, ", a[i]);
    }
}
