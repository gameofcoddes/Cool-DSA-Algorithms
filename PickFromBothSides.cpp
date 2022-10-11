int Solution::solve(vector<int> &A, int B) {
    
    int sum =0;
   int j = A.size()-1;
   int i;
   for(i=0;i<B;i++){
       sum+=A[i];
   }
   int mxSum = sum;
   i--;
   while(B--){
      
      sum = sum-A[i]+A[j];
      mxSum = max(mxSum,sum);
      j--;
      i--;
      
   }
   return mxSum;
}
