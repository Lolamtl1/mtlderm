#include <iostream>
#include <vector>

using namespace std;

void flipImageVertically(vector<vector<int>>& image) {
    int rows = image.size();
    int cols = image.size();
    for (int i = 0; i < rows / 2; ++i) {
        for (int j = 0; j < cols; ++j) {
            swap(image[i][j], image[rows - i - 1][j]);
        }
    }
}

int main() {
    vector<vector<int>> image = {
        {0, 0, 0, 0, 0, 0, 0},
        {0, 255, 255, 255, 255, 255, 0},
        {0, 255, 0, 0, 0, 255, 0},
        {0, 255, 255, 255, 255, 255, 0},
        {0, 0, 0, 0, 0, 0, 0}
    };

    // 打印原始图像
    cout << "Original Image:" << endl;
    for (const auto& row : image) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    // 上下翻转图像
    flipImageVertically(image);

    // 打印翻转后的图像
    cout << "Flipped Image:" << endl;
    for (const auto& row : image) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
