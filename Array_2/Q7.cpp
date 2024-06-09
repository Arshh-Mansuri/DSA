//Plaindrome or not 
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
    for (int i = 0; i < (arr.size()-1)/2; i++)
    {
        if(arr[i]==arr[(arr.size()-1-i)]){
            continue;
        }
        else{
            cout<<"not a palindrome";
        }
    }
    return 0;
}