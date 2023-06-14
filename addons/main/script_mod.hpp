// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX u
#define PREFIX unifactions

// TODO: Consider Mod-wide or Component-narrow versions  (or both, depending on wishes!)
// We will use the DATE for the BUILD# in the format YYMMDD - VM
#include "\u\unitaf\addons\main\script_version.hpp"

#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD

#define UNIFACTION_TAG UNIFactions
// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.98


#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(UNIFACTION_TAG - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(UNIFACTION_TAG - COMPONENT)
#endif