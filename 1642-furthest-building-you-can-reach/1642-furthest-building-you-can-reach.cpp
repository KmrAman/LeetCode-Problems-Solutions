class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        int diff;
        priority_queue<int,vector<int>> pq;
        for(int i=0;i<h.size()-1;i++){
            diff=h[i+1]-h[i];
            if(diff>0){
                b-=diff;
                pq.push(diff);
            }
            
            if(b<0){
                if(l<=0)
                    return i;
                b+=pq.top();
                pq.pop();
                l--;
            }
            
        }
        return h.size()-1;
    }
};