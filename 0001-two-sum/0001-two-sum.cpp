class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();

        vector<pair<int,int>> vp;
        for(int i = 0; i < n; i++){
            vp.push_back({arr[i], i});
        }

        sort(vp.begin(), vp.end());

        int left = 0, right = n - 1;

        while(left < right){
            int sum = vp[left].first + vp[right].first;

            if(sum == target){
                int i1 = vp[left].second;
                int i2 = vp[right].second;

                if(i1 > i2) swap(i1, i2);
                return {i1, i2};
            }
            else if(sum > target){
                right--;
            }
            else{
                left++;
            }
        }

        return {-1, -1};
    }
};