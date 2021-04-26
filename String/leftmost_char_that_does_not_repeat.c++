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