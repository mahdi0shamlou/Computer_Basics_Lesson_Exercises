#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;



double calculateSeriesSum(double x, int terms) {
    double sum = 0.0;
    int counter = 2;
    double res = 0;
    double face = 1;
    double bottom = 1;


    for(int i = 1; i <= (terms*2); i=i+2){
        face = 1;
        bottom = 1;
        if (counter % 2 == 0) {
            counter++;
            for(int z = i; z>0; z--){
                face = face * x;
                bottom = bottom * z;
            }
            res = face/bottom;
            cout << res << "\n";
            sum = sum + res;
        }
        else{
            counter++;
            for(int z = i; z>0; z--){
                face = face * x;
                bottom = bottom * z;
            }
            res = face/bottom;
            cout << res << "\n";;
            sum = sum - res;
        }

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