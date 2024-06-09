//Difference of sum of elements at odd places and even places
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

   int i=1;
   while(i<=s){
    arr[i-1]=arr[i-1]*2;
    i=i+2;
   }
   
   int j=2;
   while(j<=s-1){
    arr[j-1]=arr[j-1]+10;
    j=j+2;
   }
   display(arr);

   
}
   
   
