//Authors:Alex Collanton
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string firstname;
  string lastname;
  int lucky;
  //get user input
  cout<<"What is your first name? ";
  cin>>firstname;
  cout<<"What is your last name? ";
  cin>>lastname;
  //tell fortune
  lucky = firstname.length();
  cout<<"Welcome, ";
  cout<<firstname[0]<<lastname[0];
  cout<<", here is your fortune...";
  cout<<"Your lucky number is "<<lucky<<endl;
  return 0;
}
