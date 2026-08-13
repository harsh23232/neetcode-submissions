class Solution {
public:

    bool ispal(int l , int r , string s ){
        while (l<=r){
            if (s[l]==s[r]){
                l++;
                r--;
            }
            else{
                return false;
            }

        }

        return true;
    }
    string longestPalindrome(string s) {

        int i = 0;

        int j = s.size()-1;

        int cnt = 0;

        int maxs = 1;

        string st ;

        while (i < s.length()){

            if( s[i]==s[j]){
                if (i==j){


                    if (maxs==1){
                        st = s.substr(i,1);
                    }


                    i++;
                    j= s.size()-1;

                }
                else if (ispal(i,j,s)){
                    cnt=j-i+1;

                    if (cnt >= maxs){
                        maxs= cnt;
                        st = s.substr(i,cnt);
                    }
                    i++;
                    j= s.size()-1;
                    

                }
                else {
                    j--;

                }
                
            }
            else{
                j--;
            }

            
            

            
        }

        return st;
    
        
    }
};
