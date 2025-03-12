#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string longestCommonPrefix(vector<string> &s){
    sort(s.begin(),s.end());
    int n= s.size();
    string newstr;
      if(n==0) return newstr;
    string first=s[0];
    string last = s[n-1];
    for(int i=0;i<first.size();i++){
       if( first[i]!=last[i]) break;
       newstr.push_back(first[i]);
    }
    return newstr;

}

int main(){
     int n;
    cin >> n; 
    vector<string> s(n);

    for (int i = 0; i < n; i++) {
        cin >> s[i]; 
    }

    cout<< longestCommonPrefix(s) ;

    
}