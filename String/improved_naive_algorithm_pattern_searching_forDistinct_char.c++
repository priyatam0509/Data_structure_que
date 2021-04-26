// txt = "ABCABCD";
// patt ="ABCD"
// o/p:3

void patseraching(string &pattern,string &txt){
    int n = txt.length();
    int m = pattern.length();
    for(int i=0;i<=n-m){
        int j;
        for(j=0;j<m;j++){
              if(pattern[j]!=txt[i+j]){
                  break;
              }
              if(j==m){
                  cout<<i<<" ";
              }
              if(j==0){
                  i++;
              }
              else{
                  i=i+j;
              }
        }
    }
}