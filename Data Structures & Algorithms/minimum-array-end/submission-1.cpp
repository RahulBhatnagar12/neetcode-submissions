class Solution {
public:
    long long minEnd(int n, int x) {
       long long ans=x;
       long long k=n-1;
       long long pos=0;
       while(k){
          if((ans&(1LL<<pos))==0) {
            if(k&1){
                  ans |= (1LL << pos);
            }
             k >>= 1;
        }
          pos++;
       }
       return ans;
    }
};