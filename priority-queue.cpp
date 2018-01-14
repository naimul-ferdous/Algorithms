#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(5);
    pq.push(1);
    pq.push(19);
    pq.push(10);
    pq.push(7);
    while(!pq.empty()) {
        cout<<" "<<pq.top();
        pq.pop();
    }
    return 0;
}
