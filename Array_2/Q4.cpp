//Difference of sum of elements at odd places and even places
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
   int sum_odd=0;
   int i=1;
   while(i<=s){
    sum_odd=sum_odd+arr[i-1];
    //cout<<"Adding element at position "<<i-1<<endl;
    i=i+2;
   }
   int sum_even=0;
   int j=2;
   while(j<=s-1){
    sum_even=sum_even+arr[j-1];
    j=j+2;
   }
   cout<<"(sum_even,sum_odd)"<<sum_even<<" , "<<sum_odd<<endl;
   int ans=sum_even-sum_odd;
   cout<<ans;

   
}
   
   
