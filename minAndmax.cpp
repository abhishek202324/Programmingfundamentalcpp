#include<iostream>
using namespace std;
int max(int arr[],int size){
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
   }
   return max;
}
int min(int arr[],int size){
    int min=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
   }
    return min;
}
int main(){
    int arr[10]={1,2,3,4,5,44,54,555,4,33};

    int size=10;
    cout<<"Max value "<<max(arr,size)<<endl;
    cout<<"Min value "<<min(arr,size)<<endl;


}