#include<iostream>
using namespace std;
#include<math.h>


bool linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[] = {1,2,3,45,6,-4};
    if(linearSearch(arr,6,2)){
        cout<<"key Found";
    }
    else{
        cout<<"Key Not Found";
    }
    
}