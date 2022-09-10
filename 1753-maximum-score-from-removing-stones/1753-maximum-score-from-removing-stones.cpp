class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int ans=0;
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        while(1){
            int p=pq.top();
            pq.pop();
            int q=pq.top();
            pq.pop();
            ans++;
            if(p-1!=0){
                pq.push(p-1);
            }
            if(q-1!=0)
                pq.push(q-1);
            if(pq.size()<=1){
                return ans;
            }
        }
        return ans;
    }
};