#pragma once

#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define ORANGE "\033[38;5;208m"
#define RED     "\033[31m"

#include<iostream>
#include<SFML/Audio.hpp>
#include<chrono>
#include<thread>

using namespace std;

class snake{

public:
//contructor
       snake()
       {
            arr=new int*[10];
            for(int i=0;i<10;i++)
            arr[i]=new int[10];

            player1="player01";
            player2="player02";

            int count=1;

            place1=0;
            place2=0;

            for(int i=9;i>=0;i--)
            {
                  for(int j=9;j>=0;j--)
                  {
                        if(i%2==0)
                        {
                              arr[i][j]=count;
                              ++count;            
                        }
                        else
                        {
                              arr[i][9-j]=count;
                              ++count;
                        }                      
                  }
            }
      }

      ~snake()
      {
            for(int i=0;i<10;i++)
              delete [] arr[i];
              delete [] arr;
              arr=NULL;
      }


private:
      
      string player1,player2;

      int **arr;

      int place1,place2;

public:
      
      void name();

      void pattertop();

      void mainplay();

      void mainplaypvp();

      void mainplaypvc();

      int stlen(string a);
       
      void setname(string name,int player);

      void board();

      void die(int n);

      void process(int &number,int &flag);

      void clearScreen();

      void display();

      void ladderOrsnake(int &place);

      void endgame();



};
