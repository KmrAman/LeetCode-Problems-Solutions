class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int curbal=0,rembal=0,start=0;
        for(int i=0;i<gas.size();i++){
            rembal+=gas[i]-cost[i];
            curbal+=gas[i]-cost[i];
            if(curbal<0){
                start=i+1;
                curbal=0;
        }
    }
        return rembal>=0?start:-1;
        
    }
};