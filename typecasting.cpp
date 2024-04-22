#include<iostream>
#include<typeinfo>
using namespace std;

int main()
{
   float a = 7.87;
   double b = 6.9999;
  // int c = a/b ;
   cout<<typeid(a/b).name();


return 0;


}