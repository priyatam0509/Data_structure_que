int index(int arr[], int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}  


int inderx(int arr[], int low,int high, int x ){
    if(low>high){
        return -1;
    }
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=arr[mid]||mid==0){
                return mid;
            }
            else{
                high = mid -1;
            }
        }
        else if(arr[mid]>x){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }    
}