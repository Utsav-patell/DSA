#include<iostream>
using namespace std;
#include<vector>

    void sortColors(vector<int>& nums) {
        int right = nums.size()-1;
        int left = 0;
        int itr = 0;
        while(itr<=right){
            if(nums[itr] == 0){
                swap(nums[itr],nums[left]);
                left++;
                itr++;
            }
            else if(nums[itr] == 2){
                swap(nums[itr],nums[right]);
                right--;
            }
            else{
                itr++;
            }
        }
    }
