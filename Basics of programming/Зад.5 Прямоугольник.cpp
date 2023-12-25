#include <iostream>
#include <vector>
#include <stack>

int max_rectangle(std::vector<std::vector<char>>& matrix) {
    if (matrix.empty()) {
        return 0;
    }

    int maxArea = 0;
    int m = matrix.size();
    int n = matrix[0].size();
    std::vector<int> heights(n, 0);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == '1') {
                heights[j] += 1;
            }
            else {
                heights[j] = 0;
            }
        }
        std::stack<int> s;
        int k = 0;
        while (k < n) {
            if (s.empty() || heights[s.top()] <= heights[k]) {
                s.push(k++);
            }
            else {
                int tp = s.top();
                s.pop();
                int area = heights[tp] * (s.empty() ? k : k - s.top() - 1);
                maxArea = std::max(maxArea, area);
            }
        }
        while (!s.empty()) {
            int tp = s.top();
            s.pop();
            int area = heights[tp] * (s.empty() ? k : k - s.top() - 1);
            maxArea = std::max(maxArea, area);
        }
    }

    return maxArea;
}

int main() {
    std::vector<std::vector<char>> matrix = {
            {'1', '0', '1', '1', '1'},
            {'0', '1', '1', '1', '1'},
            {'1', '0', '1', '1', '1'}
    };
    std::cout << "Maximal size of rectangle: " << max_rectangle(matrix) << std::endl;

    return 0;
}