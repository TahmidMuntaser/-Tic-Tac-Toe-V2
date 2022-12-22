#include<iostream>

using namespace std;

 char space[3][3] = {{'1', '2','3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    //3 rows & 3 coloums......

 int Input;
 char token = 'X';
 int row , coloum ;


void display(){
    
    system("cls");
    //clear the last screen....


    cout<<"             Tic-Tac-Toe"<<endl;
    cout<<"*********************************************"<<endl;
    cout<<"\tPlayer1[X]";
    cout<<"\tPlayer2[O]"<<endl<<endl<<endl;

    //Interface...

    cout<<"\t          |     |     "<<endl;
    cout<<"\t       "<<space[0][0]<<"  |  "<<space[0][1]<<"  |  "<<space[0][2]<<"  "<<endl;
    cout<<"\t     _____|_____|_____"<<endl;
    cout<<"\t          |     |     "<<endl;
    cout<<"\t       "<<space[1][0]<<"  |  "<<space[1][1]<<"  |  "<<space[1][2]<<"  "<<endl;
    cout<<"\t     _____|_____|_____"<<endl;
    cout<<"\t          |     |     "<<endl;
    cout<<"\t       "<<space[2][0]<<"  |  "<<space[2][1]<<"  |  "<<space[2][2]<<"  "<<endl;
    cout<<"\t          |     |     "<<endl;
    cout<<"\n\n\n";

}

void player(){

    if (token == 'X')
    {
        cout<<"Player1[X] turn: ";
    }

    if (token == 'O')
    {
        cout<<"Player2[O] turn: ";
    }

   
    cin>>Input;

    switch (Input)
    {
        case 1:
        row = 0; coloum = 0;
        break;

        case 2:
        row = 0; coloum = 1;
        break;

          case 3:
        row = 0; coloum = 2;
        break;

          case 4:
        row = 1; coloum = 0;
        break;

          case 5:
        row = 1; coloum = 1;
        break;

          case 6:
        row = 1; coloum = 2;
        break;

          case 7:
        row = 2; coloum = 0;
        break;

          case 8:
        row = 2; coloum = 1;
        break;

          case 9:
        row = 2; coloum = 2;
        break;
    
    default:
        cout<<"Invalid Input!!"<<endl;
        break;
    }
    
    if (token == 'X' && space[row][coloum] != 'X' && space[row][coloum] != 'O')
    {
        space[row][coloum] = 'X';
        token = 'O';//nxt player2..
    }

     else if(token == 'O' && space[row][coloum] != 'X' && space[row][coloum] != 'O')
    {
        space[row][coloum] = 'O';
        token = 'X';//nxt player1..
    }
    else
    {
        cout<<"Please try again!!!"<<endl;
        player();//for try again..
    }
  
     display(); // Display update...


}

int main(int argc, char const *argv[])
{
   
    while (true)
    {
    
    
    display();
    player();

    }
    
    
    
   

  
    
    return 0;
}
