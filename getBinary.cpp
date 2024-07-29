#include<iostream>
using namespace std;
#include<math.h>


int getBinary(int n){
    int ans = 0;
    int i = 0;
    while(n!=0){
    int digit = n&1;
        ans = (digit*pow(10,i))+ans;
        n = n>>1;
        i++;
    }
    return ans;
}
int main(){
    cout<<getBinary(1000);
}