#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    string a=str;
    reverse(a.begin(),a.end());
    if(a==str) cout<<"Yes, it is palindrome"<<endl;
    else cout<<"No, it is not palindrome"<<endl;
    return 0;
}