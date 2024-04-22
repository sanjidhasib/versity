#include<stdio.h>
#include<string.h>

int main(){
    char a[15];
    int index,num,i,l;

    printf("\n Enter string : ");
    scanf("%s", a);
    printf("\n Enter index  & number of charecter to delete : ");
    scanf("%d %d", &index,&num);

    l=strlen(a);

    for(i=index+num;i<=l;i++){
        a[i-num]=a[i];
    }

    printf("%s",a);
}