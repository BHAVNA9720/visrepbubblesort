#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void Color(int color)
{
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
int main()
{

int i, j, temp, h,n;
int SortData[20];
cout<<"enter the number of elements:";
cin>>n;
cout<<"\n enter the elements :";
for(i=0;i<n;i++)
{
	cin>>SortData[i];
}
for(i=0; i<n; i++)
{Color(i);
    cout<<SortData[i]<<" ";
}

cout<<"\n\n";

for (i=0; i<n; i++)
{
    for(j=0;j<n-1;j++){
        if(SortData[j]>SortData[j+1])
        {
            temp = SortData[j];
            SortData[j]=SortData[j+1];
            SortData[j+1]=temp;
            for (h=0; h<n; h++)
            {
                cout<<SortData[h]<<" ";
            }cout<<"\n\t\t\t";
		for(int jk=0;jk<i;jk++)
			cout<<"\t";
		cout<<"^";
		cout<<"\n\n\n";
            cout<<"^";
            cout<<"\n\n";
        }
    }
}
return 0;

}
