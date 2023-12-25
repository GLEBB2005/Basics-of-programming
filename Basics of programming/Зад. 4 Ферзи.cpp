#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool safe_place(vector<string>& board, int row, int col, int n) {
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 'Q') {
            return false;
        }
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }
    for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }
    return true;
}

void solve(vector<vector<string>>& res, vector<string>& board, int row, int n) {
    if (row == n) {
        res.push_back(board);
        return;
    }
    for (int col = 0; col < n; col++) {
        if (safe_place(board, row, col, n)) {
            board[row][col] = 'Q';
            solve(res, board, row + 1, n);
            board[row][col] = '.';
        }
    }
}
vector<vector<string>> solve(int n) {
    vector<vector<string>> res;
    vector<string> board(n, string(n, '.'));
    solve(res, board, 0, n);
    return res;
}
int main() {
    int n;
    std::cout << "Enter n:";
    std::cin >> n;
    vector<vector<string>> solutions = solve(n);
    for (auto& solution : solutions) {
        for (auto& row : solution) {
            cout << row << endl;
        }
        cout << endl;
    }
    return 0;
}