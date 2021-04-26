// Reverse Words in a string
// i/p:str="Welcome to gfg"
// o/p: str="gfg to welcome"

void reverseWord(char str[],int n){
    int start =0;
    for(int end=0;end<n;end++){
        if(str[end]==''){
            reverse(str,start,end-1);
            start =end+1;
                  
        }
    }
    reverse(str,start,n-1);
    reverse(str,0,n-1);
}