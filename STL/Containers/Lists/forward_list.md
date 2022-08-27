### forward list

Foward lists implements as a singly LL.

Lists implements as a doubly LL.

```cpp
#include <iostream>
#include <forward_list>

int main() {
    forward_list<int> l = {10,15,20}
    l.push_front(5);
    l.push_front(3);
    l.pop_front();
    for(int x:l) {
        cout<<x<<" "; //5 10 15 20
    }
    return 0;
}
```

---

Assign() - used to assign new set of values to forward list.

Remove() - used to remove all instance of given value.

```cpp
int main() {
    forward_list<int> l;
    l.assign({10,20,30,10})
    l.remove(10);
    for(auto it=l.begin();it!=l.end();it++) {
        cout<<(*it)<<" "; //20 30
    }
    return 0;
}
```

```cpp
int main() {
    forward_list<int> l;
    l.assign({10,20,30,10})
    forward_list<int> l2;
    l2.assign(l.begin(),l.end())
    for(auto it=l2.begin();it!=l2.end();it++) {
        cout<<(*it)<<" "; //10 20 30 10
    }
    return 0;
}
```

```cpp
int main() {
    forward_list<int> l;
    l.assign(5,10)
    
    for(auto it=l.begin();it!=l.end();it++) {
        cout<<(*it)<<" "; //10 10 10 10 10
    }
    return 0;
}
```

```cpp
int main() {
    forward_list<int> l1 = {15,20,30};
    auto it = l1.insert_after(l1.begin(),10); //15 10 20 30
    it = l1.insert_after(it,{2,3,5}); //15 10 2 3 5 20 30
    it = l1.emplace_after(it,40); // 15 10 2 3 5 40 20 30
    it = l1.erase_after(it); //15 10 2 3 5 40 30
    it = l1.erase_after(it,l1.end()); //15 10 2 3 5 40 
    
    for(int x:l1) {
        cout<<(*it)<<" "; //10 10 10 10 10
    }
    return 0;
}
```

