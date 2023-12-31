#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Data_F_Oldman_Loadorder",
            "cba_main",
            "ace_main"
        };
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@UNIFactions_RHS";
        name = "UNIFactions - RHS";
        hidePicture = 0;
        hideName = 1;
    };
};