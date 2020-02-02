#include "solution.h"

int Solution::Factorial(int n) { 
  
  int result = 1;
  if(n==0 || n==1)
      return result;
  else if(n<0)
      return -1;
  else
    {
        for(int i=n;i>=2;i--)
            result*=i;
        return result;    
    }

//  return "**** Hello World ****"; 
}

