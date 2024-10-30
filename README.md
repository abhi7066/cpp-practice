#### Array

###### Largest and smallest element in the array

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 2, 9, 7, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0], smallest = arr[0];

    for(int i = 0; i < len; i++){
        if(arr[i] > largest){
            largest = arr[i];
        } else if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    cout << "Largest: " << largest << " Smallest: " << smallest;
    return 0;
}
```
