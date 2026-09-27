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

        vector<int> start,end;
        int n = intervals.size();
        for(int i=0;i<n;i++){
            start.push_back(intervals[i].start);
            end.push_back(intervals[i].end);
        }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());

        int i=0,j =0,cnt=0;
        while(i<n && j<n){
            if(start[i] < end[j]){
                cnt++;
                i++;
            }

            else{
                i++;j++;
            }
        }
        
        return cnt;
    }
};
