#include <iostream>
using namespace std;

int main() {
    const int BIG_SIZE = 50;
    const int SMALL_SIZE = 5;
    int bigArray[BIG_SIZE];
    int smallArray[SMALL_SIZE];

    cout << "Enter " << BIG_SIZE << " integers for the big array:" << endl;
    for (int i = 0; i < BIG_SIZE; i++) {
        cin >> bigArray[i];
    }

    cout << "Enter " << SMALL_SIZE << " integers for the small array:" << endl;
    for (int i = 0; i < SMALL_SIZE; i++) {
        cin >> smallArray[i];
    }

    

    return 0 
}