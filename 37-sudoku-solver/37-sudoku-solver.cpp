class Solution {
public:
    bool isPossible(vector<vector<char>> board, int row, int col, char num) {
        
        for(int i = 0; i < board.size(); i++) {
            if(board[i][col] == num) return false;
            if(board[row][i] == num) return false;
        }
        
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(board[3*(row/3) + i][3*(col/3) + j] == num)
                    return false;
            }
        }
        
        return true;
    }
    
    void sudoku_helper(vector<vector<char>>& board, int i, int j, bool& found) {
        
        if(i >= board.size()) {
            found = true;
            return;
        }
        
        int next_row, next_col;
        
        if(j != board.size() - 1) {
            next_row = i;
            next_col = j + 1;
        }
        
        else {
            next_row = i + 1;
            next_col = 0;
        }
        
        if(board[i][j] != '.') {
            
            sudoku_helper(board, next_row, next_col, found);
        }
        
        else {
            for(char c = '1'; c <= '9'; c++) {
                if(isPossible(board, i, j, c)) {
                    
                    board[i][j] = c;
                    
                    sudoku_helper(board, next_row, next_col, found);
                    
                    if(!found) board[i][j] = '.';
                }
            }
        }
        
    }
    void solveSudoku(vector<vector<char>>& board) {
        
        bool found = false;
        sudoku_helper(board, 0, 0, found);
    }
};