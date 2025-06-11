#include <iostream>
using namespace std;

void checkNumbers(int arr[]) {
    for (int i = 0; i < 10; i++) {
        int count = 0;
        for (int j = 0; j < 10; j++) {
            if (arr[j] > arr[i]) count++;
        }
        if (count > 2) cout << arr[i] << " ";
    }
}

int main() {
    int arr[10];
    cout << "10 عدد وارد کنید: ";
    for (int i = 0; i < 10; i++) cin >> arr[i];
    cout << "اعداد با بیش از دو عدد بزرگتر: ";
    checkNumbers(arr);
    return 0;
}