#include <iostream>
#include <vector>

int main() {
    const int width = 5;
    const int height = 7;
    const int borderValue = 255;
    std::vector<std::vector<int>> image(height, std::vector<int>(width));
    for (int i = 0; i <height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (i ==0 || i ==height - 1 || j == 0 ||j == width - 1) {
                image[i][j] = borderValue;
            }
        }
    }
    for (const auto& row : image) {
        for (int pixel : row) {
            std::cout << pixel <<" ";
        }
        std::cout << std::endl;
    }

    return 0;
}