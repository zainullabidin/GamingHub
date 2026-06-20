
#include"Match_Cards/src/header.h"
#include"Connect_04/src/header.h"
#include"RockPaperScissor/src/header.h"
#include"Snake_Ladder/src/header.h"
#include"TicTacToe/src/header.h"
#include"leaderboard/src/leaderboard_header.h"


int main()
{

  sf::SoundBuffer bg;
 if(!bg.loadFromFile("assets/gamin.mp3"))
  cout<<"Unable to load the main bg music";
  sf::Sound b(bg);
  b.setLoop(true);
  b.play();
  srand(time(0));
    int mainchoice=0;
    int flag=0;

  while(mainchoice!=7)
  {
    system("clear");
    cout<<endl<<endl<<endl<<endl;

    string a=
"                         |█████████╗    |█████████╗    ██▐╗            ██▐╗  |█████████╗  ██▐ ██▐        ██▐. |█████████╗         ██▐       ██▐                   █████████  \n"
"                         ██ ╓------╜    ██ ╓------██▐  ██▐██▐╗       ██▐██▐  ██ ╓------╜  ██▐ ██▐██▐     ██▐  ██ ╓------╜         ██▐       ██▐  ██ ╗      ██▐   ██ ║     ██▐\n"
"                         ██ ║           ██ ║      ██▐. ██▐  ██▐.    ██▐ ██▐  ██ ║         ██▐ ██▐  ██▐.  ██▐  ██ ║                ██▐       ██▐  ██ ║      ██▐   ██ ║      ██▐  \n"      
"                         ██ ║           ██ ╚══════██▐  ██▐   ██▐.  ██▐. ██▐. ██ ║         ██▐ ██▐   ██▐. ██▐  ██ ║                ██▐       ██▐  ██ ║      ██▐   ██ ║      ██▐   \n"
"                         ██ ║           ████████████▐  ██▐    ██▐ ██▐.  ██▐. ████████╗    ██▐ ██▐    ██▐.██▐  ██ ║                ██▐       ██▐  ██ ║      ██▐   ██ ╚═════██▐       \n"
"                         ██ ║   ████▐.  ██ ╓------██▐  ██▐              ██▐  ██ ╔════╝    ██▐ ██▐     ██ ██▐  ██ ║   ████▐        ████████████▐  ██ ║      ██▐   █████████▐      \n"
"                         ██ ║   █  █▐.  ██ ║      ██▐  ██▐              ██▐  ██ ║         ██▐ ██▐       ███▐  ██ ║   █  █▐        ██▐       ██▐  ██ ║      ██▐   ██ ║     ██▐\n"
"                         ██ ╚══════█▐.  ██ ║      ██▐  ██▐              ██▐  |█████████╗  ██▐ ██▐        ██▐  ██ ╚══════█▐        ██▐       ██▐  ██ ╚══════██▐.  ██ ║      ██▐\n"
"                         |██████████╜                  ██▐              ██▐. ╚---------╜  ▒▒╜                 |██████████╜        ██▐       ██▐    ██████████    ██ ╚═════██▐ \n"
"                                                                                                                                  ██▐       ██▐                    █████████\n";

           cout<<a;
          cout<<endl<<endl<<endl<<endl;

          system ("say Welcome to Gaming Hub");

    cout<<"Please Enter the number of the game you want to play:\n\n\n1.Rock Paper Scissor\n\n2.Connect_04\n\n3.Tic Tac Toe\n\n4.Snake\n\n5.Match The Cards\n\n6.Display The Leaderboard\n\n7.EXIT\nPlease enter your choice : ";
    
    system("say Enter the choice.");
    cin>>mainchoice;

        if(cin.fail())
    {
        cin.clear();
        cin.ignore(10000,'\n');
        flag=1;

    }
   while(mainchoice>7||mainchoice<1||flag)
   {  
    cout<<"Enter again :";
    system("say Enter Again.");
    cin>>mainchoice;
    if(cin.fail())
    {
        cin.clear();
        cin.ignore(10000,'\n');
        flag=1;

    }
    else
    flag=0;
  }
  if(mainchoice==1)
  {
    b.pause();
    PlayRPS obj; 
    obj.mainplay();
    b.play();
    getchar();

  }
  else if(mainchoice==2)
  {
    b.pause();
         c object;
         object.mainplay();
         b.play();
         getchar();
  }
  else if(mainchoice==3)
  {
    b.pause();
    Playtic object;
    object.mainplay(); 
    b.play();
    getchar();
  }
  else if(mainchoice==4)
  {
    b.pause();
      snake object;
      object.mainplay();
      b.play();
      getchar();
  }
  else if(mainchoice==5)
  {
    b.pause();
    match object;
    object.mainplay();
    b.play();
    getchar();
  }
  else if(mainchoice==6)
  {
    leaderboard object;
    object.DisplayLeaderboard();
    b.play();
    getchar();
    getchar();

  }

  }
}


