#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
int Integer
float Floating Point
bool Boolean
double Double Floating Point
char Character
void Valueless
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end
    for each of those functions declared, write out how the function would look if called with correct arguments
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    int number = 2;
    int speed = 55;
    int loTemp = 200;
    float myDecimal = 0.4f;
    float myGpa = 3.5f;
    float snowFall = 2.5f;
    bool rain = true;
    bool hot = false;
    bool hungry = true;
    double pi = 3.14159265359;
    double pieLength = 4.1113324445662;
    double endMiles = 2.335544665;
    char letterOfDay = 'L';
    char finalGrade = 'B'; 
    char assessment = '3';
    
    ignoreUnused(number);
    ignoreUnused(speed);
    ignoreUnused(loTemp);
    ignoreUnused(myDecimal);
    ignoreUnused(myGpa);
    ignoreUnused(snowFall);
    ignoreUnused(rain);
    ignoreUnused(hot);
    ignoreUnused(hungry);
    ignoreUnused(pi);
    ignoreUnused(pieLength);
    ignoreUnused(endMiles);
    ignoreUnused(letterOfDay);
    ignoreUnused(finalGrade);
    ignoreUnused(assessment);
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int gps(int miles, char direction = 'W')
{ 
    ignoreUnused(miles, direction);
    return {};
} 
/*
 2)
 */
bool choiceToMake(int min = 0, int effort = 0)
{
    ignoreUnused(min, effort);
    return {};
}
/*
 3)
 */
float recipeConverter(float originalAmt, float neededAmt)
{
    ignoreUnused(originalAmt, neededAmt);
    return {};
}
/*
 4)
 */
double exoPlanetSize(double starSize, float starBright = 1.f,  double exoBright = 0.223)
{
    ignoreUnused(starSize, starBright, exoBright);
    return {};
}
/*
 5)
 */
int thoughts(int idea, int inspiration, bool lunch = true)
{
    ignoreUnused(idea, inspiration, lunch);
    return {};
}
/*
 6)
 */
void attack(bool currentThreat, bool pastSuccess)
{
    ignoreUnused(currentThreat, pastSuccess);
}
/*
 7)
 */
int difficulty(int moveCode = 0, int freq = 0, int landRate = 0)
{
    ignoreUnused(moveCode, freq, landRate);
    return {};
}
/*
 8)
 */
bool laundry(int sizeOfPile, int mood, int time = 0)
{
    ignoreUnused(sizeOfPile, mood, time);
    return {};
}
/*
 9)
 */
int adjustVol(int startVol = 1, int amt = 0)
{
    ignoreUnused(startVol, amt);
    return {};
}
/*
 10)
 */
char lyricRhyme(char endSyllable, char newSyllable)
{
    ignoreUnused(endSyllable, newSyllable);
    return {};
}

int main()
{
    //example of calling that function
    rentACar(6, 2); 
    
    //1)
    gps(2, 'N');
    //2)
    choiceToMake(1, 2);
    //3)
    recipeConverter(1.5, 2);
    //4)
    exoPlanetSize(3.2224, 2.0, 3.4);
    //5)
    thoughts(4, 0, true);
    //6)
    attack(true, true);
    //7)
    difficulty(11, 0, 2);
    //8)
    laundry(1, 2, 0);
    //9)
    adjustVol(1, 2);
    //10)
    lyricRhyme('a', 'a');
    std::cout << "good to go!" << std::endl;
    return 0;    
}
