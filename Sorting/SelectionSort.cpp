#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//selection sort mein ek min select krna hota h jisko sbse phle zeroth index m rkhte hai 
//first loop i =0 to n and 2nd loop j=i+1 to n tk chalta hai agar min element j se bda hoga
// to min = j krnge and agr min aur i same ni hua to swap min and i


void selectionsort(vector<int>&arr){
    int n= arr.size();
   
    for(int i=0;i<n;i++){
        int min=0;
        for(int j=i+1;j<n;j++){
        if(arr[min]>arr[j]){
            min=i; 
        }
    }
        if(min!=i){
            swap(arr[min],arr[i]);
        }
    }


}

int main(){

int n;
cin>>n;

vector<int> arr(n);

for(int i=0;i<n;i++){
     cin>>arr[i];
}

selectionsort(arr);


for(int j=0;j<n;j++){
    cout<<arr[j]<<" ";
}
}