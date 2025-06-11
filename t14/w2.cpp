#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int size) {
    
    int first = arr[0];
    int second = arr[1];


    if (second > first) {
        int temp = first;
        first = second;
        second = temp;
    }

    for (int i = 2; i < size; i++) {
        if (arr[i] > first) {
            second = first; 
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i]; // عنصر جدید دومین بزرگترین است
        }
    }

    return second;
}

int main() {
    int arr[10];
    cout << "10 عدد وارد کنید: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    
    int secondLargest = findSecondLargest(arr, 10);
    if (secondLargest != -1) {
        cout << "دومین عدد بزرگ: " << secondLargest << endl;
    }
    return 0;
}