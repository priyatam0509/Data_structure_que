// string txt ="ABCDABCD";
// string pattern ="ABCD";
// o/p:- 1,4

vector<int>patsearching(string &txt,string &pat){
    int m=pat.length();
    int n = txt.length();
    vector<int>v;
    for(int i=0;i<n-m+1;i++){
        int j;
        for(j=0;j<m;j++){
            if(pat[j]!=txt[i+j]){
                break;
            }
            if(j==m){
                v.push_back(i);
            }
        }
   
   
    }
         return v;
}
if(v.size()==0){
    cout<<"not found";
}
for(auto x:v){
    cout<<x;
}