#include"header.h"
#include"leaderboard_header.h"

    void snake::name()
{
    string name=
"         |████████╗   ██▐        ██▐  |█████████╗    ██▐.    ██  |█████████╗.      ██████████████        ██▐           |█████████╗    |████████╗      |████████╗     |█████████╗ ██████████╗  \n"
"        ██ ╓------╜   ██▐██▐     ██▐  ██ ╓------██▐  ██▐.  ██.   ██ ╓------╜.     ███                    ██▐           ██ ╓------██▐  ██ ╓-----██▐   ██ ╓-----██▐    ██ ╓------╜ ██ ╓------██  \n"
"        ██ ║          ██▐  ██▐.  ██▐  ██ ║      ██▐  ██▐. ██.    ██ ║             ███     █              ██▐           ██ ║      ██▐  ██ ║      ██▐  ██ ║      ██▐.  ██ ║        ██ ║.     ██\n"
"         |████████╗   ██▐   ██▐. ██▐  ██ ╚══════██▐  ████.       ██ ║             ███     █              ██▐           ██ ║      ██▐  ██ ║      ██▐  ██ ║      ██▐.  ██ ║        ██ ╚══════██ \n"
"                 ██   ██▐    ██▐.██▐  ████████████▐  ██▐██.      ████████╗          ███████              ██▐           ████████████▐  ██ ║      ██▐  ██ ║      ██▐   ████████╗   ███████████  \n"
"                  ██  ██▐     ██ ██▐  ██ ╓------██▐  ██▐. ██.    ██ ╔════╝                █     █        ██▐           ██ ╓------██▐  ██ ║      ██▐  ██ ║      ██▐   ██ ╔════╝   ██ ██        \n"
"        |████████╗    ██▐       ███▐  ██ ║      ██▐  ██▐.  ██.   ██ ║                     █     █        ██▐           ██ ║      ██▐  ██ ╚═════██▐   ██ ╚═════██▐    ██ ║        ██ ║ ██       \n"
"        ╚--------╜    ██▐        ██▐  ██ ║      ██▐  ██▐.    ██  |█████████╗              █     █        |████████████╗██ ║      ██▐  |██████████╗   |█████████╗.    |█████████╗ ██ ║  ██      \n"
"                                                                 ╚---------╜         ██████████████      ╚------------╜               ╚----------╜    ╚--------╜.    ╚---------╜ ██ ║    ██     \n"
"                                                                                                █.  \n";
cout<<YELLOW<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
for(int i=0;i<stlen(name);i++)
      {
        cout<<name[i];
        this_thread::sleep_for(chrono::milliseconds(3));
      }

      this_thread::sleep_for(chrono::seconds(3));

      cout<<RESET;
 

}

    void snake::pattertop()
    {
        string x=
"                                                              ██████████╗     ██ ▐             |█████████╗       ██▐              ██   \n"
"                                                              ██ ╓------██    ██ ▐             ██╓------██       ██▐              ██  \n" 
"                                                              ██ ║      ██    ██ ▐            ██ ║       ██        ██▐          ██ \n"
"                                                              ██ ╚══════██    ██ ▐            ██ ║       ██          ██▐      ██ \n"
"                                                              ███████████     ██ ▐            ██ ╚═══════██            ██▐. ██  \n"
"                                                              ██ ║            ██ ▐            ████████████▐              ██\n"
"                                                              ██ ║            ██ ▐            ██ ╓-------██              ██\n"
"                                                              ██ ║            ██ ╚--------╗   ██ ║       ██              ██\n"
"                                                              ██ ║             ████████████   ██ ║       ██              ██\n";
        cout<<GREEN<<"      ==============================================================================================================================================================================================\n\n";
        cout<<RESET<<x;
        cout<<GREEN<<"      ==============================================================================================================================================================================================\n\n"<<RESET;
    
    }

    void snake::mainplay()
    {
        clearScreen();
        sf::SoundBuffer bg;
        if(!bg.loadFromFile("Snake_Ladder/assets/snake.mp3"))
        cout<<"Unable to load the bg music for snake n ladder";
        sf::Sound snake(bg);
        snake.setLooping(true);
        snake.play();
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
            system("say Enter Again");
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

    void snake::mainplaypvc()
    {
        sf::SoundBuffer w;
        if(!w.loadFromFile("Snake_Ladder/assets/win.mp3"))
        cout<<"Unable to load win sound\n";
        sf::Sound win(w);

        int x;
        clearScreen();
        pattertop();
        string name;
        cout<<"\n\nEnter Your Name Player 01: ";
        system ("say \"Dear Player 1. Enter your precious name\"");
        cin>>name;
        setname( name,1);
         
        while(true)
        {
            int flag=0;
             clearScreen();
             pattertop();
             board();

             cout<<"Press Any Key To rool the DICE "<<player1<<endl;
             system("say Press Enter key to roll the dice");
             cin.ignore();
             getchar();
             process(place1,flag);
             if(flag)
             {
                clearScreen();
                endgame();
                cout<<endl<<endl<<endl<<endl<<endl;
                cout<<"                                         "<<player1<<" Has Won The Game\n\n";
                leaderboard obj;
                obj.AddRecord(player1,"Snake_&_Ladder",1);
                getchar();
                break;
             }


             ladderOrsnake(place1);
             clearScreen();
             pattertop();
             board();

             cout<<"\n\nCOMPUTER's TURN \n"<<endl;
             system("say Computer is rolling the dice");
             this_thread::sleep_for(chrono::milliseconds(250));
             process(place2,flag);
             if(flag)
             {
                clearScreen();
                endgame();
                cout<<endl<<endl<<endl<<endl<<endl;
                cout<<"                                         Computer Has Won The Game\n\n";
                leaderboard obj;
                obj.AddRecord(player2,"Snake_&_Ladder",1);
                getchar();
                break;
             }

             ladderOrsnake(place2);


        }
        win.play();
        cout<<"\n\nEnter any key to exit to main menu.\n";
        getchar();

    }

    void snake::mainplaypvp()
    {
        sf::SoundBuffer w;
        if(!w.loadFromFile("Snake_Ladder/assets/win.mp3"))
        cout<<"Unable to load win sound\n";
        sf::Sound win(w);

        int x;
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
        cin.ignore(10000,'\n');
        while(true)
        {
            int flag=0;
             clearScreen();
             pattertop();
             board();

             cout<<"Press Any Key To rool the DICE "<<player1<<endl;
             system("say Press Enter key to roll the dice");
             getchar();
            
             process(place1,flag);
             if(flag)
             {
                clearScreen();
                endgame();
                cout<<endl<<endl<<endl<<endl<<endl;
                cout<<"                                         "<<player1<<" Has Won The Game\n\n";
                leaderboard obj;
                obj.AddRecord(player1,"Snake_&_Ladder",1);
                getchar();
                getchar();
                break;
             }


             ladderOrsnake(place1);
             clearScreen();
             pattertop();
             board();

             cout<<"Press Any Key To rool the DICE "<<player2<<endl;
             system("say Press Enter key to roll the dice");

             getchar();
             process(place2,flag);
             if(flag)
             {
                clearScreen();
                endgame();
                cout<<endl<<endl<<endl<<endl<<endl;
                cout<<"                                         "<<player2<<" Has Won The Game\n\n";
                leaderboard obj;
                obj.AddRecord(player2,"Snake_&_Ladder",1);
                getchar();
                break;
             }

             ladderOrsnake(place2);


        }
        win.play();
        cout<<"\n\nEnter any key to exit to main menu.\n";
        getchar();
    }

    int snake::stlen(string a)
    {
        int count=0;
        while(a[count]!='\0')
        {
            count++;
        }
        return count;
    }
      //setters
    void snake::setname(string name,int player)
   {
    if(player==1)
     player1=name;
    else
     player2=name;
   }

    void setColor(int textColor, int bgColor)    //color setter for mac i.e accronyms
    {
            cout << "\033[38;5;" << textColor << ";48;5;" << bgColor << "m";
    }

    void snake::clearScreen()
   {
        system("clear");
   }

    void snake::board()
    {
       cout<<endl<<endl<<endl<<endl;
        for(int j=0;j<10;j++)
        {    
            cout<<"                                                          ";
                cout<<"|";
             for (int i=0;i<10;i++)
            {
                if(arr[j][i]==place1)
                {
                    setColor(15, 30);
                            if(arr[j][i]>=1&&arr[j][i]<=10)
                            cout<<"   "<<arr[j][i]<<"    ";
                            else
                            cout<<"   "<<arr[j][i]<<"   ";
                             cout<<RESET;
                            cout<<"|";
                }
                else if(arr[j][i]==place2)
                {
                    setColor(15, 33);
                            if(arr[j][i]>=1&&arr[j][i]<=10)
                            cout<<"   "<<arr[j][i]<<"    ";
                            else
                            cout<<"   "<<arr[j][i]<<"   ";
                             cout<<RESET;
                            cout<<"|";

                }
                else if(arr[j][i]==19||arr[j][i]==64||arr[j][i]==86||arr[j][i]==93||arr[j][i]==35||arr[j][i]==82)
                {
                    setColor(7, 1);
                            if(arr[j][i]>=1&&arr[j][i]<=10)
                            cout<<"   "<<arr[j][i]<<"    ";
                            else
                            cout<<"   "<<arr[j][i]<<"   ";
                            cout<<RESET;
                            cout<<"|";
                             cout<<RESET;

                }
                else if(arr[j][i]==23||arr[j][i]==2||arr[j][i]==26||arr[j][i]==27||arr[j][i]==13||arr[j][i]==57||arr[j][i]==44||arr[j][i]==38||arr[j][i]==75||arr[j][i]==67||arr[j][i]==53||arr[j][i]==49||arr[j][i]==88||arr[j][i]==72||arr[j][i]==71||arr[j][i]==79||arr[j][i]==61)
                {
                   // setColor(0, 10);
                   setColor(0, 208);
                            if(arr[j][i]>=1&&arr[j][i]<=10)
                            cout<<"   "<<arr[j][i]<<"    ";
                            else
                            cout<<"   "<<arr[j][i]<<"   ";
                             cout<<RESET;
                            cout<<"|";
                            

                }
                else if(arr[j][i]==98||arr[j][i]==84||arr[j][i]==70||arr[j][i]==60||arr[j][i]==41||arr[j][i]==21||arr[j][i]==70||arr[j][i]==51||arr[j][i]==50||arr[j][i]==31||arr[j][i]==30||arr[j][i]==3||arr[j][i]==17||arr[j][i]==21||arr[j][i]==40||arr[j][i]==25||arr[j][i]==76||arr[j][i]==54||arr[j][i]==47||arr[j][i]==34)
                {
                    setColor(0, 10);
                            if(arr[j][i]>=1&&arr[j][i]<=10)
                            cout<<"   "<<arr[j][i]<<"    ";
                            else
                            cout<<"   "<<arr[j][i]<<"   ";
                             cout<<RESET;
                            cout<<"|";

                }
                else if(arr[j][i]==100)
                {
                    setColor(0, 220);
                            if(arr[j][i]>=1&&arr[j][i]<=10)
                            cout<<"   "<<arr[j][i]<<"    ";
                            else
                            cout<<"   "<<arr[j][i]<<"   ";
                             cout<<RESET;
                            cout<<"|";

                }
                else
                {
                    setColor(1, 7);
                            if(arr[j][i]>=1&&arr[j][i]<=10)
                            cout<<"   "<<arr[j][i]<<"    ";
                            else
                            cout<<"   "<<arr[j][i]<<"   ";
                            cout<<RESET;
                            cout<<"|";
                }
            
                            
            
            }       
            cout<<endl<<endl;  

        }
     }

    void snake::die(int n)
    {
         string one=   
"                       █████████████\n"
"                       █████████████\n"
"                       █████   █████\n"
"                       █████████████\n"
"                       █████████████\n";

string two=
"                       █████████████\n"
"                       █████████████\n"
"                       ██   ███   ██\n"
"                       █████████████\n"
"                       █████████████\n";

string three=
"                       █████████████\n"
"                       ██   ███   ██\n"
"                       █████████████\n"
"                       █████   █████\n"
"                       █████████████\n";

string four=
"                       █████████████\n"
"                       ██   ███   ██\n"
"                       █████████████\n"
"                       ██   ███   ██\n"
"                       █████████████\n";

string five=
"                       █████████████\n"
"                       ██   ███   ██\n"
"                       █████   █████\n"
"                       ██   ███   ██\n"
"                       █████████████\n";

string six=
"                       █████████████\n"
"                       ██___███___██\n"
"                       ██___███___██\n"
"                       ██   ███   ██\n"
"                       █████████████\n";
cout<<RED;

                if(n==1)
                {
                    cout<<six;
                    this_thread::sleep_for(chrono::milliseconds(300));
                    display();
                    cout<<four;
                    this_thread::sleep_for(chrono::milliseconds(300));
                    display();
                    cout<<one;
                }
                else if(n==2)
                {
                    cout<<three;
                    this_thread::sleep_for(chrono::milliseconds(300));
                    display();
                    cout<<five;
                    this_thread::sleep_for(chrono::milliseconds(300));
                    display();
                    cout<<two;
                }
                else if(n==3)
                {
                    cout<<four;
                    this_thread::sleep_for(chrono::milliseconds(300));
                    display();
                    cout<<five;
                    this_thread::sleep_for(chrono::milliseconds(300));
                    display();
                    cout<<three;
                }
                else if(n==4)
                {
                    cout<<six;
                    this_thread::sleep_for(chrono::milliseconds(300));
                    display();
                    cout<<one;
                    this_thread::sleep_for(chrono::milliseconds(300));
                    display();
                    cout<<four;
                }
                else if(n==5)
                {
                    cout<<two;
                    this_thread::sleep_for(chrono::milliseconds(300));
                    display();
                    cout<<five;
                    this_thread::sleep_for(chrono::milliseconds(300));
                    display();
                    cout<<five;
                }
                else if(n==6)
                {
                    cout<<one;
                    this_thread::sleep_for(chrono::milliseconds(300));
                    display();
                    cout<<three;
                    this_thread::sleep_for(chrono::milliseconds(300));
                    display();
                    cout<<six;
                }
                this_thread::sleep_for(chrono::seconds(2));
cout<<RESET;

    }

    void snake::process(int &number,int &flag)//number bynumber bo
    {
        sf::SoundBuffer hopp;
        if(!hopp.loadFromFile("Snake_Ladder/assets/hop.mp3"))
        {
            cout<<"Unable to load hop soun\n";
        }
        sf::Sound hop(hopp);
        int ran,x;
        ran=rand()%6+1;

            die(ran);

        

        x=0;
        while(x!=ran)
        {
            number+=1;
            if(number==100)
            {
                flag=1;
            }
            clearScreen();
            pattertop();
            board();
            hop.play();
            this_thread::sleep_for(chrono::seconds(1));   
            x++;
        }


    } 
  
    void snake::ladderOrsnake(int &place)
    {
        sf::SoundBuffer down;
        if(!down.loadFromFile("Snake_Ladder/assets/down.mp3"))
        cout<<"Unable to load down music file";
        sf::Sound d(down);

        sf::SoundBuffer up;
        if(!up.loadFromFile("Snake_Ladder/assets/up.mp3"))
        cout<<"Unable to load down music file";
        sf::Sound u(up);

        if(place==19)
        {
            display();
            d.play();
            this_thread::sleep_for(chrono::seconds(2));
            place=2;
            
        }
        else if (place==82)
        {
            display();
            d.play();
            this_thread::sleep_for(chrono::seconds(2));
            place=61;
        }
        else if (place==64)
        {
            display();
            d.play();
            this_thread::sleep_for(chrono::seconds(2));
            place=23;
        }
        else if (place==35)
        {
            display();
            d.play();
            this_thread::sleep_for(chrono::seconds(2));
           place=13;
        }
        else if(place==86)
        {
            display();
            d.play();
            this_thread::sleep_for(chrono::seconds(2));
            place=49;
        }
        else if (place==93)
        {
            display();
            d.play();
            this_thread::sleep_for(chrono::seconds(2));
            place=71;
        }
        else if(place==21)
        {
            display();
            u.play();
            this_thread::sleep_for(chrono::seconds(2));
            place=60;
        }
        else if(place==3)
        {
            display();
            u.play();
            this_thread::sleep_for(chrono::seconds(2));
            place=25;
        }
        else if(place==30)
        {
            display();
            u.play();
            this_thread::sleep_for(chrono::seconds(2));
            place=70;
        }
        else if(place==34)
        {
            display();
            u.play();
            this_thread::sleep_for(chrono::seconds(2));
            place=54;
        }
        else if(place==76)
        {
            display();
            u.play();
            this_thread::sleep_for(chrono::seconds(2));
            place=98;
        }  
        
    }

    void snake::display()
    {
             clearScreen();
             pattertop();
             board();

    }

    void snake::endgame()
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
//     snake obj1;
//     obj1.mainplay();


// }
