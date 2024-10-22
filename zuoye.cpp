#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int rows = 5;
    const int cols = 7;
    vector<vector<int>> image(rows, vector<int>(cols, 0)); // 创建一个5x7的图像矩阵，初始值为0

    // 修改边缘一圈的值（除了(0,0)点）为255
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i == 0 && j == 0) continue; // 跳过(0,0)点
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                image[i][j] = 255;
            }
        }
    }

    // 打印图像矩阵
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

    
