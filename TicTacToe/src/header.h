#pragma once

#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define ORANGE "\033[38;5;208m"
#define RED     "\033[31m"

#include<iostream>
#include<chrono>
#include<thread>
#include<cstdlib>
#include <SFML/Audio.hpp>

using namespace std;

class Playtic{

public:

    Playtic(){

        player1="Player 01";
        
        player2="Player 02";

        hearts1=new int;
        hearts2=new int;
        *hearts1=3; 
        *hearts2=3;

        arr = new char*[3]; // Allocate array of pointers
        
        for(int i=0;i<3;i++)
        arr[i]=new char[3];

        for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        arr[i][j]='\0';

    }

    ~Playtic()
    {
        delete hearts1 ;
        delete hearts2 ;
        hearts1=NULL;
        hearts2=NULL;

        for(int i=0;i<3;i++)
          delete[] arr[i];

          delete [] arr;

        arr=NULL;

    }

private:

   string player1;
   string player2;

   int *hearts1,*hearts2;

   char **arr;
       
public:

  

//setters 
  void updatename(string name,int player);
  
  void updatehearts(int h1,int h2);

//main functions of the game

   bool checkstatus();//wxiting main loop;

   void mainplay();

   void mainplaypvp();// start to end;

   void mainplaypvc();//start to end

   int checkwinstatus();//checking who wo

   bool process(int choicerow,int choicecol);

   void displaygrid();

   void name();

   int stlen(string a);

    void pattertop();

    void clearScreen();

    void endgame();


  

};
