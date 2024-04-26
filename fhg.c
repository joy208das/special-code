#include <stdio.h>
int main() {
    int n,k;
    scanf(" %d %d",&n,&k);
int count=0;


for(int i=0;i<n;i++){

int arr[n];

scanf(" %d",&arr[i]);
if(n>0 && k>=0){
if(arr[i]>k){
    count++;
}}

}



printf("%d",count);

    return 0;
}
