// printing SJF
#include<stdio.h>
int main()
{
	int pid[20],ar[20],bt[20],ct[20],tat[20],wt[20],stat=0,swt=0,i,sum=0,temp=0,temp2=0,temp3=0,j;
	float n;
	printf("\n Enter number of terms:-");
	scanf("%f",&n);
	printf("\n Enter process time");
	for(i=0;i<n;i++)
	{
		scanf("%d",&pid[i]);
	}
	printf("\n Enter arrival time");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\n Enter burst time");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	}
	// sorting arival time
		for(i=1;i<n;i++)
		{
			if(bt[i-1]>bt[i])
			{
				temp3=ar[i];
				ar[i]=ar[i+1];
				ar[i+1]=temp3;
					temp=bt[i];
					temp2=pid[i];
			bt[i]=bt[i+1];
			pid[i]=pid[i+1];
			bt[i+1]=temp;
			pid[i+1]=temp2;
	}
}
	printf("\n Completion Time\tTurn Around Time\tWaiting Time");
	for(i=0;i<n;i++)
	{
		for(j=0;j<pid[i];j++)
		{
    	 sum=sum+bt[i];
    }
		ct[i]=sum;
		tat[i]=ct[i]-ar[i];
		stat=stat+tat[i];
		wt[i]=tat[i]-bt[i];
		swt=swt+wt[i];
		printf("\n %d\t\t\t\t%d\t\t\t%d",ct[i],tat[i],wt[i]);
			}
	float atat=stat/n;
	float awt=swt/n;
	printf("\nTotal Turn Around Time=%d",stat);
	printf("\nTotal Waiting Time=%d",swt);
	printf("\nAverage turn around time=%f",atat);
	printf("\nAverage waiting time=%f",awt);
	return 0;
}




