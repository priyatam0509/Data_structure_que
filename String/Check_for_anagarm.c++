//check for anagram = permutation of two string should be same
// i/p: s1="listen", s2="silent"
// o/p:- yes

bool anagram(string s1, string s2){
    int hash[26];
    int n = s1.length()-1;
    if(s1.length()!=s2.length()){
        return false;
    }
    for(int i=0;i<n;i++){
        hash[s1[i]-'a']++;
        hash[s1[i]-'A']++;
        hash[s2[i]-'a']++;
        hash[s2[i]-'A']++;
    }
    for(int i=0;i<26;i++){
        if (hash[i]%2!=0){
            return false; 
        }
    }
    return true;
}