#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("\n Hello world!");
	int f=fork();
	int p=getpid();
	printf("\n the pid is %d",p);
	printf("\n the pid is %d",f);
	
	return 0;
}


#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("\n Hello world!");
	int f=fork();
	int p=getpid();
	printf("\n hey iam child process %d",p);
	printf("\n hey iam perant process %d",f);
	
	return 0;
}

#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("\nhey iam child process\n ");
	printf("\nhey iam perant process\n");
	fork();
	getpid();
	
	
	return 0;
}


#include<stdio.h>
#include<unistd.h>
int main()
{
	int p=getpid();
	int f= fork();
	if(f==0)
	{
		printf("Iam child\n");
		printf("My parent ID %d\n",getpid());
	}
	else
	{
		fork();
		if(f==0)
		{
			printf("Iam Sibiling\n");
			printf("My parent ID %d\n",getpid());
		}
		else{
			printf("Iam perant\n");
			printf("My parent ID %d\n",getpid());
		}
	}
	return 0;
}
