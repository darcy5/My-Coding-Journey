class Solution {
public:
    string getSmallestString(string s, int k) {
        for (auto &it: s){ //references it and manipulates the value 
            int distLeft = it-'a';
            int distRight = 26-(it-'a');

            if(distLeft < distRight){
                if(distLeft<=k){
                    k-=distLeft; //decrease k by distance
                    it='a';
                }
                else {
                    it=it-k;
                    break; //as k is exhausted
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
//tc= O(n)
//sc= O(1)
};
