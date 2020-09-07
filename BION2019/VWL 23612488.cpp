#include<bits/stdc++.h>
#define MAX_LIMIT 1000000
using namespace std;
 int main()
 {
    int a=0, e=0, I=0, o=0, u=0, it,c;
    scanf("%d",&c);
   char string[MAX_LIMIT];
   scanf("%s", string);
   if(c<4)
   	printf("No");
   else
   {
   for(it=0;it<c;it++)
   {
     if(string[it]=='a') a=1;
     else if(string[it]=='e') e=1;
     else if(string[it]=='i') I=1;
     else if(string[it]=='o') o=1;
     else if(string[it]=='u') u=1;
   }
    if(a+e+I+o+u>=4){
        printf("Yes\n");}
   else printf("No\n");
   }
   return 0;
 }