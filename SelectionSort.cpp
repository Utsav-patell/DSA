#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int> arr = {6,5,4,3,2,1};
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ,";
    }
}