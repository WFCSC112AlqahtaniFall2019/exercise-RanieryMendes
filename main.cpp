#include <iostream>
using namespace std;

int main() {
    const int NUM_ELEMENTS = 8;   // Number of elements
    int revVctr[8];               // User values
    int i;                        // Loop index

    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cin >> revVctr[i];
        //cout << revVctr[i] << endl;
    }

    // Reverse

    for (i = 0; i < NUM_ELEMENTS; ++i) {
        int temp = 0;  // int to store element from reVctr[i]
        temp = revVctr[i];


        revVctr[i] = revVctr[7 - i];  // Swap

        revVctr[7 - i] = temp;


        if (i == 3) { break;}
    }

    // Print values

    cout << endl << "New values: ";
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << " " << revVctr[i];
    }
    cout << endl;

    return 0;
}