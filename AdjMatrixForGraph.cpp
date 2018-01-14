#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tn, n1, n2, i, j;
    int adj[100][100]={0};
    cin>>tn;
    while(cin>>n1>>n2)
    {
        adj[n1][n2]=1;
    }
    cout<<"Adjacent Matrix: \n";
    for(i=1;i<=tn;i++)
    {
        for(j=1;j<=tn;j++)
        {
            cout<<adj[i][j]<<"  ";
        }
        cout<<endl;
    }
}

/*
Input like this:

6       //total no of nodes
1 2   //edges connnected with
1 3
2 1
2 4
4 2
4 3
4 5
5 4
5 6
6 3
6 5

*/
