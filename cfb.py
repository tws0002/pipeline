##############################################################################
###                  PROJECT-SPECIFIC GLOBAL VARIABLES:                    ###
###            COLLEGE FOOTBALL 2015 PLAYOFFS / REGULAR SEASON             ###
##############################################################################

# Main project directory
PROJECT_BASE_DIR = "\\\\cagenas\\Workspace\\MASTER_PROJECTS\\CFB_15\\"
# Asset directories
MAIN_ASSET_DIR = PROJECT_BASE_DIR + "TOOLKIT\\001_3D_ASSETS\\"
TEAMS_ASSET_DIR = PROJECT_BASE_DIR + "TOOLKIT\\002_3D_TEAMS\\"
TEMPLATE_ASSET_DIR = PROJECT_BASE_DIR + "TOOLKIT\\004_TEMPLATES\\"
ANIMATION_PROJECT_DIR = PROJECT_BASE_DIR + "PROJECTS\\000_Animation\\"
# Database locations
TEAM_DATABASE = "V:\\dev\\pipeline\\database\\cfb_teams.yaml"
SORTING_DATABASE = "V:\\dev\\pipeline\\database\\cfb_sorting.yaml"
TEMPLATES_DATABASE = "V:\\dev\\pipeline\\database\\cfb_templates.yaml"
# Factory location
FACTORY_LIGHT_RIG = "\\\\cagenas\\Workspace\\MASTER_PROJECTS\\CFB_15\\TOOLKIT\\001_3D_ASSETS\\000_FACTORY\\FACTORY.mb"
# Folder structure
FOLDER_STRUCTURE = {
        'ae': '',
        'maya': '',
        'nuke': '',
        'c4d': '',
        'render_3d': '',
        'render_2d': 'prerenders',
        'qt': ''
        }





def _listAll(*a):
    print " ===== Project Directories ====="
    print "Project Base Directory: " + PROJECT_BASE_DIR
    print "Main Asset Directory  : " + MAIN_ASSET_DIR
    print "Team Asset Directory  : " + TEAMS_ASSET_DIR
    print "Templates Directory   : " + TEMPLATE_ASSET_DIR
    print " ======== YAML files ========"
    print "Team Database Location: " + TEAM_DATABASE
    print "Sorting Database      : " + SORTING_DATABASE
    print "Templates Database    : " + TEMPLATES_DATABASE
    print " ======= Factory file ======="
    print "Factory Scene File    : " + FACTORY_LIGHT_RIG
