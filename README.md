# GamingHub

A C++ terminal gaming hub I built that puts 5 classic games under one roof. Everything runs in the terminal with ASCII art visuals, SFML audio for background music and sound effects, and a shared leaderboard that tracks wins across all games.

---

## The Games

**Rock Paper Scissors**. PVP and PVC with a hearts system. You start with 3 hearts, lose one each time you lose a round. First to hit 0 loses.

**Connect 4**. 4x4 grid, drop pieces into columns. Works in PVP and PVC. Checks rows, columns, and both diagonals.

**Tic Tac Toe**. The classic 3x3 grid. Enter row and column to place your mark. Has PVP and PVC, detects wins and draws.

**Snake & Ladder**. Full 10x10 board with colored snakes (red) and ladders (green). The dice roll is animated and pieces hop one square at a time with sound effects.

**Match the Cards**. 20 cards (10 pairs), flip two at a time and try to find matches. Cards disappear when matched. PVP and PVC.

Every game has its own ASCII art title screen, and wins get saved to a shared leaderboard file so you can see who's been winning across sessions.

---

## How to Build

You need C++17, CMake 3.16+, and SFML installed.

```bash
# install SFML
brew install sfml          # Mac
sudo apt install libsfml-dev   # Linux

# build and run
cmake -S . -B build
cmake --build build
./build/GamingHub
```

---

## Project Structure

```
├── main.cpp                    main menu, picks which game to launch
├── Connect_04/
│   ├── src/                    game logic
│   └── assets/                 audio files
├── RockPaperScissor/
│   ├── src/
│   └── assets/
├── TicTacToe/
│   ├── src/
│   └── assets/
├── Snake_Ladder/
│   ├── src/
│   └── assets/
├── Match_Cards/
│   ├── src/
│   └── assets/
├── leaderboard/
│   └── src/                    shared leaderboard class
├── assets/                     main menu music
├── CMakeLists.txt
└── .github/workflows/build.yml
```

---

## What's Under the Hood

Each game is its own class with a constructor/destructor and dynamic memory for the grids and boards. The leaderboard is a separate class that all games use to record wins to a text file. Input validation handles bad input (letters, out-of-range numbers) without crashing. SFML handles all the audio, background music loops during gameplay and sound effects play on moves.

---

## Leaderboard

Pick option 6 from the main menu to see it. It loads from `leaderboard.txt`, sorts by score (highest first), and displays all recorded wins. Every game writes to it automatically when someone wins.

---

## Author

Zain ul Abidin