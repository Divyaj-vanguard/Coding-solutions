class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> result;
        int i;
        for(i=1;i<mountain.size()-1;i++){
            if(mountain[i]>mountain[i+1] && mountain[i]>mountain[i-1]){
                result.push_back(i);
            }
        }
        return result;
    }
};