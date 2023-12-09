class Solution {
public:

void reverse(  int i, int j, vector<int>& arr  )
{
    while(i<j)
    {
        swap(arr[i++],  arr[j--]);
    }
}
    void nextPermutation(vector<int>& arr) {
        
        int n = arr.size()  ; 
        int i = n -1 ;

        while(i>0)
        {
            if(arr[i]>arr[i-1])
            break;
            i--;
        }

       if(i==0)
       {
           reverse(i , n-1 , arr);
       }

       else
       {
           int j = n-1 ;
           i--;
    

           while(j>i)
           {
               if(arr[j]>arr[i])
               {
                   swap(arr[i], arr[j]);
                   reverse(i+1 , n-1 , arr);
                   break;
               }

               j--;
           }
       }
    }
};