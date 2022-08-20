class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        int diff;
        priority_queue<int> pq;
        for(int i=0;i<h.size()-1;i++){
            diff=h[i+1]-h[i];
            //next building is greater than current building
            if(diff>0){
                b-=diff;
                //storing difference of next building and current building
                pq.push(diff);
            }
            //there is no more bricks left,now ladders should be used
            if(b<0){
                //No sufficient ladder left we need stop 
                if(l<=0)
                    return i;
                
                //this means we are using ladder where diff between two building
                //is largest
                b+=pq.top();
                pq.pop();
                l--; // ladder is used
            }
            
        }
        return h.size()-1;
    }
};