#include<iostream>
#include<fstream>
#include<string>
using namespace std;
string b;

int main()
{

	char a[100][100];
	char d[100][100];
	
	int x=0,y=0,p=0,q=0;
	fstream file;
	
	file.open("a.txt");
	while(! file.eof())
	{
		for(x=0;x<4;x++)
		{
			for(y=0;y<3;y++)
			{
				file>>a[x][y];
			}
		}
		
		
		
		
	}
	file.close();
	  cout<<"input location and state ";
   for(int i=0;i<4;i++)
   {

    for(int m=0;m<2;m++)
   {
       cin>>d[i][m];

   }
   }
   for (int z=0;z<4;z++)
   {
    for (int k=0;k<2;k++)
   {
      
	  if(d[z][k]==a[z][k]&&d[z][k+1]==a[z][k+1])
	  {
		  cout<<a[z][k+2]<<endl;
	  }

   }
   }
}

