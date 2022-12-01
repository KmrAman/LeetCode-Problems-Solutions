class Solution {
public:
    int countDigitOne(int A) {
        long long ans=0;
    for(long long i=1;i<=A;i*=10){
        long long divider=i*10;
        //finding the number of one's in each place 
        ans+=(A/divider)*i+min(max(A%divider-i+1,0LL),i);
    }
    return (int)ans;
    }
};