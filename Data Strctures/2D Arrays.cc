#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

const int ARRAY_SIZE = 6;
const int KERNEL_SIZE = 3;

int main() {
    // Read array
    vector<vector<int>> arr(ARRAY_SIZE, vector<int>(ARRAY_SIZE));
    for (int y = 0; y < ARRAY_SIZE; y++) {
       for (int x = 0; x < ARRAY_SIZE; x++) {
          cin >> arr[x][y];
       }
    }
    
    // Initialize kernel
    vector<vector<int>> kernel(KERNEL_SIZE, vector<int>(KERNEL_SIZE, 1));
    kernel[0][1] = 0;
    kernel[2][1] = 0;
    
    // Find maximum sum by sliding kernel over array
    int maxSum = numeric_limits<int>::min();
    
    for (int x = 0; x <= ARRAY_SIZE - KERNEL_SIZE; x++) {
        for (int y = 0; y <= ARRAY_SIZE - KERNEL_SIZE; y++) {
            int sum = 0;
            
            for (int i = 0; i < KERNEL_SIZE; i++) {
                for (int j = 0; j < KERNEL_SIZE; j++) {
                    sum += kernel[i][j] * arr[x + i][y + j];
                }
            }
            
            maxSum = max(sum, maxSum);
        }
    }
    
    // Print maximum sum
    cout << maxSum << endl;
    
    return 0;
}

//try c++ language
