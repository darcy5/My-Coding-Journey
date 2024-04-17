class Solution {
public:
    string getSmallestString(string s, int k) {
        for (auto &it: s){
            int distLeft = it-'a';
            int distRight = 26-(it-'a');

            if(distLeft < distRight){
                if(distLeft<=k){
                    k-=distLeft;
                    it='a';
                }
                else {
                    it=it-k;
                    break;
                }
            }

            else{
                if(distRight<=k){
                    k-=distRight;
                    it='a';
                }
                else{
                    it=it-k;
                    break;
                }
            }
        }
        return s;
    }
};