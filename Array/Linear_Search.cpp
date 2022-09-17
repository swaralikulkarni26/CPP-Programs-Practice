# include<iostream>
using namespace std;
    
/*program for linear search of array element

*/
int main()
{
 	int a[5],n=5;
	int key;
	cout<<"enter numbers : ";
	 for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter key";
	cin>>key;
	for(int i=0;i<n;i++)
	{
		if(key==a[i])
		{
			cout<<"found at passition : "<<i;
			return 0;
		}
	}	
	cout<<"not found";
	return 0;
}


/*Output: enter numbers : 10
20
30
15
16
enter key 16
found at possition 4*/