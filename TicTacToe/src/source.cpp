#include"header.h"
#include"leaderboard_header.h"

   void Playtic::updatename(string name,int player)//setter 
   {
    if(player==1)
     player1=name;
    else
     player2=name;
     
   }

   void Playtic::updatehearts(int h1,int h2)//setter
   {
     *hearts1+=h1;
     *hearts2+=h2;
   }

   void Playtic::mainplay()
   {
            sf::SoundBuffer bgbuffer;
        if(!bgbuffer.loadFromFile("TicTacToe/assets/bgmusic.mp3"))
        cout<<"Unable to load bacground music";
        sf::Sound bg(bgbuffer);

        bg.play();
        clearScreen();
        name();
        clearScreen();
        pattertop();
        cout<<"\n\n\n1.PVP (Player VS Player)\n2.PVC (Player VS Computer)\n\nEnter which mode you want to play? (1/2): ";
        system("say Please enter the mode");
        int x,flag=0;
        cin>>x;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(1000,'\n');
            flag=1;
        }
        while(flag||x>2||x<1)
        {
            cout<<"\nEnter Again (1/2): ";
            system("say Enter Again.");
            cin>>x;
            if(cin.fail())
        {
            cin.clear();
            cin.ignore(1000,'\n');
            flag=1;
        }else
           flag=0;

        }
        switch(x)
        {
            case 1:
            mainplaypvp();
            break;
            case 2:
            mainplaypvc();
            break;
        }

   }

   bool Playtic::checkstatus()//remmove this function
   {
    if (*hearts1==0||*hearts2==0)
       return true;
    else
       return false;
   }

    bool Playtic::process(int choicerow,int choicecol)//input validator
    {
        if(choicecol<1||choicecol>3||choicerow<1||choicerow>3)
        return true;
        if(arr[choicerow-1][choicecol-1]=='O'||arr[choicerow-1][choicecol-1]=='X')
        {
            return true;
        }
        

 
            return false;
        
    }

    void Playtic::displaygrid()//main grid display
    {
        cout<<endl<<endl<<endl<<endl;
            
cout<<YELLOW<<"                                                    __________________________________________________________"<<endl;
cout<<"                                                   []▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃[]▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃[]▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃[]"<<endl;
cout<<"                                                   []"<<RESET;
if(arr[0][0]=='X')
{cout<<"   x         x   ";}
else if (arr[0][0]=='O')
{cout<<"    o  o  o  o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[0][1]=='X')
{cout<<"   x         x   ";}
else if (arr[0][1]=='O')
{cout<<"    o  o  o  o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[0][2]=='X')
{cout<<"   x         x   ";}
else if (arr[0][2]=='O')
{cout<<"    o  o  o  o   ";}
else
{cout<<"                 ";}
cout<<YELLOW<<"[]"<<endl;//first row ends

cout<<YELLOW<<"                                                   []"<<RESET;
if(arr[0][0]=='X')
{cout<<"     x     x     ";}
else if (arr[0][0]=='O')
{cout<<"    o        o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[0][1]=='X')
{cout<<"     x     x     ";}
else if (arr[0][1]=='O')
{cout<<"    o        o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[0][2]=='X')
{cout<<"     x     x     ";}
else if (arr[0][2]=='O')
{cout<<"    o        o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<endl;//second reow ends

cout<<YELLOW<<"                                                   []"<<RESET;

if(arr[0][0]=='X')
{cout<<"        x        ";}
else if (arr[0][0]=='O')
{cout<<"    o        o   ";}
else
{cout<<"                 ";}


cout<<YELLOW<<"[]"<<RESET;
if(arr[0][1]=='X')
{cout<<"        x        ";}
else if (arr[0][1]=='O')
{cout<<"    o        o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[0][2]=='X')
{cout<<"        x        ";}
else if (arr[0][2]=='O')
{cout<<"    o        o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<endl;//3 row ends

cout<<YELLOW<<"                                                   []"<<RESET;
if(arr[0][0]=='X')
{cout<<"     x     x     ";}
else if (arr[0][0]=='O')
{cout<<"    o        o   ";}
 else
{cout<<"                 ";}


cout<<YELLOW<<"[]"<<RESET;
if(arr[0][1]=='X')
{cout<<"     x     x     ";}
else if (arr[0][1]=='O')
{cout<<"    o        o   ";}
 else
{cout<<"                 ";}
cout<<YELLOW<<"[]"<<RESET;

if(arr[0][2]=='X')
{cout<<"     x     x     ";}
else if (arr[0][2]=='O')
{cout<<"    o        o   ";}
 else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<endl; //4 end
cout<<YELLOW<<"                                                   []"<<RESET;

if(arr[0][0]=='X')
{cout<<"   x         x   ";}
else if (arr[0][0]=='O')
{cout<<"    o  o  o  o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[0][1]=='X')
{cout<<"   x         x   ";}
else if (arr[0][1]=='O')
{cout<<"    o  o  o  o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[0][2]=='X')
{cout<<"   x         x   ";}
else if (arr[0][2]=='O')
{cout<<"    o  o  o  o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<endl;
cout<<"                                                   []▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃[]▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃[]▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃[]"<<endl;
cout<<"                                                   []"<<RESET;
if(arr[1][0]=='X')
{cout<<"   x         x   ";}
else if (arr[1][0]=='O')
{cout<<"    o  o  o  o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[1][1]=='X')
{cout<<"   x         x   ";}
else if (arr[1][1]=='O')
{cout<<"    o  o  o  o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[1][2]=='X')
{cout<<"   x         x   ";}
else if (arr[1][2]=='O')
{cout<<"    o  o  o  o   ";}
else
{cout<<"                 ";}
cout<<YELLOW<<"[]"<<endl; //first row ends

cout<<YELLOW<<"                                                   []"<<RESET;
if(arr[1][0]=='X')
{cout<<"     x     x     ";}
else if (arr[1][0]=='O')
{cout<<"    o        o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[1][1]=='X')
{cout<<"     x     x     ";}
else if (arr[1][1]=='O')
{cout<<"    o        o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[1][2]=='X')
{cout<<"     x     x     ";}
else if (arr[1][2]=='O')
{cout<<"    o        o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<endl;//second reow ends

cout<<YELLOW<<"                                                   []"<<RESET;

if(arr[1][0]=='X')
{cout<<"        x        ";}
else if (arr[1][0]=='O')
{cout<<"    o        o   ";}
else
{cout<<"                 ";}


cout<<YELLOW<<"[]"<<RESET;
if(arr[1][1]=='X')
{cout<<"        x        ";}
else if (arr[1][1]=='O')
{cout<<"    o        o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[1][2]=='X')
{cout<<"        x        ";}
else if (arr[1][2]=='O')
{cout<<"    o        o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<endl;//3 row ends

cout<<YELLOW<<"                                                   []"<<RESET;
if(arr[1][0]=='X')
{cout<<"     x     x     ";}
else if (arr[1][0]=='O')
{cout<<"    o        o   ";}
 else
{cout<<"                 ";}


cout<<YELLOW<<"[]"<<RESET;
if(arr[1][1]=='X')
{cout<<"     x     x     ";}
else if (arr[1][1]=='O')
{cout<<"    o        o   ";}
 else
{cout<<"                 ";}
cout<<YELLOW<<"[]"<<RESET;

if(arr[1][2]=='X')
{cout<<"     x     x     ";}
else if (arr[1][2]=='O')
{cout<<"    o        o   ";}
 else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<endl; //4 end
cout<<YELLOW<<"                                                   []"<<RESET;

if(arr[1][0]=='X')
{cout<<"   x         x   ";}
else if (arr[1][0]=='O')
{cout<<"    o  o  o  o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[1][1]=='X')
{cout<<"   x         x   ";}
else if (arr[1][1]=='O')
{cout<<"    o  o  o  o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[1][2]=='X')
{cout<<"   x         x   ";}
else if (arr[1][2]=='O')
{cout<<"    o  o  o  o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<endl;
cout<<"                                                   []▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃[]▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃[]▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃[]"<<endl;
cout<<"                                                   []"<<RESET;
if(arr[2][0]=='X')
{cout<<"   x         x   ";}
else if (arr[2][0]=='O')
{cout<<"    o  o  o  o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[2][1]=='X')
{cout<<"   x         x   ";}
else if (arr[2][1]=='O')
{cout<<"    o  o  o  o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[2][2]=='X')
{cout<<"   x         x   ";}
else if (arr[2][2]=='O')
{cout<<"    o  o  o  o   ";}
else
{cout<<"                 ";}
cout<<YELLOW<<"[]"<<endl; //first row ends

cout<<YELLOW<<"                                                   []"<<RESET;
if(arr[2][0]=='X')
{cout<<"     x     x     ";}
else if (arr[2][0]=='O')
{cout<<"    o        o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[2][1]=='X')
{cout<<"     x     x     ";}
else if (arr[2][1]=='O')
{cout<<"    o        o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[2][2]=='X')
{cout<<"     x     x     ";}
else if (arr[2][2]=='O')
{cout<<"    o        o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<endl;//second reow ends

cout<<YELLOW<<"                                                   []"<<RESET;

if(arr[2][0]=='X')
{cout<<"        x        ";}
else if (arr[2][0]=='O')
{cout<<"    o        o   ";}
else
{cout<<"                 ";}


cout<<YELLOW<<"[]"<<RESET;
if(arr[2][1]=='X')
{cout<<"        x        ";}
else if (arr[2][1]=='O')
{cout<<"    o        o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[2][2]=='X')
{cout<<"        x        ";}
else if (arr[2][2]=='O')
{cout<<"    o        o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<endl;//3 row ends

cout<<YELLOW<<"                                                   []"<<RESET;
if(arr[2][0]=='X')
{cout<<"     x     x     ";}
else if (arr[2][0]=='O')
{cout<<"    o        o   ";}
 else
{cout<<"                 ";}


cout<<YELLOW<<"[]"<<RESET;
if(arr[2][1]=='X')
{cout<<"     x     x     ";}
else if (arr[2][1]=='O')
{cout<<"    o        o   ";}
 else
{cout<<"                 ";}
cout<<YELLOW<<"[]"<<RESET;

if(arr[2][2]=='X')
{cout<<"     x     x     ";}
else if (arr[2][2]=='O')
{cout<<"    o        o   ";}
 else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<endl; //4 end
cout<<YELLOW<<"                                                   []"<<RESET;

if(arr[2][0]=='X')
{cout<<"   x         x   ";}
else if (arr[2][0]=='O')
{cout<<"    o  o  o  o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[2][1]=='X')
{cout<<"   x         x   ";}
else if (arr[2][1]=='O')
{cout<<"    o  o  o  o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<RESET;
if(arr[2][2]=='X')
{cout<<"   x         x   ";}
else if (arr[2][2]=='O')
{cout<<"    o  o  o  o   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"[]"<<endl;
cout<<"                                                   []▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃[]▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃[]▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃[]"<<endl;
cout<<"                                                    __________________________________________________________"<<RESET;


    }

    void Playtic::mainplaypvp()//main gameplay funstion
    {
        clearScreen();
        pattertop();
        int r,c,flag=0;
        string name;
        cout<<"\n\nEnter Your Name Player 01: ";
        system ("say Dear Player 1. Enter your precious name ");
        cin>>name;
        updatename( name,1);
        cout<<"Enter Your Name Player 02: ";
        system ("say Dear Player 2. Enter your beautiful name");
        cin>>name;
        updatename( name,2);
        while(true)
       { 
        clearScreen();
        pattertop();
        displaygrid();
        //display
        

        //player 1 enters
        cout<<"\n\nEnter the indexes (row,col)  "<<player2<<": ";
        cin>>r>>c;
        if(cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        flag=1;

    }
    while((r<1||r>3)||(c>3||c<1)||flag)
    {
        cout<<"\n\nEnter the indexes (row,col)  "<<player1<<": ";
        cin>>r>>c;

       if(cin.fail())
        {
        cin.clear();
        cin.ignore(10000, '\n');
        flag=1;

        }
        else
        flag=0;

    }

        while(process(r,c)||flag)
        {
            cout<<"\nPlease choose another place "<<player1<<": "<<endl;
            system("say You entered wrong index.");
            cin>>r>>c;
            if(cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        flag=1;

    }
    else
    flag=0;
        }
        arr[r-1][c-1]='X';

        int x=checkwinstatus();
        if(x==1)
        {
            clearScreen();
            endgame();
        
            cout<<"\n\n\n\n\n                                                        "<<"Player "<<player1<<" won"<<endl;
            getchar();
            leaderboard obj; 
            obj.AddRecord(player1,"TicTacToe",1);
            break;
            
        }
        
        else if(x==0)
        {
            
            clearScreen();
            endgame();
            cout<<"\n\n\n\n\n                                                        "<<"Player "<<player2<<" won"<<endl;
            getchar();
            break;

        }
        else if(x==2)
        {
            clearScreen();
            endgame();
        
            cout<<"\n\n\n\n\n                                                        "<<"Match Draw";
            break;
        }

        clearScreen();
        pattertop();
        displaygrid();
               cout<<"\n\nEnter the indexes (row,col)  "<<player2<<": ";
        cin>>r>>c;
               if(cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        flag=1;

    }
     while((r<1||r>3)||(c>3||c<1)||flag)
    {
        cout<<"\n\nEnter the indexes (row,col)  "<<player1<<": ";
        cin>>r>>c;
         if(cin.fail())
        {
            cin.clear();
            cin.ignore(10000, '\n');
            flag=1;

        }
     else 
     flag=0;


    }
        
        
        while(process(r,c)||flag)
        {
            cout<<"Please choose another place "<<player2<<": ";
            system("say\"You entered wring index\"");
            cin>>r>>c;
            if(cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        flag=1;

    }
    else
    flag=0;
        }
        arr[r-1][c-1]='O';

        x=checkwinstatus();
        if(x==1)
        {
            clearScreen();
            endgame();
        
            cout<<"\n\n\n\n\n                                                        "<<"Player "<<player1<<" won"<<endl;
            leaderboard obj;
            obj.AddRecord(player1,"TicTacToe",1);
            getchar();
            break;
        }
        
        else if(x==0)
        {
            
            clearScreen();
            endgame();
            cout<<"\n\n\n\n\n                                                        "<<"Player "<<player2<<" won"<<endl;
            leaderboard obj;
            obj.AddRecord(player2,"TicTacToe",1);
            getchar();
            break;


        }
        else if(x==2)
        {
            clearScreen();
            endgame();
        
            cout<<"\n\n\n\n\n                                                        "<<"Match Draw";


            getchar();
            break;
        }
        
        
       }
    }

    void Playtic::mainplaypvc()
    {
        clearScreen();
        pattertop();
        int r,c,flag=0;
        string name;
        cout<<"\n\nEnter Your Name Player 01: ";
        system ("say \"Dear Player 1. Enter your precious name\"");
        cin>>name;
        updatename( name,1);

        while(true)
       { 
        clearScreen();
        pattertop();
        displaygrid();
        //display
        

        //player 1 enters
        cout<<"\n\nEnter the indexes (row,col)  "<<player1<<": ";
        cin>>r>>c;
        if(cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        flag=1;

    }
     while((r<1||r>3)||(c>3||c<1))
    {
        cout<<"\n\nEnter the indexes (row,col)  "<<player1<<": ";
        cin>>r>>c;

    }

        while(process(r,c)||flag)
        {
            cout<<"\nPlease choose another place "<<player1<<": "<<endl;
            system("say\"You entered wrong index.\"");
            cin>>r>>c;
            if(cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        flag=1;

    }
    else
    flag=0;
        }
        arr[r-1][c-1]='X';

        int x=checkwinstatus();
        if(x==1)
        {
            clearScreen();
            endgame();
        
            cout<<"\n\n\n\n\n                                                        "<<"Player "<<player1<<" won"<<endl;
            getchar();
            break;
        }
        
        else if(x==0)
        {
            
            clearScreen();
            endgame();
            cout<<"\n\n\n\n\n                                                        "<<"Computer  won"<<endl;
            getchar();
            break;

        }
        else if(x==2)
        {
            clearScreen();
            endgame();
        
            cout<<"\n\n\n\n\n                                                        "<<"Match Draw";
            break;
        }

        clearScreen();
        pattertop();
        displaygrid();
            r=rand()%3+1;
            c=rand()%3+1;
        
        
        while(process(r,c))
        {
            r=rand()%3+1;
            c=rand()%3+1;
        }
        arr[r-1][c-1]='O';

        x=checkwinstatus();
        if(x==1)
        {
            clearScreen();
            endgame();
        
            cout<<"\n\n\n\n\n                                                        "<<"Player "<<player1<<" won"<<endl;
            leaderboard obj; 
            obj.AddRecord(player1,"TicTacToe",1);
            getchar();
            break;
        }
        
        else if(x==0)
        {
            
            clearScreen();
            endgame();
            cout<<"\n\n\n\n\n                                                        "<<"Computer won"<<endl;
            leaderboard obj; obj.AddRecord(player2,"TicTacToe",1);
            getchar();
            break;

        }
        else if(x==2)
        {
            clearScreen();
            endgame();
        
            cout<<"\n\n\n\n\n                                                        "<<"Match Draw";
            break;
        }
        
       }

    }

    int  Playtic::checkwinstatus()//win stat scecker
    {
        if((arr[0][0]=='X'&&arr[1][1]=='X'&&arr[2][2]=='X')||(arr[0][0]=='X'&&arr[0][1]=='X'&&arr[0][2]=='X')||(arr[0][0]=='X'&&arr[1][0]=='X'&&arr[2][0]=='X'))
        return 1;
        else if((arr[1][0]=='X'&&arr[1][1]=='X'&&arr[1][2]=='X')||(arr[2][0]=='X'&&arr[2][1]=='X'&&arr[2][2]=='X')||(arr[2][0]=='X'&&arr[1][1]=='X'&&arr[0][2]=='X'))
        return 1;
        else if((arr[0][1]=='X'&&arr[1][1]=='X'&&arr[2][1]=='X')||(arr[0][2]=='X'&&arr[1][2]=='X'&&arr[2][2]=='X'))
        return 1;

        else if((arr[0][0]=='O'&&arr[1][1]=='O'&&arr[2][2]=='O')||(arr[0][0]=='O'&&arr[0][1]=='O'&&arr[0][2]=='O')||(arr[0][0]=='O'&&arr[1][0]=='O'&&arr[2][0]=='O'))
        return 0;
        else if((arr[1][0]=='O'&&arr[1][1]=='O'&&arr[1][2]=='O')||(arr[2][0]=='O'&&arr[2][1]=='O'&&arr[2][2]=='O')||(arr[2][0]=='O'&&arr[1][1]=='O'&&arr[0][2]=='O'))
        return 0;
        else if((arr[0][1]=='O'&&arr[1][1]=='O'&&arr[2][1]=='O')||(arr[0][2]=='O'&&arr[1][2]=='O'&&arr[2][2]=='O'))
        return 0;

  

         //check for drwa
         for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]=='\0')
            return -1;
        }
        return 2;
        

    }

    void Playtic::clearScreen()
   {
    
            system("clear");
    }

    void Playtic::name()
    {
        cout<<YELLOW<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        string x=
"                                     |█████████████  ██▐  |████████╗     |█████████████   |█████████╗   |████████╗      |█████████████   ██████████    |█████████╗  \n"
"                                     |=====██▐       ██▐  ██ ╓-----╜     |=====██▐       ██ ╓------██▐  ██ ╓-----╜      |=====██▐       ██ ╓------██▐  ██ ╓------╜ \n"
"                                           ██▐       ██▐  ██ ║                 ██▐       ██ ║      ██▐  ██ ║                  ██▐       ██ ║      ██▐  ██ ║\n"
"                                           ██▐       ██▐  ██ ║                 ██▐       ██ ╚══════██▐  ██ ║                  ██▐       ██ ║      ██▐  ██ ║\n"
"                                           ██▐       ██▐  ██ ║                 ██▐       ████████████▐  ██ ║                  ██▐       ██ ║      ██▐  ████████╗  \n"
"                                           ██▐       ██▐  ██ ║                 ██▐       ██ ╓------██▐  ██ ║                  ██▐       ██ ║      ██▐  ██ ╔════╝\n"
"                                           ██▐       ██▐  ██ ║                 ██▐       ██ ║      ██▐  ██ ║                  ██▐       ██ ╚══════██▐  ██ ║ \n"
"                                           ██▐       ▒▒╜  |████████╗           ██▐       ██ ║      ██▐  |████████╗            ██▐        ██████████    |█████████╗ \n"
"                                                          ╚--------╜                                    ╚--------╜                                     ╚---------╜\n";
      for(int i=0;i<stlen(x);i++)
      {
        cout<<x[i];
        this_thread::sleep_for(chrono::milliseconds(3));
      }
      this_thread::sleep_for(chrono::seconds(3));
      cout<<RESET;

    }

    int Playtic::stlen(string a)
    {
        int count=0;
        while(a[count]!='\0')
        {
            count++;
        }
        return count;
    }

    void Playtic::pattertop()
    {
        string x=
"                                                      ██████████╗     ██ ▐             |█████████╗       ██▐              ██   \n"
"                                                      ██ ╓------██    ██ ▐             ██╓------██       ██▐              ██  \n" 
"                                                      ██ ║      ██    ██ ▐            ██ ║       ██        ██▐          ██ \n"
"                                                      ██ ╚══════██    ██ ▐            ██ ║       ██          ██▐      ██ \n"
"                                                      ███████████     ██ ▐            ██ ╚═══════██            ██▐. ██  \n"
"                                                      ██ ║            ██ ▐            ████████████▐              ██\n"
"                                                      ██ ║            ██ ▐            ██ ╓-------██              ██\n"
"                                                      ██ ║            ██ ╚--------╗   ██ ║       ██              ██\n"
"                                                      ██ ║             ████████████   ██ ║       ██              ██\n";
        cout<<GREEN<<"      ==============================================================================================================================================================================================\n\n";
        cout<<RESET<<x;
        cout<<GREEN<<"      ==============================================================================================================================================================================================\n\n"<<RESET;
    
    }

    void Playtic::endgame()
    {
        cout<<endl<<endl<<endl<<endl;
        string x=
"                         |█████████╗    |█████████╗    ██▐╗            ██▐╗  |█████████╗              ██████████    ██▐              ██▐   |█████████╗  ██████████╗  \n"
"                         ██ ╓------╜    ██ ╓------██▐  ██▐██▐╗       ██▐██▐  ██ ╓------╜             ██ ╓------██▐  ██▐              ██▐.  ██ ╓------╜  ██ ╓------██\n"
"                         ██ ║           ██ ║      ██▐. ██▐  ██▐.    ██▐ ██▐  ██ ║                    ██ ║      ██▐   ██▐            ██▐    ██ ║         ██ ║.     ██\n"
"                         ██ ║           ██ ╚══════██▐  ██▐   ██▐.  ██▐. ██▐. ██ ║                    ██ ║      ██▐    ██▐          ██▐     ██ ║         ██ ║.     ██ \n"
"                         ██ ║           ████████████▐  ██▐    ██▐ ██▐.  ██▐. ████████╗               ██ ║      ██▐     ██▐        ██▐      ████████╗    ██ ╚══════██ \n"
"                         ██ ║   ████▐.  ██ ╓------██▐  ██▐              ██▐  ██ ╔════╝               ██ ║      ██▐      ██▐      ██▐       ██ ╔════╝    ███████████  \n"
"                         ██ ║   █  █▐.  ██ ║      ██▐  ██▐              ██▐  ██ ║                    ██ ║      ██▐       ██▐    ██▐        ██ ║         ██ ██       \n"
"                         ██ ╚══════█▐.  ██ ║      ██▐  ██▐              ██▐  |█████████╗             ██ ║      ██▐.       ██▐  ██▐         ██ ║         ██ ║ ██      \n"
"                         |██████████╜                  ██▐              ██▐. ╚---------╜             ██ ╚══════██▐          ███▐           |█████████╗  ██ ║.  ██      \n"
"                                                                                                       ██████████                          ╚---------╜  ██ ║     ██      \n";

         
          cout<<x;
          cout<<endl<<endl<<endl<<endl;

    }


// int main()
// {
//     Playtic obj;
//     obj.mainplay();
//     return 0;
// }
