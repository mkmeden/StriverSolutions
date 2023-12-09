class Solution {
public:
    void sortColors(vector<int>& arr) {
        
        int i =0 ;
        int start =  0  , end = arr.size() -  1; 
int n = arr.size();

        while(i <=end)
        {
            if(arr[i]==0)
            {
                swap(arr[i], arr[start]);
                start++;
            }

            else if (arr[i] == 2 )
            {
                swap(arr[i],  arr[end]);
                end--;
                continue;
            }

            i++;

        }
    }
};