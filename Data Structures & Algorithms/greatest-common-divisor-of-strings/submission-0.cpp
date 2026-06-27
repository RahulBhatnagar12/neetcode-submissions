class Solution {
public:
bool divides(string &str,string &pat){
    int n=str.size();
    int m=pat.size();
    if(n%m!=0) return false;
    string temp="";
    for(int i=0;i<n/m;i++){
         temp+=pat;
    }
    return temp==str;
}
    string gcdOfStrings(string str1, string str2) {
         int len=min(str1.size(),str2.size());
         for(int i=len;i>=1;i--){
            string candidate=str1.substr(0,i);
            if(divides(str1,candidate) && divides(str2,candidate)) return candidate;
         }
    return "";
    }
};