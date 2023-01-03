class Solution {
public:

    string getHint(string secret, string guess) {
        int bull=0;
        int cow=0;
        int s[11]={0},b[11]={0};
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i]){
                bull++;
            }
            else{
                s[secret[i]-'0']++;
                b[guess[i]-'0']++;
            }
        }
        for(int i=0;i<=9;i++){
            cow+=min(s[i],b[i]);
        }
        string ans=to_string(bull)+"A"+to_string(cow)+"B";
        return ans;
    }
};