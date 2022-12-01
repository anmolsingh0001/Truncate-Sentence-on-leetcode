class Solution {
public:
    string truncateSentence(string s, int k) {
        int count=0;
        string test;
        for(int i=0; i<s.size(); i++){
            if(s[i]==' '){
                count++;
            }
            if(count==k){
                return test;
            }
            else{
                test+=s[i];
            }
        }
        return s;
    }
};