#include<iostream>
using namespace std;
bool checkPalindrome(string &s){
    int left =0;
    int right=s.size()-1;
    bool isPalindrome = false;
    for(int i=0;i<s.length();i++){
        if(s[left]!=s[right]){
            isPalindrome=false;
        }else if (s[left]==s[right]){
            
            left++;
            right--;
            isPalindrome =true ;
        }
    }
    if(isPalindrome==true) return true;
    else return false;
}

int main(){
    string s;
    getline(cin,s);
    cout<<checkPalindrome(s);
  
}