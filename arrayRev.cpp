#include<iostream>
using namespace std;
#include<math.h>


void arrayRev(int arr[],int size){
    int start = 0;
    int end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);          // temp = arr[start], arr[start] = arr[end], arr[end]==temp
        start++;
        end--;
    }       
}
int main(){
    int arr[] = {1,2,3,45,6,-4};
    for(int i=0;i<6;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
    arrayRev(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
    
}