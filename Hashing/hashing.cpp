#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    //precompute-> HASH
    int hash[100]={0};
    for (int i=0; i<n; i++) {
        hash[arr[i]]+=1;
    }

    // Fetch
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
    }



    return 0;
}