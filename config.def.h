/* user and group to drop privileges to */
static const char *user  = "user";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#2d2d2d",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#cc3333",   /* wrong password */
	[CAPS] = "#ff0000",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* Background image path, should be available to the user above */
static const char* background_image = "/home/user/.local/share/lock";
/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 40;
static const int logow = 10;	/* grid width and height for right center alignment*/
static const int logoh = 15;

static XRectangle rectangles[12] = {
	/* x	y	w	h */
	{ 0,	0,	1,	3 },
	{ 0,	7,	4,	2 },
	{ 1,	0,	1,	4 },
	{ 2,	2,	1,	3 },
	{ 3,	3,	1,	3 },
	{ 4,	0,	2,	2 },
	{ 4,	4,	2,	11 },
	{ 6,	3,	1,	3 },
	{ 6,	7,	4,	2 },
	{ 7,	2,	1,	3 },
	{ 8,	0,	1,	4 },
	{ 9,	0,	1,	3 },
};

/* allow control key to trigger fail on clear */
static const int controlkeyclear = 1;

/* length of entries in scom */
static const int entrylen = 1;

struct secretpass {
  char const *pass;
  char const *command;
} scom = {
/*	 Password				command */
  "shutdown",           "sudo shutdown -h now"
};
