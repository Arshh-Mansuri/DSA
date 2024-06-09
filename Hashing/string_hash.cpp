#include <iostream>
#include <string>
//In character hashing you dont have to think much we can store all 256 characters .
using namespace std;
int main(){
    
    
    string str;
    cin>>str;
    //precompute-> HASH
    int hash[26]={0};
    for (int i=0; i<str.length(); i++) {
        hash[str[i]-'a']+=1;
    }

    // Fetch
    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;
        cout<<hash[ch-'a']<<endl;
    }



    return 0;
}