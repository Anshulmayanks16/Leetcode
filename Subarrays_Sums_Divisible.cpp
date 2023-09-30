lass Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       int count = 0,sm =0,mod= 0;
       unordered_map<int,int> mp;
       mp[mod]++;
       for(int i =0;i<nums.size();i++){
           sm += nums[i];
           mod = sm%k;
           if(mod < 0)
            mod += k;
            if(mp.find(mod)!=mp.end()){
                count += mp[mod];
                mp[mod]++;
            }
            else
            mp[mod]++;

       }
       return count;
    }
};
