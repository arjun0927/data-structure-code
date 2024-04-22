#include<iostream>
using namespace std;

void swap(int *a , int *b){
    int temp = *a ;
    *a = *b;
    *b = temp ;
}
int main()
{

    
    int a = 20 ; 
    cout<<&a << endl ;
    int *aptr = &a;
    // cout<<aptr<<endl;
    // cout<<&aptr<<endl;
    // cout<<*aptr<<endl;
    // *aptr = 40 ;
    // cout<<a<<endl ;
    // *aptr++;
    // // cout<<*aptr<<endl;
    // cout<<a<<endl;
    // // pointer in array 
    // int arr[] = {1,2,3,4,5};
    // cout<<arr<<endl;
    // int *ptr = arr;
    // for(int i=0 ; i<5 ; i++){
    //     cout<<*ptr<<endl;
    //     *ptr++;
    // }
    // for(int i=0 ; i<5 ; i++){
    //     // cout<<*(arr+i)<<endl;
    //     cout<<*arr<<endl;
    //     // arr++;
        
    // }
    // pointer to pointer
    int **q = &aptr ;
    cout<<*q<<endl;
    cout<<**q<<endl;
    // pointer in function
    int m = 9 ;
    int k = 8 ;
    cout<<m<<" "<<k<<endl;
    int *mptr = &m ;
    int *kptr = &k;
    swap(mptr , kptr);
    // swap(&m,&k);
    cout<<m<<" "<<k;


return 0;


}