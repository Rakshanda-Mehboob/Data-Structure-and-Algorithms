#include <iostream>
using namespace std;

int main() {
    int n = 10;  
    int size, newElement;

    
    cout << "Enter the size of the array (between 1 and " << n << "): ";
    cin >> size;

    
    if (size <= 0 || size > n) {
        cout << "Error: Invalid size. Please enter a size between 1 and " << n << "." << endl;
        return 1; 
    }

    int arr[size + 1]; 

    
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

  
    cout << "Enter the element to insert at the middle: ";
    cin >> newElement;

    int mid = size / 2;

   
    for (int i = size; i > mid; i--) {
        arr[i] = arr[i - 1];
    }


    arr[mid] = newElement;

   
    cout << "Updated array: ";
    for (int i = 0; i < size + 1; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}

