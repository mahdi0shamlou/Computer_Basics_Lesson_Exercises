#include <iostream>
using namespace std;

bool isPrime(int n, int i = 2) {
    if (n <= 2) return (n == 2);
    if (n % i == 0) return false;
    if (i * i > n) return true;
    return isPrime(n, i + 1);
}

int main() {
    int num;
    cout << "عدد را وارد کنید: ";
    cin >> num;
    cout << (isPrime(num) ? "اول است" : "اول نیست") << endl;
    return 0;
}