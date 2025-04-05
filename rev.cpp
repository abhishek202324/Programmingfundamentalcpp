#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Declare and initialize an array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    cout << "Array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print each element
    }
    vector<int> result;
    
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";

    }

    return 0;
}
