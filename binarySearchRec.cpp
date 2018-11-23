#include<stdio.h>

int binary(int a[], int l, int r, int x) {
    if(l<=r) {
        int mid= l+(r-l)/2;
        if(x==a[mid]) 
            return mid;
        if(x<a[mid]) 
            return binary(a, l, mid-1, x);
        return binary(a, mid+1, r, x);
    }
    return -1;
}

int main(void) 
{ 
   int arr[] = {2, 3, 4, 10, 40}; 
   int n = sizeof(arr)/ sizeof(arr[0]); 
   int x = 10; 
   int result = binary(arr, 0, n-1, x); 
   (result == -1)? printf("Element is not present in array") : printf("Element is present at index %d", result); 
   return 0; 
} 