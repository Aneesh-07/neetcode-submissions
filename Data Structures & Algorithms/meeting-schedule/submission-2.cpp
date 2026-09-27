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
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j)
                if(!(interval[i].start < interval[j].start && interval[i].end <= interval[j].start || interval[i].start >= interval[j].end && interval[i].end > interval[j].end)) return false;                }
        }
    return true;
    }
};
