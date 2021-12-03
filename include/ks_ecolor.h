/************************************************************************** 
 * ESC char's color 
 * using in printf() or like handbook for programming color's output in shell
 * Example : printf("%s Out underline str %s default output\n",KS_C_SET_UNDERL, KS_C_DEFAULT) ;
 * printf("%s bright yellow %s\n",KS_FC_BYELLOW, KS_C_DEFAULT) ;
 * printf("%s white on blue %s\n",KS_CP_WHITE_BLUE, KS_C_DEFAULT) ;
 *
 * or using macro  :  C_PAIR(num_color for foregraund, num_color backgraund) ;
 *                    CB_PAIR(num_color fg, num_color bg) ;
 *                    C_DEFAULT() ; - reset default colors
 *                    C_UNDERLINE() ; - set underline mode
 * example:
 * printf("%sgreen text on white bg%s",C_PAIR(NC_GREEN,NC_WHITE),C_DEFAULT()) ;
 * or
 * printf("%s%sunderlined bright white on blue%s",C_UNDERLINE(),CB_PAIR(NC_WHITE,NC_BLUE),C_DEFAULT() );
 *---------------------------------------------------------------------------
 * Author   : greyksb (ksb) greyksb@yahoo.com greylsn@gmail.com
 * Date     : 18.01.2013
 * Modified : 20.01.2013 03.12.2021
 * 
 */

#ifndef  __KS_ECOLOR_H
#define  __KS_ECOLOR_H

/* number for colors */

#define NC_BLACK    0
#define NC_RED      1
#define NC_GREEN    2
#define NC_YELLOW   3
#define NC_BLUE     4
#define NC_MAGENTA  5
#define NC_CYAN     6
#define NC_WHITE    7

/* common ESC */

#define KS_C_SET_BOLD       "\033[1m"          /* bolding */
#define KS_C_SET_UNDERL     "\033[4m"          /* underline */
#define KS_C_DEFAULT        "\033[0m"          /* reset default */

/* Foregraund colors */
#define KS_FC_BLACK         "\E[30m"
#define KS_FC_BBLACK        "\033[1m\E[30m"
#define KS_FC_RED           "\E[31m"
#define KS_FC_BRED          "\033[1m\E[31m"
#define KS_FC_GREEN         "\E[32m"
#define KS_FC_BGREEN        "\033[1m\E[32m"
#define KS_FC_YELLOW        "\E[33m"
#define KS_FC_BYELLOW       "\033[1m\E[33m"
#define KS_FC_BLUE          "\E[34m"
#define KS_FC_BBLUE         "\033[1m\033[34m"
#define KS_FC_MAGENTA       "\E[35m"
#define KS_FC_BMAGENTA      "\033[1m\E[35m"
#define KS_FC_CYAN          "\E[36m"
#define KS_FC_BCYAN         "\033[1m\E[36m"
#define KS_FC_WHITE         "\E[37m"
#define KS_FC_BWHITE        "\033[1m\E[37m"

/* Backgraund colors */
#define KS_BC_BLACK         "\E[40m"
#define KS_BC_RED           "\E[41m"
#define KS_BC_GREEN         "\E[42m"
#define KS_BC_YELLOW        "\E[43m"
#define KS_BC_BLUE          "\E[44m"
#define KS_BC_MAGENTA       "\E[45m"
#define KS_BC_CYAN          "\E[46m"
#define KS_BC_WHITE         "\E[47m"

/* Color pair */
/* bg color BLACK */
#define KS_CP_BLACK_BLACK       "\E[30;40m"
#define KS_CP_BBLACK_BLACK      "\033[1m\E[30;40m"

#define KS_CP_RED_BLACK         "\E[31;40m"
#define KS_CP_BRED_BLACK        "\033[1m\E[31;40m"

#define KS_CP_GREEN_BLACK       "\E[32;40m"
#define KS_CP_BGREEN_BLACK      "\033[1m\E[32;40m"

#define KS_CP_YELLOW_BLACK      "\E[33;40m"
#define KS_CP_BYELLOW_BLACK     "\033[1m\E[33;40m"

#define KS_CP_BLUE_BLACK        "\E[34;40m"
#define KS_CP_BBLUE_BLACK       "\033[1m\E[34;40m"

#define KS_CP_MAGENTA_BLACK     "\E[35;40m"
#define KS_CP_BMAGENTA_BLACK    "\033[1m\E[35;40m"

#define KS_CP_CYAN_BLACK        "\E[36;40m"
#define KS_CP_BCYAN_BLACK       "\033[1m\E[36;40m"

#define KS_CP_WHITE_BLACK       "\E[37;40m"
#define KS_CP_BWHITE_BLACK      "\033[1m\E[37;40m"

/* bg color red */
#define KS_CP_BLACK_RED         "\E[30;41m"
#define KS_CP_BBLACK_RED        "\033[1m\E[30;41m"

#define KS_CP_RED_RED           "\E[31;41m"
#define KS_CP_BRED_RED          "\033[1m\E[31;41m"

#define KS_CP_GREEN_RED         "\E[32;41m"
#define KS_CP_BGREEN_RED        "\033[1m\E[32;41m"

#define KS_CP_YELLOW_RED        "\E[33;41m"
#define KS_CP_BYELLOW_RED       "\033[1m\E[33;41m"

#define KS_CP_BLUE_RED          "\E[34;41m"
#define KS_CP_BBLUE_RED         "\033[1m\E[34;41m"

#define KS_CP_MAGENTA_RED       "\E[35;41m"
#define KS_CP_BMAGENTA_RED      "\033[1m\E[35;41m"

#define KS_CP_CYAN_RED          "\E[36;41m"
#define KS_CP_BCYAN_RED         "\033[1m\E[36;41m"

#define KS_CP_WHITE_RED         "\E[37;41m"
#define KS_CP_BWHITE_RED        "\033[1m\E[37;41m"

/* bg color green */
#define KS_CP_BLACK_GREEN       "\E[30;42m"
#define KS_CP_BBLACK_GREEN      "\033[1m\E[30;42m"

#define KS_CP_RED_GREEN         "\E[31;42m"
#define KS_CP_BRED_GREEN        "\033[1m\E[31;42m"

#define KS_CP_GREEN_GREEN       "\E[32;42m"
#define KS_CP_BGREEN_GREEN      "\033[1m\E[32;42m"

#define KS_CP_YELLOW_GREEN      "\E[33;42m"
#define KS_CP_BYELLOW_GREEN     "\033[1m\E[33;42m"

#define KS_CP_BLUE_GREEN        "\E[34;42m"
#define KS_CP_BBLUE_GREEN       "\033[1m\E[34;42m"

#define KS_CP_MAGENTA_GREEN     "\E[35;42m"
#define KS_CP_BMAGENTA_GREEN    "\033[1m\E[35;42m"

#define KS_CP_CYAN_GREEN        "\E[36;42m"
#define KS_CP_BCYAN_GREEN       "\033[1m\E[36;42m"

#define KS_CP_WHITE_GREEN       "\E[37;42m"
#define KS_CP_BWHITE_GREEN      "\033[1m\E[37;42m"

/* bg color yellow */
#define KS_CP_BLACK_YELLOW      "\E[30;43m"
#define KS_CP_BBLACK_YELLOW     "\033[1m\E[30;43m"

#define KS_CP_RED_YELLOW        "\E[31;43m"
#define KS_CP_BRED_YELLOW       "\033[1m\E[31;43m"

#define KS_CP_GREEN_YELLOW      "\E[32;43m"
#define KS_CP_BGREEN_YELLOW     "\033[1m\E[32;43m"

#define KS_CP_YELLOW_YELLOW     "\E[33;43m"
#define KS_CP_BYELLOW_YELLOW    "\033[1m\E[33;43m"

#define KS_CP_BLUE_YELLOW       "\E[34;43m"
#define KS_CP_BBLUE_YELLOW      "\033[1m\E[34;43m"

#define KS_CP_MAGENTA_YELLOW    "\E[35;43m"
#define KS_CP_BMAGENTA_YELLOW   "\033[1m\E[35;43m"

#define KS_CP_CYAN_YELLOW       "\E[36;43m"
#define KS_CP_BCYAN_YELLOW      "\033[1m\E[36;43m"

#define KS_CP_WHITE_YELLOW      "\E[37;43m"
#define KS_CP_BWHITE_YELLOW     "\033[1m\E[37;43m"

/* bg color blue */
#define KS_CP_BLACK_BLUE        "\E[30;44m"
#define KS_CP_BBLACK_BLUE       "\033[1m\E[30;44m"

#define KS_CP_RED_BLUE          "\E[31;44m"
#define KS_CP_BRED_BLUE         "\033[1m\E[31;44m"

#define KS_CP_GREEN_BLUE        "\E[32;44m"
#define KS_CP_BGREEN_BLUE       "\033[1m\E[32;44m"

#define KS_CP_YELLOW_BLUE       "\E[33;44m"
#define KS_CP_BYELLOW_BLUE      "\033[1m\E[33;44m"

#define KS_CP_BLUE_BLUE         "\E[34;44m"
#define KS_CP_BBLUE_BLUE        "\033[1m\E[34;44m"

#define KS_CP_MAGENTA_BLUE      "\E[35;44m"
#define KS_CP_BMAGENTA_BLUE     "\033[1m\E[35;44m"

#define KS_CP_CYAN_BLUE         "\E[36;44m"
#define KS_CP_BCYAN_BLUE        "\033[1m\E[36;44m"

#define KS_CP_WHITE_BLUE        "\E[37;44m"
#define KS_CP_BWHITE_BLUE       "\033[1m\E[37;44m"

/* bg color magenta */
#define KS_CP_BLACK_MAGENTA     "\E[30;45m"
#define KS_CP_BBLACK_MAGENTA    "\033[1m\E[30;45m"

#define KS_CP_RED_MAGENTA       "\E[31;45m"
#define KS_CP_BRED_MAGENTA      "\033[1m\E[31;45m"

#define KS_CP_GREEN_MAGENTA     "\E[32;45m"
#define KS_CP_BGREEN_MAGENTA    "\033[1m\E[32;45m"

#define KS_CP_YELLOW_MAGENTA    "\E[33;45m"
#define KS_CP_BYELLOW_MAGENTA   "\033[1m\E[33;45m"

#define KS_CP_BLUE_MAGENTA      "\E[34;45m"
#define KS_CP_BBLUE_MAGENTA     "\033[1m\E[34;45m"

#define KS_CP_MAGENTA_MAGENTA   "\E[35;45m"
#define KS_CP_BMAGENTA_MAGENTA  "\033[1m\E[35;45m"

#define KS_CP_CYAN_MAGENTA      "\E[36;45m"
#define KS_CP_BCYAN_MAGENTA     "\033[1m\E[36;45m"

#define KS_CP_WHITE_MAGENTA     "\E[37;45m"
#define KS_CP_BWHITE_MAGENTA    "\033[1m\E[37;45m"

/* bg color cyan */
#define KS_CP_BLACK_CYAN        "\E[30;46m"
#define KS_CP_BBLACK_CYAN       "\033[1m\E[30;46m"

#define KS_CP_RED_CYAN          "\E[31;46m"
#define KS_CP_BRED_CYAN         "\033[1m\E[31;46m"

#define KS_CP_GREEN_CYAN        "\E[32;46m"
#define KS_CP_BGREEN_CYAN       "\033[1m\E[32;46m"

#define KS_CP_YELLOW_CYAN       "\E[33;46m"
#define KS_CP_BYELLOW_CYAN      "\033[1m\E[33;46m"

#define KS_CP_BLUE_CYAN         "\E[34;46m"
#define KS_CP_BBLUE_CYAN        "\033[1m\E[34;46m"

#define KS_CP_MAGENTA_CYAN      "\E[35;46m"
#define KS_CP_BMAGENTA_CYAN     "\033[1m\E[35;46m"

#define KS_CP_CYAN_CYAN         "\E[36;46m"
#define KS_CP_BCYAN_CYAN        "\033[1m\E[36;46m"

#define KS_CP_WHITE_CYAN        "\E[37;46m"
#define KS_CP_BWHITE_CYAN       "\033[1m\E[37;46m"

/* bg color white */
#define KS_CP_BLACK_WHITE       "\E[30;47m"
#define KS_CP_BBLACK_WHITE      "\033[1m\E[30;47m"

#define KS_CP_RED_WHITE         "\E[31;47m"
#define KS_CP_BRED_WHITE        "\033[1m\E[31;47m"

#define KS_CP_GREEN_WHITE       "\E[32;47m"
#define KS_CP_BGREEN_WHITE      "\033[1m\E[32;47m"

#define KS_CP_YELLOW_WHITE      "\E[33;47m"
#define KS_CP_BYELLOW_WHITE     "\033[1m\E[33;47m"

#define KS_CP_BLUE_WHITE        "\E[34;47m"
#define KS_CP_BBLUE_WHITE       "\033[1m\E[34;47m"

#define KS_CP_MAGENTA_WHITE     "\E[35;47m"
#define KS_CP_BMAGENTA_WHITE    "\033[1m\E[35;47m"

#define KS_CP_CYAN_WHITE        "\E[36;47m"
#define KS_CP_BCYAN_WHITE       "\033[1m\E[36;47m"

#define KS_CP_WHITE_WHITE       "\E[37;47m"
#define KS_CP_BWHITE_WHITE      "\033[1m\E[37;47m"

static const char ks_cp[64][9] = {
                                /* bg color BLACK */
  "\E[30;40m",
  "\E[31;40m",
  "\E[32;40m",
  "\E[33;40m",
  "\E[34;40m",
  "\E[35;40m",
  "\E[36;40m",
  "\E[37;40m",
                                /* bg color red */
  "\E[30;41m",
  "\E[31;41m",
  "\E[32;41m",
  "\E[33;41m",
  "\E[34;41m",
  "\E[35;41m",
  "\E[36;41m",
  "\E[37;41m",
                                /* bg color green */
  "\E[30;42m",
  "\E[31;42m",
  "\E[32;42m",
  "\E[33;42m",
  "\E[34;42m",
  "\E[35;42m",
  "\E[36;42m",
  "\E[37;42m",
                                /* bg color yellow */
  "\E[30;43m",
  "\E[31;43m",
  "\E[32;43m",
  "\E[33;43m",
  "\E[34;43m",
  "\E[35;43m",
  "\E[36;43m",
  "\E[37;43m",
                                /* bg color blue */
  "\E[30;44m",
  "\E[31;44m",
  "\E[32;44m",
  "\E[33;44m",
  "\E[34;44m",
  "\E[35;44m",
  "\E[36;44m",
  "\E[37;44m",
                                /* bg color magenta */
  "\E[30;45m",
  "\E[31;45m",
  "\E[32;45m",
  "\E[33;45m",
  "\E[34;45m",
  "\E[35;45m",
  "\E[36;45m",
  "\E[37;45m",
                                /* bg color cyan */
  "\E[30;46m",
  "\E[31;46m",
  "\E[32;46m",
  "\E[33;46m",
  "\E[34;46m",
  "\E[35;46m",
  "\E[36;46m",
  "\E[37;46m",
                                /* bg color white */
  "\E[30;47m",
  "\E[31;47m",
  "\E[32;47m",
  "\E[33;47m",
  "\E[34;47m",
  "\E[35;47m",
  "\E[36;47m",
  "\E[37;47m"
} ;

static const char ks_cpb[64][13] = {
                                /* bg color BLACK */
  "\033[1m\E[30;40m",
  "\033[1m\E[31;40m",
  "\033[1m\E[32;40m",
  "\033[1m\E[33;40m",
  "\033[1m\E[34;40m",
  "\033[1m\E[35;40m",
  "\033[1m\E[36;40m",
  "\033[1m\E[37;40m",
                                /* bg color red */
  "\033[1m\E[30;41m",
  "\033[1m\E[31;41m",
  "\033[1m\E[32;41m",
  "\033[1m\E[33;41m",
  "\033[1m\E[34;41m",
  "\033[1m\E[35;41m",
  "\033[1m\E[36;41m",
  "\033[1m\E[37;41m",
                                /* bg color green */
  "\033[1m\E[30;42m",
  "\033[1m\E[31;42m",
  "\033[1m\E[32;42m",
  "\033[1m\E[33;42m",
  "\033[1m\E[34;42m",
  "\033[1m\E[35;42m",
  "\033[1m\E[36;42m",
  "\033[1m\E[37;42m",
                                /* bg color yellow */
  "\033[1m\E[30;43m",
  "\033[1m\E[31;43m",
  "\033[1m\E[32;43m",
  "\033[1m\E[33;43m",
  "\033[1m\E[34;43m",
  "\033[1m\E[35;43m",
  "\033[1m\E[36;43m",
  "\033[1m\E[37;43m",
                                /* bg color blue */
  "\033[1m\E[30;44m",
  "\033[1m\E[31;44m",
  "\033[1m\E[32;44m",
  "\033[1m\E[33;44m",
  "\033[1m\E[34;44m",
  "\033[1m\E[35;44m",
  "\033[1m\E[36;44m",
  "\033[1m\E[37;44m",
                                /* bg color magenta */
  "\033[1m\E[30;45m",
  "\033[1m\E[31;45m",
  "\033[1m\E[32;45m",
  "\033[1m\E[33;45m",
  "\033[1m\E[34;45m",
  "\033[1m\E[35;45m",
  "\033[1m\E[36;45m",
  "\033[1m\E[37;45m",
                                /* bg color cyan */
  "\033[1m\E[30;46m",
  "\033[1m\E[31;46m",
  "\033[1m\E[32;46m",
  "\033[1m\E[33;46m",
  "\033[1m\E[34;46m",
  "\033[1m\E[35;46m",
  "\033[1m\E[36;46m",
  "\033[1m\E[37;46m",
                                /* bg color white */
  "\033[1m\E[30;47m",
  "\033[1m\E[31;47m",
  "\033[1m\E[32;47m",
  "\033[1m\E[33;47m",
  "\033[1m\E[34;47m",
  "\033[1m\E[35;47m",
  "\033[1m\E[36;47m",
  "\033[1m\E[37;47m"
} ;

#define C_PAIR(a,b)     ks_cp[(b*8)+a]     /* set color pair */
#define CB_PAIR(a,b)    ks_cpb[(b*8)+a]    /* set color pair */
#define C_DEFAULT()     "\033[0m"          /* reset default */
#define C_UNDERLINE()          "\033[4m"          /* underline */

#endif  /* define for ks_ecolor.h */
