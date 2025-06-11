#include <iostream>
using namespace std;

const int MAX_SIZE = 10; // حداکثر اندازه ماتریس برای جلوگیری از خطا

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "ابعاد ماتریس اول (تعداد سطر و ستون): ";
    cin >> rows1 >> cols1;


    cout << "ابعاد ماتریس دوم (تعداد سطر و ستون): ";
    cin >> rows2 >> cols2;

    if (cols1 != rows2) {
        cout << "خطا! تعداد ستون ماتریس اول باید برابر تعداد سطر ماتریس دوم باشد." << endl;
        return 1;
    }

    int matrixA[MAX_SIZE][MAX_SIZE];
    int matrixB[MAX_SIZE][MAX_SIZE];
    int resultMatrix[MAX_SIZE][MAX_SIZE];

    cout << "داده‌های ماتریس اول را وارد کنید:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> matrixA[i][j];
        }
    }

    cout << "داده‌های ماتریس دوم را وارد کنید:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> matrixB[i][j];
        }
    }


    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    cout << "ماتریس حاصل:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}