#include<stdio.h>
int main(){
    int i,n,key,position=0,mid=0,low=0;
    printf("enter n value");
    scanf("%d",&n);
    int a[n];
    int high =n-1;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("enter key :");
    scanf("%d",&key);
    while(low<=high){
        mid =(low+high)/2;
        if(key==a[mid]){
            position=mid;
            break;
        }else if(key<a[mid]){
            high = mid-1;

        }else{
            low =mid-1;
  
        }
    }printf("element found at position: %d",position);

    return 0;
}