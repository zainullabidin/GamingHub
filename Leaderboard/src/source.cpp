#include"header.h"

//constructor
leaderboard::leaderboard()
{
     name = NULL;
     score = NULL;
     lines = 0;
   
   LoadFromFile();

}

leaderboard::~leaderboard()
{
    if(name!=NULL)
    for(int i=0;i<lines;i++)
    {
        delete []name[i];
    }
    delete [] score;
    delete [] name;
    score=NULL;
    name=NULL;


}

void leaderboard::DisplayLeaderboard()

{
  

    for(int i=0;i<lines;i++)
    {  
        cout<<name[i]<<" "<<score[i];
        cout<<endl<<endl;
    }

}

void leaderboard::LoadFromFile() 
{
    if(name!=NULL)
    for(int i=0;i<lines;i++)
    {
        delete []name[i];
    }
    delete [] score;
    delete [] name;
    score=NULL;
    name=NULL;


    fstream file("leaderboard.txt", ios::in);
    if(!file)
    {
        ofstream create("leaderboard.txt");
        create.close();
        file.open("leaderboard.txt", ios::in);
    }
    int count=0;
    int index,position;
    char a;

    lines=0;
    string x,b;
    int n;
    while(file>>x>>b>>n)
   {

     ++lines;
    
   }

   file.close();
    file.open("leaderboard.txt", ios::in);

   name=new char*[lines];

   score=new int[lines];
    

   for(int i=0;i<lines;i++)
   {
    count=0;
    while(file.get(a))//counting total number of characters per artray
   {
    if(a>='0'&&a<='9')
    break;
    ++count;
   }
   name[i]=new char[count+1];
   file.ignore(100,'\n');
 
   }


   file.close();
    file.open("leaderboard.txt", ios::in);

    for(int i=0;i<lines;i++)
    {
        int index=0;
       while(file.get(a))
      {
          
          if(a=='\n')
          {
            break;
          }
  
         
         name[i][index++]=a;
      }
      

      name[i][index]='\0';
      cout<<name[i];

      file.unget();
       
      file>>score[i];

      file.ignore();

    }


}

void leaderboard::SortRecords()
{
    for(int i=0;i<lines;i++)
    {
        for(int j=0;j<lines;j++)
        {
            if(score[i]<score[j])
            {
                int temp=score[j];
                score[j]=score[i];
                score[i]=temp;

                char *tempc =name[j];
                name[j]=name[i];
                name[i]=tempc;

            }
        }
    }
    

}

void leaderboard::AddRecord(string name,string game,int score)
{
   fstream file("leaderboard.txt", ios::app|ios::out);

    

    file<<name<<"   "<<game<<"   "<<score<<endl;

    file.close();
    LoadFromFile(); 
  
}

void leaderboard::SaveToFile()
{
   fstream file("leaderboard.txt", ios::out);


    if(!file.is_open())
    file.open("leaderboard.txt",ios::out);

    int index=0;
    for(int i=0;i<lines;i++)
    {
        index=0;
        while(true)
        {
            
            if(name[i][index]=='\0')
            {
                file<<" "<<score[i]<<endl;
                break;
            }
            else
            file<<name[i][index];
            index++;

        }
       
    }
    file.close();

}


