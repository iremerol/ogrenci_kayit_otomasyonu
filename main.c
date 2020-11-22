#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <conio.h>
#include <time.h>

void bubble_sort_small(int array[],int size)
{
    int i,j,temp,k;
    for(i=1;i<size;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            } 
       
       }
    } 
    for(i=0;i<size;i++)
        printf("%d ",array[i]);
}
void bubble_sort_big(int array[],int size)
{
    int i,j,temp,k;
    for(i=1;i<size;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(array[j]<array[j+1])
            {
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            } 
       
       }
    } 
    for(i=0;i<size;i++)
        printf("%d ",array[i]);
}

void selection_sort_small(int array[],int size)
{
    int i,j,temp,min,max,k;
   
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {       
            if(array[j]<array[min])
                min=j;
        }   
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
   
    for(i=0;i<size;i++)
        printf("%d ",array[i]);   
}
void selection_sort_big(int array[],int size)
{
    int i,j,temp,min,max,k;
   
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {       
            if(array[j]>array[min])
                min=j;
        }   
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
   
    for(i=0;i<size;i++)
        printf("%d ",array[i]);   
}

void insertion_sort_small(int array[],int size)
{
   
    int i,j,temp;
   
    for(i=0;i<size;i++)
    {
        for(j=0;j<i+1;j++)
        {
            if(array[j]>array[i])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }       
    }
   
    for(i=0;i<size;i++)
        printf("%d ",array[i]);   
}
void insertion_sort_big(int array[],int size)
{
   
    int i,j,temp;
   
    for(i=0;i<size;i++)
    {
        for(j=0;j<i+1;j++)
        {
            if(array[j]<array[i])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }       
    }
   
    for(i=0;i<size;i++)
        printf("%d ",array[i]);   
}

   void shell_sort_small(int array[],int size)
{
   int   i, j, k, temp;
   for (k = size; k > 1; ) {
      k = (k < 5) ? 1 : ((k * 5 - 1) / 11);
      for (i = k - 1; ++i < size; ) {
         temp = array[i];
         for (j = i; array[j - k] > temp; ) {
            array[j] = array[j - k];
            if ((j -= k) < k)
               break;
         }
         array[j] = temp;
      }
   }
   
   for(i=0;i<size;i++)
        printf("%d ",array[i]); 
}


   void shell_sort_big(int array[],int size)
{
   int   i, j, k, temp;
   for (k = size; k > 1; ) {
      k = (k < 5) ? 1 : ((k * 5 - 1) / 11);
      for (i = k - 1; ++i < size; ) {
         temp = array[i];
         for (j = i; array[j - k] > temp; ) {
            array[j] = array[j - k];
            if ((j -= k) < k)
               break;
         }
         array[j] = temp;
      }
   }
   
   int n= size / 2;
   for(i=0;i<n;i++){
   	     temp=array[i];
   	     array[i] = array[size - i-1];
   	     array[size-i-1] = temp;
   }
   for(i=0;i<size;i++)
        printf("%d ",array[i]); 
}


int main(int argc, char *argv[]){

char x;
int y,z,i,num, j, k, temp,min,key,size;
printf("=========MENU=========\n");
printf("A) Sort the array by selecting a sort algorithm.\nB) Compare all sort algorithms.");
scanf("%c",&x);
if(x=='A' || x=='a' ){

printf("Select a sort algorithm:\n 1) Bubble Sort\n 2)Selection Sort\n 3) Insertion Sort\n 4)Shell Sort\n",y);
scanf("%d", &y);}
if (y==1 || y==2 ||y==3 || y==4)
{
printf("The type of Sorting:\n 1)In Ascending Order\n 2)In Descending Order\n",z);
scanf("%d",&z);}

if(y==1&&z==1){
	int num[10];
		 srand(time(NULL));
	 	for(i=0;i<10;i++)
	 	{
	 		num[i]=rand()%100+1;
	 		printf("%3d\n",num[i]);
	      
	 	 }
	 	bubble_sort_small(num,10);
	 	
	 	puts("");
	}
else if(y==1&&z==2){int num[10];
		 srand(time(NULL));
	 	for(i=0;i<10;i++)
	 	{
	 		num[i]=rand()%100+1;
	 		printf("%3d\n",num[i]);
	      
	 	 }
        bubble_sort_big(num,10);
	 	puts("");
}

  else if(y==2&&z==1){int num[10];
		 srand(time(NULL));
	 	for(i=0;i<10;i++)
	 	{
	 		num[i]=rand()%100+1;
	 		printf("%3d\n",num[i]);
	      
	 	 }
	selection_sort_small(num,10);
	 	puts("");
	 
	}
 else if(y==2&&z==2)
	{int num[10];
		 srand(time(NULL));
	 	for(i=0;i<10;i++)
	 	{
	 		num[i]=rand()%100+1;
	 		printf("%3d\n",num[i]);
	      
	 	 }
	 	selection_sort_big(num,10);
	 	puts("");
	}
 else if(y==3&&z==1){int num[10];
		 srand(time(NULL));
	 	for(i=0;i<10;i++)
	 	{
	 		num[i]=rand()%100+1;
	 		printf("%3d\n",num[i]);
	      
	 	 }
		insertion_sort_small(num,10);
	 	puts("");
		}
 else if(y==3&&z==2){int num[10];
		 srand(time(NULL));
	 	for(i=0;i<10;i++)
	 	{
	 		num[i]=rand()%100+1;
	 		printf("%3d\n",num[i]);
	      
	 	 }
    	insertion_sort_big(num,10);
	 	puts("");
		}
	
 else if (y==4 && z==1){int num[10];
		 srand(time(NULL));
	 	for(i=0;i<10;i++)
	 	{
	 		num[i]=rand()%100+1;
	 		printf("%3d\n",num[i]);
	      
	 	 }
 
		shell_sort_small(num,10);
	 	puts("");
	}
else if (y==4 && z==2){int num[10];
		 srand(time(NULL));
	 	for(i=0;i<10;i++)
	 	{
	 		num[i]=rand()%100+1;
	 		printf("%3d\n",num[i]);
	      
	 	 }
  shell_sort_big(num,10);
	 
	 	puts("");
	}
	
if(x=='B'|| x=='b')
{

time_t start,end;

printf("running times of sorting algorithms: \n");
int array[50000];
//BUBBLE_SORT
time (&start);
srand(time(NULL));
for(i=0; i< 50000; i++)
{
	for(j=0; j< 50000-i;j++)
{
	if (array[j] < array[j+1])
{
	temp= array[j];
	array[j]=array[j+1];
	array[j+1]=temp;
	}
	}
	}
				  
				  
for(i=0;i<50000;i++ )
 {
 num=rand()% 200000+1;
 array[i]=num;
			   	 
 }
getch();
time(&end);

printf("Buble sort : % 3lf  \n",difftime(end,start));

// SELECTİON_SORT
 
time (&start);
srand(time(NULL));

			
		for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {       
            if(array[j]>array[min])
                min=j;
        }   
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
   
  for(i=0;i<50000;i++ )
			   {
			   	 num =rand()% 200000+1;
			   	 array[i]=num;
			   	 
			   }
				
                getch();
				time(&end);


printf("Selection sort: % 3lf  \n",difftime(end,start));

// INSERTION_SORT

time (&start);
srand(time(NULL));

			
			  
			  
			   
			  for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {       
            if(array[j]<array[min])
                min=j;
        }   
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
   
			    for(i=0;i<50000;i++ )
			   {
			   	 num =rand()% 200000+1;
			   	 array[i]=num;
			   	 
			   }
			   getch();
			   time(&end);


printf("Insertion sort: % 3lf  \n",difftime(end,start));

//SHELL_SORT

time (&start);
srand(time(NULL));
 for (k = size; k > 1; ) {
      k = (k < 5) ? 1 : ((k * 5 - 1) / 11);
      for (i = k - 1; ++i < size; ) {
         temp = array[i];
         for (j = i; array[j - k] > temp; ) {
            array[j] = array[j - k];
            if ((j -= k) < k)
               break;
         }
         array[j] = temp;
      }
   }
			    for(i=0;i<50000;i++ )
			   {
			   	 num =rand()% 200000+1;
			   	 array[i]=num;
			   	 
			   }
			   getch();
			   time(&end);


printf("Shell sort: % 3lf  \n",difftime(end,start));

}
}
