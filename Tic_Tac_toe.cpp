#include<bits/stdc++.h>
using namespace std;

char square[10]= {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

//function to return the game status

int chackwin(){
    if(square[1]==square[2] && square[2]==square[3]) return 1;
    else if(square[4]==square[5] && square[5]==square[6]) return 1;
    else if(square[7]==square[8] && square[8]==square[9]) return 1;
    else if(square[1]==square[4] && square[4]==square[7]) return 1;
    else if(square[2]==square[5] && square[5]==square[8]) return 1;
    else if(square[3]==square[6] && square[6]==square[9]) return 1;
    else if(square[1]==square[5] && square[5]==square[9]) return 1;
    else if(square[3]==square[5] && square[5]==square[7]) return 1;
    else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && 
            square[4] != '4' && square[5] != '5' && square[6] != '6' && 
            square[7] != '7' && square[6] != '6' && square[7] != '7' ) return 0;
    else return -1;

}

// drawing the board;

void board(){
    system("cls");
    cout<<"\n\n\n*****TIC TAC TOE GAME*****\n\n\n";
    cout<<"player(1) = X and player(2) = 0"<<endl;
    cout<<endl;
    cout<<"   |    |   "<<endl;
    cout<<square[1]<<"  | "<<square[2]<<"  | "<<square[3]<<endl;

    cout<<"___|____|___"<<endl;
    cout<<"   |    |  "<<endl;

    cout<<square[4]<<"  | "<<square[5]<<"  | "<<square[6]<<endl;

    cout<<"___|____|___"<<endl;
    cout<<"   |    |   "<<endl;

    cout<<square[7]<<"  | "<<square[8]<<"  | "<<square[9]<<endl;


}

int main()
{
    int player = 1, i, choice;

    char mark;

    do
    {
        board();
        player = (player%2)?1:2;
        cout<<"player "<<player<<", enter the number : ";
        cin>>choice;

        mark = (player == 1)? 'X' : '0';
        if(choice == 1 && square[1] == '1') square[1]=mark;
        else if(choice == 2 && square[2] == '2') square[2]=mark;
        else if(choice == 3 && square[3] == '3') square[3]=mark;
        else if(choice == 4 && square[4] == '4') square[4]=mark;
        else if(choice == 5 && square[5] == '5') square[5]=mark;
        else if(choice == 6 && square[6] == '6') square[6]=mark;
        else if(choice == 7 && square[7] == '7') square[7]=mark;
        else if(choice == 8 && square[8] == '8') square[8]=mark;
        else if(choice == 9 && square[9] == '9') square[9]=mark;
        else{
            cout<<"please press write number"<<endl;
            player --;
            cin.ignore();
            cin.get();
        }
        i = chackwin();
        player++;
    }
    while(i== -1);

    board();
    if(i == 1){
        cout<<"CONGRATULATION PLAYER "<<--player<<" wins! ";
    }
    else{
        cout<<"game draw"<<endl;
    }

    cin.ignore();
    cin.get();
    

    return 0;
    
} 
