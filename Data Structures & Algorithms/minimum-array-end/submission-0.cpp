class Solution {
public:
    long long minEnd(int n, int x) {
        long long ans=x;
        long long k=n-1;
        int bit=0;
        while(k>0){
            if((ans&(1LL<<bit))==0){
                if(k&1){
                    ans|=(1LL<<bit);

                }
                k>>=1;

            }
            bit++;
        }
        return ans;
    }
};