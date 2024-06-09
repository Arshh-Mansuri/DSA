//Finding lower bound using binary search 
#include <iostream>
using namespace std;
int main(){
    int arr[9]={1,2,3,4,5,6,7,10,14};
    int n=9;
    int target=9;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while (hi>=lo)
    {
        int mid=lo+ (hi-lo)/2;
        if(arr[mid]==target){
            flag=true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<target)lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false){
        cout<<arr[hi];
    }
    
    
}