#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
main()
{
	int n;
	cout<<"Enter no. of cylinders\n";
	cin>>n; cout<<endl;
	
	cout<<"Enter size of cylinders\n"; int sa[n];
	for(int i=0;i<n;i++) cin>>sa[i]; cout<<endl;
	
	cout<<"Enter current servicingg no. on disc\n"; int c;
	cin>>c; cout<<endl;
	
	cout<<"Enter no. of pending requests\n"; int np;
	cin>>np; cout<<endl;

	int ar[np];
	
	cout<<"Enter pending requests\n";
	for(int i=0;i<np;i++) cin>>ar[i]; cout<<endl;
	 
	int dist[np];	for(int i=0;i<np;i++) dist[i]=abs(c-ar[i]);
	
	for(int i=0;i<np;i++)
		{ 
		  	for(int j=i+1;j<np;j++)
		 		{   
					if(dist[i]>dist[j])
					   { 
							int temp=dist[j];
							dist[j]=dist[i];
							dist[i]=temp;
						
							temp=ar[i];
							ar[i]=ar[j];
							ar[j]=temp;
						}
				}
		}
				   		
	int td=0;
		for(int i=1;i<np;i++) 
		{  
		    td+=abs(c-ar[i]);
			c=ar[i] ;
			cout<<"Caluculating total movement..."<<td<<endl;
		}
	cout<<"\n\n****************************************\n\n";
	cout<<"Total Read Write Head Movement is = "<<td;
	cout<<"\n\n****************************************\n";
	getch();
}

/*
9
14 37 53 65 67 98 122 124 183
53
8
98 183 37 122 14 124 65 67
*/
