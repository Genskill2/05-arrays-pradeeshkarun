
#include <stdio.h>

#include <math.h>
  
  //FUNCTIONS////////////////////////////////////////////////////////////////////////

//MAX FUNCTION-----------------------------------------------------


int max(int x[], int n){
  
  int max_num=x[0];
  
  for (int i =0; i<n;i++){
    if(x[i]>max_num){
      
      max_num=x[i];
    }
    
  }   
   return max_num; 
} 

// MIN FUNCTION----------------------------------------------------


int min(int x[], int n){
  
  int min_num=x[0];
  
  for (int i =0; i<n;i++){
    if(x[i+1]<min_num){
      
      min_num=x[i+1];
    }
    
  }   
   return min_num; 
} 


//AVG Function-------------------------------------------------------


float average(int x[], int n)
{
  
  float element_sum=0;
  
  for (int i=0; i<n;i++){
      
      element_sum=(float)(element_sum+x[i]);
      
      
  }   
   return element_sum/n; 
} 

//MODE Function-------------------------------------------------------



int mode(int x[], int n)
{
          int MAX_COUNT=0,MODE=0;
         
          

    
    for ( int i =0; i<n;i++)
    {
        int COUNT=0;
      
      for ( int j=0;j<n;j++)
      {
          
          if(x[j]==x[i])
          
          {  COUNT++;
          }
          
          
      }
      
      if(COUNT>MAX_COUNT)
      {   MAX_COUNT= COUNT;
          MODE = x[i];
      }
      
       
    }
    
  
 return MODE;
    

}
//factors function----------------------------


int factors(int n, int f_array[]){
  int k=0;
  while(n%2==0){
    k=k+1;
    n=n/2;
    f_array[k-1]=2;
  }
  
  for(int i=3;i<=sqrt(n);i=i+2){
    while (n%i==0){
       k=k+1;
       n=n/i;
      f_array[k-1]=i;
      }
     }
    
    f_array[k]=n;

    return k+1;
}
