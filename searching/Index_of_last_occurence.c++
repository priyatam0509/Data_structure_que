naive solution

i/p: arr[] = {10,15,20,20,40,40}
x= 20
o/p : 3

int last_index(int arr[], int n, int x){
    for(int i=n-1;i>=0;i--){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

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