class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        
       vector<int> leftmul(n,1);
       leftmul[0]=1;
       leftmul[1]=nums[0];
       for(int i=2;i<n;i++){
        leftmul[i]=nums[i-1]*leftmul[i-1];
       }

       vector<int> rightmul(n,1);
       rightmul[n-1]=1;
       rightmul[n-2]=nums[n-1];
       for(int i=n-2;i>=0;i--){
rightmul[i]=rightmul[i+1]*nums[i+1];
       }

vector<int> result(n);
       for(int i=0;i<n;i++){
     result[i]=leftmul[i]*rightmul[i];
       }

       return result;
    }
};
