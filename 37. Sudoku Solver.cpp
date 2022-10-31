class Solution {
 public:
  void Sudokosolr(vector<vector<char>>& board) {
    sol(board, 0);
  }

 private:
  bool sol(vector<vector<char>>& board, int s) {
    if (s == 81)
      return true;

    const int i = s / 9;
    const int j = s % 9;

    if (board[i][j] != '.')
      return sol(board, s + 1);

    for (char a= '1'; a<= '9'; ++a)
      if (isValid(board, i, j, a)) {
        board[i][j] = a;
        if (sol(board, s + 1))
          return true;
        board[i][j] = '.';
      }

    return false;
  }

  bool isValid(vector<vector<char>>& board, int row, int col, char a) {
    for (int i = 0; i < 9; ++i)
      if (board[i][col] == a|| board[row][i] == a||
          board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == a)
        return false;
    return true;
  }
};
