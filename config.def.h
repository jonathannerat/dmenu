/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar      =   1; /* -b option; if 0, dmenu appears at bottom */
static int centered    =   0; /* -c option; centers dmenu on screen */
static int border      =   0; /* -B option; enables border drawing */
static int min_width   = 400; /*            minimum width when centered */
static int fuzzy       =   1; /* -F option; if 0, dmenu doesn't use fuzzy matching */
static int returnindex =   0; /* -I option; returns index of selected items instead of text */
static unsigned int vertpad = 10; /* -vp option; sorround dmenu's window with vertical padding */
static unsigned int horipad = 10; /* -vh option; sorround dmenu's window with horizontal padding */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeSelHighlight] = { "#ffc978", "#005577" },
	[SchemeNormHighlight] = { "#ffc978", "#222222" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;

static unsigned int lineheight = 0; /* -h option; minimum height of a menu line */

static unsigned int maxhist    = 64;
static int histnodup           = 1; /* if 0, record repeated histories */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 5;
