int search(int arr[], int x){
    int i =0;
    while (true)
    {
        if(arr[i]==x){
            return i;
        }
        if(arr[i]>x){
            return -1;
        }
        i++;
    }
    
}

int search(int arr[],int x){
    if(arr[0]==x) return 0;
    int i=1;
    while (arr[i]<x)
    {
        i =i*2;
        if(arr[i]==x)return i;
    }
    return binarysearch(arr,x,i/2+1;i-1);
    
}