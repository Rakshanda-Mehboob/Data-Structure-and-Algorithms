#include <iostream>
using namespace std;

int main() {
    int n= 10;  
    int size, newElement;

    
    cout << "Enter the size of the array (between 1 and " << n << "): ";
    cin >> size;

    
    if (size <= 0 || size > n) {
        cout << "Error: Invalid size. Please enter a size between 1 and " << n << "." << endl;
        return 1; 
    }

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

  
    cout << "Enter the element to insert at the start: ";
    cin >> newElement;

    for (int i = size; i > 0; i--) {
        array[i] = array[i - 1];
    }

 
    array[0] = newElement;
    n++;

 
    cout << "Updated array: ";
    for (int i = 0; i < size + 1; i++) {
        cout << array[i] << " ";
    }

    cout << endl;
    return 0;
}

