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
            "rhs_c_weapons"
        };
        units[] =
        {
            "spagistan_soldier_spagistan_army_rifleman",
            "spagistan_soldier_spagistan_army_at",
            "spagistan_soldier_spagistan_army_grenadier",
            "spagistan_soldier_spagistan_army_arifleman",
            "spagistan_soldier_spagistan_army_junion_corporal",
            "spagistan_soldier_spagistan_army_sergeant"
        };
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
        identityTypes[] =
        {
            "Head_African",
            "Head_Asian",
            "Head_Greek",
            "Head_Russian",
            "Head_Tanoan",
            "Head_Euro"
        };
        side = 1;
        faction = "spagistan_faction_spagistan_army";
        displayName = "Rifleman";
        genericNames = "SpagistaniMen";
        vehicleClass = "spagistan_vehclass_spagistan_infantry";
        editorSubcategory = "spagistan_EdSubcat_spagistan_infantry";
        class EventHandlers
        {
            class RHS_NVG_Check
			{
				init="_this call rhs_fnc_nvgHandler";
			};
        };
        weapons[] =
        {
            "rhs_weap_ak74m_dtk",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "rhs_weap_ak74m_dtk",
            "Throw",
            "Put"
        };
        Items[] =
        {
            "FirstAidKit"
        };
        RespawnItems[] =
        {
           "FirstAidKit"
        };
        magazines[] =
        {
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_mag_rgd5",
            "rhs_mag_rdg2_white"
        };
        respawnMagazines[] =
        {
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_mag_rgd5",
            "rhs_mag_rdg2_white"
        };
        linkedItems[] =
        {
            "spagistan_helmet_m97_spagpat",
            "spagistan_vest_md12_spagpat",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] =
        {
            "spagistan_vest_md12_spagpat",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    
    // This one's (currently) just a dummy class for the uniform.
    class spagistan_soldier_m10_spagpat: spagistan_soldier_spagistan_army_base
    {
        scope = 1;
        // inherits model info from grandparent rhssaf_soldier_m10_base
        uniformClass = "spagistan_uniform_m10_spagpat";
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_gear\data\spagistan_uniform_m10_spagpat_co.paa"
        };
    };

    class spagistan_soldier_m10_spagpat_summer: spagistan_soldier_spagistan_army_base
    {
        class EventHandlers: EventHandlers
        {
            init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
        };
        headgearList[] = 
        {
            "spagistan_hemlet_m97_spagpat",
            10,
            "spagistan_hemlet_m97_spagpat_black_ess",
            10,
            "spagistan_hemlet_m97_spagpat_black_ess_bare",
            10,
            "spagistan_hemlet_m97_veil_spagpat",
            5
        };
        scope = 1;
        uniformClass = "spagistan_uniform_m10_spagpat_summer";
        model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_gear\data\spagistan_uniform_m10_spagpat_summer_co.paa"
        };
    };

    // classes scoped for use
    class spagistan_soldier_spagistan_army_rifleman: spagistan_soldier_m10_spagpat_summer
    {
        
        displayName = "Rifleman";
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
    };
    class spagistan_soldier_spagistan_army_at: spagistan_soldier_spagistan_army_rifleman
    {
        displayName = "Rifleman (AT)";
        class SpeechVariants
        {
            class Default
            {
                speechSingular[] =
                {
                    "veh_infantry_AT_s"
                };
                speechPlural[] =
                {
                    "veh_infantry_AT_p"
                };
            };
        };
        textSingular = "AT soldier";
        textPlural = "AT soldiers";
        nameSound = "veh_infantry_AT_s";
        icon = "iconManAT";
        cost = 180000;
        threat[] = {1,0.69999999,0.30000001};
        weapons[] =
        {
            "rhs_weap_ak74m_dtk",
            "rhs_weap_rpg26",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "rhs_weap_ak74m_dtk",
            "rhs_weap_rpg26",
            "Throw",
            "Put"
        };
    };
    class spagistan_soldier_spagistan_army_grenadier: spagistan_soldier_spagistan_army_rifleman
    {
        displayName = "Grenadier";
        cost = 130000;
        threat[] = {1,0.30000001,0.1};
        weapons[] =
        {
            "rhs_weap_ak74m_gp25_dtk",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "rhs_weap_ak74m_gp25_dtk",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
        };
        respawnMagazines[] =
        {
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
            "rhs_VOG25",
        };
    };
    class spagistan_soldier_spagistan_army_arifleman: spagistan_soldier_spagistan_army_rifleman
    {
        displayName = "Automatic Rifleman";
        class SpeechVariants
        {
            class Default
            {
                speechSingular[]=
                {
                    "veh_infantry_MG_s"
                };
                speechPlural[]=
                {
                    "veh_infantry_MG_p"
                };
            };
        };
        textSingular = "machinegunner";
        textPlural = "machinegunners";
        nameSound = "veh_infantry_MG_s";
        cost = 125000;
        threat[] = {1,0.1,0.30000001};
        icon = "iconManMG";
        weapons[] =
        {
            "rhs_weap_pkp",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "rhs_weap_pkp",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            "rhs_100Rnd_762x54mmR",
            "rhs_100Rnd_762x54mmR",
            "rhs_mag_rgd5",
            "rhs_mag_rdg2_white"
        };
        respawnMagazines[] =
        {
            "rhs_100Rnd_762x54mmR",
            "rhs_100Rnd_762x54mmR",
            "rhs_mag_rgd5",
            "rhs_mag_rdg2_white"
        };
        backpack = "spagistan_kitbag_spagpat";
    };
    class spagistan_soldier_spagistan_army_corporal: spagistan_soldier_spagistan_army_rifleman
    {
        displayName = "Team Leader";
        cost = 350000;
        camouflage = 1.4;
        sensitivity = 3.3;
        icon = "iconManLeader";
        weapons[] =
        {
            "rhs_weap_ak74m_dtk",
            "Binocular",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "rhs_weap_ak74m_dtk",
            "Binocular",
            "Throw",
            "Put"
        };
    };
    class spagistan_soldier_spagistan_army_sergeant: spagistan_soldier_spagistan_army_rifleman
    {
        displayName = "Squad Leader";
        cost = 500000;
        camouflage=1.4;
        sensitivity=3.3;
        icon = "iconManLeader";
        weapons[]=
        {
            "rhs_weap_ak74m_dtk",
            "rhs_weap_makarov_pm",
            "Binocular",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "rhs_weap_ak74m_dtk",
            "rhs_weap_makarov_pm",
            "Binocular",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_30rnd_545x39_7N10_AK",
            "rhs_mag_9x18_8_57N181S",
            "rhs_mag_9x18_8_57N181S",
            "rhs_mag_rgd5",
            "rhs_mag_rdg2_white"
        };
        respawnMagazines[] =
        {
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_30rnd_545x39_7N22_AK",
            "rhs_mag_9x18_8_57N181S",
            "rhs_mag_9x18_8_57N181S",
            "rhs_mag_rgd5",
            "rhs_mag_rdg2_white"
        };
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
                    name = "Rifle Squad";
                    faction = "spagistan_faction_spagistan_army";
                    side = 1;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_spagistan_army_sergeant";
                        rank = "SERGEANT";
                        position[]={0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_spagistan_army_corporal";
                        rank = "CORPORAL";
                        position[] = {0,20,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_spagistan_army_arifleman";
                        rank = "PRIVATE";
                        position[] = {5,15,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_spagistan_army_grenadier";
                        rank = "PRIVATE";
                        position[] = {-5,15,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_spagistan_army_at";
                        rank = "PRIVATE";
                        position[] = {-10,10,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_spagistan_army_corporal";
                        rank = "CORPORAL";
                        position[] = {0,-10,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_spagistan_army_arifleman";
                        rank = "PRIVATE";
                        position[] = {-5,-15,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_spagistan_army_grenadier";
                        rank = "PRIVATE";
                        position[] = {5,-15,0};
                    };
                    class Unit8
                    {
                        side = 0;
                        vehicle = "spagistan_soldier_spagistan_army_at";
                        rank = "PRIVATE";
                        position[] = {10,-20,0};
                    };
                };
            };
        };
    };
};