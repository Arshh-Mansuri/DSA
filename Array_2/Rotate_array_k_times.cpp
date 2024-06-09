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
    }}
void rotate(int r,vector <int>& arr){
int i=r;
int j=arr.size()-r-1;
reverse_part(0,j,arr);
reverse_part(j,arr.size()-1,arr);
reverse_part(0,arr.size()-1,arr);
display(arr);

return;
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
    int r;
    cout<<"Enter the number of times to rotate: ";
    cin>>r;
    rotate(r,arr);

}