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

#define KS_C_SET_BOLD       "\033[1m"           /* bolding */
#define KS_C_SET_UNDERL     "\033[4m"           /* underline */
#define KS_C_DEFAULT        "\033[0m"           /* reset default */
#define KS_C_HALF_BRIGHT    "\033[2m"           //    полу €ркий цвет(тЄмно - серый, независимо от цвета)
#define KS_C_BLINK          "\033[5m"           //    мигающий
#define KS_C_REVERSE        "\033[7m"           //    реверси€(знаки приобретают цвет фона, а фон -- цвет знаков)

#define KS_C_NORM_INTENSIVE "\033[22m"          //    установить нормальную интенсивность
#define KS_C_UNSET_UNDERL   "\033[24m"          //    отменить подчеркивание
#define KS_C_UNSET_BLINK    "\033[25m"          //    отменить мигание
#define KS_C_UNSET_REVERSE  "\033[27m"          //    отменить реверсию


/* Foregraund colors */
#define KS_FC_BLACK         "\033[30m"
#define KS_FC_BBLACK        "\033[1m\033[30m"
#define KS_FC_RED           "\033[31m"
#define KS_FC_BRED          "\033[1m\033[31m"
#define KS_FC_GREEN         "\033[32m"
#define KS_FC_BGREEN        "\033[1m\033[32m"
#define KS_FC_YELLOW        "\033[33m"
#define KS_FC_BYELLOW       "\033[1m\033[33m"
#define KS_FC_BLUE          "\033[34m"
#define KS_FC_BBLUE         "\033[1m\033[34m"
#define KS_FC_MAGENTA       "\033[35m"
#define KS_FC_BMAGENTA      "\033[1m\033[35m"
#define KS_FC_CYAN          "\033[36m"
#define KS_FC_BCYAN         "\033[1m\033[36m"
#define KS_FC_WHITE         "\033[37m"
#define KS_FC_BWHITE        "\033[1m\033[37m"

/* Backgraund colors */
#define KS_BC_BLACK         "\033[40m"
#define KS_BC_RED           "\033[41m"
#define KS_BC_GREEN         "\033[42m"
#define KS_BC_YELLOW        "\033[43m"
#define KS_BC_BLUE          "\033[44m"
#define KS_BC_MAGENTA       "\033[45m"
#define KS_BC_CYAN          "\033[46m"
#define KS_BC_WHITE         "\033[47m"

/* Color pair */
/* bg color BLACK */
#define KS_CP_BLACK_BLACK       "\033[30;40m"
#define KS_CP_BBLACK_BLACK      "\033[1m\033[30;40m"

#define KS_CP_RED_BLACK         "\033[31;40m"
#define KS_CP_BRED_BLACK        "\033[1m\033[31;40m"

#define KS_CP_GREEN_BLACK       "\033[32;40m"
#define KS_CP_BGREEN_BLACK      "\033[1m\033[32;40m"

#define KS_CP_YELLOW_BLACK      "\033[33;40m"
#define KS_CP_BYELLOW_BLACK     "\033[1m\033[33;40m"

#define KS_CP_BLUE_BLACK        "\033[34;40m"
#define KS_CP_BBLUE_BLACK       "\033[1m\033[34;40m"

#define KS_CP_MAGENTA_BLACK     "\033[35;40m"
#define KS_CP_BMAGENTA_BLACK    "\033[1m\033[35;40m"

#define KS_CP_CYAN_BLACK        "\033[36;40m"
#define KS_CP_BCYAN_BLACK       "\033[1m\033[36;40m"

#define KS_CP_WHITE_BLACK       "\033[37;40m"
#define KS_CP_BWHITE_BLACK      "\033[1m\033[37;40m"

/* bg color red */
#define KS_CP_BLACK_RED         "\033[30;41m"
#define KS_CP_BBLACK_RED        "\033[1m\033[30;41m"

#define KS_CP_RED_RED           "\033[31;41m"
#define KS_CP_BRED_RED          "\033[1m\033[31;41m"

#define KS_CP_GREEN_RED         "\033[32;41m"
#define KS_CP_BGREEN_RED        "\033[1m\033[32;41m"

#define KS_CP_YELLOW_RED        "\033[33;41m"
#define KS_CP_BYELLOW_RED       "\033[1m\033[33;41m"

#define KS_CP_BLUE_RED          "\033[34;41m"
#define KS_CP_BBLUE_RED         "\033[1m\033[34;41m"

#define KS_CP_MAGENTA_RED       "\033[35;41m"
#define KS_CP_BMAGENTA_RED      "\033[1m\033[35;41m"

#define KS_CP_CYAN_RED          "\033[36;41m"
#define KS_CP_BCYAN_RED         "\033[1m\033[36;41m"

#define KS_CP_WHITE_RED         "\033[37;41m"
#define KS_CP_BWHITE_RED        "\033[1m\033[37;41m"

/* bg color green */
#define KS_CP_BLACK_GREEN       "\033[30;42m"
#define KS_CP_BBLACK_GREEN      "\033[1m\033[30;42m"

#define KS_CP_RED_GREEN         "\033[31;42m"
#define KS_CP_BRED_GREEN        "\033[1m\033[31;42m"

#define KS_CP_GREEN_GREEN       "\033[32;42m"
#define KS_CP_BGREEN_GREEN      "\033[1m\033[32;42m"

#define KS_CP_YELLOW_GREEN      "\033[33;42m"
#define KS_CP_BYELLOW_GREEN     "\033[1m\033[33;42m"

#define KS_CP_BLUE_GREEN        "\033[34;42m"
#define KS_CP_BBLUE_GREEN       "\033[1m\033[34;42m"

#define KS_CP_MAGENTA_GREEN     "\033[35;42m"
#define KS_CP_BMAGENTA_GREEN    "\033[1m\033[35;42m"

#define KS_CP_CYAN_GREEN        "\033[36;42m"
#define KS_CP_BCYAN_GREEN       "\033[1m\033[36;42m"

#define KS_CP_WHITE_GREEN       "\033[37;42m"
#define KS_CP_BWHITE_GREEN      "\033[1m\033[37;42m"

/* bg color yellow */
#define KS_CP_BLACK_YELLOW      "\033[30;43m"
#define KS_CP_BBLACK_YELLOW     "\033[1m\033[30;43m"

#define KS_CP_RED_YELLOW        "\033[31;43m"
#define KS_CP_BRED_YELLOW       "\033[1m\033[31;43m"

#define KS_CP_GREEN_YELLOW      "\033[32;43m"
#define KS_CP_BGREEN_YELLOW     "\033[1m\033[32;43m"

#define KS_CP_YELLOW_YELLOW     "\033[33;43m"
#define KS_CP_BYELLOW_YELLOW    "\033[1m\033[33;43m"

#define KS_CP_BLUE_YELLOW       "\033[34;43m"
#define KS_CP_BBLUE_YELLOW      "\033[1m\033[34;43m"

#define KS_CP_MAGENTA_YELLOW    "\033[35;43m"
#define KS_CP_BMAGENTA_YELLOW   "\033[1m\033[35;43m"

#define KS_CP_CYAN_YELLOW       "\033[36;43m"
#define KS_CP_BCYAN_YELLOW      "\033[1m\033[36;43m"

#define KS_CP_WHITE_YELLOW      "\033[37;43m"
#define KS_CP_BWHITE_YELLOW     "\033[1m\033[37;43m"

/* bg color blue */
#define KS_CP_BLACK_BLUE        "\033[30;44m"
#define KS_CP_BBLACK_BLUE       "\033[1m\033[30;44m"

#define KS_CP_RED_BLUE          "\033[31;44m"
#define KS_CP_BRED_BLUE         "\033[1m\033[31;44m"

#define KS_CP_GREEN_BLUE        "\033[32;44m"
#define KS_CP_BGREEN_BLUE       "\033[1m\033[32;44m"

#define KS_CP_YELLOW_BLUE       "\033[33;44m"
#define KS_CP_BYELLOW_BLUE      "\033[1m\033[33;44m"

#define KS_CP_BLUE_BLUE         "\033[34;44m"
#define KS_CP_BBLUE_BLUE        "\033[1m\033[34;44m"

#define KS_CP_MAGENTA_BLUE      "\033[35;44m"
#define KS_CP_BMAGENTA_BLUE     "\033[1m\033[35;44m"

#define KS_CP_CYAN_BLUE         "\033[36;44m"
#define KS_CP_BCYAN_BLUE        "\033[1m\033[36;44m"

#define KS_CP_WHITE_BLUE        "\033[37;44m"
#define KS_CP_BWHITE_BLUE       "\033[1m\033[37;44m"

/* bg color magenta */
#define KS_CP_BLACK_MAGENTA     "\033[30;45m"
#define KS_CP_BBLACK_MAGENTA    "\033[1m\033[30;45m"

#define KS_CP_RED_MAGENTA       "\033[31;45m"
#define KS_CP_BRED_MAGENTA      "\033[1m\033[31;45m"

#define KS_CP_GREEN_MAGENTA     "\033[32;45m"
#define KS_CP_BGREEN_MAGENTA    "\033[1m\033[32;45m"

#define KS_CP_YELLOW_MAGENTA    "\033[33;45m"
#define KS_CP_BYELLOW_MAGENTA   "\033[1m\033[33;45m"

#define KS_CP_BLUE_MAGENTA      "\033[34;45m"
#define KS_CP_BBLUE_MAGENTA     "\033[1m\033[34;45m"

#define KS_CP_MAGENTA_MAGENTA   "\033[35;45m"
#define KS_CP_BMAGENTA_MAGENTA  "\033[1m\033[35;45m"

#define KS_CP_CYAN_MAGENTA      "\033[36;45m"
#define KS_CP_BCYAN_MAGENTA     "\033[1m\033[36;45m"

#define KS_CP_WHITE_MAGENTA     "\033[37;45m"
#define KS_CP_BWHITE_MAGENTA    "\033[1m\033[37;45m"

/* bg color cyan */
#define KS_CP_BLACK_CYAN        "\033[30;46m"
#define KS_CP_BBLACK_CYAN       "\033[1m\033[30;46m"

#define KS_CP_RED_CYAN          "\033[31;46m"
#define KS_CP_BRED_CYAN         "\033[1m\033[31;46m"

#define KS_CP_GREEN_CYAN        "\033[32;46m"
#define KS_CP_BGREEN_CYAN       "\033[1m\033[32;46m"

#define KS_CP_YELLOW_CYAN       "\033[33;46m"
#define KS_CP_BYELLOW_CYAN      "\033[1m\033[33;46m"

#define KS_CP_BLUE_CYAN         "\033[34;46m"
#define KS_CP_BBLUE_CYAN        "\033[1m\033[34;46m"

#define KS_CP_MAGENTA_CYAN      "\033[35;46m"
#define KS_CP_BMAGENTA_CYAN     "\033[1m\033[35;46m"

#define KS_CP_CYAN_CYAN         "\033[36;46m"
#define KS_CP_BCYAN_CYAN        "\033[1m\033[36;46m"

#define KS_CP_WHITE_CYAN        "\033[37;46m"
#define KS_CP_BWHITE_CYAN       "\033[1m\033[37;46m"

/* bg color white */
#define KS_CP_BLACK_WHITE       "\033[30;47m"
#define KS_CP_BBLACK_WHITE      "\033[1m\033[30;47m"

#define KS_CP_RED_WHITE         "\033[31;47m"
#define KS_CP_BRED_WHITE        "\033[1m\033[31;47m"

#define KS_CP_GREEN_WHITE       "\033[32;47m"
#define KS_CP_BGREEN_WHITE      "\033[1m\033[32;47m"

#define KS_CP_YELLOW_WHITE      "\033[33;47m"
#define KS_CP_BYELLOW_WHITE     "\033[1m\033[33;47m"

#define KS_CP_BLUE_WHITE        "\033[34;47m"
#define KS_CP_BBLUE_WHITE       "\033[1m\033[34;47m"

#define KS_CP_MAGENTA_WHITE     "\033[35;47m"
#define KS_CP_BMAGENTA_WHITE    "\033[1m\033[35;47m"

#define KS_CP_CYAN_WHITE        "\033[36;47m"
#define KS_CP_BCYAN_WHITE       "\033[1m\033[36;47m"

#define KS_CP_WHITE_WHITE       "\033[37;47m"
#define KS_CP_BWHITE_WHITE      "\033[1m\033[37;47m"

static const char ks_cp[64][9] = {
                                /* bg color BLACK */
  "\033[30;40m",
  "\033[31;40m",
  "\033[32;40m",
  "\033[33;40m",
  "\033[34;40m",
  "\033[35;40m",
  "\033[36;40m",
  "\033[37;40m",
                                /* bg color red */
  "\033[30;41m",
  "\033[31;41m",
  "\033[32;41m",
  "\033[33;41m",
  "\033[34;41m",
  "\033[35;41m",
  "\033[36;41m",
  "\033[37;41m",
                                /* bg color green */
  "\033[30;42m",
  "\033[31;42m",
  "\033[32;42m",
  "\033[33;42m",
  "\033[34;42m",
  "\033[35;42m",
  "\033[36;42m",
  "\033[37;42m",
                                /* bg color yellow */
  "\033[30;43m",
  "\033[31;43m",
  "\033[32;43m",
  "\033[33;43m",
  "\033[34;43m",
  "\033[35;43m",
  "\033[36;43m",
  "\033[37;43m",
                                /* bg color blue */
  "\033[30;44m",
  "\033[31;44m",
  "\033[32;44m",
  "\033[33;44m",
  "\033[34;44m",
  "\033[35;44m",
  "\033[36;44m",
  "\033[37;44m",
                                /* bg color magenta */
  "\033[30;45m",
  "\033[31;45m",
  "\033[32;45m",
  "\033[33;45m",
  "\033[34;45m",
  "\033[35;45m",
  "\033[36;45m",
  "\033[37;45m",
                                /* bg color cyan */
  "\033[30;46m",
  "\033[31;46m",
  "\033[32;46m",
  "\033[33;46m",
  "\033[34;46m",
  "\033[35;46m",
  "\033[36;46m",
  "\033[37;46m",
                                /* bg color white */
  "\033[30;47m",
  "\033[31;47m",
  "\033[32;47m",
  "\033[33;47m",
  "\033[34;47m",
  "\033[35;47m",
  "\033[36;47m",
  "\033[37;47m"
} ;

static const char ks_cpb[64][13] = {
                                /* bg color BLACK */
  "\033[1m\033[30;40m",
  "\033[1m\033[31;40m",
  "\033[1m\033[32;40m",
  "\033[1m\033[33;40m",
  "\033[1m\033[34;40m",
  "\033[1m\033[35;40m",
  "\033[1m\033[36;40m",
  "\033[1m\033[37;40m",
                                /* bg color red */
  "\033[1m\033[30;41m",
  "\033[1m\033[31;41m",
  "\033[1m\033[32;41m",
  "\033[1m\033[33;41m",
  "\033[1m\033[34;41m",
  "\033[1m\033[35;41m",
  "\033[1m\033[36;41m",
  "\033[1m\033[37;41m",
                                /* bg color green */
  "\033[1m\033[30;42m",
  "\033[1m\033[31;42m",
  "\033[1m\033[32;42m",
  "\033[1m\033[33;42m",
  "\033[1m\033[34;42m",
  "\033[1m\033[35;42m",
  "\033[1m\033[36;42m",
  "\033[1m\033[37;42m",
                                /* bg color yellow */
  "\033[1m\033[30;43m",
  "\033[1m\033[31;43m",
  "\033[1m\033[32;43m",
  "\033[1m\033[33;43m",
  "\033[1m\033[34;43m",
  "\033[1m\033[35;43m",
  "\033[1m\033[36;43m",
  "\033[1m\033[37;43m",
                                /* bg color blue */
  "\033[1m\033[30;44m",
  "\033[1m\033[31;44m",
  "\033[1m\033[32;44m",
  "\033[1m\033[33;44m",
  "\033[1m\033[34;44m",
  "\033[1m\033[35;44m",
  "\033[1m\033[36;44m",
  "\033[1m\033[37;44m",
                                /* bg color magenta */
  "\033[1m\033[30;45m",
  "\033[1m\033[31;45m",
  "\033[1m\033[32;45m",
  "\033[1m\033[33;45m",
  "\033[1m\033[34;45m",
  "\033[1m\033[35;45m",
  "\033[1m\033[36;45m",
  "\033[1m\033[37;45m",
                                /* bg color cyan */
  "\033[1m\033[30;46m",
  "\033[1m\033[31;46m",
  "\033[1m\033[32;46m",
  "\033[1m\033[33;46m",
  "\033[1m\033[34;46m",
  "\033[1m\033[35;46m",
  "\033[1m\033[36;46m",
  "\033[1m\033[37;46m",
                                /* bg color white */
  "\033[1m\033[30;47m",
  "\033[1m\033[31;47m",
  "\033[1m\033[32;47m",
  "\033[1m\033[33;47m",
  "\033[1m\033[34;47m",
  "\033[1m\033[35;47m",
  "\033[1m\033[36;47m",
  "\033[1m\033[37;47m"
} ;

#define C_PAIR(a,b)             ks_cp[(b*8)+a]     /* set color pair */
#define CB_PAIR(a,b)            ks_cpb[(b*8)+a]    /* set color pair */
#define C_DEFAULT()             "\033[0m"          /* reset default */
#define C_UNDERLINE()           "\033[4m"          /* underline */

#endif  /* define for ks_ecolor.h */
