#include <bits/stdc++.h>
#include <map>

using namespace std;

int main() {

    map<char,int> mp;
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
    // mp.erase('c');
    auto x = mp.begin();
    x++;
    mp.erase(x);

    for(auto &p : mp) {
        cout<<p.first<<" "<<p.second<<endl;

    }
    cout<<"\n\n";

    map<char,int>::iterator it;
    for(it = mp.begin();it!=mp.end();it++) {
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}