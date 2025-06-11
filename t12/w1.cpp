#include <iostream>
using namespace std;

void printUnique(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) count++;
        }
        if (count == 1) cout << arr[i] << " ";
    }
}

int main() {
    int array1[] = {3, 1, 5, 1, 5, 7, 9, 7, 9};
    int size = sizeof(array1) / sizeof(array1[0]);
    cout << "اعداد غیرتکراری: ";
    printUnique(array1, size);
    return 0;
}