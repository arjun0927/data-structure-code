#include<iostream>
using namespace std;

void transpose(int arr[][3],int brr[][3], int c , int r ){
	for(int i = 0; i<r ; i++){
	for(int j=0 ; j<c; j++){
		brr[j][i]=arr[i][j];
	}
	}
}
void printarray(int brr[][3], int row , int col){
	for(int i = 0; i<row ; i++){
	for(int j=0 ; j<col; j++){
		cout<<brr[i][j]<<" ";
	}
	cout<<"\n";
}
}

int main()
{

int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int brr[3][3];
int col = 3;
int row =3;
transpose(arr,brr,col,row);
printarray(brr,col,row);




return 0;


}