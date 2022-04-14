#include <stdio.h>
#include <string.h>
char name[3][20];
int grades[3];
int main()
{
    char name[20];
    int grade;
    for(int i=0;i<3;i++)
    {
        scanf("%s",&name);
        scanf("%d",&grade);
        strcpy(names[i],name);
        grades[i]=grade;

    }
    FILE*fout =fopen("file.txt","w+");
    for(int i=0;i<3;i++)
    {
        printf("%s %d\n",name[i],grades[i]);
        printf(fout,"%s %d\n",name[i],grades[i]);
    }
}
