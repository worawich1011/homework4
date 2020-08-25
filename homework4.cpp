#include <iostream>
using namespace std;
int main()
{
 char grade;
 int i=0.0;
 int total=0.0;
 float GPA=0.0;

 do
 {
	 cout << "Enter the letter grade (Enter 'X' to Exit) "<<endl;
	 cin >> grade;
	 if (grade== 'a' || grade== 'A') total += 4;
	 else if (grade== 'b'||grade=='B') total +=3;
	 else if (grade== 'c'||grade=='C') total +=2;
	 else if (grade== 'd'||grade=='D') total +=1;
	 else if (grade== 'x'||grade=='X') break;
	 i++;
 }
 while (grade != 'x' && grade != 'X');
 cout<<"Total Grade Point : "<<total<<endl;
 cout<<"GPA : "<< (float)total/i <<endl;


 system ("pause");


return 0;
}
