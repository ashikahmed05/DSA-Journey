// Last updated: 10/31/2025, 4:05:16 PM
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_map<char, int>> main(9);
        

        for (int j =0; j < 9; j++){
            unordered_map<char, int> mp;
            for (int i =0; i < 9; i++){
                char x = board[i][j];
                if (x != '.'){
                    mp[x]++;
                }
            }
            for (auto& pair : mp){
                if (pair.second > 1) {
                    return false;
                }
            }
            
        }
        for (int j =0; j < 9; j++){
            unordered_map<char, int> mp;
            for (int i =0; i < 9; i++){
                char x = board[j][i];
                if (x != '.'){
                    mp[x]++;
                }
                if ( i < 3 && j < 3 && x != '.'){
                    main[0][x]++;
                } else if ( i < 6 && i >= 3 && j < 3 && x != '.'){
                    main[1][x]++;
                } else if ( i < 9 && i >= 6 && j < 3 && x != '.'){
                    main[2][x]++;
                } else if ( i < 6 && i >= 3 && j < 6 && j >= 3 && x != '.'){
                    main[4][x]++;
                } else if ( i < 9 && i >= 6 && j < 6 && j >= 3 && x != '.'){
                    main[5][x]++;
                } else if ( i < 3 && j < 6 && j >= 3 && x != '.'){
                    main[3][x]++;
                } else if ( i < 6 && i >= 3 && j < 9 && j >= 6 && x != '.'){
                    main[6][x]++;
                } else if ( i < 9 && i >= 6 && j < 9 && j >= 6 && x != '.'){
                    main[7][x]++;
                } else if ( i < 3 && j < 9 && j >= 6 && x != '.'){
                    main[8][x]++;
                }
            }
            for (auto& pair : mp){
                if (pair.second > 1) {
                    return false;
                }
            }
            for (auto& s : main){
                for (auto& pair : s) {
                    if (pair.second > 1){
                        return false;
                    }
                }
            }
            
        }



        return true;
        
    }
};