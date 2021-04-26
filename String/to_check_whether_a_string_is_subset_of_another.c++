s1="GEEKSFORGEEKS";
s2="GRGES"


bool subset(string s1, string s2){
    int i=0;
    int j=0;
    while(i!=s1.length()||j!=s2.length()){
        if(s1[i]==s2[i]){
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    if(i==s1.length() && j!=s2.length()){
            return false;
    }
    return true;
}