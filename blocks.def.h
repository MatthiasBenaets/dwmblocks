//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/				/*Update Interval*/	/*Update Signal*/
	{"",		"~/.dwmblocks/scripts/dwmdate",		60,			0},
	{"",		"~/.dwmblocks/scripts/dwmupdates",	3600,			0},
	{"",		"~/.dwmblocks/scripts/dwmvol",		1,			0},
	{"",		"~/.dwmblocks/scripts/dwmbat",		60,			0},
	{"",		"~/.dwmblocks/scripts/dwmclock",	1,			0},
	{"",		"~/.dwmblocks/scripts/dwmnetwork",	10,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
