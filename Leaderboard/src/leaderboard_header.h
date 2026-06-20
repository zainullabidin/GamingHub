#pragma once
#include<fstream>
#include<iostream>
using namespace std;
class leaderboard
{
    private:

    char **name;

    int *score;

    int lines;


    public:

    leaderboard();
    ~leaderboard();

    void AddRecord(string name,string game,int score);// Add a new game result entry
    void LoadFromFile() ;//Load leaderboard data on startup
    void SaveToFile();// Persist records to disk
    void DisplayLeaderboard();// Print sorted leaderboard to screen
    void SortRecords();// Sort by score or win count

};


