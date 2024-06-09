//Greatest of 3 numbers from an array
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr;
    int s=3;
    //cout<<"Enter the size of array : ";
   // cin>>s;
    for (int i = 0; i <s ; i++)
    {
        int input;
        cin>>input;
        arr.push_back(input);
    }
    if(arr[0]>arr[1] && arr[0]>arr[2])cout<<"1th is the greatest";
    if(arr[1]>arr[0] && arr[1]>arr[2])cout<<"2th is the greatest";
    else cout<<"3rd is the greatest";
}