#include <iostream>
using namespace std;
int main(){
    vector <int> arr;
    vector <int> arr_copy;
    int s;
    cout<<"Enter the size of array : ";
    cin>>s;
    for (int i = 0; i <s ; i++)
    {
        int input;
        cin>>input;
        arr.push_back(input);
    }
    for (int i = arr.size()-1; i >=0 ; i--)
    {
       
        arr_copy.push_back(arr.at(i));
        
    }
    for (int i = 0; i <s ; i++)
    {
       
        cout<<arr_copy.at(i);
    }
    

}