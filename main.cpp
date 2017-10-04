#include <iostream>
#include <vector>
#include <string>

using namespace std;

  /*
     do not edit this space

     where this comment is, the instructor will
     add the code that gets the user's input and
     inserts the input into every element of the
     matrix wordGrid
  */

  //PUT YOUR CODE BELOW THIS LINE
  //that prints each element of the matrix in the
  //following format:
  //Row _ Column _ is _
  //the first and second blanks should be replaced with the coordinates
  //of the element's row and column and the third blank should be replaced
  //with the value of that element

int main()
{
    string wordChoice;
    vector<vector<string>> wordGrid;
    char action;

    cout<<"What would you like to do? A(Add),D(Directions, S(Show grid)."<<endl;
    cin>>action

    while (action == 'A' || action == 'a')
    {
    for(row = 0; column = 0; col < row; col++) 
    cout<<"Enter a word."<<endl;
    cin>>wordChoice;
    wordGrid.push_back(wordChoice);
    cout<<wordGrid[][]<<endl;
  



 return 0;
}




