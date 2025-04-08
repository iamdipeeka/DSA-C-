#include<iostream>
#include<vector>
using namespace std;

bool allZero(vector<int> &count){
    for(int i:count){
        if(i!=0) return false;
    }
    return true;
}
int countAnagramOccurrences(string &text,string &pattern){
    int n= text.size();
    vector<int> count(26,0);

    //Count the frequency of each char in pattern
    for(int i=0;i<pattern.size();i++){
         char ch=pattern[i];
         count[ch-'a']++;
    }

    int i=0;
    int j=0;
    int result=0;
    while(j<n){
       count[text[j]-'a']--;
       if(j-i+1==pattern.size()){
        if(allZero(count)){
            result++;
        }
        count[text[i]-'a']++;
        i++;
       }
       j++;
    }
    return result;
}

int main(){
    string text ;
    getline(cin,text);
    string pattern ;
    getline(cin,pattern);
    cout << "Occurrences of anagram: " << countAnagramOccurrences(text, pattern) << endl;
    return 0;
}