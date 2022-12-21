#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<map>

using namespace std;
map <string,int> size={
    { "Aircraft_carrier",5},
     { "Battleship",4},
      {"Destroyer",3},
      {"Corvette",2},
        {"Frigate",1},  
};

void placement(char x[10][10],string ship){
     pair <char,int> plr;
    char op;
    for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
            cout<<x[i][j]<<" ";
      }
      cout<<endl;
    }
    cout<<"Starting position and orientation of the "<<ship<<endl;
    cin>>plr.first>>plr.second>>op;
    if(op=='h'){
        for(int i=0;i<size[ship];i++){
            x[plr.second-1][plr.first-65+i]=ship[0];
        }
    }
    else{
        for(int i=0;i<size[ship];i++){
            x[plr.second-1+i][plr.first-65]=ship[0];
        }
    }
}

void display(char plr[10][10]){
     for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
            cout<<plr[i][j]<<" ";
      }
      cout<<endl;
    }
}

bool game_over(int plr1,int plr2) {
    if(plr1==5||plr2==5)
        return true;
    return false;
}

int main(){
    map <char,int> size2;
size2['A']=5;
size2['B']=4;
size2['D']=3;
size2['C']=2;
size2['F']=1;
     int plr1=0,plr2=0;
    char pl1[10][10];
    char p1_guess[10][10];
    
    map <char,int>p1;
    for(int i=0;i<10;i++){
       for(int j=0;j<10;j++){
            pl1[i][j]='.';
       }
    }
      for(int i=0;i<10;i++){
       for(int j=0;j<10;j++){
            p1_guess[i][j]='.';
       }
    }
   char pl2[10][10];
    char p2_guess[10][10];
    
    map <char,int> p2;
    for(int i=0;i<10;i++){
       for(int j=0;j<10;j++){
            pl2[i][j]='.';
       }
    }
      for(int i=0;i<10;i++){
       for(int j=0;j<10;j++){
            p2_guess[i][j]='.';
       }
    }
  cout<<"Player 1"<<endl;
  placement(pl1,"Aircraft_carrier");
  placement(pl1,"Battleship");
  placement(pl1,"Destroyer");
  placement(pl1,"Corvette");
  placement(pl1,"Frigate");
  display(pl1);
   cout<<"Player 2"<<endl;
  placement(pl2,"Aircraft_carrier");
  placement(pl2,"Battleship");
  placement(pl2,"Destroyer");
  placement(pl2,"Corvette");
  placement(pl2,"Frigate");
  display(pl2);
  while(!game_over(plr1,plr2)){
    pair<char,int> guess;
    cout<<"Player 1"<<endl;
    display(pl1);
    cout<<endl;
    display(p1_guess);
    cout<<"Guess"<<endl;
    cin>>guess.first>>guess.second;
    
    if(pl2[guess.second-1][guess.first-65]!='.'){
        cout<<"Hit"<<endl;
        p1_guess[guess.second-1][guess.first-65]='H';
        p2[pl2[guess.second-1][guess.first-65]]++;
        if(p2[pl2[guess.second-1][guess.first-65]]==size2[pl2[guess.second-1][guess.first-65]]){
            cout<<"Hit"<<endl;
            plr1++;
        }
        pl2[guess.second-1][guess.first-65]='.';
        
    }
    else{
        cout<<"Miss"<<endl;
         p1_guess[guess.second-1][guess.first-65]='*';
    }
    if(game_over(plr1,plr2)){
        break;
    }
     cout<<"Player 2"<<endl;
      display(pl2);
    display(p2_guess);
    cout<<"Guess"<<endl;
    cin>>guess.first>>guess.second;
    
    if(pl1[guess.second-1][guess.first-65]!='.'){
        cout<<"Hit"<<endl;
        p2_guess[guess.second-1][guess.first-65]='H';
        p1[pl1[guess.second-1][guess.first-65]]++;
        if(p1[pl1[guess.second-1][guess.first-65]]==size2[pl1[guess.second-1][guess.first-65]]){
            cout<<"Hit"<<endl;
            plr2++;
        }
        pl1[guess.second-1][guess.first-65]='.';
        
    }
    else{
        cout<<"Miss"<<endl;
         p2_guess[guess.second-1][guess.first-65]='*';
    } 
  }
  cout<<"GAME OVER"<<endl;
  if(plr1==5){
    cout<<"Player 1 is the winner"<<endl;
  }
  else{
    cout<<"Player 2 is the winner"<<endl;
  }
 return 0;
}

