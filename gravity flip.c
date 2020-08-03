 #include<stdio.h>
 int main()
 {
 int i,j,c,temp;
 scanf("%d",&c);
 int arr[c];
 for(i=0;i<c;i++)
 {
     scanf("%d",&arr[i]);
 }



 for(i=0; i<c; i++)
    {
        for(j=i+1; j<c; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        printf("%d ",arr[i]);

    }
 }
