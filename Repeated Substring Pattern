class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.size()==1){                             //base case
            return false;
        }
      string s1="";
        
        for(int i=0;i<s.length()/2;i++){       //going upto the middle is very important because beyond that we might get the whole string itself.
            s1+=s[i];
            
            int n=s.length()/s1.length();      //another important criteria 
            string temp="";
            while(n--){
              temp+=s1;  
            }
            //cout<<temp<<endl;
            if(temp==s){
                return true;
            }
        }
        return false;
          
    }
};
