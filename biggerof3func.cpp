#include<iostream>
using namespace std;
int biggerof(int a,int b,int c){
    if(a>b && a>c){
        cout<<"A is bigger";
    }
    else if(b>a && b>c){
        cout<<"B is bigger ";

    }
    else{
        cout<<"c is bigger ";
    }
}
int main(){
    int a,b,c;
    cout<<"Enter 3 number A,B,C respectivaly ";
    cin>>a>>b>>c;
    biggerof(a,b,c);
}