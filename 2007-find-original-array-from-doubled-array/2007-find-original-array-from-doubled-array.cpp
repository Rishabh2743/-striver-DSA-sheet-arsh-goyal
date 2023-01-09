class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        map<int,int> p;
        int c=0;
        for(auto i : changed)
            p[i]++;
        vector<int> a,y;
        int n=changed.size();
        sort(changed.begin(),changed.end());
        for(auto i : changed)
        {
            if(p[i]>0)
            {
                if(p[i*2]>0)
                { c++;
                    p[i]--;
                    p[i*2]--;
                    a.push_back(i);
                }
                else
                    return y;
            }
        }

        if(c==n/2)
        return a;
        else
        return y;
    }
};