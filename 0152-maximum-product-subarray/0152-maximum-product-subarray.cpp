class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=nums[0];
        int maxprod=nums[0];
        int minprod=nums[0];

        for(int i=1;i<nums.size();i++){
            int cur=nums[i];

            if(cur<0) swap(maxprod,minprod);

            maxprod=max(cur,maxprod*cur);
            minprod=min(cur,minprod*cur);

            res=max(res,maxprod);
        }
        return res;
    }
};