#pragma once

#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define ORANGE "\033[38;5;208m"
#define RED     "\033[31m"

#include<iostream>
#include<cstdlib>
#include<SFML/Audio.hpp>
#include<chrono>
#include<thread>
using namespace std;

class PlayRPS{//main class hadling all the varisanbles
public:
    PlayRPS()
    {
        player1="Player 01";
        player2="Player 02";
        score1=0;
        score2=0;
        hearts1=3;
        hearts2=3;
        choice1=0;
        choice2=0;

    }

    ~PlayRPS()
    {
    }
private:
   string player1;
   string player2;
   int score1,score2;
   int hearts1,hearts2;
   int choice1,choice2;
public:
 //setters
   void setname(string name,int player);
   void updatescore(int p1,int p2);
   void updatehearts(int h1,int h2);
 //gamewplay
  bool checkstatus();//wxiting main loop;

  void mainplay();// start to end;

  void mainplaypvp();

   void mainplaypvc();

   void checkwinstatus(int choice1,int choice2);//checking who won

   void pattertop();

   void name();
   
   void enddisplay();

   int stlen(string a);

void clearScreen();

   void endgame(string player);

};


