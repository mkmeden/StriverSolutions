class Solution {
public:
    int maxProfit(vector<int>& arr) {

        int ans = 0 ;
        int buy  =arr[0];
        int n = arr.size();
        for(int i =1 ;i< n ; i++)
        {   
            if(arr[i]<buy)
            buy = arr[i];
            
            ans = max(ans , arr[i] - buy);

            
        }

        return ans ;

        
    }
};