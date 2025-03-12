#include<iostream>

using namespace std;

string largestOddNumber(string &s){
    int lastOddIndex=-1;
    int i;
    for(i=s.size()-1;i>=0;i--){
        if((s[i]-'0')%2!=0){
            lastOddIndex=i;
            break;
        }
    }
    if(lastOddIndex==-1) return " ";
    int startIndex=0;
    while(startIndex<lastOddIndex && s[startIndex]=='0') startIndex++;
    return s.substr(startIndex,lastOddIndex-startIndex+1);

}

int main(){
    string s;
    getline(cin,s);
    cout<<largestOddNumber(s);
    
}