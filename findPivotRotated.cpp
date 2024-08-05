#include<iostream>
using namespace std;
#include <vector>
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size()-1;
        int start = 0;
        int end = n;
        int mid = start + (end-start)/2;
        if(nums[n]>nums[start]){
            return nums[start];
        }
        while(start<end){
            if(nums[mid]>=nums[0]){
                start = mid+1;
            }
            else{
                end = mid;
            }
            mid = start + (end-start)/2;
        }
        return nums[start];
        
    }
};