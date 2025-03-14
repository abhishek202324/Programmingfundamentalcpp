#include<iostream>
using namespace std;
inline int Square(int n){
    return n*n;
}
int main(){
    int num;
    cin>>num;
    int result=Square(num);
    cout<<result<<endl;
}