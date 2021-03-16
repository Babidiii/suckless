static const char *background_color = "#3e3e3e";
static const char *border_color = "#b97979";
static const char *font_color = "#ececec";
static const char *font_pattern = "IBM Plex Mono:size=10:antialias=true";
static const unsigned line_spacing = 5;
static const unsigned int padding = 15;


// Display notification on primary monitor 
static const int use_primary_monitor = 1;

static const unsigned int width = 450;
static const unsigned int border_size = 2;
static const unsigned int pos_x = 30;
static const unsigned int pos_y = 60;

enum corners { TOP_LEFT, TOP_RIGHT, BOTTOM_LEFT, BOTTOM_RIGHT };
enum corners corner = TOP_RIGHT;

static const unsigned int duration = 5; /* in seconds */

#define DISMISS_BUTTON Button1
#define ACTION_BUTTON Button3
