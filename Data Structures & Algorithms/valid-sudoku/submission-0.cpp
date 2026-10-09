class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_map<int, set<char>> row;
        unordered_map<int, set<char>> col;
        map<pair<int, int>, set<char>> square;

        for (int i=0; i<9; i++)
        {
            for (int j=0; j<9; j++)
            {
                int r = i/3;
                int c = j/3;

                if (board[i][j] == '.')
                    continue;
                
                if (row[i].count(board[i][j])
                    || col[j].count(board[i][j])
                    || square[{r,c}].count(board[i][j]))
                    {
                        return false;
                    }
                
                row[i].insert(board[i][j]);
                col[j].insert(board[i][j]);
                square[{r,c}].insert(board[i][j]);
            }
        }

        return true;
    }
};
