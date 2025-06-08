#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double calculateSeriesSum(double x, int terms) {
    double sum = 0.0;
    double term = x; // جمله اول: x
    cout << term << "\n";
    for (int i = 1; i <= terms; i++) {
        // اضافه کردن جمله فعلی به مجموع
        if (i % 2 == 1) // جملات فرد: مثبت
            sum += term;
        else // جملات زوج: منفی
            sum -= term;
        
        // محاسبه جمله بعدی با استفاده از رابطه بازگشتی
        // term_next = term * (x^2) / [(2i)(2i+1)]
        int n = 2 * i;
        term = term * (x * x) / (n * (n + 1));
        cout << term << "\n";
    }
    return sum;
}

int main() {
    double x;
    int terms;
    
    cout << "Enter the value of x: ";
    cin >> x;
    
    cout << "Enter the number of terms: ";
    cin >> terms;
    
    double sum = calculateSeriesSum(x, terms);
    
    cout << fixed << setprecision(8);
    cout << "Sum of the series: " << sum << endl;

    
    return 0;
}