#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
    int n;
   // cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
  //  cout << "Enter " << n << " numbers:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);  
    int largest = arr[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] != largest) {
            cout << "Second largest number is: " << arr[i] << endl;
            return 0;
        }
    }
cout << "All elements are same. No second largest." << endl;
    return 0;
}

