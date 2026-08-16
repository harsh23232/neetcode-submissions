class Solution {
public:
    int swap(int x , int y)
    {
        int temp;
        x = temp;
        temp = y;
        y = x;
      
    }
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0],mini=nums[0],ans=nums[0];

        for(int i=1;i<n;i++){
            int x = nums[i];
            if(x<0){
                swap(maxi,mini);
            }maxi = max(x,maxi*x);
            
            mini = min(x,mini*x);
            ans = max(maxi,ans);

        }return ans;
      

        
    }
};
