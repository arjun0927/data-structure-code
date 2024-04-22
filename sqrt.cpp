#include<iostream>
using namespace std;

int findsqrt(int n){
	int target= n;
	int s=0;
	int e =n;
	int ans=-1;
	int m=s+(e-s)/2;
	while(s<=e){
		if(m*m==target){
			return m;
		}
		else if(m*m>target){
			e=m-1;
		}
		else{
			ans=m;
			s=m+1;
		}
		m=s+(e-s)/2;
	}
	return ans;
}

int main()
{

int n=101;
int res = findsqrt(n);
// cout<<res;

int fd=4;
double start=0.1;
double fa= res;
for(int i=0; i<fd;i++){
	for(double j=fa;j*j<=n;j=j+start){
		fa=j;
	}
	start=start/10;
}
cout<<"sqrt is "<<fa;

return 0;


}