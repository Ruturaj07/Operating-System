#include<iostream>
using namespace std;

int main()
{
	int buffer[]={28,4,64,17,5,97,98,50,10,3,35,99};

	int blk0[3][2]={{28,0},{4,0},{64,1}};
	int blk1[3][2]={{17,1},{5,0},{97,0}};
	int blk2[3][2]={{98,1},{50,1},{10,0}};
	int blk3[3][2]={{3,0},{35,1},{99,1}}; 
	int blkno, mod;

	cout<<"Enter the block number : ";
	cin>>blkno;

	int found = 0;

	for (int i=0 ; i< 12;i++)
	{
		if(blkno==buffer[i])
		{
			found = 1;
		}
	}

	if(found==1)
	{
		mod  = blkno % 4;	
	}

	//Search whether the block is present in freelist
	if(mod==0){
		for(int j=0; j<3 ;j++)
		{
			if(blk0[j][0]==blkno)
			{
				cout<<"Block is free";
				if(blk0[j][1]==0)
				{
					blk0[j][1]==1;
					
				}
				else
				{
				cout<<"Block no. "<<blkno<<" is now Busy ";
				}
			}
			
			
		}
	}
	else if(mod==1)
	{
		for(int j=0; j<3 ;j++)
		{
			if(blk1[j][0]==blkno)
			{
				cout<<"Block is free";
				if(blk1[j][1]==0)
				{
					blk1[j][1]==1;
					
				}
				else
				{
				cout<<"Block no. "<<blkno<<" is now Busy ";
				}
			}
			
			
		}

	}
	else if(mod==2)
	{
		for(int j=0; j<3 ;j++)
		{
			if(blk2[j][0]==blkno)
			{
				cout<<"Block is free";
				if(blk2[j][1]==0)
				{
					blk2[j][1]==1;
				}
				else
				{
				cout<<"Block no. "<<blkno<<" is now Busy ";
				}
			}
			
			
		}

	}
	else
	{
		for(int j=0; j<3 ;j++)
		{
			if(blk3[j][0]==blkno)
			{
				cout<<"Block is free";
				if(blk3[j][1]==0)
				{
					blk3[j][1]==1;
					//cout<<"Block no. "<<blkno<<" is now Busy ";
				}
				else
				{
				cout<<"Block no. "<<blkno<<" is now Busy ";
				}
			}
			
			
		}

	}




	return 0;
}