#include<iostream>
using namespace std;
void bubblesort(int*a, int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                
            }
        }
    }
}
void printarray(int*x, int n){
    for(int i=0;i<n;i++){
        cout << *(x+i)<< " ";
    }
    cout << endl;
}
int main(){
    int a[]={5,4,3,2,1};
    int n=sizeof(a)/sizeof(int);
    printarray(a,n);
    bubblesort(a,n);
    return 0;
}