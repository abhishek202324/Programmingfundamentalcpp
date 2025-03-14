#include<iostream>
using namespace std;
int sumofdig(int n){
    int sum=0;
    while(n>0){
        int rem=n%10;
        n/=10;
        sum+=rem;
    }
    return sum;
}

int main(){
    
    int re=sumofdig(1345);
    cout<<re<<endl;
    
}