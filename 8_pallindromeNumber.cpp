#include<bits\stdc++.h>
using namespace std;
bool ispallindrome(char*a){
    int fi= 0;
    
    int li = strlen(a)- 1;
    while(fi<li){
        if(a[fi] != a[li]){
            return false;
        }
        fi++;
        li--;
    }
    return true;
}
int main(){
    char a[]= "abcba";
    if(ispallindrome(a)){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    return 0;
}