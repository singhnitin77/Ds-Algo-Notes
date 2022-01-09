#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>

using namespace std;

int main() {

    queue<int> q;
    int n;
    cin>>n;
    while(n--) {
        int x;
        cin>>x;
        q.emplace(x);
    }
    
    cout<<q.front()<<endl;
    q.pop();
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.empty()<<endl;
    return 0;

    //initialising queue using deque
    list<int> deq{3,1,2,4,5};
    queue<int,list<int> > qu(deq);
    cout<<qu.size()<<endl;
    qu.push(12);
    cout<<qu.size()<<endl;



}