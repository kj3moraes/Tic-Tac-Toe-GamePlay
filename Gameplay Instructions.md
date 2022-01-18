# Gameplay Instructions

Once you run the game TicTacToeGame executable you will see an intro message followed by the menu to select your opponent difficulty.

## Difficulty Menu

The difficulty menu lists the possible difficulties:
    1. **H**uman
    2. **E**asy
    3. **M**edium  
    4. H**a**rd

The boldened letters are the corresponding entries you can make when 

Note that the Hard Engine is **unbeatable** (i.e you can only draw and lose against it). It will always play perfectly.

### Board

The board will be by default a 3x3 TicTacToe board but you are free to change this by changing the object instantiation. The board will be displayed as

```C++
----------
|        |
|        |
|        |
----------
```

The rows start from 1 to 3 from left to right and columns are from 1 to 3 from top to bottom. So if I enter the coordinates `1 3` and I am player 1 then the updated board will be.

```C++
----------
|      X |
|        |
|        |
----------
```

### Input

When prompted by the statement `Enter the row and the column numbers to place your piece (X|O) :` type in the row and column of the position that you 
want to place your piece at. The top left corner is 1 1 and the bottom left is 3 3.

### References

[1] DavidHurst's [repository](https://github.com/DavidHurst/MiniMax-TicTacToe-Java) on Tic-Tac-Toe.  
[2] Robert Heaton' [blog on Tic-Tac-Toe](https://robertheaton.com/2018/10/09/programming-projects-for-advanced-beginners-3-a/)