## palindrome Check


bool palindrome(string s){
    s = "ABCDCBA";
    int low =0;
    int high  = s.length()-1;
    int flag =0;
    while(low<high){
        if(s[low]==s[high]){
            low++;
            high --;
        }
        else{
            flag =1;
            break;
        }
    }
    if(flag==1){
        return false;
    }
    else{
        return true;
    }
}