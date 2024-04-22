#include <iostream>
using namespace std ;

bool checkPallindrome(string &s , int i , int j){
    if(i>j){
        return true ;
    }
    
    if(s[i] != s[j]){
        return false ;
    }
    checkPallindrome(s,i+1,j-1);
    
}

int main()
{
    string s = "shuhs";
    int i=0 ; 
    int j=s.length()-1;
    bool ch = checkPallindrome(s,i,j);
    if(ch == 1){
        cout<<"given string is pallindrome"; 
    } 
    else {
        cout<<"given string is not pallindrome";
        
    }
    
    

    return 0;
}
