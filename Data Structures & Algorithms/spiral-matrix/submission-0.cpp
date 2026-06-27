class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int total=n*m;
        int srow=0;
        int erow=n-1;
        int scol=0;
        int ecol=m-1;
        int count=0;
        vector<int>ans;
        while(count<total){
          for(int i=scol;i<=ecol && count<total;i++)
          {
            ans.push_back(matrix[srow][i]);
            count++;
          }
          srow++;
          for(int j=srow;j<=erow && count<total;j++){
            ans.push_back(matrix[j][ecol]);
            count++;
          }
          ecol--;
          for(int i=ecol;i>=scol && count<total;i--){
            ans.push_back(matrix[erow][i]);
            count++;
          }
          erow--;
          for(int i=erow;i>=srow && count<total;i--){
            ans.push_back(matrix[i][scol]);
            count++;
          }
          scol++;
        }
        return ans;
        
    }
};
