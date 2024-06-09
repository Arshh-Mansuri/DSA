#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int* p=&n;
    cout<<*p<<" ";
    *p=120;
    cout<<n;
}