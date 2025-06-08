#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int grades[SIZE];
    int freq[101]; // number should 0 top 100
    int maxFreq = 0, mode = 0;

    cout << "لطفاً 100 عدد نمره را وارد کنید:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> grades[i];
        freq[grades[i]]++;  
    }
    cout << "************** \n";
    for (int i = 0; i <= 101; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mode = i;
        }
    }

    cout << "عدد با بیشترین تکرار: " << mode << " (تعداد تکرار: " << maxFreq << ")\n";
    return 0;
}