public class BinarySearch
{
    int binarySearch(int arr[], int element) 
    {
        
        int beg= 0, end= arr.length-1;
        while(beg <= end) 
        {
            int mid= beg+(end-beg)/2;
            if(arr[mid]==element) 
                return mid;
            if(arr[mid] <element) 
                beg = mid+1;
            else 
                end= mid-1;
        }
        
        return -1;
        
    }
    
    public static void main(String[] args) {
        BinarySearch bs= new BinarySearch();
        int arr[]= {2, 3, 4, 10, 40};
        int n= arr.length;
        int x= 10;
        int result= bs.binarySearch(arr, x);
        if(result ==-1)
            System.out.println("Item not found");
        else
            System.out.println("Item found at index " +result);
        
    }
}
