class Solution {
    int n,m;
public:
    void BFS(vector<vector<char>>&grid,int row,int col,vector<vector<bool>>&visited)
    {
        if(row<0 || row>=n || col<0 || col>=m)
        {
            return ;
        }
        if(visited[row][col]){
            return ;
        }
        visited[row][col]=true;
        
        if(grid[row][col]=='0'){
            return ;
        }
        
        BFS(grid,row+1,col,visited);
        BFS(grid,row,col+1,visited);
        BFS(grid,row-1,col,visited);
        BFS(grid,row,col-1,visited);
    }
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>>visited;
        n=grid.size();if(n==0){return 0;}
        m=grid[0].size();if(m==0){return 0;}
        
        
        for(int i=0;i<n;i++)
        {
          vector<bool>vis(m,false);
            visited.push_back(vis);
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!visited[i][j] && grid[i][j]!='0')
                {
                        BFS(grid,i,j,visited);
                        c++;
                }
            }
        }
     return c;   
    }
};
