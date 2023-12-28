/*Give a N*N square matrix, return an array of its anti-diagonals in top-leftmost to bottom-rightmost order. In an element of a anti-diagonal (i, j), surrounding elements will be (i+1, j-1) and (i-1, j+1). Look at the examples for more clarity.

Example 1:

Input:
N = 2
matrix[][] = 1 2
            3 4
Output:
1 2 3 4
Explanation:
List of anti-diagnoals in order is
{1}, {2, 3}, {4}

Example 2:

Input:
N = 3
matrix[][] = 3 2 3
            4 5 1
            7 8 9
Output:
3 2 4 3 5 7 1 8 9
Explanation:
List of anti-diagnoals in order is
{3}, {2, 4}, {3, 5, 7}, {1, 8}, {9}*/

class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
        int n = matrix.size();
        vector<int> ans;
        for(int j = 0; j < n; j++)
        {
            for(int x = 0, y = j; y > -1 and x < n; x++, y--)
            {
                ans.push_back(matrix[x][y]);
            }
        }
        for(int i = 1; i < n; i++)
        {
            for(int y = n - 1, x = i; y > -1 and x < n; x++, y--)
            {
                ans.push_back(matrix[x][y]);
            }
        }
        
        return ans;
    }
};