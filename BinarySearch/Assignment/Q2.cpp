//Given a sorted binary array, efficiently count the total number of 1’s
// Input 1 : a = [0,0,0,0,1,1]
// Output 1: 2
#include <iostream>
using namespace std;
int main(){
    int arr[9]= {0,0,0,0,1,1,1,1,1};
    int n=9;
    int lo=0;
    int hi=n-1;
    int ans=-1;
    bool flag=false;
    while (hi>=lo)
    {   int mid=lo+(hi-lo)/2;
        if(arr[mid]==1){
            if (arr[mid-1]!=1)
            {
                cout<<n-mid;
                flag=true;
                break;
            }
            else{
                ans=mid;
                hi=mid-1;
            }
            
        }
        else if(arr[mid]<1)lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false)cout<<ans;

}