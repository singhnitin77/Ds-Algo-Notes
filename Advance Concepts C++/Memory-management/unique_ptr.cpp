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

int main()
{
    // 2 ways to define unique pointer
    // unique_ptr<type> name(new type());
    // unique_ptr<type> name = make_unique<type>(new type());

    unique_ptr<int> u1(new int(123));
    cout<<*u1<<endl;
    cout<<"Start"<<endl;
    {
        //cout<<u1<<endl;
        unique_ptr<temp> u2(new temp());    // init in heap
        temp *ptr = new temp();             // init in heap
        delete ptr;
        int x;
    }

    unique_ptr<int> p1(new int(100));
    unique_ptr<temp> p2(new temp());
    p2.reset();

    //unique_ptr<int> p2 = p1; throws error because unique pointer can't share memory space

    cout<<"finish"<<endl;

    return 0;
}