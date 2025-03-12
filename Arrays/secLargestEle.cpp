#include<iostream>
#include <climits>
using namespace std;
int SeclargestElement(int arr[],int n){
    if (n < 2) return -1;
    int max =INT_MIN;
    int secmax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secmax=max;
            max=arr[i];
        }else
        if(arr[i]<max && arr[i]>secmax){
            secmax=arr[i];
        }
    }
    return  (secmax==INT8_MIN)?-1:secmax ;

}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<SeclargestElement(arr,n);

   
   return 0;
    
}