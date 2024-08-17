/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

char spaces[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
char n1='x',n2='0';

void print(){
    cout<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<spaces[0][0]<<"  |  "<<spaces[0][1]<<"  |  "<<spaces[0][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<spaces[1][0]<<"  |  "<<spaces[1][1]<<"  |  "<<spaces[1][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<spaces[2][0]<<"  |  "<<spaces[2][1]<<"  |  "<<spaces[2][2]<<endl;
    cout<<"     |     |     "<<endl<<endl;
}

void player1_turn(){
    char loc;
    label1:
    cout<<"Enter the location(1-9)(player1): "; 
    cin >>loc;
    if(int(loc)<=48 || int(loc)>57){
        goto label1;
    }
    switch(loc){
        case '1':{
            if(spaces[0][0]==' '){
                spaces[0][0]=n1;
            }
            else{
                goto label1;
            }
        }
        break; 
        
        case '2':{
            if(spaces[0][1]==' '){
                spaces[0][1]=n1;
            }
             else{
                goto label1;
            }
        }
        break; 
        
        case '3':{
            if(spaces[0][2]==' '){
                spaces[0][2]=n1;
            }
             else{
                goto label1;
            }
        }
        break; 
        
        case '4':{
            if(spaces[1][0]==' '){
                spaces[1][0]=n1;
            }
             else{
                goto label1;
            }
        }
        break; 
        
        case '5':{
            if(spaces[1][1]==' '){
                spaces[1][1]=n1;
            }
             else{
                goto label1;
            }
        }
        break; 
        
        case '6':{
            if(spaces[1][2]==' '){
                spaces[1][2]=n1;
            }
             else{
                goto label1;
            }
        }
        break; 
        
        case '7':{
            if(spaces[2][0]==' '){
                spaces[2][0]=n1;
            }
             else{
                goto label1;
            }
        }
        break; 
        
        case '8':{
            if(spaces[2][1]==' '){
                spaces[2][1]=n1;
            }
             else{
                goto label1;
            }
        }
        break; 
        
        case '9':{
            if(spaces[2][2]==' '){
                spaces[2][2]=n1;
            }
             else{
                goto label1;
            }
        }
        break; 
    }
}

void player2_turn(){
    char loc;
    label2:
    cout<<"Enter the location(1-9)(player2): "; 
    cin >>loc;
    if(int(loc)<=48 || int(loc)>57){
        goto label2;
    }
    switch(loc){
        case '1':{
            if(spaces[0][0]==' '){
                spaces[0][0]=n2;
            }
            else{
                goto label2;
            }
        }
        break; 
        
         case '2':{
            if(spaces[0][1]==' '){
                spaces[0][1]=n2;
            }
            else{
                goto label2;
            }
        }
        break; 
        
        case '3':{
            if(spaces[0][2]==' '){
                spaces[0][2]=n2;
            }
            else{
                goto label2;
            }
        }
        break; 
        
        case '4':{
            if(spaces[1][0]==' '){
                spaces[1][0]=n2;
            }
            else{
                goto label2;
            }
        }
        break; 
        
        case '5':{
            if(spaces[1][1]==' '){
                spaces[1][1]=n2;
            }
            else{
                goto label2;
            }
        }
        break; 
        
        case '6':{
            if(spaces[1][2]==' '){
                spaces[1][2]=n2;
            }
            else{
                goto label2;
            }
        }
        break; 
        
        case '7':{
            if(spaces[2][0]==' '){
                spaces[2][0]=n2;
            }
            else{
                goto label2;
            }
        }
        break; 
        
        case '8':{
            if(spaces[2][1]==' '){
                spaces[2][1]=n2;
            }
            else{
                goto label2;
            }
        }
        break; 
        
        case '9':{
            if(spaces[2][2]==' '){
                spaces[2][2]=n2;
            }
            else{
                goto label2;
            }
        }
        break; 
        default: {
            cout<<"Enter the valid location."<<endl;
        }
        break;
    }
}

bool checkTie(){
    int a=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(spaces[i][j]==' '){
                a=1;
                break;
            }
        }
    }
    if(a==1){
        return false;
    }
    else{
        cout<<"Game Tie!"<<endl;
        return true;
    }
}

bool checkWin(){
    //checking row wise
    if(spaces[0][0]!=' ' && spaces[0][0]==spaces[0][1] && spaces[0][1]==spaces[0][2]){
        if(spaces[0][0]=='x'){
            cout<<"Player1 Won!"<<endl;
        }
        else{
            cout<<"Player2 Won!"<<endl;
        }
        return 1;
    }
     if(spaces[1][0]!=' ' && spaces[1][0]==spaces[1][1] && spaces[1][1]==spaces[1][2]){
        if(spaces[1][0]=='x'){
            cout<<"Player1 Won!"<<endl;
        }
        else{
            cout<<"Player2 Won!"<<endl;
        }
        return 1;
    }
     if(spaces[2][0]!=' ' && spaces[2][0]==spaces[2][1] && spaces[2][1]==spaces[2][2]){
        if(spaces[2][0]=='x'){
            cout<<"Player1 Won!"<<endl;
        }
        else{
            cout<<"Player2 Won!"<<endl;
        }
        return 1;
    }
    //checking column wise
     if(spaces[0][0]!=' ' && spaces[0][0]==spaces[1][0] && spaces[1][0]==spaces[2][0]){
        if(spaces[0][0]=='x'){
            cout<<"Player1 Won!"<<endl;
        }
        else{
            cout<<"Player2 Won!"<<endl;
        }
        return 1;
    }
    if(spaces[0][1]!=' ' && spaces[0][1]==spaces[1][1] && spaces[1][1]==spaces[2][1]){
        if(spaces[0][1]=='x'){
            cout<<"Player1 Won!"<<endl;
        }
        else{
            cout<<"Player2 Won!"<<endl;
        }
        return 1;
    }
    if(spaces[0][2]!=' ' && spaces[0][2]==spaces[1][2] && spaces[1][2]==spaces[2][2]){
        if(spaces[0][2]=='x'){
            cout<<"Player1 Won!"<<endl;
        }
        else{
            cout<<"Player2 Won!"<<endl;
        }
        return 1;
    }
    //checking diagonal wise
    if(spaces[0][0]!=' ' && spaces[0][0]==spaces[1][1] && spaces[1][1]==spaces[2][2]){
        if(spaces[0][0]=='x'){
            cout<<"Player1 Won!"<<endl;
        }
        else{
            cout<<"Player2 Won!"<<endl;
        }
        return 1;
    }
    if(spaces[0][2]!=' ' && spaces[0][2]==spaces[1][1] && spaces[1][1]==spaces[2][0]){
        if(spaces[0][2]=='x'){
            cout<<"Player1 Won!"<<endl;
        }
        else{
            cout<<"Player2 Won!"<<endl;
        }
        return 1;
    }
    return 0;
}

int main()
{
    int a=0;
    cout<<endl<<"---------     TIC TAC TOE     ---------"<<endl<<endl;
    string plr1,plr2;
    cout<<"Enter player 1 name: "; 
    cin >>plr1;
    cout<<"Enter player 2 name: "; 
    cin >>plr2;
    cout<<endl;
    
    while(!checkTie()){
        if(a%2==0){
            player1_turn(); 
            print();
            if(checkWin()==1){
                 break;
            }
        }
        else{
            player2_turn();
            print();
            if(checkWin()==1){
                break;
            }
        }
        a++;
    }

    return 0;
}