#include<iostream>
using namespace std;
int main(){
    int n;
    char a[100];
    cin >> n;
    // cin.get(); //ignore kr dega spaces ko
    cin.ignore();
    cin.getline(a,100); //yeh whitespace lega
    cout <<"number :" << n << endl;
      cout <<"string :" << a << endl;
      return 0;
}
