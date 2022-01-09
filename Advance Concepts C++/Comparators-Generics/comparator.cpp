#include <iostream>
#include <algorithm>
using namespace std;

// void file_i_o()
// {
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     #endif
// }

// class Car {

// public:
//     int price;
//     int mileage;
//     string name;
//     string color;

//     // bool operator <(const Car &c) const {
//     //     return price < c.price;
//     // } cmp func Doesn't work

// };

struct Car {
    int price;
    int mileage;
    string name;
    string color;

    // bool operator <(const Car &c) const {
    //     return price < c.price;
    // } cmp func Doesn't work
};

bool cmp(struct Car &c1,struct Car &c2) {
    return c1.price<c2.price;
}

bool cmp(const struct Car &c1, const struct Car &c2) {
    if(c1.mileage == c2.mileage) {
        return c1.price < c2.price;
    }
    return c1.mileage < c2.mileage;
}

int main() {
    int n;
    cin>>n;
    struct Car arr[n];
    for(int i=0;i<n;i++) {
         cin>>arr[i].price>>arr[i].mileage>>arr[i].name>>arr[i].color;
    }

    // 3
    // 100000 100 Safari Black
    // 500000 120 baleno grey
    // 200000 130 fortuner white

    sort(arr,arr+n,cmp);

    for(int i=0;i<n;i++) {
         cout<<arr[i].price<<" "<<arr[i].mileage<<" "<<arr[i].name<<" "<<arr[i].color<<endl;
    }
    // Output
    // 100000 100 Safari Black
    // 200000 130 fortuner white
    // 500000 120 baleno grey

    cout<<endl;
    //sorting array using sort func
    //sort(base address, no. of elements)
    
    // int a[] = {5,4,3,2,1};
    // sort[first included,last not included)
    // sort(a,a+5);
    // for(int i=0;i<5;i++) {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;

    //sort(arr,arr+5) It doesn't know how to compare 2 car structs. need to write comparator function 
    
    return 0;
}