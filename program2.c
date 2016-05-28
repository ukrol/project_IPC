#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>

struct str
{
long typ;
char *tab;
};

int main()
{
struct str obiekt;
int msgid;
msgid=msgget(123, IPC_CREAT|IPC_EXCL|0600);
obiekt.typ=777;
int n;
obiekt.tab=(char*)malloc(n*sizeof(char))
int u=msgscv(msgid, &obiekt, n, 0, 0);
int i;
if(msgid==-1)
{
printf("Blad!\n");
exit(1);
}
else
{
if(u==-1)
{
printf("Blad!\n");
exit(1);
}
else
{
if(obiekt.tab[0]>=65 && obiekt.tab[0]<=90 && obiekt.tab[0]>=97 && obiekt.tab[0]<=122)
{
for(i=1; i<n; i++)
{
if(obiekt.tab[i]>=0 && obiekt.tab[i]<=255)
{
printf("Wyraz poprawny!\n");
}
else
{
printf("Wyraz niepoprawny!\n");
}
}
else
{
printf("Wyraz niepoprawny!\n");
}
}

}
