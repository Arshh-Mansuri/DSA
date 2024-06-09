//Count the number of elements strictly greater than x.
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
    int x;
    cout<<"Enter the limit number : ";
    cin>>x;
    int counter=0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]>x)counter++;
    }
    cout<<counter;
    return 0;
}