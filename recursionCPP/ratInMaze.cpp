#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<vector<int>>directions={{1,0},{0,-1},{0,1},{-1,0}};
    void solve(vector<vector<int>>& maze,int i , int j , vector<string> &result, string &s){
        if(i<0 || j < 0 || i>=maze.size() || j >= maze[0].size() || maze[i][j]==0){
          return ;
        }
        maze[i][j]=0;
        if(i==maze.size()-1 && j==maze[0].size()-1){
          result.push_back(s);
          return ;
        }
        for(int k = 0; k<4; k++){
          int new_i=i+directions[k][0];
          int new_j=j+directions[k][1];
          if(k==0) s.push_back('D');
          if(k==1) s.push_back('L');
          if(k==2) s.push_back('R');
          if(k==3) s.push_back('U');
          solve(maze,new_i,new_j,result,s);
          s.pop_back();
        }
        maze[i][j]=1;
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        vector<string>result;
        string s;
        if(maze[0][0]==0) return result;
        solve(maze,0,0,result,s);
        return result;
    }
};
int main(){
    Solution obj;
    int n=5;
    vector<vector<int>> maze={
                              {1 ,1 ,1 ,0 ,1},
                              {1 ,0 ,1 ,1 ,1},
                              {0 ,0 ,1 ,1 ,1},
                              {1 ,0 ,0 ,1 ,1},
                              {1 ,0 ,0 ,0 ,1}};
    vector<string> result  = obj.ratInMaze(maze);
    for(auto path: result){
      cout<<path<<endl;
    }
    return 0;
}