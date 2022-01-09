#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main() {

    unordered_map<char,int> mp;
    pair<char,int> p1;

    // cout<<sizeof(mp)<<endl;
    mp['a'] = 65;
    mp['b'] = 66;
    mp['c'] = 57;
    
    mp.insert(pair<char,int>('d',100));
    mp.insert(pair<char,int>('e',101));
    mp.insert({'f',102});
    mp.emplace('m',33);


    //erase by key or by iterator
    auto x = mp.begin();
    x++;
    mp.erase(x);

    for(auto &p : mp) {
        cout<<p.first<<" "<<p.second<<endl;

    }
    cout<<"\n\n";

    unordered_map<char,int>::iterator it;
    for(it = mp.begin();it!=mp.end();it++) {
        cout<<it->first<<" "<<it->second<<endl;
    }

    unordered_map<char,int>::iterator it1;
    // for(it1 = mp.begin() ; it1!=mp.end() ; it1++) {
    //     if(it1->first == 'a') {
    //         mp.erase(it1);
    //     }
    // }

    for(auto &p : mp) {
        if(p.first == 'a') {
            mp.erase(p.first);
        }
    }

    for(auto &p : mp) {
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}