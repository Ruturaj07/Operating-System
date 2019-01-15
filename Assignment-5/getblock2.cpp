#include<iostream>

using namespace std;

int main(){

	int buffers[]={28,4,64,17,5,97,98,50,10,3,35,99};
	int free[]={3,5,4,28,97,10};
	//cout<<"SIze :"<<sizeof(free)/sizeof(*free);
	int blkno,mod,temp,flag=0;

	int blk0[3][2]={{28,0},{4,0},{64,1}};
	int blk1[3][2]={{17,1},{5,0},{97,0}};
	int blk2[3][2]={{98,1},{50,1},{10,0}};
	int blk3[3][2]={{3,0},{35,1},{99,1}};


	cout<<"Enter the block no : ";
	cin>>blkno;

	for(int i=0;i<12;i++){
		if(blkno==buffers[i]){
			flag=1;
		}
	}

	if(flag==0){
		
		temp=free[0];
		free[0]=blkno;


		
			for(int j=0;j<3;j++){
				if(blk0[j][0]==temp){
					blk0[j][0]=blkno;
					blk0[j][1]=1;
					cout<<temp<<" Block is replaced with "<<blkno;
					
				}
			}
	
		
			for(int j=0;j<3;j++){
				if(blk1[j][0]==temp){
					blk1[j][0]=blkno;
					blk1[j][1]=1;
					cout<<temp<<" Block is replaced with "<<blkno;
					
				}
			}
		

		
			for(int j=0;j<3;j++){
				if(blk2[j][0]==temp){
					blk2[j][0]=blkno;
					blk2[j][1]=1;
					cout<<temp<<" Block is replaced with "<<blkno;
					
				}
			}
	

	
			for(int j=0;j<3;j++){
				if(blk3[j][0]==temp){
					blk3[j][0]=blkno;
					blk3[j][1]=1;
					cout<<temp<<" Block is replaced with "<<blkno;
					
				}
			}
		
	}


	




	return 0;

}