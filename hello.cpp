#include <iostream>   // Header file for input-output

using namespace std;  // Allows us to use cout without std::

int main() {
    cout << "Hello, World!" << endl;  // Prints text to screen
    return 0;  // Indicates successful execution
}





















arr = [1, 2, 3, 4, 5]
x = 4

low, high = 0, len(arr)-1

while low <= high:
    mid = (low + high) // 2

    if arr[mid] == x:
        print("Found at index", mid)
        break
    elif arr[mid] < x:
        low = mid + 1
    else:
        high = mid - 1
