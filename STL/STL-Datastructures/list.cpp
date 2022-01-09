#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
using namespace std;

int main() {
    
    list<int> first;
    //To add at end
    first.push_back(10);

    //To add at front
    first.push_front(20);

    first.emplace_back(30); //Replacement ofo pushback

    for(list<int>::iterator it = first.begin(); it != first.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto it = first.begin(); it != first.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto el : first) {
        cout<<el<<" ";
    }
    cout<<endl;

    //initialisng another list using existing list
    list<int> second(first);

    for(auto el : second) {
        cout<<el<<" ";
    }
    cout<<endl;

    list<int> third(4,100);
    
    for(auto el : third) {
        cout<<el<<" ";
    }
    cout<<endl;

    list<int> fourth(third.begin(),third.end());
    //list<int> fourth(third.begin(),third.begin()+2);
    //list<int> fourth(third.begin(),third.begin()-2); error
    for(auto el : fourth) {
        cout<<el<<" ";
    }
    cout<<endl;

    //merge two lists
    fourth.merge(first);
    for(auto el:fourth) {
        cout<<el<<" ";
    }
    cout<<endl;

    //sort list
    fourth.sort();
    for(auto el:fourth) {
        cout<<el<<" ";
    }

    return 0;
    
}