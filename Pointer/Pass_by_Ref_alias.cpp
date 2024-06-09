#include <iostream>
using namespace std;
void swap(int &a,int &b){
    int temp= a;
    a=b;
    b=temp;
}
int main(){
    int a=51;
    int b=38;
    //cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;

}