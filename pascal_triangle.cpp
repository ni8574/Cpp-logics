#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> triangle;

        for(int i = 0; i < numRows; i++) {

            // New row with all 1s
            vector<int> row(i + 1, 1);

            // Fill middle elements
            for(int j = 1; j < i; j++) {

                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }

            triangle.push_back(row);
        }

        return triangle;
    }
};

int main() {

    int numRows;

    cout << "Enter number of rows: ";
    cin >> numRows;

    Solution obj;

    vector<vector<int>> result = obj.generate(numRows);

    cout << "Pascal Triangle:\n";

    for(auto row : result) {

        for(auto val : row) {

            cout << val << " ";
        }

        cout << endl;
    }

    return 0;
}






// #include <iostream>
// using namespace std;

// int main() {

//     int rows = 5;

//     for(int i = 0; i < rows; i++) {

//         int number = 1;

//         // Spaces print karne ke liye
//         for(int space = 0; space < rows - i - 1; space++) {
//             cout << "  ";
//         }

//         for(int j = 0; j <= i; j++) {

//             cout << number << "   ";

//             number = number * (i - j) / (j + 1);
//         }

//         cout << endl;
//     }

//     return 0;
// }
