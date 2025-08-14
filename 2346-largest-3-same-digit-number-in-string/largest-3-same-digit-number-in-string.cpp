class Solution {
public:
    string largestGoodInteger(string num) {
        string curr;
        string maxgood = "";
        for (int i=0;i<=num.size()-3;i++){
            curr = num.substr(i,3);
            if(curr[0]==curr[1] && curr[1]==curr[2]){
                 if(curr>maxgood) maxgood=curr;
                
            }
        }
        return maxgood;
    }
    
};