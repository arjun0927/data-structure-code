#include<iostream>
using namespace std;

int main()
{
// string str = "arjunsingh";
// for(int i = 0 ; i<str.size() ; i++){
// 	str[i]=str[i]-'a'+'A';
// 	cout<<str[i];
// }
// cout<<"\n";
// cout<<str[10];
// string str = "suneel";
// string str1 = "suneel";
// string str2 = str.substr(1,5);
// cout<<str2<<endl;
// if(str.compare(str1)==0){
// 	cout<<"same";
// }
// else{
// 	cout<<"notsame";
// }
string sentence = "this is arjun singh from aligarh";
string name = "arjun";
// if(sentence.find(name)) cout<<"true";
// string replace = name.replace(0,5,"suneel");
// string erase = sentence.erase(0,4);
int  part = sentence.find(name);
cout<<part;
return 0;


}