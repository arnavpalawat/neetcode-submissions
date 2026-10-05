class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::set<int> tracker;
        int count = 0;


        // hor
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] != '.') {
                    count++;
                    tracker.insert(board[i][j]);
                }
            }
            if (tracker.size() != count) {
                return false;
            }
            tracker.clear();
            count = 0;
        }

        // vert
        for (int j = 0; j < board.size(); j++) {
            for (int i = 0; i < board[0].size(); i++) {
                if (board[i][j] != '.') {
                    count++;
                    tracker.insert(board[i][j]);
                }
            }
            if (tracker.size() != count) {
                return false;
            }
            tracker.clear();
            count = 0;
        }

        for (int x = 0; x < 9; x += 3) {
            for (int y = 0; y < 9; y += 3) {
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        if (board[x + i][y + j] != '.') {
                            count++;
                            tracker.insert(board[x + i][y + j]);
                        }
                    }
                }
                if (tracker.size() != count) {
                    return false;
                }
                tracker.clear();
                count = 0;
            }
        }
        return true;
    }
};