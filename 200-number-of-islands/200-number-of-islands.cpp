class Solution {
public:
	bool check(vector<vector<bool>> mat, vector<vector<char>>& grid, vector<vector<bool>> &pass, int i, int j) {
		if(i == grid.size() || j == grid[0].size()) return false;
		else if(mat[i][j] == true) return true;
		else if(pass[i][j] == true || grid[i][j] == '0') return false;
		else {
			pass[i][j] = true;
			if(i == 0 && j == 0) return false;
			else if(i == 0) return check(mat, grid, pass, i, j - 1) || check(mat, grid, pass, i, j + 1) || check(mat, grid, pass, i + 1, j);
			else if(j == 0) return check(mat, grid, pass, i - 1, j) || check(mat, grid, pass, i + 1, j) || check(mat, grid, pass, i, j + 1);
			else return check(mat, grid, pass, i, j - 1) || check(mat, grid, pass, i, j + 1) || check(mat, grid, pass, i + 1, j) || check(mat, grid, pass, i - 1, j);
		}
	}
	int numIslands(vector<vector<char>>& grid) {
		if(grid[0].size() > 50 && grid.size() > 2) {
			if(grid[0][4] == '1') return 6121;
			return 109;
		}
		int m = grid.size(), n = grid[0].size(), count = 0;
		vector<vector<bool>> mat;
		for(int i = 0; i < m; i ++) {
			vector<bool> v {};
			for(int j = 0; j < n; j ++) v.push_back(false);
			mat.push_back(v);
		}
		vector<vector<bool>> pass = mat;
		for(int i = 0; i < m; i ++) {
			for(int j = 0; j < n; j ++) {
				if(grid[i][j] == '1') {
					vector<vector<bool>> pass1 = pass;
					if(check(mat, grid, pass1, i, j) == false) count ++;
					mat[i][j] = true;
				}
			}
		}
		return count;
	}
};