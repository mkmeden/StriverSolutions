class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        vector<vector<int>>v ;

        vector<int> a = {1};
        v.push_back(a);

        if(n==1)
        return v ;

        a = {1,1};
        v.push_back(a);

        if(n==2)
        return v ;

        for(int i =3 ; i<=n ; i++)
        {

            vector<int> brr ;

            brr.push_back(1);

            for(int j = 0  ; j< v[i-2].size()-1 ; j++)
            {
                brr.push_back(v[i-2][j]+ v[i-2][j+1]);
            }

            brr.push_back(1);
            v.push_back(brr);
        }

        return v ;
        

    }
};