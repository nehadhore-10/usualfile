/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,i,j,b;
	printf("Enter the number of row: ");
	scanf("%d", &n);
	int**a=(int**)malloc(n*sizeof(int*));
	for (i=0; i<n; i++)
	{
		//printf("enter the number of column: ");
		//scanf("%d", &m);4
	 	a[i]=(int*)malloc(n*sizeof(int));
	 }
	 for(int i=0; i<n; i++)
	 {
			for (j=0; j<n; j++)
			{
				int x;
				scanf("%d", &x);
				*(*(a+i)+j)=x;
			}
	}
		//printf("Enter the numbers: ");
		
		for (i=0; i<n; i++)
		{
			for(j=0; j<; j++)
			{
				printf("%d ",*( *(a+i)+j));
				
			}
			printf("\n");
		}
	
	return 0;
	}*/
	
	/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,i,j,b;
	printf("Enter the number of row: ");
	scanf("%d", &n);
	int**a=(int**)malloc(n*sizeof(int*));
	for (i=0; i<n; i++)
	{
		printf("enter the number of column: ");
		scanf("%d", &m);
	 	a[i]=(int*)malloc(m*sizeof(int));
	 }
	 for(int i=0; i<n; i++)
	 {
			for (j=0; j<m; j++)
			{
				int x;
				scanf("%d", &x);
				*(*(a+i)+j)=x;
			}
	}
		//printf("Enter the numbers: ");
		
		for (i=0; i<n; i++)
		{
			for(j=0; j<m; j++)
			{
				printf("%d ",*( *(a+i)+j));
				
			}
			printf("\n");
		}
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    int** a = (int**)malloc(n * sizeof(int*));
    for (i = 0; i < n; i++)
    {
        printf("Enter the number of columns: ");
        scanf("%d", &m);
        a[i] = (int*)malloc(m * sizeof(int));
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            int x;
            scanf("%d", &x);
            *(*(a + i) + j) = x;
        }
    }

    printf("Entered array:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", *(*(a + i) + j));
        }
        printf("\n");
    }

    // Freeing memory
    for (i = 0; i < n; i++)
    {
        free(a[i]);
    }
    free(a);

    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    int** a = (int**)malloc(n * sizeof(int*));
    for (i = 0; i < n; i++)
    {
        printf("Enter the number of columns for row %d: ", i+1);
        scanf("%d", &m);
        a[i] = (int*)malloc(m * sizeof(int));
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            int x;
            printf("Enter the value for element (%d, %d): ", i+1, j+1);
            scanf("%d", &x);
            *(*(a + i) + j) = x;
        }
    }

    printf("Entered array:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", *(*(a + i) + j));
        }
        printf("\n");
    }

    // Freeing memory
    for (i = 0; i < n; i++)
    {
        free(a[i]);
    }
    free(a);

    return 0;
}*/


/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m;
	//scanf("%d",&m);
	int *a=(int)malloc(n*sizeof(int));
	for(int i=0; i<n ; i++)
	{
		printf("enter number of column:");
		scanf("%d",&m);
		*(a+i)=(int)malloc(m*sizeof(int));
		for(int j=0;j<m;j++)
		{
			scanf("%d",(*(a+i)+j));
			//printf("%d		",((a+i)+j));
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<sizeof(a+i); j++)
		{
			printf("%d	",(*(a+i)+j));
		}
		printf("\n");
	}
	free(a);
	return 0;
}*/


/*#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,m;
	scanf("%d",&n);
	int *a =(int)malloc(n*sizeof (int));
	for(int i=0; i<n; i++)
	{
		printf("enter number of column: ");
		scanf("%d",&m);
		*(a+i)=(int)malloc(m*sizeof(int));
		 for(int j=0; j<n; j++)
		 {
		 	scanf("%d", (*(a+i)+j));
		 }
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			printf("%d  " ,(*(a+i)+j));
		}
		printf("\n");
	}
	free(a);
	return 0;
}*/

