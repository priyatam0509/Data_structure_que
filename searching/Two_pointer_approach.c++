bool ispair(int arr[],int n,int x){
    int left =0, int right = n-1;
    while(left<=right){
        if(arr[left]+arr[right]==x){
            return true;
        }
        else if(arr[left]+arr[right]<x){
            left++;
        }
        else{
            right--;
        }
    }
    return false;  
}

//for triplet with a given sum

bool istriplet(int arr[],int n, int x){
    for(int i=0;i<n;i++){
        if(ispair(a,i+1,n-1,x-a[i]))
        return true;
    }
    return false;
}