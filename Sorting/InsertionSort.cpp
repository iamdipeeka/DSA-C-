#include<iostream>
#include<vector>
using namespace std;

void InsertionSort(vector<int>&nums){
    for(int i=1;i<nums.size();i++){
        for(int j=i;j>0;j--){
            if(nums[j]<nums[j-1]){
                swap(nums[j],nums[j-1]);
            }else break;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    InsertionSort(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}