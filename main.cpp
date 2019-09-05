#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int NUM_ELEMENTS = 8;   // Number of elements
    int revVctr[8];               // User values
    int i;                        // Loop index

    vector <int> vec (NUM_ELEMENTS);

    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cin >> revVctr[i];

    }

    // conversion

    for (i = 0; i < vec.size(); ++i) {
       vec.at(i) = revVctr[i];

    }

    for (i = 0; i <  vec.size() /2 ; ++i) {
        int temp = 0;
        temp = vec.at(i);
        vec.at(i) = vec.at(vec.size()-1-i);
        vec.at(vec.size()-1-i) = temp;


    }


    // Print values

    cout << endl << "New values: ";
    for (i = 0; i < vec.size(); ++i) {
        cout << " " <<  vec.at(i);
    }
    cout << endl;

    return 0;
}