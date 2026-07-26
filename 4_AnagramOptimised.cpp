#include<iostream>
#include<cstring>
using namespace std;
bool anagramCheck(string s1,string s2){
    int f1[26]={};
    int f2[26];
    memset(f2,0,sizeof(f2));
    for(int i=0;i<s1.size();i++){
        f1[s1[i]-'a']++;
    }
    for(int i=0;i<s2.size();i++){
        f2[s2[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(f1[i]!=f2[i]) {
            return false;
            break;
        }
    }
    return true;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    anagramCheck(s1,s2) ? cout<<"Yes, they are anagrams"<<endl:cout<<"No, they are not anagrams"<<endl;
    return 0;
}