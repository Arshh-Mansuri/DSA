// Given array : 1 -2 2 -1
//Output array : 1 2 -2 -1
// Sort negetive on the right and positive on the left
// Dutch_flag_algo -> Three pointer algorithm
// |_____low(0)_____|_____mid(1)_____|____high(2)_____|

#include <iostream>
#include <vector>
using namespace std;

void Dutch_flag(vector <int> &v){
    int low=0;
    int mid=0;
    int high=v.size()-1;
    while (mid<=high)
    {
        if(v[mid]==2){
            v[mid]=v[high];
            v[high]=2;
            high--;
            
        }
        else if(v[mid]==0){
           int temp=v[mid];
           v[mid]=v[low];
           v[low]=temp;
           low++;
           mid++;
        }
        else {
            mid++;
        }
    }
    
}
void display(vector <int> &v){
      for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
   
   
    

int main(){
    vector <int> v;
     v.push_back(1);
    v.push_back(2);
     v.push_back(2);
    v.push_back(1);
     v.push_back(0);
     v.push_back(2);
    
    display(v);
    cout<<endl;
    Dutch_flag(v);
    display(v);
    
}