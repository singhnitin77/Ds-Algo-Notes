#include<bits/stdc++.h>
using namespace std;

//Naive
bool isPrime(int n) {

    if(n == 1) {
        return false;
    }
    
    for(int i=2;i<n;i++) {
        if(n % i==0) {
            return false;
        }
    }
    return true;
}

//Efficient 
bool isPrime_Efficient(int n) {

    if(n==1) {
        return false;
    }

    for(int i=2;i*i<=n;i++) {
        if(n%i==0) {
            return false;
        }
    }
    return true;

}

//For large n
bool isPrime_Large(int n) {

    if(n==1) {
        return false;
    }

    if(n==2 || n==3) {
        return true;
    }

    if(n%2==0 || n%3==0) {
        return false;
    }

    for(int i=5;i*i<=n;i+=6) {
        if(n%i==0 || n%(i+2)==0) {
            return false;
        }
    }
    return true;
}

int main() {
    
    int num;
    cin>>num;
    // cout<<isPrime(num);
    cout<<isPrime_Efficient(num);
    return 0;
}

