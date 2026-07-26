#include<iostream>
using namespace std;
bool paindromeCHeck(string str){
    int n=str.size();
    int i=0,j=n-1;
    while(i<j){
        if(str[i]!=str[j]) {
            return false;   
            break;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    string str;
    cin>>str;
    bool ans=paindromeCHeck(str);
    if(ans) cout<<"Yes, it is palindrome"<<endl;
    else cout<<"No, they are not palindrome"<<endl;
    return 0;
}