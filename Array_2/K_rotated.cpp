#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
void reverse(vector<int> &arr){
    int i=0;
    int j=arr.size()-1;
    while (i<j)
    {
        arr[i]=arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
        i++;
        j--;
        
    }
    return;
    
}
void reverse_part(int i,int j,vector<int> &arr){
    while (i<=j)
    {
        arr[i]=arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
        i++;
        j--;
        
    }
    return;
    
}
void Rotate(int k,vector<int> &arr){
int n=arr.size();
reverse_part(0,n-k-1,arr);
display(arr);
reverse_part(n-k,n-1,arr);
display(arr);
reverse(arr);
display(arr);
}
int main(){
    vector<int> arr;
    int s;
    cout<<"Enter the size of array : ";
    cin>>s;
    for (int i = 0; i <s ; i++)
    {
        int input;
        cin>>input;
        arr.push_back(input);
    }
    int k;
    cout<<"Enter the rotation number : ";
    cin>>k;
    k=k%arr.size();
    Rotate(k,arr);
    display(arr);
}