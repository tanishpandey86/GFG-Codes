class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval) {
        
        int a=newInterval[0];
        int b=newInterval[1];
        int n=intervals.size();
        vector<vector<int>>ans;
        int i=0;
        while(i<n && intervals[i][1]<a)
        {
            ans.push_back(intervals[i]);
            i++;
        }
        //merged intervals
        while(i<n && (intervals[i][0]<=b &&  intervals[i][1]>=a))
        {
            a=min(a,intervals[i][0]);
            b=max(b,intervals[i][1]);
            i++;
        }
        ans.push_back({a,b});
        while(i<n)
        {
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};