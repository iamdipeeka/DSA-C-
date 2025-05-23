#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

bool isomorphicString(string &s , string &t){
    unordered_map<char,char> mp1;
    unordered_map<char,char> mp2;
    for(int i=0;i<s.length();i++){
        char ch1=s[i];
        char ch2=t[i];
        if(mp1.find(ch1)!=mp1.end() && mp1[ch1]!=ch2 || mp2.find(ch2)!=mp2.end() && mp2[ch2]!=ch1 ){
            return false;

        }
        mp1[ch1]=ch2;
        mp2[ch2]=ch1;
    }
    return true;
}

int main(){

    string s;
    string t;
    getline(cin,s);
    getline(cin,t);
    cout<<isomorphicString(s,t);
}