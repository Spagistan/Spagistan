// Spagistan Mod main file.
// Note that this project's organization is lifted whole-cloth from rhssaf.
// Thanks.

class CfgPatches
{
    class spagistan_main
    {
        name = "Spagistan Mod main";
        author = "Spagistan Mod Authors";
        url = "https://spagistan.com";
        version = "0";
        requiredAddons[] =
        {
            "spagistan_main_loadorder"
        };
        units[] =
        {
            "spagistan_flag_spagistan"
        };
        weapons[] = {};
    };
};

class CfgAddons
{
    class PreloadAddons
    {
        class Spagistan
        {
            list[] =
            {
                "spagistan_main",
                "spagistan_main_loadorder",
                "spagistan_c_gear",
                "spagistan_c_troops",
                "spagistan_c_vehicles"
            };
        };
    };
};

class CfgMods
{
    class Mod_Base;
    class spagistan: Mod_Base
    {
        picture = "\spagistan\addons\spagistan_main\data\spagistan_logo_co.paa";
        logo = "\spagistan\addons\spagistan_main\data\spagistan_logo_co.paa";
        logoOver = "\spagistan\addons\spagistan_main\data\spagistan_logo_co.paa";
        logoSmall = "\spagistan\addons\spagistan_main\data\spagistan_logo_co.paa";
        dlcColor[] = {0,0,0,1};
        fieldManualTopicaAndHint[] = {};
        hideName = 1;
        hidePicture = 0;
        tooltip = "Spagistan Armed Forces Mod";
        tooltipOwned = "Spagistan Armed Forces Mod";
        name = "Spagistan Armed Forces Mod";
        overview = "Welcome to the Spagistan Armed Forces!";
        action = "https://spagistan.com/";
        dir = "spagistan";
    };
};

class CfgVehicles
{
    class FlagCarrier;
    class spagistan_flag_spagistan: FlagCarrier
    {
        class EventHandlers
        {
            init="(_this select 0) setFlagTexture '\spagistan\addons\spagistan_main\data\flags\spagistan_flag_spagistan_ca.paa'";
        };
        dlc = "Spagistan Armed Forces Mod";
        author = "Spagistan Mod Authors";
        scope = 2;
        scopeCurator = 2;
        displayName = "Flag (Spagistan)";
        
    };
};

class CfgMarkers
{
    class flag_NATO;
    class spagistan_flag_spagistan: flag_NATO
    {
        name = "Spagistan";
        icon = "\spagistan\addons\spagistan_main\data\flags\spagistan_flag_spagistan_ca.paa";
        texture = "\spagistan\addons\spagistan_main\data\flags\spagistan_flag_spagistan_ca.paa";
    };
};

class CfgWorlds
{
    class GenericNames
    {
        class SpagistaniMen
        {
            class FirstNames
            {
                spag = "Spag";
                kirill="Kirill";
            };
            
            class LastNames
            {
                hetta = "Hetta";
                nizhnikov = "Nizhnikov";
            };
        };
    };
};

class CfgFactionClasses
{
    class spagistan_faction_spagistan_army
    {
        displayName = "Spagistan Armed Forces";
        priority = 1;
        side = 1;
        genericNames = "SpagistaniMen";
        author = "Spagistan Mod Authors";
        icon = "\spagistan\addons\spagistan_main\data\spagistan_logo_co.paa";
        flag = "\spagistan\addons\spagistan_main\data\flags\spagistan_flag_spagistan_ca.paa";
        backpack_tf_faction_radio = "TFAR_mr3000";
        personal_tf_faction_radio = "TFAR_anprc148jem";
    };
    
};

// Don't really know what this does or why this is here. Just at least want to
// overwrite anything accidentally inherited from RHS classes.
class CfgVehicleClasses
{
    class spagistan_vehclass_spagistan_infantry
    {
        displayname = "Infantry";
    };
};

class CfgEditorCategories
{
    class spagistan_EdCategory_spagistan
    {
        displayName = "Spagistan";
    };
};

class CfgEditorSubcategories
{
    class spagistan_EdSubcat_spagistan_infantry
    {
        displayname = "Infantry";
    };
};

class CfgUnitInsignia
{
    class spagistan_insignia_spagistan
    {
        displayName = "Spagistan";
        author = "Spagistan Mod Authors";
        texture = "\spagistan\addons\spagistan_main\data\flags\spagistan_flag_spagistan_ca.paa";
        textureVehicle = "\spagistan\addons\spagistan_main\data\flags\spagistan_flag_spagistan_ca.paa";
    };
};