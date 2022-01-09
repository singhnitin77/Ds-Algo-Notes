#include<iostream>
using namespace std;

int main()
{

    /*#ifndef ONLINE_JUDGE
    // Not execute if true
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/

    // create integer bucket in heap
    int* ptr = new int(8);
    cout<<*ptr<<endl;

    // create an array of integer in heap
    int* arr = new int[2];
    arr[0] = 10;
    arr[1] = 20;
    cout<<arr[0]<<"\n";
    cout<<arr[1]<<"\n";
    delete [] arr;

    cout<<arr[0]<<"\n";     //10
    cout<<arr[1]<<"\n";     //20

    // initialze an array with all zeroes
    int *zeroes = new int[10]();

    for(int i=0;i<10;i++) {
        cout<<zeroes[i]<<" ";
    }
    cout<<endl;

    int* arr2 = new int[5];
    for(int i=0;i<5;i++) {
        cin>>arr2[i];
    }

    for(int i=0;i<5;i++) {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    // create 2d array in heap
    int **grid = new int*[5];       // Primary array init
    for(int i=0;i<5;i++) {
        grid[i] = new int[4];
    }

    cout<<grid<<"\n";       //Base address of grid
    cout<<grid[0]<<"\n";    //
    cout<<&grid[0]<<"\n";   //Address of First element = Base address of grid array

    int ** sg = new int*[2];
    for(int i=0;i<2;i++) {
        sg[i] = new int[3];
    }

    for(int i=0;i<2;i++) {
        delete [] sg;   // deleting secondary array
    }
    delete [] sg;   // deleting primary array

    return 0;
}