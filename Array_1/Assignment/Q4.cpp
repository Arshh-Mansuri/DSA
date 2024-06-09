//Duplicate
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array:  ";
    cin>>n; 
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bool flag=false;
    for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (arr[i]==arr[j] && i!=j)
                    {
                        flag=true;
                    }
                    
                }
                
            }
if (flag==true)
                    {
                         cout<<"There is a duplicate";  
                    }

}