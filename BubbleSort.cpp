#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int> arr = {6,5,4,3,2,1};
    int n = arr.size();
    for(int i=1;i<n;i++){
        bool swapped = false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
              swapped = true;  
            }
            if(!swapped){
                break;
            }
        }
        
    }
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ,";
    }
}