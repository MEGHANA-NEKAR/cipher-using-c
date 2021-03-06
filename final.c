//ENCRYPTION OF STRING USING VIGENERE CIPHER
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
 printf("Choose weather to ENCRYPT(e) or DECRYPT(d)\n");
 char c;
 scanf("%c",&c);
 if(c == 'e'){
   int i,j,k,numstr[100],numkey[100],numcipher[100];
   char str[100],key[100];
   printf("Enter a string\n");
   //gets(str);
   scanf("%s",str);

   //converting entered string to Capital letters
   for(i=0,j=0;i<strlen(str);i++)
   {
   if(str[i]!=' ')
   {
      str[j]=toupper(str[i]);   
      j++;
   }
   }
   str[j]='\0';
   printf("Entered string is : %s \n",str);
   //Storing string in terms of ascii
   for(i=0;i<strlen(str);i++)
   {
   numstr[i]=str[i]-'A';
   }
   printf("Enter a key\n");
   //gets(key);
   scanf("%s",key);



      //converting entered key to Capital letters
   for(i=0,j=0;i<strlen(key);i++)
   {
   if(key[i]!=' ')
   {
      key[j]=toupper(key[i]);   
      j++;
   }
   }
   key[j]='\0';


      //Assigning key to the string
      for(i=0;i<strlen(str);)
      {
      for(j=0;(j<strlen(key))&&(i<strlen(str));j++)
      {
         numkey[i]=key[j]-'A';
         i++;
      }
      
      }
      
      for(i=0;i<strlen(str);i++)
      {
      numcipher[i]=numstr[i]+numkey[i];
      }
      for(i=0;i<strlen(str);i++)
      {
      if(numcipher[i]>25)
      {
         numcipher[i]=numcipher[i]-26;
      }
      }
      printf("Vigenere Cipher text is\n");   
      for(i=0;i<strlen(str);i++)
      {
         printf("%c",(numcipher[i]+'A')); 
      }
      
   printf("\n");
   }



//DECRYPTION OF STRING USING VIGENERE CIPHER

else if(c == 'd'){
   int i,j,k,numstr[100],numkey[100],numcipher[100];
   char str[100],key[100];
   printf("Enter a string to Decrypt\n");
   //gets(str);
   scanf("%s",str);
   //converting entered string to Capital letters
   for(i=0,j=0;i<strlen(str);i++)
   {
   if(str[i]!=' ')
   {
      str[j]=toupper(str[i]);   
      j++;
   }
   }
   str[j]='\0';
   printf("Entered string is : %s \n",str);
   //Storing string in terms of ascii
   for(i=0;i<strlen(str);i++)
   {
   numstr[i]=str[i]-'A';
   }
   printf("Enter a key\n");
   //gets(key);
   scanf("%s",key);
      //converting entered key to Capital letters
   for(i=0,j=0;i<strlen(key);i++)
   {
   if(key[i]!=' ')
   {
      key[j]=toupper(key[i]);   
      j++;
   }
   }
   key[j]='\0';
      //Assigning key to the string
      for(i=0;i<strlen(str);)
      {
      for(j=0;(j<strlen(key))&&(i<strlen(str));j++)
      {
         numkey[i]=key[j]-'A';
         i++;
      }
      
      }
      
      for(i=0;i<strlen(str);i++)
      {
      numcipher[i]=numstr[i]-numkey[i];//changed from + to - for decryption 
      if(numcipher[i]<0)
      {
         numcipher[i]+=26;
      }
      }

      printf("Decrypted Vigenere Cipher text is\n");   
      for(i=0;i<strlen(str);i++)
      {
         printf("%c",(numcipher[i]+'A')); 
      }
      
   printf("\n");
   }  
}
