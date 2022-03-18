/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"mono:pixelsize=14:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeSelHighlight] = { "#ffc978", "#005577" },
	[SchemeNormHighlight] = { "#ffc978", "#222222" },
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeMid] = { "#eeeeee", "#770000" },
	[SchemeOutHighlight] = { "#ffc978", "#00ffff" },
	/*     my_scehme       */
	/* [SchemeNorm] = { "#bbbbbb", "#02143f" }, */
	/* [SchemeSel] = { "#005577", "#bf616a" }, */
	/* [SchemeSelHighlight] = { "#02143f", "#bf616a" },
	/* [SchemeNormHighlight] = { "#bf616a", "#02143f" }, */
	/* [SchemeOut] = { "#000000", "#00ffff" }, */
	/* [SchemeOutHighlight] = { "#ffc978", "#00ffff" }, */
	/* [SchemeMid] = { "#bf616a", "#003366" }, */
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
