//Calculate the product of all the elements in the given array.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array:  ";
    cin>>n; 
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int prod=1;
    for (int i = 0; i < n; i++)
    {
        prod=arr[i]*prod;
    } 
    cout<<prod;
}