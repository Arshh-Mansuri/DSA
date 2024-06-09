#include <iostream>
using namespace std;
void swap(int* a,int* b){
    int temp= *a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=5;
    int b=3;
    //cin>>a>>b;
    swap(&a,&b);
    cout<<a<<" "<<b;

}