#include <bits/stdc++.h>
#include <map>

using namespace std;

int main() {

    multimap<char,int> mp;
    pair<int,int> p1;

    cout<<sizeof(mp)<<endl;

    mp.insert(pair<char,int>('z',100));
    mp.insert({'l',13});
    mp.insert({'l',14});
    mp.emplace('l',15);

    for(auto &p : mp) {
        cout<<p.first<<" "<<p.second<<endl;
    }

    auto it = mp.find('l');
    cout<<it->second<<endl;
    return 0;


}