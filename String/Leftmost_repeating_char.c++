// leftmost repeating charachter
// i/p: str="geeksforgeeks"
// o/p:0
int leftmost(string str){
    str = "abbcc";
    int n=str.length()-1;
    int hash[256] ={0};
    for(int i=0;i<=n;i++){
        hash[str[i]]++;
    }
    for(int i=0;i<=n;i++){
        if(hash[str[i]]>1){
            return i;
        }
    }
    return -1; 
}



const int CHAR=256;
int leftmost(string &str){
   bool visited[char] = {false};
   int res =-1;
   for(int i=str.length();i>=0;i--){
    if(visited[str[i]]){
        res =i;
    }
    else{
        visited[str[i] = true;]
    }
   }
   return res;
}