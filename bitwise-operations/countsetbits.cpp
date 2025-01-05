#include <iostream>
using namespace std;

int countsetbits(int n){
    int count = 0;
    while(n > 0){
        //Brian Cunningham Algorithm
        n = n & (n-1);
        count++;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"\nNumber of set bits: "<<countsetbits(n)<<endl;
    return 0;
}