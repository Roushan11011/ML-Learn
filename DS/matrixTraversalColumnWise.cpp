#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    int num_rows = 3;
    int num_cols = 3;

    for (int col = 0; col < num_cols; col++) {
        for (int row = 0; row < num_rows; row++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

cout<<"\n*****\n";
     for (int col = 0; col < num_cols; col++) {
        for (int row = num_rows-1; row >=0; row--) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
