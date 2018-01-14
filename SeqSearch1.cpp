#include <iostream>
using namespace std;

int main()
{
    int n,e,f,x;
    int i=0;
    int A[10];
    cout<<"Enter the number of elements you want to store in the array: "<<endl;
    cin>>n;//scanf("%d", &n);
    cout<<"Please enter the elements(SeperateBySpace): "<<endl;
    for(e=0;e<n;e++)
    {
        cin>>A[e];//scanf("%d", &A[e]);
    }
    cout<<"So the elements are: ";
    for(f=0;f<n;f++)
    {
        cout<<" "<< A[f];
    }
    cout<<"\n";
    cout<<" \nEnter the item you want to search in your array: ";
    cin>>x;//scanf("%d", &x);

    while(i<n && (A[i]!=x))
    {
        i++;
    }
    cout<<"\n";
    if(i>=n)
        cout<<"Item not found";
    else
        cout<<"Item found at index "<<i;

    return 0;
}
