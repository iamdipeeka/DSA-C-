#include<iostream>
#include<vector>
using namespace std;




void reverse(vector<int> &v,int start,int end){
     
    while(start<end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
}

void LeftRotatebyKplaces(vector<int> &v,int K){
    int n=v.size();
    K=K%n;
    if (K == 0) return;
   reverse(v,0,K-1);
   reverse(v,K,v.size()-1);
   reverse(v,0,v.size()-1);

   //if want to rotate from right then 1. reverse entire array and 2.reverse till k part and then k to end reverse.
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

    int K;
    cin>>K;
    LeftRotatebyKplaces(v , K);


     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
     }

}