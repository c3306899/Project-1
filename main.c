#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//Option 1 Encryption (Rotation)
// This project uses ASCII Table
void encryptRotation(){
	
   int num;
   char s[256];
   
   printf("Enter Rotation Amount: ");
   scanf("%d", &num);
  
  getchar();
  printf("Enter Message For Encryption: ");
  
  gets(s);
  printf("Value of Rotation= %d\n", num);
  printf("Message for Encryption= %s\n", s);
   //Get length of string
   int len = strlen(s);
   //Loop for string length
   for(int i=0;i<len;i++)
   {
    //Checks if character is lowercase, then convert to upper if true
   	if(s[i]>=97 && s[i]<=122)
   	s[i]-=32;
   	//Checks if char is in alphabet range
    if(s[i]>=65 && s[i]<=90){
        //Increment (shift) the character based on the rotation provided
    	s[i]+=num;
    	//Checks is character change goes out of bounds of alphabet
    	if(s[i]>90)
    	//Loop back to start of the alphabet
    	s[i]=65+(s[i]-90)-1;
	}
   }
   
 printf("Encrypted Message = %s\n", s);
  
  }
  
 // Option 2 Decryption (Rotation)  

void decryptRotation(){
int num;
    //Full ASCII Table
   char s[256];
   printf("Enter Rotation Amount: ");
   scanf("%d", &num);
   getchar();
   printf("Enter Ciphertext:");
   gets(s);
   printf("Value of Rotation= %d\n", num);
   printf("Decrypted Message= %s\n", s);
   //Get the length of the string
   int len = strlen(s);
   for(int i=0;i<len;i++)
   {
    if(s[i]>=65 && s[i]<=90){
    	s[i]-=num;
    	if(s[i]<65)
    	s[i]=90-(65-s[i])+1;
	}
   }
      printf("Plaintext = %s\n", s);
   
}

//Option 3 Encryption (Substitution)
void encryptSubstitution(){

   int num;
   char s[256];
   char sub[26];
   //Enter full substitution alphabet
   printf("Enter substitute key: ");
   scanf("%s", &sub);
   getchar();
   printf("Enter Message to Encrypt:");

   gets(s);
   printf("Value of substitute string= %s\n", sub);
   printf("Plaintext message= %s\n", s);

   int len = strlen(s);
   int i=0;
   for(i=0;i<len;i++)
   {
     //Convert any lowercase to upper
   	if(s[i]>=97 && s[i]<=122)
   	s[i]-=32;
  
  if(s[i]>=65 && s[i]<=90){
      //Swap corresponding plaintext with ciphertext from sub key
       s[i]=sub[s[i]-65];
	}
   }
      printf("After Encryption = %s\n", s);
   
}
//Option 4 Decryption (Substitution)

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
    //convert back to ASCII table
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
	//Printing Options 1-6
	int option;
	scanf("%d",&option);

	if(option==1){
	encryptRotation();	    //Runs Option 1
	}
if(option==2){
	decryptRotation();	    //Runs Option 2
	}
	if(option==3)
	{
		encryptSubstitution();    //Runs Option 3
	}
	if(option==4)
	{
	 decryptSubstitution();    //Runs Option 4
	}
	return 0;
}

//End of Program
