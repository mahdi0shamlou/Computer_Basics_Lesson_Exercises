#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[]) {
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < 10; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int arr[10];
    cout << "10 عدد وارد کنید: ";
    for (int i = 0; i < 10; i++) cin >> arr[i];
    cout << "دومین عدد بزرگ: " << findSecondLargest(arr) << endl;
    return 0;
}