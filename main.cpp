//Authors:Alex Collanton
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string firstname;
  string lastname;
  //get user input
  cout<<"What is your first name? ";
  cin>>firstname;
  cout<<"What is your last name? ";
  cin>>lastname;
  //tell fortune
  cout<<"Welcome, ";
  cout<<firstname[0]<<lastname[0];
  cout<<", here is your fortune..."<<endl;
  return 0;
}
