//Squaring a sorted array
//nums=[-4,-1,0,3,10]
//o/p = [0,1,9,16,100]


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int s = nums.size();
        vector<int> neg;
        vector<int> pos;

        for(int i = 0; i < s; i++){
            if(nums[i] < 0)
                neg.push_back(nums[i]);
            else
                pos.push_back(nums[i]);
        }

        if(neg.size() == 0){
            for(int i = 0; i < pos.size(); i++)
                pos[i] *= pos[i];
            return pos;
        }

        if(pos.size() == 0){
            for(int i = 0; i < neg.size(); i++)
                neg[i] *= neg[i];
            reverse(neg.begin(), neg.end());
            return neg;
        }

        int n = neg.size();
        int m = pos.size();

        for(int i = 0; i < n; i++)
            neg[i] *= neg[i];

        reverse(neg.begin(), neg.end());

        for(int i = 0; i < m; i++)
            pos[i] *= pos[i];

        vector<int> res(n + m);

        int i = 0, j = 0, id = 0;

        while(i < n && j < m){
            if(neg[i] <= pos[j])
                res[id++] = neg[i++];
            else
                res[id++] = pos[j++];
        }

        while(i < n)
            res[id++] = neg[i++];

        while(j < m)
            res[id++] = pos[j++];

        return res;
    }
};