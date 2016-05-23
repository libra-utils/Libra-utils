/*
 *
 *    [LIBRARY]    LIBRAparse.h
 *    [TOOLKIT]    libra-utils @ libra-utils.org
 *    [LICENSE]    -
 *    [VERSION]    0.1.0
 *     [AUTHOR]    Jesper M. Olsen @ jm0.codes
 *       [DATE]    November 11th 2015
 *
 *    [PURPOSE]    to parse command line options and arguments
 *
 */

#ifndef IF_LIBRAparse
#define IF_LIBRAparse

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define MAX_OPT  50
#define OPT_ON   true
#define OPT_OFF  false

int numFiles;          // number of input files

char *input[MAX_OPT];  // path to input files
char *value[MAX_OPT];  // value of option X argument
bool opt[MAX_OPT];     // if option X is true or false

void parseOpt(int argc, char *argv[], char *options)
{
    const char optSign[] = "~";         // option specifier
    const char inputSpecifier[] = ":";  // input specifier

    int numOpt;              // number of selected option characters
    int numArg;              // number of given arguments
    int numGRO;              // number of Given Required Options (GRO)
    int numList;             // number of valid option characters, excluding ';'
    int numReqOpt;           // number of options that requires an argument
    int numOptGroups;        // number of option groups
    int posInSpecifier;      // position of input specifier ':'
    int posOpt[MAX_OPT];     // position of given options
    int posFiles[MAX_OPT];   // position of input files
    int posReqOpt[MAX_OPT];  // position of options that requires an argument

    numOpt = numArg = numGRO = numList = numFiles = numOptGroups = numReqOpt = 0; // set NULL

    /* enlist valid option characters, ignore ':' */
    char listOpt[strlen(options)];
    for (int list = 0; list < strlen(options); list++) {
        if (options[list] != ':')
            listOpt[numList++] = options[list];
        else
            posReqOpt[numReqOpt++] = list; // position of required options
    }

    /* locate position of input specifier ':' >> posInSpecifier */
    for (int inS = 1; inS < argc; inS++) {
    if (strstr(argv[inS], inputSpecifier) != NULL) {
            posInSpecifier = inS;
            break;
        }
        else {
            posInSpecifier = 0;
            continue;
        }
    }

    /* locate position of option groups and count number of given arguments */
    for (int pos = 1; pos < (posInSpecifier != 0 ? posInSpecifier : argc); pos++) {
        posOpt[numOptGroups] = pos;
        strstr(argv[pos], optSign) ? numOptGroups++ : numArg++;
    }

    int lenOpt;
    int getOpts;
    int getChrs;
    char optChr[MAX_OPT];

    lenOpt = getOpts = getChrs = 0;

    /* concatenate selected option characters */
    for (getOpts = 0; getOpts < numOptGroups; getOpts++) {
        lenOpt += strlen(argv[posOpt[getOpts]]); // total length of given options, including '~'

        for (int getChrs = 0; getChrs < strlen(argv[posOpt[getOpts]]); getChrs++)
            optChr[numOpt++] = argv[posOpt[getOpts]][getChrs];
    }

    int on, off;
    int chkList;
    
    on = off = chkList = 0;

    /* switch options OFF */
    while (off < numList)
        opt[off++] = OPT_OFF;

    /* switch selected options ON */
    for (on = 0; on < lenOpt; on++) {
        for (chkList = 0; chkList < numList; chkList++) {
            if (optChr[on] == listOpt[chkList]) {
                opt[chkList] = OPT_ON;
            }
        }
    }

    /* assign value to options which requires an argument */
    for (int a = 0; a < numOptGroups; a++) {
        for (int b = 0; b < numReqOpt; b++) {
            if(strchr(argv[posOpt[a]], options[posReqOpt[b]-1]) != NULL) {
                if (strlen(argv[posOpt[a]]) > 2) {
                    printf("[ERROR] option not allowed to be combined -- \'-%c\'\n", options[posReqOpt[b]-1]);
                    abort();
                }
                else { // assign value
                    value[posReqOpt[0]-1+b] = argv[posOpt[a]+1];
                }
                numGRO++;
            }
        }
    }

    /* [ERROR] if number of arguments are insufficient */
    if (numArg < numGRO) {
        puts("[ERROR] too few arguments were given");
        abort();
    }
    else if (numArg > numGRO) {
        puts("[ERROR] too many arguments were given");
        abort();
    }

    if (posInSpecifier != 0) {
        for (numFiles = posInSpecifier; numFiles < argc-1; numFiles++) 
            ; 
                numFiles -= posInSpecifier; // number of input files

        /* assign path to input files */
        for (int posInput = 0; posInSpecifier < argc; posInput++)
            input[posInput] = argv[posInSpecifier++];
    }
}

#endif