void swap_max (int arr[], int l, int n)
{
 int max = arr[n], t, mi = n;
 for (int i=n; i<l; i++)
 {
  if (arr[i]>max)
  {
   max = arr[i];
   mi = i;
  }
 }
 t = arr[n];
 arr[n] = arr[mi];;
 arr[mi] = t;
}
void ssort (int ar[], int m)
{
 for(int i=0; i<m; i++)
 {
  swap_max(ar, m, i);
 }
}
