class Solution {
public:
    vector<int> partitionLabels(string S) {
        int a[26]={0};
        for(int i=0;i<S.size();i++){
            a[S[i]-'a']=i;
        }
        int i=0;
        //int j=0;
        vector<int>v;
        int k=0;
        while(i<S.size()){
            int j=a[S[i]-'a'];
            
            while(i!=j){
                if(a[S[i]-'a']>j){
                    j=a[S[i]-'a'];
                    
                }
                i++;
            }
            v.push_back(j-k+1);
            i++;
            k=i;
        }
        return v;
    }
};
