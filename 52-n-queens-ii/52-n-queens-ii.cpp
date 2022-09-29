class Solution {
  public:
    int solve(int col,vector<string> &board,vector<int> & leftrow,vector<int> &upperDiagonal,vector<int> &lowerDiagonal,int n) {
      if (col == n) {
        return 1;
      }
        int count=0;
      for (int row = 0; row < n; row++) {
        if (leftrow[row]==0 && lowerDiagonal[row + col] == 0 && upperDiagonal[n - 1 + col - row] == 0) {
          board[row][col] = 'Q';
          leftrow[row] = 1;
          lowerDiagonal[row + col] = 1;
          upperDiagonal[n - 1 + col - row] = 1;
          count+=solve(col + 1, board, leftrow, upperDiagonal, lowerDiagonal, n);
          board[row][col] = '.';
          leftrow[row] = 0;
          lowerDiagonal[row + col] = 0;
          upperDiagonal[n - 1 + col - row] = 0;
        }
      }
        return count;
    }

  public:
     int totalNQueens(int n) {
      // vector<vector<string>> ans;
      vector<string> board(n);
      string s(n, '.');
      for (int i=0;i<n;i++) {
        board[i] = s;
      }
      vector<int> leftrow(n, 0),upperDiagonal(2 * n - 1, 0),lowerDiagonal(2 * n - 1, 0);
      return solve(0, board,leftrow,upperDiagonal,lowerDiagonal,n);
      
    }
};