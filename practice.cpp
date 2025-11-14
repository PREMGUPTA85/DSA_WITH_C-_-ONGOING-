
//132.Search target in a nearly sorted array where each element may be misplaced by ±1 index
int nearlysearch(int arr[],int size,int target){
    int s=0,e=size-1,mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target) return mid;
        if(arr[mid-1]==target) return mid-1;
        if(arr[mid+1]==target) return mid+1;
        if(target>arr[mid]) s=mid+2;
 
