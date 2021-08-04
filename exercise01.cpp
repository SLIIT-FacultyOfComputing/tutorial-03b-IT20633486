#include <iostream>
#include<iomanip>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout<<setw(10) << "No"<<setw(15) << "Name"<<stew(10) << "Marks" << endl;
 for (int r = 0; r < 5; r++)
  {
     cout<<stew(5) <<  r+1 ;
     cout<<stew(15) <<  names[r];
     cout<<stew(10)<< setiosflags(ios::fixed)<<setprecision(2)<<marks[r] << endl;
 }
}

