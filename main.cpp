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
  cout<<"What is your first name?"<<endl;
  cin>>firstname;
  cout<<"What is your last name?"<<endl;
  cin>>lastname;
  //tell fortune
  lucky = firstname.length();
  cout<<"Welcome, ";
  cout<<firstname[0]<<"."<<lastname[0]<<".";
  cout<<", here is your fortune..."<<endl;
  cout<<"your lucky number is "<<lucky<<endl;
  int index = lastname.length() -1;
  if(firstname[0] == 'A' || firstname[0] == 'E' || firstname[0] == 'I' || firstname[0] == 'O' || firstname[0]=='U'||
firstname[0]=='a'||firstname[0]=='e'|| firstname[0]=='i'||firstname[0]=='o'||firstname[0]=='u')    
  {
  cout<<"you are destined to be famous!"<<endl;
  }
  else
  {
  cout<<"you should keep a low profile."<<endl;
  }
  if(lastname[index] =='A'||lastname[index] =='E'||lastname[index] =='I'||lastname[index] =='O'||lastname[index] =='U'||lastname[index] =='a'||lastname[index] =='e'||lastname[index] =='i'||lastname[index] =='o'||lastname[index] =='u')
  {
  cout<<"you have already met your true love."<<endl;
  }
  cout<<"have a good day!"<<endl;
 return 0;
}
