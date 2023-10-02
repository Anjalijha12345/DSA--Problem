void printDuplicates(int arr[], int n)
{
int c = 1;
  for(int i = 0; i < n; i++)
   {
   int ind = arr[i] % n;
   arr[ind] += n;

   if(arr[ind]/n == 2)
   {
   cout << ind << " ";
   c = 0;

    }
}

if(c)
cout << "-1";
}
