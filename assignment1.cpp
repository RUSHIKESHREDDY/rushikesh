#include<iostream.h>
#include<conio.h>
#include<stdio.h>


class student
{
private:
	int admno;
	char sname[20];
	float eng,math,science;
	float total;
	float ctotal()
	{
		return eng+math+science;
	}
public:
	void Takedata()
	{
		cout<<"Enter admission number ";
		cin>> admno;
		cout<<"Enter student name " ;
		gets(sname);
		cout<< "Enter marks in english, math, science ";
		cin>>eng>>math>>science;
		total=ctotal();
	}

	void Showdata()
	{
		cout<<"Admission number "<<admno<<"\nStudent name "<<sname<<"\nEnglish "
			<<eng<<"\nMath "<<math<<"\nScience "<<science<<"\nTotal "<<total;
	}
};

int main ()
{
	clrscr();
	student obj ;
	obj.Takedata();
	obj.Showdata();
	getch();
	return 0;
}

