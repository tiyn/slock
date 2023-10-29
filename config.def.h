/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* length of entries in scom */
static const int entrylen = 1;

struct secretpass {
  char const *pass;
  char const *command;
} scom = {
/*	 Password				command */
  "shutdown",           "sudo shutdown -h now"
};
