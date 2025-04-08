#include<iostream>
using namespace std;

int lowerBound(vector<int>&nums,int target){
    int lo=0;
    int hi=nums.size()-1;
    int ans=n;
    while(lo<=hi){
        int min = lo+(hi-lo)/2;
        if(nums[mid]>=target){
            ans=mid;
            hi=mid-1;
        }else lo=mid+1;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
   
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int target ;
    cin>>target;
    
}