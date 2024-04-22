#include <iostream>
using namespace std;

int lastOcc(string &s , char &c , int i){
    if(i < 0 ){
        return -1 ;
    }
    
    if(s[i] == c){
        return i ;
    }else{
        lastOcc(s,c,i-1);
    }
    
    
}

int main()
{
    string s = "abdddddddff";
    char c = 'd';
    int i = s.length()-1 ; 
	cout<<i<<endl;
    int ans = lastOcc(s,c,i);
    
    if(ans > 0 ){
    cout<<"last of occurence of "<<c<<" is "<<ans;
        
    }else{
        cout<<"no character found";
    }
    

    return 0;
}
