class Solution {
public:
    
    
    
    
    string largestTimeFromDigits(vector<int>& A) {
       map<int,int>mp,mp2;
        int hh=23;
        int mm=59;
        
        for(int i=0;i<4;i++){
            mp[A[i]]++;
        }
        //map<int,int>mp2;
        mp2=mp;
        while(hh>=0){
            int h0=hh/10;
            int h1=hh%10;
            int m0=mm/10;
            int m1=mm%10;
            int p=0;
            mp=mp2;
            if(mp[h0]>0){
                mp[h0]--;
            }
            else{
                p=1;
            }
            if(mp[h1]>0){
                mp[h1]--;
            }
            else{
                p=1;
            }
            if(mp[m0]>0){
                mp[m0]--;
            }
            else{
                p=1;
            }
            if(mp[m1]>0){
                mp[m1]--;
            }
            else{
                p=1;
            }
            if(p==0){
                string x="";
                x+=to_string(h0)+to_string(h1)+':'+to_string(m0)+to_string(m1);
                return x;
            }
            if(mm==0){
                hh=hh-1;
                mm=59;
            }
            else{
                mm--;
            }
        }
        return "";
        
    }
};
