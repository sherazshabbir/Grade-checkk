#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Pleaase enter your Marks"<<endl;
	cin>>marks;
	if(marks>=33&&marks<=45)
		cout<<"D"<<endl;
		

else if (marks>=45&&marks<=60)
	cout<<"Grade c"<<endl;

else if(marks>=60&&marks<80)
	cout<<"Grade B"<<endl;

else if(marks>=80)
	cout<<"GRade A"<<endl;
	
	else
	cout<<"fail"<<endl;

	return 0;
}
