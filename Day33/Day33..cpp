#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int rowIndex = 0;
        int colIndex = cols - 1;
        while (rowIndex < rows && colIndex >= 0) {
            int element = matrix[rowIndex][colIndex];
            if (element == target) {
                return 1;
            } else if (element > target) {
                colIndex--;

            } else {
                rowIndex++;
            }
        }
        return 0;
    }
int main(){

    return 0;
}