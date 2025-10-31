// Last updated: 10/31/2025, 5:25:28 PM
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // Here i use set for determining the existance of the same no and its time complexity is O(n).
        
        map<pair<int, int>, unordered_set<char>> grid;

        for (int i = 0; i < 9 ; i++){
            unordered_set<char> row, col;
            for (int j = 0; j < 9; j++){
                char x = board[i][j];
                char y = board[j][i];
                pair<int, int> temp = {i/3, j/3};


                if (row.count(x) || col.count(y) || grid[temp].count(x)){
                    return false;
                } else {
                    if(x != '.'){
                        row.insert(x);
                        grid[temp].insert(x);
                    }
                    if(y != '.'){
                        col.insert(y);
                    }
                    
                    
                    

                }
            }
        }

        return true;
        
    }
};