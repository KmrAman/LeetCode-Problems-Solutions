class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        for(auto &x:piles)
            pq.push(x);
        int ans=0;
        while(k--){
            if(pq.top()%2!=0){
                int temp=(pq.top()+1)/2;
                pq.pop();
                pq.push(temp);
            }
            else{
                int temp=pq.top()/2;
                pq.pop();
                pq.push(temp);
            }
        }
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};