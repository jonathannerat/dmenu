/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

#include "theme.h"

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom */
static int centered = 0; /* -c option; centers dmenu on screen */
static int border = 0; /* -B option; enables border drawing */
static int min_width = 400; /* minimum width when centered */
static int fuzzy  = 1; /* -F  option; if 0, dmenu doesn't use fuzzy matching */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	THEME_FONT,
#ifdef THEME_EXTRA_FONTS
	THEME_EXTRA_FONTS
#endif
};
static const char *prompt      = NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                        fg             bg       */
	[SchemeNorm]          = { THEME_WHITE,   THEME_BLACK },
	[SchemeSel]           = { THEME_BLACK,   THEME_BLUE },
	[SchemeOut]           = { THEME_BLACK,   THEME_YELLOW },
	[SchemeSelHighlight]  = { THEME_BLACK,   THEME_MAGENTA },
	[SchemeNormHighlight] = { THEME_MAGENTA, THEME_BLACK },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;

static unsigned int lineheight = 0; /* -h option; minimum height of a menu line */

static unsigned int maxhist    = 64;
static int histnodup           = 1; /* if 0, record repeated histories */
static char passmask           = '*'; /* replaces characters in password mode */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " /?\"&[]";

/* Size of the window border */
static const unsigned int border_width = 2;
