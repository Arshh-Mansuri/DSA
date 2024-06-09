#include <iostream>
using namespace std;
int main(){
    vector <int> arr;
    int s;
    cout<<"Enter the size of array : ";
    cin>>s;
    for (int i = 0; i <s ; i++)
    {
        int input;
        cin>>input;
        arr.push_back(input);
    }
    for (int i = 0; i < arr.size()/2; i++)
    {
        int j=arr.size()-i-1;
        // int temp=arr[i];
        // arr.at(i)=arr[j];
        // arr.at(j)=temp;
        arr.at(i)=arr.at(i)+arr.at(j);
        arr.at(j)=arr.at(i)-arr.at(j);
        arr.at(i)=arr.at(i)-arr.at(j);
        

    }


    for (int i = 0; i <s ; i++)
    {
       
        cout<<arr.at(i);
    }
    
}