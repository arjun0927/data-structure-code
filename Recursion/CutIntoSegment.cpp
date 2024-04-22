
#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;

int solve(int n , int x , int y , int z){
    if(n==0){
        return 0 ;
    }
    if(n < 0){
        return INT_MIN ;
    }
    int ans1 = solve(n-x , x , y, z) + 1 ;
    int ans2 = solve(n-y , x , y, z) + 1 ;
    int ans3 = solve(n-z , x , y, z) + 1 ;
    
    int maxi = INT_MIN;
    maxi = max(ans1,max(ans2,ans3));
    return maxi;
    
    
}
int main() {
    // Write C++ code here
    int n = 9 ;
    int x = 3;
    int y = 6 ;
    int z = 6 ;
    int ans = solve(n,x,y,z);
    if(ans < 0)
    ans = 0 ;
    cout<<"answer is "<<ans;
    return 0;
}