#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {

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

void primeFactors(int n) {

    for(int i=2;i<n;i++) {  //O(n)
        if(isPrime(i)) {    //O(n)
            int x = i;
            while(n%x==0) { 
                cout<<i<<" ";
                x = x*i;
                // Multiple powers of i can also divide n
                // TC of while loop here -> O(logn)
            }
        }
    }
}
// Overall TC -> O(n^2logn)

// Efficient
void primeFactors2(int n) {

    if(n<=1) {
        return;
    }

    for(int i=2;i*i<=n;i++) {
        while(n%i==0) {
            cout<<i<<" ";
            n = n/i;
        }
    }

    // Corner Case, 
    if(n>1) {
        cout<<n<<" ";
    }
}


int main() {

    int num;
    cin>>num;
    primeFactors(num);
    return 0;
}