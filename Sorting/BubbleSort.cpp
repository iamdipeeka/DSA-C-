#include<iostream>
#include<vector>
using namespace std;

void BubbleSort(vector<int>&nums){
    int n= nums.size();
    bool iswapped=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                iswapped=true;
            }
        }
        if(!iswapped){
            break;
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

    BubbleSort(nums);

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}