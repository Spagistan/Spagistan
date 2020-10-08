// note: sides are 0 = Red, 1 = Blue, 2 = Green, 3 = Civilian
class CfgPatches
{
    class spagistan_c_troops
    {
        name = "Spagistan Mod infantry configuration";
        author = "Spagistan Mod Authors";
        url = "https://spagistan.com/";
        version = "0";
        requiredAddons[] =
        {
            "rhssaf_c_troops",
        };
        units[] = {};
        weapons[] = {};
    };
};

class CfgVehicles
{
    // base class for Spagistan Armed Forces faction
    class rhssaf_soldier_m10_base;
    class spagistan_soldier_spagistan_army_base: rhssaf_soldier_m10_base
    {
        dlc = "spagistan";
        author = "Spagistan Mod Authors";
        identityTypes[] = {}; //todo
        side = 1;
        faction = "spagistan_faction_spagistan_army";
        displayName = "Rifleman";
        genericNames = "SpagistaniMen";
        vehicleClass = "spagistan_vehclass_spagistan_infantry";
        editorSubcategory = "spagistan_EdSubcat_spagistan_infantry";

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
    
    // Second-order classes. Inherit from these.
    // This one's (currently) just a dummy class for the uniform.
    class spagistan_soldier_m10_spagpat: spagistan_soldier_spagistan_army_base
    {
        scope = 1;
        // inherits model info from grandparent rhssaf_soldier_m10_base
        uniformClass = "spagistan_uniform_spagistan_m10_spagpat";
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_gear\data\spagistan_uniform_m10_spagpat_co.paa"
        };
    };

    class spagistan_soldier_m10_spagpat_summer: spagistan_soldier_spagistan_army_base
    {
        scope = 1;
        uniformClass = "spagistan_uniform_m10_spagpat_summer";
        model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_gear\data\spagistan_uniform_m10_spagpat_summer_co.paa"
        };
    };

    // hot tip! inherit this class to make new rifleman-y classes
    class spagistan_soldier_spagistan_army_rifleman: spagistan_soldier_m10_spagpat_summer
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

// class CfgGroups
// {
//     class West
//     {
//         class spagistan_faction_spagistan_army 
//         {
//             name = "Spagistan Armed Forces";
//             class spagistan_group_spagistan_army_infantry
//             {
//                 name = "Infantry Groups";
//                 aliveCategory = "Infantry";
//                 class spagistan_group_spagistan_army_infantry_squad
//                 {
//                     name = "Infantry Squad";
//                     faction = "spagistan_faction_spagistan_army";
//                     side = 1;
//                     rarityGroup = 0.75;
//                     icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
//                     class Unit0
//                     {
//                         //todo
//                     };
//                     class Unit1
//                     {
//                         //todo
//                     };
//                     class Unit2
//                     {
//                         side = 1;
//                         vehicle = "spagistan_soldier_spagistan_army_rifleman";
//                         rank = "PRIVATE";
//                         // Defines the unit's initial position relative to where
//                         // you drop the group in the editor. Need to test.
//                         position[] = {5,0,0};

//                     };
//                 };
//             };
//         };
//     };
// };