#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("read.txt","r");
    if(!fp)
    {
        printf("Error in opening file\n");
        return 0;
    }
    
    printf("Position of the pointer : %ld\n",ftell(fp));
    
    char ch;
    while(fread(&ch,sizeof(ch),1,fp)==1)
    {
        
        printf("%c",ch);
    }
    printf("Position of the pointer : %ld\n",ftell(fp));
    
    
    rewind(fp);
    printf("Position of the pointer : %ld\n",ftell(fp));
    
    fclose(fp);
    return 0;
}

