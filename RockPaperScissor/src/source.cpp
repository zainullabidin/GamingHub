  #include"header.h"
  #include"leaderboard_header.h"
   
  //setters
   void PlayRPS::setname(string name,int player)
   {
    if(player==1)
     player1=name;
    else
     player2=name;


   }
   //gameplay functions
   void PlayRPS::updatescore(int p1,int p2)
   {
      score1+=p1;
      score2+=p2;

   }

   void PlayRPS::updatehearts(int h1,int h2)
   {
     hearts1+=h1;
     hearts2+=h2;
   }

   bool PlayRPS::checkstatus()
   {
    if (hearts1==0||hearts2==0)
       return true;
    else
       return false;
   }

   void PlayRPS::mainplay()
   {
    sf::SoundBuffer bg;
    if(!bg.loadFromFile("RockPaperScissor/assets/bgRPS.mp3"))
    {
        cout<<"Unable to load background music\n";
    }
     sf::Sound background(bg);
     background.setLoop(true);
    background.play();
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
   
   void PlayRPS::mainplaypvp()
   {
       clearScreen();
       pattertop();
       string name;
        cout<<"\n\nEnter Your Name Player 01: ";
        system ("say \"Dear Player 1. Enter your precious name\"");
        cin>>name;
        setname( name,1);
        cout<<"Enter Your Name Player 02: ";
        system ("say \"Dear Player 2. Enter your beautiful name\"");
        cin>>name;
        setname( name,2);
       
     while(!checkstatus())
     {
        clearScreen();
       pattertop();
        

        
        
        cout<<"\n\nYOU have following choices\n\n\n";
        
         string rock=
"                                            █  ████╗                    ████████████▐                    ██▐                ██ \n"
"                                           ██████████╗                  ████████████▐                      ██▐            ██ \n"
"                                          █████████████                 ████████████▐                        ██▐        ██ \n"
"                                         ███████████████                ████████████▐                          ██▐    ██ \n"
"                                         ███████████████                ████████████▐                            ██ ██\n"
"                                          █████████████╜                ████████████▐                         ██████ ██████\n"
"                                            ████████╜                   █████████|▔▔/                         █╓----█╓----█\n"
"                                                                        █████████|/                           █╚════█╚════█ \n"       
"                                                                                                              ▔▔▔▔▔▔▔▔▔▔▔▔ \n"
"                                        ROCK                          PAPER                                  SCISSOR\n";
        cout<<rock;
        cout<<endl<<endl;
        cout<<player1 <<" \n\nPlease enter your choice \n\n1.ROCK\n\n2.PAPER\n\n3.SCISSOR\n\nchoice number must be from (1-3) :";
         cin>>choice1;
         int flag=0;
         if(cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        flag=1;

    }

        while(flag||choice1<1||choice1>3)
        {
            cout<<"\nPlease choose again "<<player1<<": "<<endl;
            system("say You entered wrong input.");
            cin>>choice1;
            if(cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        flag=1;

    }
    else
    flag=0;
        }
        clearScreen();
        pattertop();  
        cout<<"\n\nYOU have following choices\n\n\n";
        cout<<rock; 

        //player 2 choice making
        cout<<player2 <<" \n\nPlease enter your choice \n\n1.ROCK\n\n2.PAPER\n\n3.SCISSOR\n\nchoice number must be from (1-3) :";
         cin>>choice2;
         if(cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        flag=1;

    }

        while(flag||choice2<1||choice2>3)
        {
            cout<<"\nPlease choose again "<<player2<<": "<<endl;
            system("say You entered wrong input.");
            cin>>choice2;
            if(cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        flag=1;

    }
    else
    flag=0;
        }

        //updating data
          checkwinstatus(choice1,choice2);
          if(checkstatus())
          break;
          
     }
     enddisplay();

   }

   void PlayRPS::mainplaypvc()
   {
    
       clearScreen();
       
       pattertop();
       string name;
        cout<<"\n\nEnter Your Name Player 01: ";
        system ("say \"Dear Player 1. Enter your precious name\"");
        cin>>name;
        setname( name,1);
       
     while(!checkstatus())
     {
        clearScreen();
       pattertop();
        

        
        
        cout<<"\n\nYOU have following choices\n\n\n";
        
         string rock=
"                                                █  ████╗                    ████████████▐                    ██▐                ██ \n"
"                                               ██████████╗                  ████████████▐                      ██▐            ██ \n"
"                                              █████████████                 ████████████▐                        ██▐        ██ \n"
"                                             ███████████████                ████████████▐                          ██▐    ██ \n"
"                                             ███████████████                ████████████▐                            ██ ██\n"
"                                              █████████████╜                ████████████▐                         ██████ ██████\n"
"                                                ████████╜                   █████████|▔▔/                         █╓----█╓----█\n"
"                                                                            █████████|/                           █╚════█╚════█ \n"       
"                                                                                                                  ▔▔▔▔▔▔▔▔▔▔▔▔ \n"
"                                                  ROCK                        PAPER                                  SCISSOR\n";
        cout<<rock;
        cout<<endl<<endl;
        cout<<player1 <<" \n\nPlease enter your choice \n\n1.ROCK\n\n2.PAPER\n\n3.SCISSOR\n\nchoice number must be from (1-3) :";
         cin>>choice1;
         int flag=0;
         if(cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        flag=1;

    }

        while(flag||choice1<1||choice1>3)
        {
            cout<<"\nPlease choose again "<<player1<<": "<<endl;
            system("say You entered wrong input.");
            cin>>choice1;
            if(cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        flag=1;

    }
    else
    flag=0;
        }
        clearScreen();
        pattertop();  
        cout<<"\n\nYOU have following choices\n\n\n";
        cout<<rock; 

        //player 2 choice making
        choice2=rand()%3+1;

        if(choice2==1)
    cout<<"\n\n\n\nComputer chose Rock.\n\n";
    else if(choice2==2)
        cout<<"\n\n\n\nComputer chose Paper.\n\n";
    else
        cout<<"\n\n\n\nComputer chose Scissors.\n\n";

        //updating data
          checkwinstatus(choice1,choice2);
          if(checkstatus())
          break;
          clearScreen();
     }
     enddisplay();

   }

    void PlayRPS::checkwinstatus(int choice1,int choice2)
    {
        sf::SoundBuffer rockbuffer;
        if(!rockbuffer.loadFromFile("RockPaperScissor/assets/rock.mp3"))
        cout<<"Unable to load rock breaking sound";
        sf::Sound rock(rockbuffer);
        sf::SoundBuffer paperbuffer;
        if(!paperbuffer.loadFromFile("RockPaperScissor/assets/paper.mp3"))
        cout<<"Unable to load paper sound";
        sf::Sound paper(paperbuffer);
        sf::SoundBuffer sbuffer;
        if(!sbuffer.loadFromFile("RockPaperScissor/assets/scissor.mp3"))
        cout<<"Unable to load scissor clank sound";
        sf::Sound s(sbuffer);



         if(choice1==1&&choice2==2)
        {
            cout<<endl<<endl<<"Rock was defeated.\n";
            rock.play();
            updatescore(0,10);
            this_thread::sleep_for(chrono::seconds(2));
            updatehearts(-1,0);
        }

        else if(choice1==1&&choice2==3)
        {
            cout<<endl<<endl<<"Rock won.\n";
            s.play();
            this_thread::sleep_for(chrono::seconds(2));
            updatescore(10,0);
            updatehearts(0,-1);
        }

        else if(choice1==2&&choice2==1)
        {
            cout<<endl<<endl<<"Rock was defeated.\n";
            rock.play();
            this_thread::sleep_for(chrono::seconds(2));
            updatescore(10,0);
            updatehearts(0,-1);
        }

        else if(choice1==2&&choice2==3)
        {
            cout<<endl<<endl<<"Paper was defeated.\n";
            paper.play();
            this_thread::sleep_for(chrono::seconds(2));
            updatescore(0,10);
            updatehearts(-1,0);
        }

        else if(choice1==3&&choice2==1)
        {
            cout<<endl<<endl<<"Rock won.\n";
            s.play();
            this_thread::sleep_for(chrono::seconds(2));
            updatescore(0,10);
            updatehearts(-1,0);
        }
        
        else if(choice1==3&&choice2==2)
        {
            cout<<endl<<endl<<"Scissor won.\n";
            paper.play();
            this_thread::sleep_for(chrono::seconds(2));
            updatescore(10,0);
            updatehearts(0,-1);
        }
        else
        {
            cout<<endl<<"It was a DRAW\n";
            this_thread::sleep_for(chrono::seconds(1));

        }

    }

    void PlayRPS::pattertop()
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
    
    void PlayRPS::name()
   {
        string b=
"                ██████████╗    ██████████    |████████╗  ██▐.    ██        ██████████╗   |█████████╗   ██████████╗  |█████████╗ ██████████╗            ██████████████  \n"
"                ██ ╓------██  ██ ╓------██▐  ██ ╓-----╜  ██▐.  ██.         ██ ╓------██  ██ ╓------██▐ ██ ╓------██ ██ ╓------╜ ██ ╓------██         ███      \n"
"                ██ ║      ██  ██ ║      ██▐  ██ ║        ██▐. ██.          ██ ║      ██  ██ ║      ██▐ ██ ║      ██ ██ ║        ██ ║.     ██         ███     █  \n"
"                ██ ╚══════██  ██ ║      ██▐  ██ ║        ████.             ██ ╚══════██  ██ ╚══════██▐ ██ ╚══════██ ██ ║        ██ ╚══════██         ███     █  \n"
"                ███████████   ██ ║      ██▐  ██ ║        ██▐██.            ███████████   ████████████▐ ███████████  ████████╗   ███████████            ███████   \n"
"                ██ ██         ██ ║      ██▐  ██ ║        ██▐. ██.          ██ ║          ██ ╓------██▐ ██ ║         ██ ╔════╝   ██ ██                        █     █  \n"
"                ██ ║ ██       ██ ╚══════██▐  ██ ║        ██▐.  ██.         ██ ║          ██ ║      ██▐ ██ ║         ██ ║        ██ ║ ██                      █     █  \n"
"                ██ ║  ██        ██████████   |████████╗  ██▐.    ██        ██ ║          ██ ║      ██▐ ██ ║         |█████████╗ ██ ║  ██                     █     █  \n"
"                ██ ║    ██     ╚---------╜   ╚--------╜                                                             ╚---------╜ ██ ║    ██                ██████████████  \n"
"                                                                                                                                                                   █  \n";

string a=
"                                                    |████████╗  |████████╗ ██▐  |████████╗  |████████╗  ██████████   ██████████╗  \n"
"                                                   ██ ╓------╜ ██ ╓------╜ ██▐ ██ ╓------╜ ██ ╓------╜ ██ ║      ██▐ ██ ╓------██\n"
"                                                   ██ ║        ██ ║        ██▐ ██ ║        ██ ║        ██ ║      ██▐ ██ ║      ██ \n"
"                                                    |████████╗ ██ ║        ██▐  |████████╗  |████████╗ ██ ║      ██▐ ██ ╚══════██   \n"
"                                                           ██  ██ ║        ██▐         ██          ██  ██ ║      ██▐ ███████████      \n"
"                                                            ██ ██ ║        ██▐          ██          ██ ██ ║      ██▐ ██ ██         \n"
"                                                   |████████╗   |████████╗ ██▐ |████████╗  |████████╗  ██ ╚══════██▐ ██ ║ ██      \n"
"                                                   ╚--------╜   ╚--------╜ ▒▒╜ ╚--------╜  ╚--------╜    ██████████  ██ ║   ██     \n"
"                                                                                                                     ██ ║     ██   \n";
cout<<YELLOW<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
for(int i=0;i<stlen(b);i++)
      {
        cout<<b[i];
        this_thread::sleep_for(chrono::milliseconds(2));
      }
      cout<<endl;
for(int i=0;i<stlen(a);i++)
      {
        cout<<a[i];
        this_thread::sleep_for(chrono::milliseconds(2));
      }
      this_thread::sleep_for(chrono::seconds(2));

      cout<<RESET;
            
   }

    void PlayRPS::enddisplay()
   {
      if(hearts1)
      {
        clearScreen();
        endgame(player1);
        
         leaderboard obj;
        obj.AddRecord(player1,"Rock_Paper_Scissor",1);
           this_thread::sleep_for(chrono::seconds(2));

      }
      
      else
      {
        clearScreen();
        endgame(player2);
        
        leaderboard obj;
        obj.AddRecord(player2,"Rock_Paper_Scissor",1);
        this_thread::sleep_for(chrono::seconds(2));
        
      }
      

   }

    int PlayRPS::stlen(string a)
    {
        int count=0;
        while(a[count]!='\0')
        {
            count++;
        }
        return count;
    }

   void PlayRPS::clearScreen()
   {
    
            system("clear");
    }

    void PlayRPS::endgame(string player)
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

         
          cout<<ORANGE<<x<<RESET;
          cout<<endl<<endl<<endl<<endl;
           if(hearts1)
           {
              cout<<"\n\n\n\n                                                "<<player2<< "  WON";
             getchar();
           }
           if(hearts2)
           {
              cout<<"\n                                                "<<player1<< "  WON";
             getchar();
           }
          

    }

//     int main()
// {
//     PlayRPS obj1;
//     obj1.mainplay();

//     return 0;
// }