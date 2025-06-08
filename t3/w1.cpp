#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5; // 100 + 1 عنصر
    int arr[SIZE];

    // دریافت آرایه ۱۰۰ تایی صعودی
    cout << "Enter 100 sorted integers (ascending order):" << endl;
    for (int i = 0; i < SIZE-1; i++) {
        cin >> arr[i];
    }

    // دریافت عدد ۱۰۱ام
    int new_num;
    cout << "Enter the 101st number: ";
    cin >> new_num;


    // یافتن موقعیت مناسب برای درج
    int pos = SIZE - 1; // موقعیت پیش‌فرض (انتهای آرایه)
    for (int i = SIZE - 2; i >= 0; i--) {
        if (arr[i] > new_num) {
            arr[i + 1] = arr[i]; // شیفت به راست
            pos = i;
        } else {
            pos = i + 1;
            break;
        }
        //cout << 'x';
    }
    // if (new_num < arr[0]) pos = 0; // حالت خاص: عدد کوچکتر از همه
    
    arr[pos] = new_num; // درج عدد جدید

    // چاپ آرایه نهایی
    cout << "Final sorted array:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}