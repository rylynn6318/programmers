#pragma once
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    vector<int> box;
    int cnt = 0;
    bool flag = true;
    for (auto m : moves)
    {
        flag = true;
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[i].size(); j++)
            {
                if (j + 1 == m)
                {
                    if (board[i][j] != 0)
                    {
                        if (box.empty())
                        {
                            box.push_back(board[i][j]);
                        }
                        else
                        {
                            if (box.back() == board[i][j])
                            {
                                cnt++;
                                box.pop_back();
                            }
                            else
                                box.push_back(board[i][j]);
                        }
                        board[i][j] = 0;
                        flag = false;
                        break;
                    }
                }
            }
            if (!flag) break;
        }

    }
    return cnt * 2;
}