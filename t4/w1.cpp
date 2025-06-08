#include <iostream>
#include <cmath>
using namespace std;

// تابع بررسی اول بودن عدد
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// تابع یافتن nامین عدد اول
int findNthPrime(int n) {
    int count = 0;
    int num = 2;
    
    while (count < n) {
        if (isPrime(num)) {
            count++;
            if (count == n) return num;
        }
        num++;
    }
    return -1; // حالت خطا
}

int main() {
    const int TARGET = 1399;
    int prime = findNthPrime(TARGET);
    
    if (prime != -1) {
        cout << "The " << TARGET << "th prime number is: " << prime << endl;
    } else {
        cout << "Error: Prime number not found!" << endl;
    }
    
    return 0;
}