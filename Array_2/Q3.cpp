//Check if an array is sorted 
#include <iostream>
#include <vector>
using namespace std;
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
    bool flag=true;
   for (int i = 0; i < arr.size()-1; i++)
   {
    if(arr[i]>=arr[i+1]){
        cout<<"Array is not sorted";
    }
   
   }
 
   
}
   
   
