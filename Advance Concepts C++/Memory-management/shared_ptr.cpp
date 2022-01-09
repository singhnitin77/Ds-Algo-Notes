#include<iostream>
#include<memory>
using namespace std;

struct temp {
    int x;
    temp() {
        cout<<"constructor called"<<endl;
    }

    ~temp() {
        cout<<"Destructor called"<<endl;
    }

};

int main() {
    // ways to initialize shared pointers
    // shared_ptr<type> name(new type());
    // shared_ptr<type> name = make_shared<type>();

    shared_ptr<int> p1(new int(10));
    shared_ptr<int> p2 = make_shared<int>(10);
    shared_ptr<int> p3 = p1;
    shared_ptr<int> p4 = p1;
    cout<<*p1<<" "<<*p3<<" "<<*p4<<endl;    //10 10 10
    *p4 = 99;
    cout<<*p1<<" "<<*p3<<" "<<*p4<<endl;    //99 99 99

    shared_ptr<temp> sp;
    {
        cout<<"inside block"<<endl;
        shared_ptr<temp> sp1(new temp());
        sp = sp1;
        cout<<sp1<<endl;
        cout<<sp1.use_count()<<endl;    //2
        cout<<sp.use_count()<<endl;     //2

    }
    cout<<"outside block"<<endl;
    cout<<sp.use_count()<<endl;     //1
    //cout<<sp1.use_count()<<endl;  gives error as it can't be accessible outside block 
    cout<<sp<<endl;

    return 0;

}