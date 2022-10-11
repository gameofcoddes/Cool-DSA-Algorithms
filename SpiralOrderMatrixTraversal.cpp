vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int m = A.size();
    int n = A[0].size();
    //if(n==1 && m==1)cout<<A[n][m]<<
    int top =0 , right =n-1;
    int btm = m-1 , left = 0;
    int dir=0;
    vector<int> ans;
    while(top<= btm && left<=right){
        if(dir==0){
            for(int i=left;i<=right;i++){
                ans.push_back(A[top][i]);
            }
            top++;
            dir=1;
        }
        else if(dir==1){
            for(int i=top;i<=btm;i++){
                ans.push_back(A[i][right]);
            }
            dir=2;
            right--;
        }
        else if(dir==2){
            for(int i=right;i>=left;i--){
                ans.push_back(A[btm][i]);
            }
            dir=3;
            btm--;
            
        }
        else if(dir==3){
            for(int i=btm;i>=top;i--){
               ans.push_back(A[i][left]);
            }
            left++;
            dir=0;
        }
        
      
    }
    return ans;
}
