#define CMDLENGTH 80
#define DELIMITER "    "
// #define CLICKABLE_BLOCKS
// #define LEADING_DELIMITER ""

const Block blocks[] = {
    BLOCK("sb-archupdates", 3600,  8),
    BLOCK("sb-spotify",  5,     0),
    BLOCK("sb-brightness",  0,     6),
    BLOCK("sb-battery",     10,   18),
    BLOCK("sb-volume",      0,     2),
    BLOCK("sb-datentime",   50,   22),
    BLOCK("sb-bluetooth",   1800, 21),
    BLOCK("sb-wifi",  30,   20),
};
