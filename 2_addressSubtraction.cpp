#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int n= sizeof(a)/sizeof(int);
    int *lastbucketaddress = &a[3];
    int *firstbucketaddress = &a[0];
    cout << lastbucketaddress- firstbucketaddress << endl;
}