vector<int> peak_element(int arr[],int n){
    vector<int>v;
    if(n==1){
      v.push_back(arr[0];)
    }
    if(arr[0]>arr[1]){
        v.push_back(arr[0]);
    }
    else if(arr[n-1]>arr[n-2]){
        v.push_back(arr[n-1]);
    }
    for(int i =1;i<n-1;i++){
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
            v.push_back(arr[i]);
        }
    }
    return v;

}