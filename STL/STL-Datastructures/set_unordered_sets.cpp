#include <bits/stdc++.h>
#include <set>
#include <unordered_set>

using namespace std;

int main() {

    set<int> s;
    s.insert(10);
    s.emplace(20);
    s.insert(30);
    s.insert(40);

    for(auto i : s) {
        cout<<i<<endl;
    }
    cout<<endl;

    unordered_set<int> s1;
    s1.insert(10);
    s1.insert(20);
    for(auto &i : s1) {
        cout<<i<<endl;
    }
    return 0;

}