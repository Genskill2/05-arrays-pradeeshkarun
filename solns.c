int max(int [], int);
int min(int [], int);
float average(int [], int);
int mode(int [], int);



int main(void) {
  
  int x1[] = {9,5,6,10,2,-3,4};
  assert (max(x1, 7) == 10);

  int y1[] = {5};
  assert (max(y1, 1) == 5);
  printf("Max: passed\n");
  
  //-------------------------

  int x2[] = {9,5,6,10,2,-3,4};
  assert (min(x2, 7) == -3);

  int y2[] = {5};
  assert (min(y2, 1) == 5);
  printf("Min: passed\n");
  
  //------------------------
  

  int x3[] = {9,5,6,10,2,-3,4};
  assert ((average(x3, 7) - 4.7142) < 0.001);

  int y3[] = {5};
  assert (average(y3, 1) == 5.0);
  printf("Average: passed\n");
  
  
  //---------------------------
  
  
  int x4[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(x4, 12) == 4));

  int y4[] = {5};
  assert (mode(y4, 1) == 5);
  printf("Mode: passed\n");
  
}
  
  //FUNCTIONS////////////////////////////////////////////////////////////////////////

//MAX FUNCTION-----------------------------------------------------

int max(int x[], int n){
  
  int max_num=x[0];
  
  for (int i =0; i<n;i++){
    if(x[i+1]>max_num){
      
      max_num=x[i+1];
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


float average(int x[], int n){
  
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
