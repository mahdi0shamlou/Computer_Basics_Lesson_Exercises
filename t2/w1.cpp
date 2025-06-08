#include <iostream>
using namespace std;

int main() {
    const int BIG_SIZE = 5;
    const int SMALL_SIZE = 2;
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

    bool is_in = true;

    for (int i = 0; i < SMALL_SIZE; i++) {
        int index_should_search_in_big_array = smallArray[i];
        bool index_should_search_in_big_array_not_exsit_in_big_array = true;

        for (int j = 0; j < BIG_SIZE; j++) {
                if(index_should_search_in_big_array == bigArray[j]){
                    index_should_search_in_big_array_not_exsit_in_big_array = false;
                    break;
                }
        }

        if(index_should_search_in_big_array_not_exsit_in_big_array){
            is_in = false;
            break;
        }

    }
    
    if(!is_in) {
        cout << "Array is not exsit in first array";
    }
    else{
        cout << "Array is exsit in first array";
    }


    return 0;
}