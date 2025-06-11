#include <iostream>
using namespace std;

void findMinMax(int arr[], int& min, int& max, int index = 0) {
    if (index >= 10) return;
    if (arr[index] < min) min = arr[index];
    if (arr[index] > max) max = arr[index];
    findMinMax(arr, min, max, index + 1);
}

int main() {
    int arr[10];
    cout << "10 عدد وارد کنید: ";
    for (int i = 0; i < 10; i++) cin >> arr[i];
    
    int min = arr[0], max = arr[0];
    findMinMax(arr, min, max);
    cout << "حداقل: " << min << "\nحداکثر: " << max << endl;
    return 0;
}