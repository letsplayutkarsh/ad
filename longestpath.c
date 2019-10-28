#include<stdio.h>

void main(){

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&int[i][j]);
		}
	}
	//int a[3][3] = { { 1, 2, 9 }, 
                  //    { 3, 4 , 8 }, 
        //              { 5, 6, 7 } }; 
	
	//int a[3][3] = { { 9, 8, 7 }, 
        //              { 4, 5 , 6 }, 
        //              { 3, 2, 1 } }; 

	int b[4][5];
	int count=1,o=1,ol=1,or=1,ou=1,od=1,max=1	,next_x,next_y,k,l,i,j;

	for(i=0;i<4;i++)
		for(j=0;j<5;j++)
			if(j==0 || i==3 || j==4 )
				b[i][j]=100;
	
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			b[i][j+1]=a[i][j];	

	for(i=0;i<3;i++){
		for(j=0;j<5;j++)
			printf("%d ",b[i][j]);
		printf("\n");}	

	for(i=0;i<4;i++){
		//printf("\n1st loop\n");
		for(j=0;j<5;j++){
			//printf(" 2nd loop (%d,%d) \n",i,j);
			k=i;
			l=j;
	
			for( ; ; ){
					
				//printf("%d ",o++);
				if(b[k+1][l]==(b[k][l]+1)){
					count++;
					next_x=k+1;
					next_y=l;
					//printf("od(%d)(%d)=%d ",k,l,od++);
					}

			        else if(b[k][l+1]==(b[k][l]+1)){
					count++;
					next_x=k;
					next_y=l+1;
					//printf("or(%d)(%d)=%d ",k,l,or++);
					}  

				else if(b[k-1][l]==(b[k][l]+1)){
					count++;
					next_x=k-1;
					next_y=l;
					//printf("ou(%d)(%d)=%d ",k,l,ou++);
					}  

				else if(b[k][l-1]==(b[k][l]+1)){
					count++;
					next_x=k;
					next_y=l-1;
					//printf("ol(%d)(%d)=%d ",k,l,ol++);
					}

				else{
					//printf("\n");
					break;}
				
				
				k=next_x;
				l=next_y;
				printf("(%d)",b[next_x][next_y]);
				if(max<count)
					max=count;

	}
		o=1;ol=1;or=1;ou=1;od=1;
		count =1;}}
			
	printf("\nmax=%d",max);

}
