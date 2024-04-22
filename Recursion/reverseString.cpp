#include <iostream>
using namespace std ;

void reverseString(string &s , int i , string ans ){
    if(i < 0){
        cout<<ans ;
    }
    
    if(i>=0){
        ans+=s[i];
        reverseString(s,i-1,ans);
    }
}

int main()
{
    string s = "abffar";
    string ans = "";
    int i = s.length()-1 ; 
    
    reverseString(s,i,ans);
    

    return 0;
}
