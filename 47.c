int find_max(int arr[],int size){
  int i;
  int max = -1;
  for(i=0;i<size;i++){ if(arr[i] > max){
      max = arr[i];
    }
  }
  return max;
}
int find_min(int arr[],int size){
  int i;
  int min = arr[0];
  for(i=1;i<size;i++){
    if(arr[i]<min){
      min = arr[i];
    }
  }
  return min;
}
int main(){
  int i,total;
  printf("Enter total no of elements : ");
  scanf("%d",&total);
