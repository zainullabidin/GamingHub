#pragma once

#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define ORANGE "\033[38;5;208m"
#define RED     "\033[31m"

#include<iostream>
#include<SFML/Audio.hpp>
#include<cstdlib>
#include<chrono>
#include<thread>

using namespace std;

class c
{

public:
    
     c()
     {
        arr=new char*[4];
        for(int i=0;i<4;i++)
         arr[i]=new char[4];

        for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
        arr[i][j]='\0';

        player1="Player01";
        player2="Player02";

     flagX1=1,flagX2=1,flagX3=1,flagX4=1,flagx1=1,flagx2=1,flagx3=1,flagx4=1;;
     flagO1=1,flagO2=1,flagO3=1,flagO4=1,flago1=1,flago2=1,flago3=1,flago4=1;

        choice1=0,choice2=0;

     }

     ~c()
     {
        for(int i=0;i<4;i++)
         delete [] arr[i];

         delete[] arr;
         arr=NULL;

     }


private:
    
    string player1,player2;

    int flagX1,flagX2,flagX3,flagX4,flagx1,flagx2,flagx3,flagx4;
    int flagO1,flagO2,flagO3,flagO4,flago1,flago2,flago3,flago4;

    int choice1,choice2;

    char **arr;

    int draw;

public:

    void name();
    
    int stlen(string a);

    void clearScreen();

    void pattertop();

    void setname(string name,int player);

    void displaygrid();
  
    void choices(int n=0);

    int process(int player);

    int win();

    void mainplaypvp();

    void mainplaypvc();
    //void mainplaypvc();

    void mainplay();

    void endgame();
    
};
