/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"FantasqueSansMono Nerd Font:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#c0caf5", "#1a1b26" },
	[SchemeSel] = { "#1a1b26", "#7dcfff" },
	[SchemeSelHighlight] = { "#1a1b26", "#e0af68" },
	[SchemeNormHighlight] = { "#e0af68", "#1a1b26" },
	[SchemeOut] = { "#1a1b26", "#9ece6a" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int maxhist    = 64;
static int histnodup           = 1;	/* if 0, record repeated histories */
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " /?\"&[]";

/* Size of the window border */
static const unsigned int border_width = 1;