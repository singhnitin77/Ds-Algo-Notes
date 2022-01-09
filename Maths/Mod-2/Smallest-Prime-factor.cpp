#include<bits/stdc++.h>
using namespace std;

// Naive
int smallPrime(int n) {

    for(int i=2;i*i<=n;i++) {
        if(n%i==0) {
            return i;
        }
    }
    return n;

}

//Efficient
int smallestPrimeFactor(int n) {

    vector<int> leastPrime(n+1,0);
    cout<<1<<" ";
    for(int i=2;i<=n;i++) {
        if(leastPrime[i]==0) {
            cout<<i<<" ";
            for(int j=i*i;j<=n;j+=i) {
                if(leastPrime[j]==0) {
                    leastPrime[j] = i;
                }
            }
        }

        else {
            cout<<leastPrime[i]<<" ";
        }
    }
}

int main() {

    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        cout<<smallPrime(i)<<" ";
    }
    return 0;
}