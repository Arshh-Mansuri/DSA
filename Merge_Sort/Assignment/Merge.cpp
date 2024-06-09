#include <iostream>
#include <vector>
using namespace std;
void merge(vector <int> & arr,int lo,int hi,int mid){
    vector <int> temp;
    int right=lo;
    int left=mid+1;
    while(right<=mid && left<=hi){
        if(arr[right]>=arr[left]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(right<=mid){
        temp.push_back(arr[right]);
        right++;
    }
    while(left<=hi){
        temp.push_back(arr[left]);
        left++;
    }
    cout<<"lo is : "<<lo<<" hi is : "<<hi<<endl;
    for (int i=lo; i<=hi; i++) {
    arr[i]=temp[i-lo];
    }
}
void mS(vector <int> & arr,int lo,int hi){
     if(lo>=hi)return;
     int mid=(lo+hi)/2;
     mS(arr,lo,mid);
     mS(arr,mid+1,hi);
     merge(arr,lo,hi,mid);

    
}
int main(){
    vector <int> arr(4,0);
    arr[0]=4;
    arr[1]=3;
    arr[2]=2;
    arr[3]=1;
    int lo=0;
    int hi=arr.size()-1;
    mS(arr,lo,hi);
    for (int i=0; i<arr.size(); i++) {
    cout<<arr[i]<<" ";
    }
}