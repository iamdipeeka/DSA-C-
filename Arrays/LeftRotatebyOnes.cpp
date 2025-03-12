#include<iostream>
#include<vector>
using namespace std;

void LeftRotatebyOnes(vector<int> &v){
    int end=v.size()-1;
    int start=v[0];
    for(int i=1;i<v.size();i++){
        v[i-1]=v[i];
        
    }
    v[end]=start;
}


int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    LeftRotatebyOnes(v);
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
     }

}