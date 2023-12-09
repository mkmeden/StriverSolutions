class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        

        int sum = -10001;

        int ans = sum ;
int n =  arr.size();

        for(int i =0 ; i < n ; i++)
        {
            sum = max(arr[i] , arr[i] + sum);
            ans = max(sum , ans);
        }

        return ans ;
    }
};