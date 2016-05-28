#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>

struct s
{
long typ;
char *tab;
};

int main()
{
int n;
char *tablica=(char*)malloc(n*sizeof(char));
printf("Podaj wyraz: \n");
scanf("%d",&tablica[n]);
struct s obiekt;
obiekt.tab=(char*)malloc(n*sizeof(char));
int i;
for(i=0; i<n; i++)
{
obiekt.tab[i]=tablica[i];
}
int msgid;
msgid=msgget(123, IPC_CREAT|IPC_EXCL|0600);
if(msgid==-1)
{
printf("Blad!\n");
exit(1);
}
else
{
int m;
m=msgsnd(msgid, &obiekt, n, 0);
if(m==-1)
{
printf("Blad!");
exit(1);
}
}
return 0;
}
