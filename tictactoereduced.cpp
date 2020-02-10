#include <iostream>
using namespace std;

char matrix[10] = {'o','1','2','3','4','5','6','7','8','9'} , sign;

int winorlose();
void display();

int main()
{
	int i , choice , r=0 , m=70;
	char sign;
	do
	{
		r++;
		if(r%2==0)
		{
			display();
			cout<<"\nPLAYER 2 ITS YOUR TURN - ENTER THE POSITION\n";
			cin>>choice;
			sign = 'O' ;
			if(choice>=10)
			{
				cout<<"Invalid Move\n";
				r--;
			}
			else
			{
				matrix[choice] = sign;
			}
		}
		else
		{
			display();
			cout<<"\nPLAYER 1 ITS YOUR TURN - ENTER THE POSITION\n";
			cin>>choice;
			sign = 'X' ;
				if(choice>=10)
			{
				cout<<"Invalid Move\n";
				r--;
			}
			else
			{
				matrix[choice] = sign;
			}
		}
		m = winorlose();
			
			
	}while(m==70);
	display();
	if(m==0)
		cout<<"\n\n\t\t\tGAME DRAW";
	else if (m==2)
		{
			if(r%2==0)
				cout<<"\n\n\t\tPLAYER 2 WINS\n";
			else
				cout<<"\n\n\t\tPLAYER 1 WINS\n";	
		}	
}
	
	
	int winorlose()
{
	if (matrix[1] == matrix[2] && matrix[2] == matrix[3])
		return 2;
	
	else if (matrix[4] == matrix[5] && matrix[5] == matrix[6])
		return 2;
	
	else if (matrix[7] == matrix[8] && matrix[8] == matrix[9])

		return 2;
	else if (matrix[1] == matrix[4] && matrix[4] == matrix[7])

		return 2;
	else if (matrix[2] == matrix[5] && matrix[5] == matrix[8])

		return 2;
	else if (matrix[3] == matrix[6] && matrix[6] == matrix[9])

		return 2;
	else if (matrix[1] == matrix[5] && matrix[5] == matrix[9])

		return 2;
	else if (matrix[3] == matrix[5] && matrix[5] == matrix[7])

		return 2;
	else if (matrix[1] != '1' && matrix[2] != '2' && matrix[3] != '3' 
                    && matrix[4] != '4' && matrix[5] != '5' && matrix[6] != '6' 
                  && matrix[7] != '7' && matrix[8] != '8' && matrix[9] != '9')

		return 0;
	else
		return 70;
}

void display()
{
	int i,j,l=0;
	system("cls");
	cout<<"\n\n\n\t\t\tTIC TAC TOE\n\n\n";
	cout<<"\t PLAYER 1 ==> 'X'  &   PLAYER 2 ==> '0'\n\n";
	for(i=0 ; i<3 ; i++)
	{
			for(j=0 ; j<3 ; j++)
		{
				l++;
				if(l%3!=0)
						  cout<<"\t"<<matrix[l]<<"     |";
				else
					cout<<"\t"<<matrix[l];		  
		}
		if(l<=6)
				cout<<"\n\t______|_______|_______";
	cout<<"\n";
	}
}
