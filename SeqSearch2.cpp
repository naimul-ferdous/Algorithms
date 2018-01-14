#include <iostream>
using namespace std;

int seqSearch(int A[], int n, int z, int index)
{
    int i=0;
    A[n]=z, index=-1;

    while(A[i]!=z)
    {
        i++;
    }
    if(i<n)
       index=i;
    return index;
}

int main()
{
    int arr[50], arrSize, item, i, result;
    cout<<"Please enter the array size: "<<endl;
    cin>>arrSize;//scanf("%d", &arrSize);
    cout<<"Please Enter the array elements: "<<endl;
    for(i=0;i<arrSize;i++)
    {
        cin>>arr[i];//scanf("%d", &arr[i]);
    }

    cout<<"Please enter the item you want to search: "<<endl;
    cin>>item;//scanf("%d", &item);

    result= seqSearch(arr, arrSize, item, 2);

    if(result<0)
        cout<<"Sorry Item not found";
    else
        cout<<"Item found at "<<result+1<<" position";
}
