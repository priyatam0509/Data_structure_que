// print frequencies of charachter (in sorted order )in a string of lower case alphabet

void print_char(string s){
    string str= "geeksforgeeks";
    int count[26] =0;
    for(int i=0;i<str.length();i++){
        count[str[i]-'a']++;

    }
    for(int i=0;i<26;i++){
        if(count[i]>0){
            cout<<(char)(i+'a');
            count<<count[i]<<endl;
        }
    }
}
