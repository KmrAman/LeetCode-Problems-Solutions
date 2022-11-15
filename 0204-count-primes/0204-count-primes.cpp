class Solution {
public:
    int countPrimes(int n) {
        if(n==0||n==1||n==2)
            return 0;
         bool a[n];
        int count=0;
    for(int i=0;i<n;i++){
        a[i]=true;
      //  cout<<a[i]<<" ";
    }
    for(int i=2;i*i<=n;i++){
        if(a[i]){
            for(int j=i*i;j<n;j=j+i){
                a[j]=false;
            }
        }
    }
    for(int i=2;i<n;i++){
        if(a[i]){
            count++;
        }
    }
        return count;
    }
};