#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
using namespace std;


int binary_search (int Arreglo[], int i, int j, int n)
{
    int m, result= -1;
    while(i<= j)
    {
     m=(i+j)>>1;
     if(Arreglo[m] == n)
     {
          result=m;
          break;
     }
     else
     {
          if(n>Arreglo[m])
              i=m+1;
          else 
              j=m-1;
     }
  }
  if(result == -1)
        result=(-1) * i -1;
  return (result);
} 

void Binary_Search(){
	
	int Arreglo[100005], element, index,n,q;
	int position;
	
	while(scanf("%d", &n) != EOF){
		for(index= 1; index < n+1; index++){
			scanf("%d", &element);
			Arreglo[index]= element;
		}
		scanf("%d", &q);
		for(index=1;index < q+1; index++){
			scanf("%d", &element);
			position= binary_search(Arreglo, 1 ,n+1,element);
			if(position<= -1)
				printf(" the element %d is not in the array. value return BB : %d \n ", element, position);
			else
				printf(" the element %d is in the position %d\n", element, position);
			
		}
	}

}

int main(){
	
	Binary_Search();
	return 0;
}

