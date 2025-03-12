#include<iostream>
using namespace std;
void reverseString(string &s){
    int start =0;
    int end = s.length()-1;
   while(start<end){
        int temp = s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;

    }
}


int main(){
    
    string s;
    getline(cin,s);

    reverseString(s);
    cout<<s;

}