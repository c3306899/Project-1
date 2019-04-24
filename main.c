/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void encryptRotation(){
	
   int num;
   char s[256];
   
   //fflush(stdout);
   printf("Enter rotation: ");
   scanf("%d", &num);
  
  getchar();
  printf("Enter string: ");
 // scanf("%[^\n]s",s);
  gets(s);
  printf("Value of rotation= %d\n", num);
  printf("Value of string= %s\n", s);
   int len = strlen(s);
   int i=0;
   for(i=0;i<len;i++)
   {
   	if(s[i]>=97 && s[i]<=122)
   	s[i]-=32;
    if(s[i]>=65 && s[i]<=90){
    	s[i]+=num;
    	if(s[i]>90)
    	s[i]=65+(s[i]-90)-1;
	}
   }
   
 printf("After Encryption = %s\n", s);
  
  }
  
  

void decryptRotation(){
int num;
   char s[256];
   printf("Enter Rotation: ");
   scanf("%d", &num);
   getchar();
   printf("Enter cipher:");
   gets(s);
   printf("Value of rotation= %d\n", num);
   printf("Value of string= %s\n", s);

   int len = strlen(s);
   int i=0;
   for(i=0;i<len;i++)
   {
    if(s[i]>=65 && s[i]<=90){
    	s[i]-=num;
    	if(s[i]<65)
    	s[i]=90-(65-s[i])+1;
	}
   }
      printf("After Decryption = %s\n", s);
   
}
void encryptSubstitution(){

   int num;
   char s[256];
   char sub[26];
   printf("Enter substitue key: ");
   scanf("%s", &sub);
   getchar();
   printf("Enter message:");

   gets(s);
   printf("Value of substitute string= %s\n", sub);
   printf("Value of string= %s\n", s);

   int len = strlen(s);
   int i=0;
   for(i=0;i<len;i++)
   {
   	if(s[i]>=97 && s[i]<=122)
   	s[i]-=32;
    if(s[i]>=65 && s[i]<=90){
       s[i]=sub[s[i]-65];
	}
   }
      printf("After Encryption = %s\n", s);
   
}

void decryptSubstitution(){
int num;
   char s[256];
   char sub[26];
   
   printf("Enter substitue key: ");
   scanf("%s", &sub);
   getchar();
   printf("Enter cipher:");

   gets(s);

   int len =strlen(s);
   int i=0;
  // printf("%d \n",len);
   for(i=0;i<len;i++)
   {
    if(s[i]>=65 && s[i]<=90){
    int j=0;
    for(j=0;j<26;j++)
    if(s[i]==sub[j])
    {
    //	printf("%c %d \n",s[i],j);
		s[i]=65+j;
		break;
	}

	}
   }
      printf("After Decryption = %s\n", s);
  
}  

int main()
{	printf("Select any one option: \n");
	printf(" 1. Encryption of a message with a rotation cipher given the message text and rotation amount \n 2. Decryption of a message encrypted with a rotation cipher given cipher text and rotation amount\n 3. Encryption of a message with a substitution cipher given message text and alphabet substitution \n 4. Decryption of a message encrypted with a substitution cipher given cipher text and substitutions\n");
	//printf("1 \n2 \n3 \n4 \n5 \n6 \n");
	int option;
	scanf("%d",&option);

	if(option==1){
	encryptRotation();	
	}
if(option==2){
	decryptRotation();	
	}
	if(option==3)
	{
		encryptSubstitution();
	}
	if(option==4)
	{
	 decryptSubstitution();
	}
	return 0;
}
