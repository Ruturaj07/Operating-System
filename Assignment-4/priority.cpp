#include<iostream>
using namespace std;

int main()
{
	int n, i, j ,wt[20],p[20], bt[20], tat[20],avtat=0,avwt=0;
	cout<< "Enter no. of processes :";
	cin>>n;
	
	cout<<"Enter Priority and Brust Time :";
	//Brust input for processes
	for (i=0; i<n; i++)
	{
	
		cin>>p[i]>>bt[i];

	
	}
	// Waiting time for process P[1] = 0
	wt[0]=0;

	//Waiting time for Processes >= P[2]
	for(i=1;i<n;i++)
	{
		//waiting time initially assigned 0 
		wt[i]=0;
        for(j=0; j<i ;j++)
            wt[i]+=bt[j];
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(p[j]<p[j+1])
			{
				int temp;
				temp = p[j];
				p[j]=p[j+1];
				p[j+1]=temp;

				int temp1;
				temp = bt[j];
				bt[j]=bt[j+1];
				bt[j+1]=temp;

			}
			

		}
	}
	cout<<"\nProcess"<<"\t\tPriority"<<"\t"<<"Brust Time"<<"\t"<<"Waiting Time"<<"\t"<<"Turnaround Time";
	//Calculate turn around time 
	for(i=0;i<n;i++)
    {
    	//turn around time
        tat[i]=bt[i]+wt[i];
        //averager waiting time -> total waiting time
        avwt+=wt[i];
        //average turn around time -> total turn around time
        avtat+=tat[i];
        cout<<"\nP["<<i+1<<"]"<<"\t\t"<<p[i]<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
    }
    avwt/=n;
    avtat/=n;
    cout<<"\n\nAverage Waiting Time:"<<avwt;
    cout<<"\nAverage Turnaround Time:"<<avtat;
	return 0;
}