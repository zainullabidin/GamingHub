#include"header.h"

    void c::name()
    {
        string name=
    "                  |████████╗   ██████████   ██▐        ██▐ ██▐        ██▐ |█████████╗   |████████╗  |█████████████           |█████████╗   ██████████                 ██████████╗  \n"
    "                 ██ ╓------╜  ██ ║      ██▐ ██▐██▐     ██▐ ██▐██▐     ██▐ ██ ╓------╜  ██ ╓------╜  |=====██▐                ██ ╓------╜ ██ ║      ██▐ ██ ╗      ██▐  ██ ╓------██\n"
    "                 ██ ║         ██ ║      ██▐ ██▐  ██▐.  ██▐ ██▐  ██▐.  ██▐ ██ ║         ██ ║               ██▐                ██ ║        ██ ║      ██▐ ██ ║      ██▐  ██ ║      ██ \n"
    "                 ██ ║         ██ ║      ██▐ ██▐   ██▐. ██▐ ██▐   ██▐. ██▐ ██ ║         ██ ║               ██▐                ██ ║        ██ ║      ██▐ ██ ║      ██▐  ██ ╚══════██  \n"
    "                 ██ ║         ██ ║      ██▐ ██▐    ██▐.██▐ ██▐    ██▐.██▐ ████████╗    ██ ║               ██▐                ████████╗   ██ ║      ██▐ ██ ║      ██▐  ███████████    \n"
    "                 ██ ║         ██ ║      ██▐ ██▐     ██ ██▐ ██▐     ██ ██▐ ██ ╔════╝    ██ ║               ██▐                ██ ╔════╝   ██ ║      ██▐ ██ ║      ██▐  ██ ██        \n"
    "                 ██ ║         ██ ║      ██▐ ██▐       ███▐ ██▐       ███▐ ██ ║         ██ ║               ██▐                ██ ║        ██ ║      ██▐ ██ ║      ██▐  ██ ║ ██      \n"
    "                  |████████╗  ██ ╚══════██▐ ██▐        ██▐ ██▐        ██▐ ██ ║         |█████████╗        ██▐                ██ ║        ██ ╚══════██▐ ██ ╚══════██▐. ██ ║   ██     \n"
    "                  ╚--------╜   ██████████                                 |█████████╗  ╚---------╜        ██▐                ██ ║          ██████████    ██████████   ██ ║     ██   \n"
    "                                                                          ╚---------╜                     ██▐                                                         ██ ║      ██   \n";


    cout<<YELLOW<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        for(int i=0;i<stlen(name);i++)
            {
                cout<<name[i];
                this_thread::sleep_for(chrono::milliseconds(1));
            }

            this_thread::sleep_for(chrono::seconds(2));

            cout<<RESET;

    }

    int c::stlen(string a)
    {
        int count=0;
        while(a[count]!='\0')
        {
            count++;
        }
        return count;
    }

    void c::clearScreen()
   {
        system("clear");
   }

    void c::pattertop()
    {
        string A=
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
        cout<<RESET<<A;
        cout<<GREEN<<"      ==============================================================================================================================================================================================\n\n"<<RESET;
    
    }

    void c::setname(string name,int player)
   {
    if(player==1)
     player1=name;
    else
     player2=name;
   }

    void c::displaygrid()//main grid display
    {
        cout<<endl<<endl<<endl<<endl;
            
cout<<YELLOW<<"                                                   ▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁"<<endl;
cout<<"                                                   █▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃█▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃█▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃█▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃█"<<endl;
cout<<"                                                   █"<<RESET;
if(arr[0][0]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[0][0]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[0][1]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[0][1]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[0][2]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[0][2]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[0][3]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[0][3]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}
cout<<YELLOW<<"█"<<endl;//first row ends

cout<<YELLOW<<"                                                   █"<<RESET;
if(arr[0][0]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[0][0]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[0][1]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[0][1]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[0][2]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[0][2]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[0][3]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[0][3]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<endl;//second reow ends

cout<<YELLOW<<"                                                   █"<<RESET;

if(arr[0][0]=='A')
{cout<<"  A A A A A A A  ";}
else if (arr[0][0]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[0][1]=='A')
{cout<<"  A A A A A A A  ";}
else if (arr[0][1]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[0][2]=='A')
{cout<<"  A A A A A A A  ";}
else if (arr[0][2]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[0][3]=='A')
{cout<<"  A A A A A A A  ";}
else if (arr[0][3]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<endl;//3 row ends

cout<<YELLOW<<"                                                   █"<<RESET;
if(arr[0][0]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[0][0]=='O')
{cout<<" O O O O O O O O ";}
 else
{cout<<"                 ";}


cout<<YELLOW<<"█"<<RESET;
if(arr[0][1]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[0][1]=='O')
{cout<<" O O O O O O O O ";}
 else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[0][2]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[0][2]=='O')
{cout<<" O O O O O O O O ";}
 else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;

if(arr[0][3]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[0][3]=='O')
{cout<<" O O O O O O O O ";}
 else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<endl; //4 end
cout<<YELLOW<<"                                                   █"<<RESET;

if(arr[0][0]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[0][0]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[0][1]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[0][1]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[0][2]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[0][2]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[0][3]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[0][3]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<endl;
cout<<"                                                   █▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃█▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃█▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃█▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃█"<<endl;
cout<<"                                                   █"<<RESET;
if(arr[1][0]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[1][0]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[1][1]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[1][1]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[1][2]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[1][2]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[1][3]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[1][3]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<endl; //first row ends

cout<<YELLOW<<"                                                   █"<<RESET;
if(arr[1][0]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[1][0]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[1][1]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[1][1]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[1][2]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[1][2]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[1][3]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[1][3]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<endl;//second reow ends

cout<<YELLOW<<"                                                   █"<<RESET;

if(arr[1][0]=='A')
{cout<<"  A A A A A A A  ";}
else if (arr[1][0]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}


cout<<YELLOW<<"█"<<RESET;
if(arr[1][1]=='A')
{cout<<"  A A A A A A A  ";}
else if (arr[1][1]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[1][2]=='A')
{cout<<"  A A A A A A A  ";}
else if (arr[1][2]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[1][3]=='A')
{cout<<"  A A A A A A A  ";}
else if (arr[1][3]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<endl;//3 row ends

cout<<YELLOW<<"                                                   █"<<RESET;
if(arr[1][0]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[1][0]=='O')
{cout<<" O O O O O O O O ";}
 else
{cout<<"                 ";}


cout<<YELLOW<<"█"<<RESET;
if(arr[1][1]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[1][1]=='O')
{cout<<" O O O O O O O O ";}
 else
{cout<<"                 ";}
cout<<YELLOW<<"█"<<RESET;

if(arr[1][2]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[1][2]=='O')
{cout<<" O O O O O O O O ";}
 else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;

if(arr[1][3]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[1][3]=='O')
{cout<<" O O O O O O O O ";}
 else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<endl; //4 end
cout<<YELLOW<<"                                                   █"<<RESET;

if(arr[1][0]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[1][0]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[1][1]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[1][1]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[1][2]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[1][2]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[1][3]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[1][3]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<endl;
cout<<"                                                   █▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃█▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃█▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃█▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃█"<<endl;
cout<<"                                                   █"<<RESET;
if(arr[2][0]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[2][0]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[2][1]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[2][1]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[2][2]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[2][2]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[2][3]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[2][3]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}
cout<<YELLOW<<"█"<<endl; //first row ends

cout<<YELLOW<<"                                                   █"<<RESET;
if(arr[2][0]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[2][0]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[2][1]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[2][1]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[2][2]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[2][2]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[2][3]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[2][3]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<endl;//second reow ends

cout<<YELLOW<<"                                                   █"<<RESET;

if(arr[2][0]=='A')
{cout<<"  A A A A A A A  ";}
else if (arr[2][0]=='O')
{cout<<"  O O O O O O O  ";}
else
{cout<<"                 ";}


cout<<YELLOW<<"█"<<RESET;
if(arr[2][1]=='A')
{cout<<"  A A A A A A A  ";}
else if (arr[2][1]=='O')
{cout<<"  O O O O O O O  ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[2][2]=='A')
{cout<<"  A A A A A A A  ";}
else if (arr[2][2]=='O')
{cout<<"  O O O O O O O  ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[2][3]=='A')
{cout<<"  A A A A A A A  ";}
else if (arr[2][3]=='O')
{cout<<"  O O O O O O O  ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<endl;//3 row ends

cout<<YELLOW<<"                                                   █"<<RESET;

if(arr[2][0]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[2][0]=='O')
{cout<<" O O O O O O O O ";}
 else
{cout<<"                 ";}


cout<<YELLOW<<"█"<<RESET;
if(arr[2][1]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[2][1]=='O')
{cout<<" O O O O O O O O ";}
 else
{cout<<"                 ";}
cout<<YELLOW<<"█"<<RESET;

if(arr[2][2]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[2][2]=='O')
{cout<<" O O O O O O O O ";}
 else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;

if(arr[2][3]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[2][3]=='O')
{cout<<" O O O O O O O O ";}
 else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<endl; //4 end
cout<<YELLOW<<"                                                   █"<<RESET;

if(arr[2][0]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[2][0]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[2][1]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[2][1]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[2][2]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[2][2]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[2][3]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[2][3]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<endl;
cout<<"                                                   █▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃█▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃█▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃█▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃█"<<endl;
cout<<"                                                   █"<<RESET;
if(arr[3][0]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[3][0]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[3][1]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[3][1]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[3][2]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[3][2]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[3][3]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[3][3]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}
cout<<YELLOW<<"█"<<endl; //first row ends

cout<<YELLOW<<"                                                   █"<<RESET;
if(arr[3][0]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[3][0]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[3][1]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[3][1]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[3][2]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[3][2]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[3][3]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[3][3]=='O')
{cout<<" O O O O O O O O ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<endl;//second reow ends

cout<<YELLOW<<"                                                   █"<<RESET;

if(arr[3][0]=='A')
{cout<<"  A A A A A A A  ";}
else if (arr[3][0]=='O')
{cout<<"  O O O O O O O  ";}
else
{cout<<"                 ";}


cout<<YELLOW<<"█"<<RESET;
if(arr[3][1]=='A')
{cout<<"  A A A A A A A  ";}
else if (arr[3][1]=='O')
{cout<<"  O O O O O O O  ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[3][2]=='A')
{cout<<"  A A A A A A A  ";}
else if (arr[3][2]=='O')
{cout<<"  O O O O O O O  ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[3][3]=='A')
{cout<<"  A A A A A A A  ";}
else if (arr[3][3]=='O')
{cout<<"  O O O O O O O  ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<endl;//3 row ends

cout<<YELLOW<<"                                                   █"<<RESET;

if(arr[3][0]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[3][0]=='O')
{cout<<" O O O O O O O O ";}
 else
{cout<<"                 ";}


cout<<YELLOW<<"█"<<RESET;
if(arr[3][1]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[3][1]=='O')
{cout<<" O O O O O O O O ";}
 else
{cout<<"                 ";}
cout<<YELLOW<<"█"<<RESET;

if(arr[3][2]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[3][2]=='O')
{cout<<" O O O O O O O O ";}
 else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;

if(arr[3][3]=='A')
{cout<<" ▇ ▇ ▇ ▇ ▇ ▇ ▇ ▇ ";}
else if (arr[3][3]=='O')
{cout<<" O O O O O O O O ";}
 else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<endl; //4 end


cout<<YELLOW<<"                                                   █"<<RESET;

if(arr[3][0]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[3][0]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[3][1]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[3][1]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[3][2]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[3][2]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<RESET;
if(arr[3][3]=='A')
{cout<<"   ▇         ▇   ";}
else if (arr[3][3]=='O')
{cout<<"   O         O   ";}
else
{cout<<"                 ";}

cout<<YELLOW<<"█"<<endl;

cout<<"                                                   █▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃█▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃█▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃█▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃█"<<endl;
cout<<"                                                   █▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁█"<<endl<<endl<<endl;


cout<<"                                                            ▀█                ▔▔█               ▔▔█               █    "  <<endl;
cout<<"                                                             █                __█               __█               █  █ "<<endl;
cout<<"                                                             █                █                   █               █__█ "<<endl;
cout<<"                                                            ███               █__               __█                  █ "<<endl<<endl<<RESET;
    } 

    void c::mainplay()
    {
        sf::SoundBuffer bg;
        if(!bg.loadFromFile("connect4/assets/c4.mp3"))
        cout<<"Unlable to load bg music";
        sf::Sound b(bg);
        b.setLooping(true);
        b.play();
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

    void c::mainplaypvp()

    {      
         int x=0;
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
        while(true)
        {
             clearScreen();
       
             pattertop();
             displaygrid();
             choices();
             x=win();

             if(x==1)
             {
                clearScreen();
                endgame();

                cout<<"                                               "<<player1<<" has won the game";
                leaderboard obj;
                obj.AddRecord(player1,"Connect_4",1);
                getchar();

                break;
             }
             else if(x==2)
             {
                clearScreen();
                endgame();
                 cout<<"                                               "<<player2<<" has won the game";
                 leaderboard obj;
                   obj.AddRecord(player2,"Connect_4",1);
                 getchar();
                 break;
             }

        }
      

    }  

    void c::mainplaypvc()
    {
         int x=0;
        clearScreen();
        pattertop();
        string name;
        cout<<"\n\nEnter Your Name Player 01: ";
        system ("say \"Dear Player 1. Enter your  name\"");
        cin>>name;
        setname( name,1);
       
        while(true)
        {
             clearScreen();
       
             pattertop();
             displaygrid();
             choices(1);
             x=win();

             if(x==1)
             {
                cout<<player1<<" has won the game";
                break;
             }
             else if(x==2)
             {
                 cout<<player2<<" has won the game";
                 break;
             }
             else if(x==3)
             {
                cout<<"\nThe Macth was a Draw\n";
                break;
             }

        }
    }

    void c::choices(int n)
    {
        int flag=0;
        


        do{
            if(!flag)
           { cout<<"Plese enter the colum of your choice "<<player1<<" (1-4) :";
            cin>>choice1;}
        if(flag||choice1>4||choice1<1)

            {system("say Enter Again");
            cout<<"Enter Again :";
            cin>>choice1;
            if(cin.fail())
        {
            cin.clear();
            cin.ignore(10000,'\n');
            flag=1;
        }
        else
            flag=0;}
            if(!process(1))
        {
            flag=1;
            cout<<"\nYou entered a FULL column. Choose another one .\n\n";
        }
        }while(flag||choice1>4||choice1<1);
             clearScreen();
       
             pattertop();
             displaygrid();
        
      if(!n) 
    do{
         if(!flag)
           { cout<<"Plese enter the colum of your choice "<<player2<<" (1-4) :";
            cin>>choice2;}
        if(flag||choice1>4||choice1<1)

            {system("say Enter Again");
            cout<<"Enter Again :";
            cin>>choice2;
            if(cin.fail())
        {
            cin.clear();
            cin.ignore(10000,'\n');
            flag=1;
        }
        else
            flag=0;}
            if(!process(2))
        {
            flag=1;
            cout<<"\nYou entered a FULL column. Choose another one .\n\n";
        }
        }while(flag||choice2>4||choice2<1);
        else
        {
            do{
                flag=0;
            choice2=rand()%4+1;
            if(!process(2))
           {
            flag=1;
           }
           }while(flag);

        }

    }

    int c::process(int player)
    {
        sf::SoundBuffer c4;
        if(!c4.loadFromFile("connect4/assets/c4p.mp3"))
        cout<<"Audio error";
        sf::Sound p(c4);

        if(player==1)
        {
            
            for(int i=3;i>=0;i--)
            {
                if(arr[i][choice1-1]=='\0')
            {
                arr[i][choice1-1]='A';
                p.play();
                this_thread::sleep_for(chrono::seconds(1));

                return 1;
            }

            }

        }
        else if (player==2)
        {

            for(int i=3;i>=0;i--)
            {
            if(arr[i][choice2-1]=='\0')
            {
                arr[i][choice2-1]='O';
                p.play();
                this_thread::sleep_for(chrono::seconds(1));
                return 1;
            }
            }
       }
       return 0;
    }

    int c::win()
    {
        flagX1=1,flagX2=1,flagX3=1,flagX4=1,flagx1=1,flagx2=1,flagx3=1,flagx4=1;;
     flagO1=1,flagO2=1,flagO3=1,flagO4=1,flago1=1,flago2=1,flago3=1,flago4=1;

        
            for(int i=3;i>=0;i--)
        {
            if(arr[0][i]!='A')
            {
                flagX1=0; 
            }
            if(arr[i][0]!='A')
            {
                flagx1=0;
            }
            if(arr[0][i]!='O')
            {
                flagO1=0;
            }
            if(arr[i][0]!='O')
            {
                flago1=0;
            }
        }
           for(int i=3;i>=0;i--)
        {
            if(arr[1][i]!='A')
            {
                flagX2=0; 
            }
            if(arr[i][1]!='A')
            {
                flagx2=0;
            }
            if(arr[1][i]!='O')
            {
                flagO2=0;
            }
            if(arr[i][1]!='O')
            {
                flago2=0;
            }
        }
           for(int i=3;i>=0;i--)
        {
            if(arr[2][i]!='A')
            {
                flagX3=0; 
            }
            if(arr[i][2]!='A')
            {
                flagx3=0;
            }
            if(arr[2][i]!='O')
            {
                flagO3=0;
            }
            if(arr[i][2]!='O')
            {
                flago3=0;
            }
        }

        for(int i=3;i>=0;i--)
        {
            if(arr[3][i]!='A')
            {
                flagX4=0; 
            }
            if(arr[i][3]!='A')
            {
                flagx4=0;
            }
            if(arr[3][i]!='O')
            {
                flagO4=0;
            }
            if(arr[i][3]!='O')
            {
                flago4=0;
            }
        }
        //diagonal check

     //  if(arr[0][0]=='O'&&arr[1][1]=='O'&&arr[2][2]=='O'&&arr[3][3]);
            

        if((flagO1||flagO2||flagO3||flagO4||flago1||flago2||flago3||flago4)||(arr[0][0]=='A'&&arr[1][1]=='A'&&arr[2][2]=='A'&&arr[3][3]=='A')||(arr[3][0]=='A'&&arr[2][1]=='A'&&arr[1][2]=='A'&&arr[0][3]=='A'))
        {
            return 2;
        }
        else if(flagX1||flagX2||flagX3||flagX4||flagx1||flagx2||flagx3||flagx4||(arr[0][0]=='O'&&arr[1][1]=='O'&&arr[2][2]=='O'&&arr[3][3]=='O')||(arr[3][0]=='O'&&arr[2][1]=='O'&&arr[1][2]=='O'&&arr[0][3]=='O'))
        {
            return 1;
        }
        else 
        {
            draw=0;
   
            for(int i=0;i<4;i++){
                for(int j=0;j<4;j++){
                    if(arr[i][j]=='\0')
                    {
                        draw=1;
                        break;
                    }

                }
                if(!draw)
                break;
    
            }

        }
        if(!draw)
        return 3;
 
        return 0;

    }
        

    void c::endgame()
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

    // int main()
    // {
    //     c obj1;
    //     obj1.mainplay();
    // }
