int main()
{
    int n;
    int a[1000];
    long int b[1000];
    long int num=0;
    int i=0,j;

    scanf("%d\n",&n);

    do{
        scanf("%d",&a[i]);
        i++;
    }while(i<n);

    for(i=0;i<n;i++){
        b[i]=0;
        for(j=i+1;j<i+n;j++){
            b[i]+=a[i]*a[j%n]*a[(j+1)%n];
        }
        if(b[i]>num){
            num=b[i];
        }
    }
    printf("%ld",num);

    return 0;
}
