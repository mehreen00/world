#include <iostream>
#include <algorithm>

int main() {
    int n;
    
    // Input the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> n;
    
    int arr[n];
    
    // Input the elements of the array
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    // Sorting in ascending order
    std::sort(arr, arr + n);
    
    // Displaying the sorted array in ascending order
    std::cout << "Sorted in ascending order: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    
    // Sorting in descending order
    std::sort(arr, arr + n, std::greater<int>());
    
    // Displaying the sorted array in descending order
    std::cout << "\nSorted in descending order: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}

