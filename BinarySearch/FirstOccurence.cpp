//Find the first occurence of the elements  in the array
//Input {1,1,2,2,2,2,5,5,5,9,9,9} ,target=2
//Output 2
#include <iostream>
using namespace std;
int main(){
    int arr[12]={1,1,2,2,2,2,5,5,5,9,9,9};
    int n=12;
    int target=9;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while (lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target){
            if(mid==0){
                cout<<mid;
                break;
            }
            if(arr[mid-1]!=target)
            {
                cout<<mid;
                flag=true;
                break;
                }
            else{
                //arr[mid-1]=x
                hi=mid-1;
            }
            
            
        }
        else if(arr[mid]>target){
            hi=mid-1;
        }
        else lo=mid+1;
    }
    
}