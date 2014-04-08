#ifndef GAME_LOGIC_H
#define GAME_LOGIC_H

#include "cli.h"
#include <curses.h>
#include <locale.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

 /**
  * @brief Prints the help manual of cruce game to the screen
  */
 void cruceGameUsage();

 /**
  * @brief Prints the current running version of cruce game
  */
 void cruceGameVersion();

 /**
  * @brief Prints the invalid cli options provided
  */
 void cruceGameInvalid();

 /**
  * @brief
  *
  * @param argc Stores the count of number of argument
  * @param argv Contains the value of arguments
  */
 void cruceGameOptions(int argc,char **argv);

 void cruceGameLogic();

 #endif
