/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) 
	{
	    try{
	String input;
         int counta=0;
         int counte=0;
         int counti=0;
         int counto=0;
         int countu=0;
         int res;
         int n=0;
         Scanner in = new Scanner(System.in);
         n=in.nextInt();
         input=in.next();
         
         for(int i=0;i<n;i++){
            if(input.charAt(i)=='a') 
                counta++;
            
            else if(input.charAt(i)=='e')
                counte++;
            
             else if(input.charAt(i)=='i')
                counti++;
            
              else if(input.charAt(i)=='o')
                counto++;
            
               else if(input.charAt(i)=='u')
                countu++;
            
            
         }
         if(counta>1)
             counta=1;
         if(counte>1)
             counte=1;
         if(counti>1)
             counti=1;
         if(counto>1)
             counto=1;
         if(countu>1)
             countu=1;
         res=counta+counte+counti+counto+countu;
         //System.out.println(count);
         if(res>=4)
         {
             
             System.out.println("Yes");
         }
         else
         {
             System.out.println("No");
         }
	    }catch(Exception e){
	        System.out.println("No");
	    }
         
         
     }
	}
