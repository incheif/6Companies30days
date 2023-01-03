class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+"&&tokens[i]!="*"&&tokens[i]!="/"&&tokens[i]!="-"){
                s.push(stoi(tokens[i]));
            }
            else{
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                if(tokens[i]=="+"){
                    s.push(x+y);
                }
                if(tokens[i]=="-"){
                    s.push(y-x);
                }
                if(tokens[i]=="*"){
                    s.push(x*y);
                }
                if(tokens[i]=="/"){
                    s.push(y/x);
                }
            }
        }
        return s.top();
    }
};