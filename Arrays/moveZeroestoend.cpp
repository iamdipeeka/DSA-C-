#include <iostream>
#include <vector>
using namespace std;
void moveZeroestoend(vector<int> &nums)
{
    // int nonzeros = 0;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums[i] != 0)
    //     {
    //         nums[nonzeros] = nums[i];
    //         nonzeros++;
    //     }
    // }
    // for (int i = nonzeros; i < nums.size(); i++)
    // {
    //     nums[i] = 0;
    // }

    int j=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){ 
        swap(nums[i],nums[j]); 
        j++;}
    }
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

    moveZeroestoend(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i]<<" ";
    }
}