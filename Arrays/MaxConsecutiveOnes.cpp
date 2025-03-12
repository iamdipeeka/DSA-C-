#include<iostream>
#include<vector>
using namespace std;

int MaxConsecutiveOnes(vector<int>v){
     int max_ones=0;
     int count_ones=0;

     for(int i=0;i<v.size();i++){
         if(v[i]==1){
            count_ones++;
            max_ones=max(count_ones,max_ones);
         }   else count_ones=0;
     }
    return max_ones;
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
   int ans=MaxConsecutiveOnes(v);
   cout<<ans;

}