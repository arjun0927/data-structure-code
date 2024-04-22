#include<iostream>
#include<vector>
using namespace std;

void waveprint(vector<vector<int>> v){
	int row = v.size();
	int col = v[0].size();
	
	for(int startcol = 0 ; startcol<col ; startcol++){
		if(startcol % 2 == 0){
			for(int i = 0 ; i<row ; i++){
				cout<<v[i][startcol]<<" ";
			}
		}
		else{
			for(int i = row-1 ; i>=0 ; i--){
				cout<<v[i][startcol]<<" ";
		}
	}
}
}

int main()
{
	vector<vector<int>> v={
		{1,2,3,10},
		{4,5,6,11},
		{7,8,9,12}
	};
	waveprint(v);


return 0;


}