#include <bits/stdc++.h>

// Required library ----> #include <fstream>

using namespace std;

int main()
{

  string s;
  cout << "Enter the file name : ";
  cin >> s;

  ifstream fin(s); // opening text file entered by the user...
  

  int words = 1;
  
  char ch;

  fin.seekg(0, ios::beg); // bring position of file pointer to begining of file

  while (fin)
  {
    fin.get(ch);
    if (ch == ' ' || ch == '\n')
      words++;
  }
  
  cout<<"\n The number of word in the given file are : "<<words<<endl;
  fin.close();

  return 0;
 
}