class Solution {
public:
    
    bool isSafe(int row, int col, vector<string> board) {
        
        for(int i = row - 1; i >= 0; i--) {
            if(board[i][col] == 'Q')
                return false;
        }
        
        for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if(board[i][j] == 'Q')
                return false;
        }
        
        for(int i = row - 1, j = col + 1; i >= 0 && j < board.size(); i--, j++) {
            if(board[i][j] == 'Q')
                return false;
        }
        
        return true;
    }
    
    void Nqueen_helper(int n, int r, vector<vector<string>>& ans, vector<string>& board) {
        
        if(r == n){
            ans.push_back(board);
        }
        
        for(int c = 0; c < n; c++) {
            if(isSafe(r, c, board)) {
                board[r][c] = 'Q';
                Nqueen_helper(n, r + 1, ans, board);
                board[r][c] = '.';
            }
        }
    }
        
        
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        
        Nqueen_helper(n, 0, ans, board);
        
        return ans;
    }
};