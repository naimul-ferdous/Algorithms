
#include <stdio.h>



void swap(int *x, int *y) {
  
  
	int temp= *x;
    
	*x= *y;
    
	*y= temp;

}



void bubbleSort(int arr[], int n) {
 
   
	int i, j;
    
	for(i = 0;i <n-1;i ++) {
        
		for(j=0;j<n-i-1;j++) {
            
			if(arr[j]>arr[j+1]) 
                
				swap(&arr[j], &arr[j+1]);
        
		}
   
 	}

}



int main(){

   
 
	int a[]= {89, 16, 62, 14, 12, 44};
    
	int num= sizeof(a)/sizeof(a[0]);
    
	bubbleSort(a, num);
    
	printf("Now the array is: \n");
    
	int i;
    
	for(i =0;i <num; i ++) {
        
		printf("%d, ", a[i]);
    
	}


}
