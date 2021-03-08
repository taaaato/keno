# Keno

This application allows the user to play the game Keno.


> _Keno is a lottery-like gambling game often played at modern casinos, and also offered as a game by some state lotteries._
_Players wager by choosing numbers ranging from 1 through (usually) 80. After all players make their wagers, 20 numbers (some variants draw fewer numbers) are drawn at random, either with a ball machine similar to ones used for lotteries and bingo, or with a random number generator._ 
 
[Source: Wikipedia](https://en.wikipedia.org/wiki/Keno)


## How it Works

The user must initialize the application with a parameter informing the location of a file with this information: 
- His initial balance/credit;
- How many rounds he wishes to play;
- The number(s) in that he want to bet.

## File example:
"file.dat"
```bash 
1500.0
3
21 12 64
```

## Usage example:
```bash 
>> g++ keno.cpp aux.cpp
>> ./a.out file.dat
```


The application will then generate random winner numbers and inform if the player won and how much in each round.
At the end of the rounds the general result (credits spent and final balance) is informed in a summary.

--- 
Author: Thalles S.
