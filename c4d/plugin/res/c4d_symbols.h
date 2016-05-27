//*********************************************************************\
// File name        : c4d_symbols.h
// Description      : symbol definition file for the plugin 
//*********************************************************************/
// WARNING : Only edit this file, if you exactly know what you are doing.

// Weird things happen when you let the enum automatically increment the ID numbers
// So to keep things simple(and working). The items listed in this file Exactly match the items listed at the top of the pyp file

enum
{
ID_STATIC            = 99999,
ESPNPipelineMenu     = 10000,
ESPNHelpMenu         = 99998,
CLOSE                = 99997,
MAIN_DIALOG          = 10001,
FIRST_TAB            = 10002,
LBL_PROD_NAME        = 10004,
DRP_PROD_NAME        = 10005,
LBL_PROJ_NAME        = 10006,
CHK_EXISTING         = 10007,
DRP_PROJ_NAME        = 10008,
TXT_PROJ_NAME        = 10009,
LBL_SCENE_NAME       = 10010,
TXT_SCENE_NAME       = 10011,
LBL_FRAMERATE        = 10012,
RDO_FRAMERATE        = 10013,
RDO_FRAMERATE_30     = 10030,
RDO_FRAMERATE_60     = 10060,
FIRST_TAB_SEP_01     = 10017,
LBL_PREVIEW          = 10018,
LBL_PREVIEW_NULL     = 10118,
LBL_PREVIEW_PROJ     = 10019,
TXT_PREVIEW_PROJ     = 10020,
LBL_PREVIEW_FILE     = 10021,
TXT_PREVIEW_FILE     = 10022,
BTN_NEWPROJ_EXEC     = 10023,
BTN_HELP_EXEC        = 10024,
//BTN_RENAME_EXEC      = 10025,
//LBL_NEWPROJ_EXEC     = 10026,
//LBL_MIGPROJ_EXEC     = 10027,
//LBL_RENAME_EXEC      = 10028,
HELP_IMAGE           = 10029,
SECOND_TAB           = 20000,
BTN_SETOUTPUT        = 20001,
BTN_MAKETAG          = 20002,
BTN_SORT             = 20003,
BTN_NEWTAKE          = 20004,
BTN_VERSIONUP        = 20005,
BTN_SUBMIT           = 20006,
LBL_OUTPUT_PATHS     = 20007,
LBL_TAKE_UTILS       = 20008,
BTN_CREATE_OBJBUFFERS= 20009,
THIRD_TAB            = 30000,
LBL_HOME_TRICODE     = 30001,
TXT_HOME_TRICODE     = 30002,
VEC_HOME_COLOR_P     = 30003,
VEC_HOME_COLOR_S     = 30004,
VEC_HOME_COLOR_T     = 30005,
LBL_AWAY_TRICODE     = 30006,
TXT_AWAY_TRICODE     = 30007,
VEC_AWAY_COLOR_P     = 30008,
VEC_AWAY_COLOR_S     = 30009,
VEC_AWAY_COLOR_T     = 30010,
THIRD_TAB_INSTRUCTION= 30011,
IS_MATCHUP           = 30012,
TEAM_SWITCH_EXEC     = 30013,
HOME_PRIMARY_EXEC    = 30014,
HOME_SECONDARY_EXEC  = 30015,
HOME_TERTIARY_EXEC   = 30016,
AWAY_PRIMARY_EXEC    = 30017,
AWAY_SECONDARY_EXEC  = 30018,
AWAY_TERTIARY_EXEC   = 30019,
AUTOMATION_HELP_EXEC = 30020,
SAVE_RENAME_TAB      = 40000,
SAVE_BACKUP_EXEC     = 40001,
RENAME_EXEC          = 40002,
SAVE_RENAME_HELP_EXEC= 40003,
RELINK_TEXTURES_EXEC = 40004,
DRP_PROJ_NAME_START_ID = 80000,
DRP_PROD_NAME_START_ID = 90000,
}


