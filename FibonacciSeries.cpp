#include <iostream>
using namespace std;

int fib(int n) {        //recursive function
    if(n<=1) 
        return n;
    return fib(n-1)+fib(n-2);
}

int main() {
    int num;
    int i;
    cout<<"Enter number: \n";
    cin>>num;
    cout<<"Fibonacci of "<<num<<":";
    for(i=0;i<num;i++) {
        cout<<" "<<fib(i);
    }
    
    return 0;
}
