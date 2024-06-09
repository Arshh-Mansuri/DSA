#include <iostream>
using namespace std;
int nthsum(int n){
    return ( (n*(n+1)) /2.0);
}
int main(){

    int n;
    cin>>n;

    int lo=0;
    int hi=n;
    while (hi>=lo) {
        int mid=lo+(hi-lo)/2;
        if(nthsum(mid)==n){
            return mid;
        }
        else if (nthsum(mid)>n)hi=mid-1;
        else lo=mid+1;
    }
    cout<<hi;
}