#include <iostream>
#include <vector>
using namespace std;
void display(vector <int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
}
void reverse_part(int i ,int j,vector<int> &arr){
    while(i<=j){
        int temp=arr.at(i);
        arr.at(i)=arr.at(j);
        arr.at(j)=temp;
        i++;j--;
    }
}
int main(){
    int s;
    vector <int> arr;
    cout<<"Enter the size of array : ";
    cin>>s;
    for (int i = 0; i <s ; i++){
        int input;
        cin>>input;
        arr.push_back(input);
    }
    int i,j;
    cout<<"Enter the Array segment: ";
    cin>>i>>j;
    reverse_part(i,j,arr);
    display(arr);


}