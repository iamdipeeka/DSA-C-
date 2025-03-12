#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&nums,int start,int mid , int end){
   int left =start;
   int right=mid+1;
   
   vector<int> temp;
   while(left<=right && right<=end){
      if(nums[left]<=nums[right]){
         temp.push_back(nums[left]);
         left++;
      }else{
         temp.push_back(nums[right]);
         right++;
         
      }
   }

   while(left<=mid){
      temp.push_back(nums[left]);
      left++;
   }
   while(right<=end){
      temp.push_back(nums[right]);
      right++;
   }

   for(int i=start;i<=end;i++){
      nums[i]=temp[i-start];
   }
   
}

void mergeSort(vector<int>&nums,int start,int end){
   if(start>=end) return;
   int mid = start+ (end-start)/2;
   mergeSort(nums,start,mid);
   mergeSort(nums,mid+1,end);
   merge(nums,start,mid,end);

}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
      cin>>nums[i];
    }
    
    mergeSort(nums,0,n-1);

    for(int i=0;i<n;i++){
      cout<<nums[i]<<" ";
    }
}