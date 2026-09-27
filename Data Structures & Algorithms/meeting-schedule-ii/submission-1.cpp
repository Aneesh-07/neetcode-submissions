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
    int minMeetingRooms(vector<Interval>& intervals) {
        int max_end = 0;
        for(auto i:intervals) max_end = max(max_end,i.end);

        vector<int>timeline(max_end+1,0);

        for(auto i:intervals){
            timeline[i.start]++;
            timeline[i.end]--;
        }

        int cnt=0,overlap=0;
        for(auto i:timeline){
            overlap+=i;
            cnt = max(cnt,overlap);
        }

        return cnt;
    }
};
