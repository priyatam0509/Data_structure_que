int last_index(int arr[],int low,int high,int x){
    int n = arr.length();
   
    while (low<=high)
    {
         int mid = (low+high)/2;
        if(arr[mid>x){
            return last_index(arr, low, mid-1, x);
        }
        else if(arr[mid]<x){
            return last_index(arr,mid+1,high,x);
        }
        else{
            if(mid!=n-1|| arr[mid+1]!=arr[mid]){
                return mid;
            }
            else{
                return last_index(arr,mid+1,high,x);
            }
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
int countocc(int arr[], int n , int x){
        int first = inderx(arr, 0, n-1,x);
        if(first == -1){
            return 0;
        }
        int last  = last_index(arr, 0, n-1, x);
        return last-first+1;
}