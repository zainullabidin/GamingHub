#include"header.h"
#include"leaderboard_header.h"

    void match::name()
    {
        string name=
    "             ██▐╗            ██▐╗  |█████████╗    |█████████████   |████████╗ ██▐       ██▐         |████████╗     |█████████╗          |████████╗   |█████████╗  ██████████╗  |████████╗     \n"
    "             ██▐██▐╗       ██▐██▐  ██ ╓------██▐. |=====██▐       ██ ╓------╜ ██▐       ██▐.        ██ ╓-----██▐   ██ ╓------██▐.      ██ ╓------╜. ██ ╓------██▐ ██ ╓------██ ██ ╓-----██▐   \n"
    "             ██▐  ██▐.    ██▐ ██▐  ██ ║      ██▐        ██▐       ██ ║        ██▐       ██▐.        ██ ║      ██▐  ██ ║      ██▐.      ██ ║         ██ ║      ██▐ ██ ║.     ██ ██ ║      ██▐ \n"
    "             ██▐   ██▐.  ██▐. ██▐. ██ ╚══════██▐.       ██▐       ██ ║        ██▐       ██▐         ██ ║      ██▐  ██ ║      ██▐       ██ ║         ██ ║      ██▐ ██ ╚══════██ ██ ║      ██▐ \n"
    "             ██▐    ██▐ ██▐.  ██▐. ████████████▐.       ██▐       ██ ║        ████████████▐         ██ ║      ██▐  ████████████▐       ██ ║         ████████████▐ ███████████  ██ ║      ██▐ \n"
    "             ██▐              ██▐  ██ ╓------██▐.       ██▐       ██ ║        ██▐       ██▐         ██ ║      ██▐  ██ ╓------██▐       ██ ║         ██ ╓------██▐ ██ ██        ██ ║      ██▐ \n"
    "             ██▐              ██▐  ██ ║      ██▐        ██▐       ██ ║        ██▐       ██▐         ██ ║      ██▐  ██ ║      ██▐       ██ ║         ██ ║      ██▐ ██ ║ ██      ██ ║      ██▐ \n"
    "             ██▐              ██▐  ██ ║      ██▐        ██▐        |████████╗ ██▐       ██▐         ██ ╚═════██▐   ██ ║      ██▐         |████████╗ ██ ║      ██▐ ██ ║  ██     ██ ╚═════██▐    \n"
    "             ██▐              ██▐                                  ╚--------╜                       |██████████╗                         ╚--------╜               ██ ║    ██    |██████████╗   \n"
    "                                                                                                    ╚----------╜                                                                ╚----------╜   \n";


    cout<<YELLOW<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    for(int i=0;i<stlen(name);i++)
        {
            cout<<name[i];
            this_thread::sleep_for(chrono::milliseconds(1));
        }

        this_thread::sleep_for(chrono::seconds(2));

        cout<<RESET;
    }
   
    int match::stlen(string a)
    {
        int count=0;
        while(a[count]!='\0')
        {
            count++;
        }
        return count;
    }

    void match::clearScreen()
   {
        system("clear");
   }

    void match::pattertop()
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
    //setters
    void match::setname(string name,int player)
   {
    if(player==1)
     player1=name;
    else
     player2=name;
   }

    void match::updateturn(int player)
    {
        if(player==1)
        {
            turn1+=1;
        }
        else
        {
            turn2+=1;
        }
    }

    void match::shuffle()
    {
        int x=0;
        while(x<=23)
        {
            int col=rand()%10;
            int row=rand()%2;
            ++x;
            int temp=arr[row][col];
            int c=rand()%10;
            int r=rand()%2;
            arr[row][col]=arr[r][c];
            arr[r][c]=temp;
        
        }
    }

    void match::showcards(int choice)
    {
        cout<<endl;
                string one=
        "            ██████████████\n"       
        "            ██████  ██████\n"
        "            ██████  ██████\n"
        "            ██████  ██████\n"
        "            ██████  ██████\n"
        "            ██████  ██████\n"
        "            ██████████████\n";
        string two=
        "            ██████████████\n"
        "            ███        ███\n"
        "            ███  ████. ███\n"
        "            █████████  ███\n"
        "            ███        ███\n"
        "            ███  █████████\n"
        "            ███        ███ \n"
        "            ██████████████\n";
        string three=
        "            ██████████████\n"
        "            ██         ███\n"
        "            █████████. ███\n"
        "            ██.        ███\n"
        "            █████████. ███\n"
        "            ██.        ███\n"
        "            ██████████████\n";
        string four=
        "            ██████████████\n"
        "            ███  ███  ████   \n"              
        "            ███  ███  ████\n"
        "            ███  ███  ████\n"
        "            ███         ██\n"
        "            ████████  ████\n"
        "            ████████  ████\n"
        "            ██████████████\n";
        string five=
        "            ██████████████  \n"                   
        "            ███        ███\n"
        "            ███  █████████\n"
        "            ███        ███\n"
        "            █████████. ███\n"
        "            ███        ███\n"
        "            ██████████████\n";
        string six=
        "            ██████████████ \n" 
        "            ███        ███ \n"                   
        "            ███   ████████\n"
        "            ███        ███\n"
        "            ███   ███  ███\n"
        "            ███        ███\n"
        "            ██████████████\n";
        string seven=
        "            ██████████████  \n"                   
        "            ███        ███\n"
        "            █████████  ███ \n"
        "            █████████  ███ \n"
        "            █████████  ███ \n"
        "            █████████  ███ \n"
        "            ██████████████\n";
        string eight=
        "            ██████████████  \n"
        "            ███        ███  \n"                  
        "            ███   ██   ███\n"
        "            ███        ███\n"
        "            ███   ██   ███\n"
        "            ███        ███\n"
        "            ██████████████\n";
        string nine=
        "            ██████████████   \n"                  
        "            ███        ███\n"
        "            ███  ████  ███ \n"
        "            ███        ███ \n"
        "            █████████  ███ \n"
        "            █████████  ███ \n"
        "            ██████████████\n";
        string zero=
        "            ██████████████  \n"
        "            ███        ███  \n"                  
        "            ███   ██   ███\n"
        "            ███   ██   ███\n"
        "            ███   ██   ███\n"
        "            ███        ███\n"
        "            ██████████████\n";
                

        cout<<"CHOICE: ";
        cout<<choice<<endl;
       int row=0,col=0;
        if(choice<10)
        {
            row=0;
            col=choice%10-1;
        }
        else if(choice==10)
        {
            row=0;
            col=9;
        }
        else if(choice==20)
        {
            row=1;
            col=9;
        }
        else
        {
            row=1;
            col=choice%10-1;
        }

            if(arr[row][col]==0)
            {
                cout<<zero;
            }
            else if(arr[row][col]==1)
            {
                cout<<one;
            }
            else if(arr[row][col]==2)
            {
              cout<<two;  
            }
            else if(arr[row][col]==3)
            {
              cout<<three;  
            }
            else if(arr[row][col]==4)
            {
                cout<<four;
            }
            else if(arr[row][col]==5)
            {
                cout<<five;
            }
            else if(arr[row][col]==6)
            {
                cout<<six;
            }
            else if(arr[row][col]==7)
            {
                cout<<seven;
            }
            else if(arr[row][col]==8)
            {
                cout<<eight;
            }
            else if(arr[row][col]==9)
            {
                cout<<nine;
            }
        

    }

    void match::hidecards()
        {
            cout<<endl;
            
            string dummy=
                "            █*████████████\n"       
                "            ██████████████\n"
                "            ██████████████\n"
                "            ██████████████\n"
                "            ██████████████\n"
                "            ██████████████\n"
                "            ████████████*█\n";

                cout<<dummy<<endl;

                cout<<endl<<endl;
                


        }

    void match::processmatch()
    {
        sf::SoundBuffer match;
        if(!match.loadFromFile("Match_Cards/assets/match.mp3"))
        {
            cout<<"Unable to load music\n";
        }
        sf::Sound m(match);
        int row=0,col1=0;
        if(choice1<10)
        {
            row=0;
            col1=choice1%10-1;
        }
        else if(choice1==10)
        {
            row=0;
            col1=9;
        }
        else if(choice1==20)
        {
            row=1;
            col1=9;
        }
        else
        {
            row=1;
            col1=choice1%10-1;
        }
        int row2=0,col2=0;
        if(choice2<10)
        {
            row2=0;
            col2=choice2%10-1;
        }
        else if(choice2==10)
        {
            row2=0;
            col2=9;
        }
        else if(choice2==20)
        {
            row2=1;
            col2=9;
        }
        else
        {
            row2=1;
            col2=choice2%10-1;
        }
    
        if(arr[row][col1]==arr[row2][col2])
            {
                m.play();
                arr[row][col1]=-1;
                flags[row][col1]=true;
                arr[row2][col2]=-1;
                flags[row2][col2]=true;
                this_thread::sleep_for(chrono::seconds(2));

            }
    }
    
    void match::displayboard()
    {

                 cout<<"            ";
                    //row1
        for(int i=0;i<10;i++)
        {
            if(arr[0][i]!=-1)
        {  
            cout<<"█";
           if(i+1==10)
            cout<<i+1<<"███████████   ";
          else
            cout<<i+1<<"████████████   ";
            
        }
        else
        cout<<"                 ";
        }
        cout<<endl;
        //row 2--6
        for(int j=2;j<=6;j++)
        { cout<<"            ";
            for(int i=0;i<10;i++)
        {
            if(arr[0][i]!=-1)
             cout<<"██████████████   ";
            else
             cout<<"                 ";
        }
        cout<<endl;
        }

         cout<<"            ";
        //last row;
        for(int i=0;i<10;i++)
        {
            if(arr[0][i]!=-1)
        {
            
           if(i+1==10)
            cout<<"███████████"<<i+1<<"█   ";
          else
            cout<<"████████████"<<i+1<<"█   ";
            
        }
        else
        cout<<"                 ";
        }
        cout<<endl<<endl<<endl;







                 cout<<"            ";
                    //row1
        for(int i=0;i<10;i++)
        {
            if(arr[1][i]!=-1)
        {  
            cout<<"█";
            cout<<i+10+1<<"███████████   ";
            
        }
        else
        cout<<"                 ";
        }
        cout<<endl;
        //row 2--6
        for(int j=2;j<=6;j++)
        { cout<<"            ";
            for(int i=0;i<10;i++)
        {
            if(arr[1][i]!=-1)
             cout<<"██████████████   ";
            else
             cout<<"                 ";
        }
        cout<<endl;
        }
         cout<<"            ";
        //last row;
        for(int i=0;i<10;i++)
        {
            if(arr[1][i]!=-1)
        {
            cout<<"███████████"<<i+10+1<<"█   ";
        }
        else
        cout<<"                 ";
        }
        cout<<endl<<endl<<endl;

}

    void match::mainplay()
    {
        sf::SoundBuffer bg;
        if(!bg.loadFromFile("Match_Cards/assets/background.mp3"))
        cout<<"Unable to load the bg music";
        sf::Sound m(bg);

        m.setLoop(true);
        m.play();
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

    bool match::terminate()
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(arr[i][j]!=-1)
                return false;
            }
        }
        return true;
    }

    void match::mainplaypvp()
    {
        shuffle();
        clearScreen();
        pattertop();
        string name;
        cout<<"\n\nEnter Your Name Player 01: ";
        system ("say \"Dear Player. Enter your  name\"");
        cin>>name;
        setname( name,1);
        cout<<"Enter Your Name Player 02: ";
        system ("say \"Dear Player . Enter your  name\"");
        cin>>name;
        setname( name,2);
        cin.ignore(10000,'\n');
        while(true)
        {
            display();
            cout<<endl<<endl;
            hidecards();
            hidecards();

            cout<<"Enter the card number to reveal the card "<<player1<<"\n\n";
            cin>>choice1;
            int flag=0;
            if(cin.fail())
            {
                flag=1;
                cin.clear();
                cin.ignore(10000,'\n');
            }
            display();
            cout<<endl<<endl;
            hidecards();
            hidecards();
            bool x=validate(1);
            while(choice1<1||choice1>20||flag||x)
            {
                system("say Enter again");
                cout<<"Enter Agian: ";
                cin>>choice1;
                x=validate(1);

                if(cin.fail())
            {
                flag=1;
                cin.clear();
                cin.ignore(10000,'\n');
            }
            else
              flag=0;

            }

            updateturn(1);
            display();
            cout<<endl;
            showcards(choice1);
            cout<<endl<<endl<<endl;
            hidecards();
            
            cout<<"Enter the card number to reveal the card "<<player2<<"\n\n";
            cin>>choice2;
            if(cin.fail())
            {
                flag=1;
                cin.clear();
                cin.ignore(10000,'\n');
            }
            display();
            cout<<endl<<endl;
            showcards(choice1);
            hidecards();
            x=validate(2);
            while(choice2<1||choice2>20||flag||choice1==choice2||x)
            {
                system("say Enter again");
                cout<<"Enter Agian: ";
                cin>>choice2;
                x=validate(2);
                if(cin.fail())
            {
                flag=1;
                cin.clear();
                cin.ignore(10000,'\n');
            }
            else
              flag=0;

            }
            updateturn(1);
            display();
            showcards(choice1);
            cout<<endl<<endl;
            showcards(choice2);
            cout<<endl<<endl;
            cin.ignore(10000,'\n');
            processmatch();
            if(terminate())
            {
                this_thread::sleep_for(chrono::milliseconds(250));
                break;
            }


getchar();

            ///////////player 02 turn


            display();
            cout<<endl<<endl;
            hidecards();
            hidecards();

            cout<<"Enter the card number to reveal the card "<<player2<<"\n\n";
            cin>>choice1;
            flag=0;
            if(cin.fail())
            {
                flag=1;
                cin.clear();
                cin.ignore(10000,'\n');
            }
            display();
            cout<<endl<<endl;
            hidecards();
            hidecards();
             x=validate(1);
            while(choice1<1||choice1>20||flag||x)
            {
                system("say Enter again");
                cout<<"Enter Agian: ";
                cin>>choice1;
                x=validate(1);

                if(cin.fail())
            {
                flag=1;
                cin.clear();
                cin.ignore(10000,'\n');
            }
            else
              flag=0;

            }

            updateturn(2);
            display();
            cout<<endl;
            showcards(choice1);
            cout<<endl<<endl<<endl;
            hidecards();
            
            cout<<"Enter the card number to reveal the card "<<player2<<"\n\n";
            cin>>choice2;
            if(cin.fail())
            {
                flag=1;
                cin.clear();
                cin.ignore(10000,'\n');
            }
            display();
            cout<<endl<<endl;
            showcards(choice1);
            hidecards();
            x=validate(2);
            while(choice2<1||choice2>20||flag||choice1==choice2||x)
            {
                system("say Enter again");
                cout<<"Enter Agian: ";
                cin>>choice2;
                x=validate(2);
                if(cin.fail())
            {
                flag=1;
                cin.clear();
                cin.ignore(10000,'\n');
            }
            else
              flag=0;

            }
            updateturn(2);
            display();
            showcards(choice1);
            cout<<endl<<endl;
            showcards(choice2);
            cout<<endl<<endl;
            cin.ignore(10000,'\n');
            processmatch();
            if(terminate())
            {
                this_thread::sleep_for(chrono::milliseconds(250));
                break;
            }

            getchar();

        }
        if(turn1>turn2)
        {
            clearScreen();
            endgame();
            cout<<endl<<endl<<endl<<endl<<endl;
            cout<<"                                  "<<player2<<" HAS WON THE MATCH\n\n                                  Number of turns: "<<turn1;
            leaderboard obj;
            obj.AddRecord(player2,"Match the Cards",1);
            getchar();
        }
        
        else
        {
            clearScreen();
            endgame();
            cout<<endl<<endl<<endl<<endl<<endl;
            cout<<"                                  "<<player1<<" HAS WON THE MATCH\n\n                                  Number of turns: "<<turn2;
            leaderboard obj;
                obj.AddRecord(player1,"Match the Cards",1);
            getchar();
        }
        

    }

    void match::mainplaypvc()
    {
        shuffle();
        clearScreen();
        pattertop();
        string name;
        cout<<"\n\nEnter Your Name Player 01: ";
        system ("say \"Dear Player. Enter your  name\"");
        cin>>name;
        setname( name,1);
        cout<<"Enter Your Name Player 02: ";
        system ("say \"Dear Player . Enter your  name\"");
        cin>>name;
        setname( name,2);
        cin.ignore(10000,'\n');
        while(true)
        {
            display();
            cout<<endl<<endl;
            hidecards();
            hidecards();

            cout<<"Enter the card number to reveal the card "<<player1<<"\n\n";
            cin>>choice1;
            int flag=0;
            if(cin.fail())
            {
                flag=1;
                cin.clear();
                cin.ignore(10000,'\n');
            }
            display();
            cout<<endl<<endl;
            hidecards();
            hidecards();
            bool x=validate(1);
            while(choice1<1||choice1>20||flag||x)
            {
                system("say Enter again");
                cout<<"Enter Agian: ";
                cin>>choice1;
                x=validate(1);

                if(cin.fail())
            {
                flag=1;
                cin.clear();
                cin.ignore(10000,'\n');
            }
            else
              flag=0;

            }

            updateturn(1);
            display();
            cout<<endl;
            showcards(choice1);
            cout<<endl<<endl<<endl;
            hidecards();
            
            cout<<"Enter the card number to reveal the card "<<player1<<"\n\n";
            cin>>choice2;
            if(cin.fail())
            {
                flag=1;
                cin.clear();
                cin.ignore(10000,'\n');
            }
            display();
            cout<<endl<<endl;
            showcards(choice1);
            hidecards();
            x=validate(2);
            while(choice2<1||choice2>20||flag||choice1==choice2||x)
            {
                system("say Enter again");
                cout<<"Enter Agian: ";
                cin>>choice2;
                x=validate(2);
                if(cin.fail())
            {
                flag=1;
                cin.clear();
                cin.ignore(10000,'\n');
            }
            else
              flag=0;

            }
            updateturn(1);
            display();
            showcards(choice1);
            cout<<endl<<endl;
            showcards(choice2);
            cout<<endl<<endl;
            cin.ignore(10000,'\n');
            processmatch();
            if(terminate())
            {
                this_thread::sleep_for(chrono::milliseconds(250));
                break;
            }


getchar();

            ///////////player 02 turn


            display();
            cout<<endl<<endl;
            hidecards();
            hidecards();

            cout<<"COMPUTER IS MAKING THE CHOICES OF the card "<<player1<<"\n\n";
            choice1=rand()%20+1;
             this_thread::sleep_for(chrono::milliseconds(200));
            display();
            cout<<endl<<endl;
            hidecards();
            hidecards();
             x=validate(1);
            while(choice1<1||choice1>20||flag||x)
            {
                choice1=rand()%20+1;
                x=validate(1);
              flag=0;
            }

            updateturn(2);
            display();
            cout<<endl;
            showcards(choice1);
            cout<<endl<<endl<<endl;
            hidecards();
            
         
            choice2=rand()%20+1;
              
            display();
            cout<<endl<<endl;
            showcards(choice1);
            hidecards();
            x=validate(2);
            while(choice1==choice2||x)
            {
                choice2=rand()%20+1;
                x=validate(2);
            }
            updateturn(2);
            display();
            showcards(choice1);
            cout<<endl<<endl;
            showcards(choice2);
            cout<<endl<<endl;
            cin.ignore(10000,'\n');
            processmatch();
            if(terminate())
            {
                this_thread::sleep_for(chrono::milliseconds(250));
                break;
            }

            getchar();

        }
        if(turn1>turn2)
        {
            cout<<player2<<" HAS WON THE MATCH\n\nnumber of turns: "<<turn1;
            leaderboard obj;
            obj.AddRecord(player2,"Match the Cards",1);
        }
        
        else
        {
            cout<<player1<<" HAS WON THE MATCH\n\nnumber of turns: "<<turn2;
            leaderboard obj;
            obj.AddRecord(player1,"Match the Cards",1);
        }
        
    }

    void match::display()
    {
           clearScreen();
           pattertop();
           displayboard();

    }

    bool match::validate(int play)
    {
        int row=0,col1=0;
        if(choice1<10)
        {
            row=0;
            col1=choice1%10-1;
        }
        else if(choice1==10)
        {
            row=0;
            col1=9;
        }
        else if(choice1==20)
        {
            row=1;
            col1=9;
        }
        else
        {
            row=1;
            col1=choice1%10-1;
        }
        int row2=0,col2=0;
        if(choice2<10)
        {
            row2=0;
            col2=choice2%10-1;
        }
        else if(choice2==10)
        {
            row2=0;
            col2=9;
        }
        else if(choice2==20)
        {
            row2=1;
            col2=9;
        }
        else
        {
            row2=1;
            col2=choice2%10-1;
        }
        if(play==1)
        {
            if(flags[row][col1])
            {
               return true;
            }
        }
        else if(play==2)
        {
            if(flags[row2][col2])
            {
               return true;
            }
        }
        return false;
        
    }

    void match::endgame()
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

    }

//     int main()
// {
//     match obj;
//     obj.mainplay();
// }

