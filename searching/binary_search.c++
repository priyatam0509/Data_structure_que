int binarySearch(int arr[],int low,int high, int x){
  
    int mid = (low + high)/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]>x){
        return binarySearch(arr,low,mid-1,x);
    }
    else if(arr[mid]<x){
        return binarySearch(arr,mid+1,high,x);
    }
    else{
        return -1;
    }
}