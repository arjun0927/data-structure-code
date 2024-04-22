#include<iostream>
using namespace std;

void reversecounting(int n){
	if(n==0 ) {
		return;
	}
	cout<<n<<endl;
	reversecounting(n-1);

}

int main()
{
   int n = 30;
   reversecounting(n);
   


return 0;


}