#include <iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int* p1=&n1;
    int* p2=&n2;
    int product=(*p1) * (*p2);
    cout<<product;

    
}