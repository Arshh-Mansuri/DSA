#include<iostream>
using namespace std;
int main(){
    int arr[6]={0,1,2,4,5,6};
    int n=6;
    for (int i = 0; i < n; i++)
    {
        cout<<"i is "<<i<<" arr[i]is"<<arr[i]<<endl;
        if(arr[i]!=i)
        {cout<<arr[i-1]<<" ";
        break;
        }
    }
    
}