
//iterative Two pointer

class Solution {
public:
    int compareVersion(string v1, string v2) {
        int i=0;
        int j=0;
        
        while(i<v1.size()||j<v2.size()){
            int n1=0;
            int n2=0;
            while(i<v1.size()&&v1[i]!='.'){
                n1=n1*10 +(v1[i]-'0');
                i++;
                        
            }
            while(j<v2.size()&&v2[j]!='.'){
                n2=n2*10 +(v2[j]-'0');
                j++;
                        
            }
            
            if(n1>n2){
                return 1;
            }
            if(n1<n2){
                return -1;
            }
            i++;
            j++;
        }
        
        return 0;
    }
};
