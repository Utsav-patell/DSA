#include <iostream>
using namespace std;
#include <vector>

int bSearch(vector<int>& arr, int key) {
    int low = 0;
    int high = arr.size() - 1;
    while(low<=high){
        // We didnt used (high + low)/2 bcz when high and low = INT_MAX then our high + low will over Flow so in this case below formula will work well.
        int mid = low + ((high-low)/2);
        if(arr[mid]==key) return mid;
        
        if(key>arr[mid]){
            low = mid+1;
        }
        if(key<arr[mid]){
            high = mid-1;
        }
    }
    return -1;
}
int main() {
    vector<int> arr = {0, 1, 2, 3, 4, 8};
    int value = bSearch(arr, 2);
    cout << value;
    return 0;
}
