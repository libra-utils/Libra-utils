/*
 *
 *    [LIBRARY]    LIBRAcolor.h
 *    [TOOLKIT]    libra-utils @ libra-utils.org
 *    [LICENSE]    -
 *    [VERSION]    0.1.0
 *     [AUTHOR]    Jesper M. Olsen @ jm0.codes
 *       [DATE]    November 11th 2015
 *
 *    [PURPOSE]    to hold ready-to-use C MACROs for BASH coloring codes
 *
 */

#ifndef IF_LIBRAcolor
#define IF_LIBRAcolor

#define OFF  "\033[0m" // turn color off

/* REGULAR */
#define BLACK   "\e[0;30m"
#define RED     "\e[0;31m"
#define GREEN   "\e[0;32m"
#define YELLOW  "\e[0;33m"
#define BLUE    "\e[0;34m"
#define PURPLE  "\e[0;35m"
#define CYAN    "\e[0;36m"
#define WHITE   "\e[0;37m"

/* BOLD */
#define BOLD_BLACK   "\e[1;30m"
#define BOLD_RED     "\e[1;31m"
#define BOLD_GREEN   "\e[1;32m"
#define BOLD_YELLOW  "\e[1;33m"
#define BOLD_BLUE    "\e[1;34m"
#define BOLD_PURPLE  "\e[1;35m"
#define BOLD_CYAN    "\e[1;36m"
#define BOLD_WHITE   "\e[1;37m"

/* UNDERLINE */
#define UNDERLINE_BLACK   "\e[4;30m"
#define UNDERLINE_RED     "\e[4;31m"
#define UNDERLINE_GREEN   "\e[4;32m"
#define UNDERLINE_YELLOW  "\e[4;33m"
#define UNDERLINE_BLUE    "\e[4;34m"
#define UNDERLINE_PURPLE  "\e[4;35m"
#define UNDERLINE_CYAN    "\e[4;36m"
#define UNDERLINE_WHITE   "\e[4;37m"

/* HIGH INTENSITY */
#define INTENSITY_BLACK   "\e[0;90m"
#define INTENSITY_RED     "\e[0;91m"
#define INTENSITY_GREEN   "\e[0;92m"
#define INTENSITY_YELLOW  "\e[0;93m"
#define INTENSITY_BLUE    "\e[0;94m"
#define INTENSITY_PURPLE  "\e[0;95m"
#define INTENSITY_CYAN    "\e[0;96m"
#define INTENSITY_WHITE   "\e[0;97m"

/* BOLD HIGH INTENSITY */
#define BOLD_INTENSITY_BLACK   "\e[1;90m"
#define BOLD_INTENSITY_RED     "\e[1;91m"
#define BOLD_INTENSITY_GREEN   "\e[1;92m"
#define BOLD_INTENSITY_YELLOW  "\e[1;93m"
#define BOLD_INTENSITY_BLUE    "\e[1;94m"
#define BOLD_INTENSITY_PURPLE  "\e[1;95m"
#define BOLD_INTENSITY_CYAN    "\e[1;96m"
#define BOLD_INTENSITY_WHITE   "\e[1;97m"

/* BACKGROUND */
#define BG_BLACK   "\e[40m"
#define BG_RED     "\e[41m"
#define BG_GREEN   "\e[42m"
#define BG_YELLOW  "\e[43m"
#define BG_BLUE    "\e[44m"
#define BG_PURPLE  "\e[45m"
#define BG_CYAN    "\e[46m"
#define BG_WHITE   "\e[47m"

/* HIGH INTENSITY BACKGROUND */
#define BG_INTENSITY_BLACK   "\e[0;100m"
#define BG_INTENSITY_RED     "\e[0;101m"
#define BG_INTENSITY_GREEN   "\e[0;102m"
#define BG_INTENSITY_YELLOW  "\e[0;103m"
#define BG_INTENSITY_BLUE    "\e[0;104m"
#define BG_INTENSITY_PURPLE  "\e[0;105m"
#define BG_INTENSITY_CYAN    "\e[0;106m"
#define BG_INTENSITY_WHITE   "\e[0;107m"

#endif
