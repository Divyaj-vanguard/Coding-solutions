class Solution {
public:
    bool checkValidString(string s) {
        int i,c=0;
        if(s.size()==1)
        c=1;
        else{
            for (i=0;i<s.size();i++){
                if(s[i]=='(')
                c+=1;
                else if(s[i]==')')
                c-=1;
            }
             for (i=0;i<s.size()-1;i++){
                  if(s[i]=='*'){
                    if(c>0){
                        c-=1;
                    }
                    else if(c<0){
                        c+=1;
                    }
                  }
      
                }
            }
        if(c==0){
            return true;
        }
        else return false;
    }
};