#pragma once

#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define ORANGE "\033[38;5;208m"
#define RED     "\033[31m"

#include<iostream>
#include<SFML/Audio.hpp>
#include<thread>
#include<chrono>
using namespace std;

class match{

public:
      
//constructor
      match()
      {
        player1="Player 01";
        player2="Player 02";
    
        choice1=0,choice2=0;
        turn1=0,turn2=0;

        arr=new int*[2];
        flags=new bool*[2];
        for(int i=0;i<2;i++)
        {
            arr[i]=new int[10];
            flags[i]=new bool[10];
        }


        int count=0;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<10;j+=2)
            {
                arr[i][j]=count;
                arr[i][j+1]=count;
                ++count;
            }
        }
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<10;j++)
            {
                flags[i][j]=false;
            }
        }
      }
//destructor
      ~match()
      {
        for(int i=0;i<2;i++)
        {
            delete [] arr[i];
            delete [] flags[i];
        }
        delete []arr;
        delete []flags;
        arr=NULL;
        flags=NULL;

      }

private:
    
    string player1,player2;

    int choice1,choice2;

    int turn1,turn2;

    int **arr;

    bool **flags;

public:
    
    void name();

    int stlen(string a);

    void clearScreen();

    void pattertop();

    void setname(string name,int player);

    void updateturn(int player);

    void shuffle();

    void showcards(int choice);

    void hidecards();

    void processmatch();

    void displayboard();

    void mainplay();

    void mainplaypvp();

    void mainplaypvc();

    void display();

    bool terminate();

    bool validate(int play);

    void endgame();

};