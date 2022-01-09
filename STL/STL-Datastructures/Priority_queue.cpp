#include <bits/stdc++.h>
#include <functional> //greater

using namespace std;
int main() {

    priority_queue<int> first;
    first.push(10);
    first.push(20);
    first.push(30);
    cout<<first.top()<<endl;    //30 
    first.pop();
    cout<<first.top()<<endl;

    priority_queue<int> second(first);
    cout<<second.top()<<endl;

    int arr[] = {4,2,7,1,-1,6,19};
    priority_queue<int> third(arr,arr+7);

    while(not third.empty()) {
        cout<<third.top()<<endl;
        third.pop();
    }

    // How to make min heap
    priority_queue<int, vector<int>,greater<int>> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    cout<<pq.top()<<endl;   //10


}

