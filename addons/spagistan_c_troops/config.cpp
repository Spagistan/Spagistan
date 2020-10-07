class CfgPatches
{
    class spagistan_c_troops
    {
        units[] = {};
        weapons[] = {};
        name = "Spagistan Mod infantry configuration";
        requiredAddons[] =
        {
            "spagistan_main",
            "spagistan_c_weapons",
            "spagistan_c_gear"
        };
        author = "Spagistan Mod Authors";
        url = "https://spagistan.com/";
        version = 0;
    };
};

class CfgVehicles
{
    // first soldier class is for inheritance purposes only.
    // for a soldier type you want to put down in game, inherit from this class
    // and set scope and scopeCurator to 2.
    class rhssaf_soldier_m10_base;
    class spagistan_soldier_spagistan_army_base: rhssaf_soldier_m10_base
    {
        // The spagistani m10 retexture needs to link to this class
        dlc = "spagistan";
        author = "Spagistan Mod Authors";
        scope = 1;
        identityTypes[] = {};
        side = 1;
        faction = "spagistan_faction_spagistan_army";
        genericNames = "SpagistaniMen";
        editorSubcategory = "spagistan_EdSubcat_spagistan_infantry";
        uniformClass = ""; //todo
        hiddenSelectionsTextures[] = {}; //todo

        // these say todo but they're actually just here to overwrite the
        // inherited values from RHS
        weapons[] = {}; //todo
        respawnWeapons[] = {}; //todo
        Items[] = {}; //todo
        RespawnItems[] = {}; //todo
        magazines[] = {}; //todo
        respawnMagazines[] = {}; //todo
        linkedItems[] = {}; //todo
        respawnLinkedItems[] = {}; //todo
    };

    // hot tip! inherit this class to make new rifleman-y classes
    class spagistan_soldier_spagistan_army_rifleman: spagistan_soldier_spagistan_army_base
    {
        scope = 2;
        scopeCurator = 2;
        class SpeechVariants
        {
            class Default
            {
                speechSingular[] =
                {
                    "veh_infantry_s"
                };
                speechPlural[] =
                {
                    "veh_infantry_p"
                };
            };
        };
        textSingular = "infantry";
        textPlural = "infantry";
        nameSound = "veh_infantry_s";
        displayName = "Rifleman";
        backpack = ""; //todo
        weapons[] = {}; //todo
        respawnWeapons[] = {}; //todo
        Items[] = {}; //todo
        RespawnItems[] = {}; //todo
        magazines[] = {}; //todo
        respawnMagazines[] = {}; //todo
        linkedItems[] = {}; //todo
        respawnLinkedItems[] = {}; //todo
        editorPreview = ""; //todo
    };
};

class CfgGroups
{
    class West
    {
        class spagistan_faction_spagistan_army 
        {
            name = "Spagistan Armed Forces";
            class spagistan_group_spagistan_army_infantry
            {
                name = "Infantry Groups";
                aliveCategory = "Infantry";
                class spagistan_group_spagistan_army_infantry_squad
                {
                    name = "Infantry Squad";
                    faction = "spagistan_faction_spagistan_army";
                    side = 1;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0
                    {
                        //todo
                    };
                    class Unit1
                    {
                        //todo
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "spagistan_soldier_spagistan_army_rifleman";
                        rank = "PRIVATE";
                        position[] = {5,0,0}; // I have no idea what this does.

                    };
                };
            };
        };
    };
};