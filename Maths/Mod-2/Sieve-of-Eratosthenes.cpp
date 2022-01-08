#include<bits/stdc++.h>
using namespace std;

/* bool is_Prime(int n) {

    if(n==1) {
        return false;
    }

    for(int i=2;i<n;i++) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
}

//Naive
void print_prime(int n) {
    
    for(int i=2;i<=n;i++) {
        if(is_Prime(i)) {
            cout<<i<<endl;
        }
    }
} */

/*
Idea is to create an Boolean array isPrime of size (n+1). We initialise this array as true. Once we complete the algorithm only prime numbers are marked as True rest values af False.
We begin with 2 and makrs it's multiples as false. 
We begin with 3 and makrs it's multiples as false. 
We begin with 5 and makrs it's multiples as false. 
One thing to consider we have not written 4 because 4 was marked as false when we were considering multiples of 2, So it is marked False already, also there's no point in traversing for multiples of 4 as they are already marked False when multiples of 2 were marked False.
We consider multiples of those no. which are n't yet marked.
*/
void sieve(int n) {

    vector<bool> isPrime(n+1,true);

    for(int i=2;i*i<=n;i++) {
        if(isPrime[i]) {
            for(int j=2*i;j<=n;j+=i) {
                isPrime[j]=false;
            }
        }
    }

    for(int i=2;i<=n;i++) {
        if(isPrime[i]) {
            cout<<i<<endl;
        }
    }
}

//More Optimisation
//Replacing j=2*i with j=i*i
void sieve(int n) {

    vector<bool> isPrime(n+1,true);

    for(int i=2;i*i<=n;i++) {
        if(isPrime[i]) {
            for(int j=i*i;j<=n;j+=i) {
                isPrime[j]=false;
            }
        }
    }

    for(int i=2;i<=n;i++) {
        if(isPrime[i]) {
            cout<<i<<endl;
        }
    }
}

//Shorter Implementation of Optimised Sieve
void sieve(int n) {

    vector<bool> isPrime(n+1,true);

    for(int i=2;i*i<=n;i++) {
        if(isPrime[i]) {
            cout<<i<<" ";
            for(int j=i*i;j<=n;j+=i) {
                isPrime[j]=false;
            }
        }
    }
}
/* We are printing i also together with algorithm,removing separate loop for printing primes.
When i becomes more than sqrt(n),the inner loop will not run because it begins with i*i,thus we can remove outer loop i.e for printing primes after the i square implementation, but in the previous code we can't do that. 

TC of Sieve Algorithm -> O(nloglogn)
*/

int main() {

    int num;
    cin>>num;
    sieve(num);
    return 0;
}