#include<iostream>

using namespace std;


void display(){

}

int main(int argc, char const *argv[])
{
    int Input;
    char space[3][3] = {{'1', '2','3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    //3 rows & 3 coloums......


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

    cout<<"\tPlayer1[X] turn: ";
    cin>>Input;

    switch (Input)
    {
    case 1:
        space[0][0] = 'X';
        break;
    
    case 2:
        space[0][1] = 'X';
        break;

    case 3:
        space[0][2] = 'X';
        break;

    
    
    default:
        cout<<"Invalid Input!!"<<endl;
        break;
    }
    cout<<endl<<endl;
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

  
    
    return 0;
}
