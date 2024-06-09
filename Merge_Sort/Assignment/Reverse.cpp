#include <iostream>
#include <vector>

using namespace std;
void Distinct(vector<int>& arr,vector<int>& check) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        bool isDistinct = true;
        // Check if the picked element is already printed
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDistinct = false;
                break;
            }
        }
        // If not printed earlier, then print it
        if (isDistinct) {
            check.push_back(arr[i]);
        }
    }
    
}
int reversePairs(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector <int> check;
        Distinct(nums,check);
        
        
        int counter=0;
        for(int i=0;i<check.size();i++){
            for(int j=i+1;j<check.size();j++){
                if(check[j]>(2*check[i])){
                    counter++;
                }
            }
        }
return counter;
    }
int main(){
    vector <int> n(5);
    //[1,3,2,3,1]
    n[0]=2;
    n[1]=4;
    n[2]=3;
    n[3]=5;
    n[4]=1;
    cout<<reversePairs( n);

}