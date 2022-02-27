#include <iostream>
using namespace std;

void print(int len, int wth);//function declaration
void input(int &len, int &wth);//function declaration

// Do not change the main() function
int main() {
   int length = 10, width = 5;
   input(length, width);//function calling
   print(length, width);//function calling
   return 0;
}

// Do not change the print() function
void print(int len, int wth) {
   cout << "Length : " << len 
        << ", Width  : " << wth << endl;
}

// Implement the Input Function here
void input(int &len,int &wth)
{
  cout << "Length : ";
  cin >> len;
  cout << "Width : ";
  cin >> wth;
}