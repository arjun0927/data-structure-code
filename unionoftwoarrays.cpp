#include<iostream>
#include<climits>
#include<vector>
using namespace std;
bool isExist(vector<int> ans,int val){
  for(int i=0;i<ans.size();i++){
    if(ans[i]==val)return true;
  }
  return false;
}
int main()
{
  vector <int> arr{2,2,9,8,5,0,5};
  vector<int> brr{2,2,8,1};
  vector<int> crr{};
  for(int i=0 ;i<arr.size();i++){
     if(!isExist(crr,arr[i]))crr.push_back(arr[i]);
  }
  for(int i=0 ; i<brr.size();i++){
   if(!isExist(crr,brr[i]))crr.push_back(brr[i]);
  }
 
  

  for(int i=0 ; i<crr.size() ; i++){
    cout <<crr[i]<<" , ";
}

   

return 0;


}