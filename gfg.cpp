class Solution {
  public:
    int totalFruits(vector<int> &arr) {
        unordered_map<int,int>mp;
        int maxLen = 0;
        int l = 0,r = 0;
        
        while(r < arr.size()){
            mp[arr[r]]++;
            if(mp.size() <= 2){
                maxLen = max(maxLen, r-l+1);
            }
            else{ 
                mp[arr[l]]--;
                if(mp[arr[l]] == 0) mp.erase(arr[l]);
                l++;
            }
            r++;
        }
        return maxLen;
    }
};