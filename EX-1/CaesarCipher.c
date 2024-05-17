#include <stdio.h>
int main()
{
char plaintext[100]={0}, ciphertext[100]={0};
int c;
printf("Plaintext:");
while((c=getchar()) != '\n')
{
static int x=0, i=0;
plaintext[i++]=(char)c;
ciphertext[x++]=(char)(c+3);
}
printf("Cipher text:");
printf("%s\n",ciphertext);
return 0;
}