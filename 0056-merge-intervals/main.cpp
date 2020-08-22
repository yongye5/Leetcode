
#include <iostream>
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.size() == 0) {
            return {};
        }
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged{{intervals[0][0], intervals[0][1]}};
        for(int i = 1; i < intervals.size(); i++){
            if(merged.back()[1] < intervals[i][0]){
                merged.push_back({intervals[i][0], intervals[i][1]});
            }else{
                merged.back()[1] = max(merged.back()[1], intervals[i][1]);
            }
        }
        return merged;
    }
};
int main(){

    system("pause");
    return 0;
}