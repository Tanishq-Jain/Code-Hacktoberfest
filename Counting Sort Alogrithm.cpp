
#define Range 255
void countSort(char arr[])
{
    char output[strlen(arr)];
    int count[Range+1],i;
    memset(count,0,sizeof(count));
    for(i=0;arr[i];++i)
    ++count[arr[i]];
    for(i=1;i<=Range;++i)
    count[i]+=count[i-1];
    for(i=0;arr[i];++i)
    {
    	output[count[arr[i]]-1]=arr[i];
    	--count[arr[i]];
	}

}
int main()
{
	char arr[] ="Naitik";
	countSort(arr);
	printf("Sorted array is %s\n",arr);
	return 0;
}

