class Solution {
public:
bool ispal(string s,int left,int right){
    while(left<=right){
        if(s[left]!=s[right]) return false;
        left++;
        right--;
    }
    return true;
}
    bool validPalindrome(string s) {
        int n=s.size();
        int left=0;
        int right=s.size()-1;
        while(left<=right){
            if(s[left]!=s[right]){
            return ispal(s,left+1,right)||ispal(s,left,right-1);
            }
            left++;
            right--;
        }
        return true;
    }
};