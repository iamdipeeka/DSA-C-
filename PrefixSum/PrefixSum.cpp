#include<iostream>
#include<vector>
using namespace std;
void prefixSum(vector<int> &v){
    for(int i=1;i<v.size();i++){
        v[i]=v[i]+v[i-1];
    }
}

int main(){
    vector<int> v = {1,4,3,6,4,10};

    prefixSum(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}