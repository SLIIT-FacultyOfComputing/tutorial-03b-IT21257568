#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};//declaring arrays
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};//declaring arrays
 cout << setw(5) << "No" << setw(15) << "Name" << setw(10) << "Marks" << endl;
     for (int r = 0; r < 5; r++) {
       cout << setw(5) << r+1 
       << setw(15) <<  names[r]
       << setiosflags(ios::fixed) << setprecision(2) 
       << setw(10) << marks[r] << endl;
   }
return 0;
}