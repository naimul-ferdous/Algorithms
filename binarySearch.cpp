#include <stdio.h>

void binarySearch(int arr[], int n, int item) {
	int beg, end, mid;
	beg=0;
	end= n-1;
	mid= (beg+end)/2;
	while(beg<=end && arr[mid] != item) {
		if(item<arr[mid])
			end= mid-1;
		else
			beg= mid+1;
		
		mid= (beg+end)/2;
	}
	if(arr[mid]==item)
		printf("Item found at %d", mid);
	else
		printf("Item not found");
}

int main(void) {
	int a[]= {5, 10, 20, 25, 30};
	int n= sizeof(a)/sizeof(a[0]);
	binarySearch(a, n, 30);
	return 0;
}
