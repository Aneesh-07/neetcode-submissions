/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& interval) {
        int minStart =0 ,maxStart=0, n = interval.size();
        sort(interval.begin(),interval.end(),[](auto &a , auto &b){return a.start < b.start; });

        for(int i=0;i<n-1;i++){
            if(interval[i].end > interval[i+1].start) return false;
        }

        return true;
    }
};
