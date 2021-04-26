// leftmost non-repeating charachter
// i/p: str ="geeksforgeeks"
// o/p =5


int non_repeating(string str){
    int hash[256]={0};
    for(int i=0;i<str.length();i++){
        hash[str[i]]++;
    }
    for(int i=0;i<str.length();i++){
        if(hash[str[i]]==1){
            return i;
        }
    }
    return -1;
}





const int CHAR =256;
int non_rep(string &str){
    int f1[CHAR] ={-1};
    for(int i=0;i<str.length();i++){
        if(f1[str[i]]==-1){
            f1[str[i]]=i;
        }
        else{
            f1[str[i]]=-2;
        }
    }
    int res = INT_MAX;
    for(int i=0;I<CHAR;i++){
        if(f[i]>=0){
            res=min(res,f[i]);
        }
        return (res==INT_MAX)?-1:res;
    }
}