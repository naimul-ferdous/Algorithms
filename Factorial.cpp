#include <iostream>
using namespace std;

int fact(int n) {    //This is the recursion function
    if(n==0) 
        return 1;
    return n*fact(n-1);
}

int main() {
    int num;
    cout<<"Please enter the number: \n";
    cin>>num;
    cout<<num<<"!= "<<fact(num);
    return 0;
}
