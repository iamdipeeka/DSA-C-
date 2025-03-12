#include<iostream>
#include<vector>
using namespace std;
bool prefixsuffixSumcheck(vector<int> &v){
    int t_sum=0;
    
    for(int i=0;i<v.size();i++){
       t_sum=t_sum+v[i];
    }

    int pre_sum=0;
    int suffix_sum;
    for(int i=0;i<v.size();i++){
        pre_sum=v[i]+pre_sum;
         suffix_sum= t_sum-pre_sum;
        if(suffix_sum==pre_sum){
            return true;
        } 
    }
    return false;
}

int main(){
    vector<int> v = {6,2,4,3,1};

   cout<<prefixsuffixSumcheck(v)?"true":"false";

    
}