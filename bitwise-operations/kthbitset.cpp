#include <iostream>
using namespace std;

int iskthbitset(int n, int k){
    //mask with kth bit set - left shift k, k-1 cuz 0 based indexing
    int mask = 1 << (k-1);
    return (mask & n) != 0;
}

int main(){
    int n, k;
    cout<<"Enter n:";
    cin>>n;
    cout<<"\nEnter k: ";
    cin>>k;
    if(iskthbitset(n, k)){
        cout<<"kth bit is set.\n";
    } else{
        cout<<"kth bit is not set.\n";
    }
    return 0;
}