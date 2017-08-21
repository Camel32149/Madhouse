# Madhouse
a ScissorPaperRock game for code(C++)
***
## how to play
### if you are the player
* At first inherit the "API" class and the "constructior"
and build your algorithm or methods in the "core" function
like:
```c++
class camel : public API{
  camel(bool f_flag, int* pe, int* ps) : API(f_flag, pe, ps){};
  void core(){
    //to do:
    result = 1;
  };
}; 
```

* the API provides some interface with players to make the program better.
1.result:
this member variable will send to the "main" fucntion.
define: ```int result;```
it can be anywhere from 1 to 3
#### 1 is scissor
#### 2 is rock
#### 3 is paper

2.getEnemyLastResult:
define: ```int getEnemyLastResult()```
it will return a integer and the integer is the result of the enmey's previous game.

3.getSelfLastResult:
define: ```int getSelfLastResult()```
it will return a integer and the integer is the result of your previous game.

* Last but not least
if you want to know this is the first round,
you can```if(this->getEnmeyLastResult()==0){//to do:}```
***
### if you are the judge
* save the players' codes
and edit the "main" function and some "#define" in "Mad.cpp".
And then edit the makefile,the compiling environment is c++11.
#### the compiler is gcc.

* instance players' class in the "main" function(2p)
the variable name must be player1 or player2.
demo:
```
  camel player1(0, &pl2[ptr], &pl1[ptr]);
  luo player2(0, &pl1[ptr], &pl2[ptr});
```
the second parameter and the third parameter is the pointer of the enemy's data and the pointer of your self data.

* finally, compile the codes, and check the result of three rounds.
