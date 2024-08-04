#include<iostream> 
using namespace std;

void readstring(char *arr , int sz , char delimiter = '\n'){
char ch;
ch = cin.get();
int indx=0;
while( ch != delimiter and indx< sz-1){
    arr[indx] = ch;
    ch = cin.get();
    indx++;
    }
    arr[indx] ='\0';
}



int main(){
    char arr[100];
    cin.getline(arr , 10,'@'); //agar user n d dia toh yhi tak read karega or ni diya to '\n' tak

cout << arr << endl;



    return 0;
}