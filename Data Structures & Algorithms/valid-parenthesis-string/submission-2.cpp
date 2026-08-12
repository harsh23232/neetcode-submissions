class Solution {
public:
    bool checkValidString(string s) {
        int star =0;
        int bal = 0;

        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                bal++;
            }else if(s[i] == ')'){
                bal--;
                
            }else{
                star++;
            }
            if(bal+star<0){
                return false;
            }

        }
        bal = 0;
        star =0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i] == ')'){
                bal++;
            }else if(s[i] == '('){
                bal--;
                
            }else{
                star++;
            }
            if(bal+star<0){
                return false;
            }

        }
        return true;

        
    }
};
