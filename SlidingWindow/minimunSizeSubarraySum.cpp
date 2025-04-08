#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int minSubArrayLen(vector<int>&nums,int target){
    int n= nums.size();
    int i=0;
    int j=0;
    int sum=0;
    int minL=INT_MAX;
    while(j<n){
        sum=sum+nums[j];
        while(sum>=target){
            minL=min(minL,j-i+1);
            sum=sum-nums[i];
            i++;
        }
        j++;
    }
    return (minL==INT_MAX)?0:minL;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
   
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int target ;
    cin>>target;
    

    cout<<minSubArrayLen(nums,target)<<endl;;

    
}