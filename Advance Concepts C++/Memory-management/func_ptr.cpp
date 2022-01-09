#include<iostream>
using namespace std;

char f(int n,char ch) {
    cout<<"hey"<<endl;
    return ch;
}

int sqr(int x) {
    return x*x;
}

int cube(int x) {
    return x*x*x;
}

int gun(int x, int (*fun)(int)) { // calling func inside a function
    return fun(x);
}

void hello() {
    cout<<"Hello world"<<endl;
}

int fun(int n) {
    cout<<"fun with"<<" "<<n<<endl;
    return n;
}

void print(int v) {
    cout<<"value is"<<v<<endl;
}

int main() {
    void(*ptr)()=  &hello;
    ptr();      // pointer ptr will call function hello as it's storing address of hello
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    int(*fptr)(int) = fun;
    fptr(7);

    char (*p)(int,char) = f;
    cout<<p(10,'k')<<endl;

    cout<<gun(10,cube)<<endl;
    cout<<gun(10,sqr)<<endl;

    //we can call function ptr just like a function

    return 0;
}