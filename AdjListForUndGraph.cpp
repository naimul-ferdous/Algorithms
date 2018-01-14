/*
Input like this:

6               //total no of nodes
0 1             //direction of edges
0 2
1 0
1 3
2 0
2 3
3 1
3 2
3 4
3 5
4 3
4 5
5 3
5 4

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tn, n1, n2;
    cin>>tn;
    vector<list<int>> adjlist(tn);
    while(cin>>n1>>n2)
    {
        adjlist[n1].push_back(n2);
    }
    vector<list<int>>::iterator i;
    int x=0;
    cout<<"Adjacency List: \n";
    for(i=adjlist.begin();i!=adjlist.end();i++)
    {
        cout<<x<<"--> ";
        list<int> li=*i;
        list<int>::iterator it;
        for(it=li.begin();it!=li.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
        x++;
    }
}
