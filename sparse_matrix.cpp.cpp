#include <iostream>
using namespace std;

// Maximum non-zero elements we can store
const int MAX_ELEMENTS = 10;

// Structure to store a non-zero element
struct Element {
    int row;
    int col;
    int value;
};

int main() {
    // Array to store non-zero elements
    Element elements[MAX_ELEMENTS];
    int size = 0; // Current number of non-zero elements
    int rows = 3, cols = 4; // Matrix dimensions

    // Insert non-zero elements
    elements[size++] = {0, 1, 5}; // row 0, col 1, value 5
    elements[size++] = {1, 2, 8}; // row 1, col 2, value 8
    elements[size++] = {2, 0, 3}; // row 2, col 0, value 3

    // Print the full matrix
    cout << "Sparse Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int val = 0;
            for (int k = 0; k < size; k++) {
                if (elements[k].row == i && elements[k].col == j) {
                    val = elements[k].value;
                    break;
                }
            }
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
