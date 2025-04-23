class Solution {
    public:
        string clearDigits(string s) {
            string st ="";
            for(int  i = 0 ; i < s.length() ;i++){
                if(isdigit(s[i])){   // isdigit() :- Checks if it is a digit of not
                    st.pop_back();
                }else{
                    st+=s[i];
                }
            }
            return st;
        }
    };
