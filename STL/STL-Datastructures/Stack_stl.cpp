#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>

using namespace std;

// void file_i_o()
// {
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     #endif
// }

int main() {

    stack<int> s;       // stack created
    int n;
    cin>>n;
    while(n--) {
        int x;
        cin>>x;
        s.push(x);
    }

    cout<<s.top()<<endl;
    s.pop();
    s.pop();
    cout<<s.top()<<endl;
  

    deque<int> deq{3,1,2,4,5};
    stack<int> st(deq);         // we can even initilise stack using deque
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;     //checks whether the stack is empty or not

    // initialising stack using vector 
    vector<int> v{6,3,2,8,1};
    stack<int,vector<int> > st2(v);
    cout<<st2.size()<<endl;
    cout<<st2.top()<<endl;

}