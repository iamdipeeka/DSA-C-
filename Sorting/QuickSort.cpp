#include <iostream>
#include <vector>
using namespace std;

// three steps: pivot selection , partitioning , recursion

int partition(vector<int> &nums, int start, int end)
{
    int pi = start;
    int pivot = nums[end];
    for (int i = start; i < end ; i++)
    {
        if (nums[i] < pivot)
        {
            swap(nums[i],nums[pi]);
            pi++;
        }
    }

    swap(nums[pi], nums[end]);
    return pi;
}

void quickSort(vector<int> &nums, int start, int end)
{
   
    if (start >=end) return;

    int pi = partition(nums, start, end);
    quickSort(nums, start, pi - 1);
    quickSort(nums, pi + 1, end);
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

     quickSort(nums,0,n-1);

    for (int i = 0; i <n; i++)
    {
        cout << nums[i]<<" ";
    }
}