class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string ans;
        priority_queue<pair<int,char>> pq;
        if(a!=0)
            pq.push(make_pair(a,'a'));
        if(b!=0)
            pq.push(make_pair(b,'b'));
        if(c!=0)
            pq.push(make_pair(c,'c'));
        
        while(!pq.empty()){
            int top1=pq.top().first;
            char top1_c=pq.top().second;
            pq.pop();
            if(ans.size()==0 || ans.back()!=top1_c){
                int times=0;
                times=min(2,top1);
                for(int i=0;i<times;i++)
                    ans+=top1_c;
                top1-=times;
                if(top1>0)
                    pq.push({top1,top1_c});
            }
            else{
                if(pq.size()==0)
                    break;
                int top2=pq.top().first;
                char top2_c=pq.top().second;
                pq.pop();
                ans+=top2_c;
                top2--;
                if(top2>0)
                    pq.push({top2,top2_c});
                pq.push({top1,top1_c});
            }
        }
        return ans;
    }
};