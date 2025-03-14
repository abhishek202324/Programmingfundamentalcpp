#include<iostream>
using namespace std;
int sum(int n){
    int summ=n*(n+1)/2;
    return summ;
}
int main(){
    cout<<sum(10)<<endl;
}