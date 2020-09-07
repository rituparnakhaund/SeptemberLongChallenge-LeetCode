class Solution {
public:
   bool find(unordered_map<char,string>a,string word){
        for(auto it:a){
            if(it.second==word){
                return true;
            }
        }
        return false;
    }
    bool wordPattern(string pattern, string str) {
        
        unordered_map<char,string>a;
        vector<string>v;
        int i=0;
         int c=0;       
        string s;
        while(i<str.size()){
            
            if(str[i]!=' '){
               s.push_back(str[i]); 
            }
            else if(str[i]==' '){
                
                v.push_back(s);    
                
                    //cout<<s<<endl;
                
                s.clear();
            }
            i++;
        }
        v.push_back(s);
        s.clear();
        if(v.size()!=pattern.size()){
            return false;
        }
        //vector<string>a(26);
        
        for(int j=0;j<pattern.size();j++){
            char curr=pattern[j];
           if(!a.count(curr)){
               if(find(a,v[j])){
                   return false;
               }
               a[curr]=v[j];
           }
            else{
                if(a[curr]!=v[j]){
                    return false;
                }
            }
        }
        return true;
    }
};
