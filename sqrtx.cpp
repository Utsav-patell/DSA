class Solution {
public:
    long long mySqrt(int x) {
        int start = 0;
        int end = x;
        int ans = -1;
        long long mid = start + (end-start)/2;
        while(start<=end){
            long long square = mid*mid;
            if(square>x) end = mid-1;
            if(square<x){
              ans = mid;
              start = mid+1;   
            }
            if(square==x) return mid;
            mid = start + (end-start)/2;
        }
        return ans;
        
    }
};