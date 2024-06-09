#include <iostream>
#include <vector>
using namespace std;
int main(){
    int target;
    cout<<"Enter the target number : ";
    cin>>target;
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

    //Two sum
    for (int i = 0; i < arr.size()-1; i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            if((arr[i]+arr[j])==target) cout<<"("<<i<<","<<j<<")";
        }
        
    }
    

    

}