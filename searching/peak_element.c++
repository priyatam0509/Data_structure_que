vector<int> peak_element(int arr[],int n){
    vector<int>v;
    if(n==1){
      v.push_back(arr[0];)
    }
    if(arr[0]>=arr[1]){
        v.push_back(arr[0]);
    }
    else if(arr[n-1]>= arr[n-2]){
        v.push_back(arr[n-1]);
    }
    for(int i =1;i<n-1;i++){
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
            v.push_back(arr[i]);
        }
    }
    return v;

}

int getApeak(int arr[],int n){
    int low =0, int high = n-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if((mid==0||arr[mid-1]<=arr[mid])&&(mid==n-1||arr[mid+1]<=arr[mid])){
            return mid;
         }
         if(mid>0&&arr[mid-1]>=arr[mid]){
             high = mid-1;
         }
         else{
             low = mid+1;
         }
    }
    return -1;
    
}