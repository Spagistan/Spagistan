class CfgPatches 
{
    class spagistan_c_gear
    {
        name = "Spagistan Mod gear configuration";
        author = "Spagistan Mod Authors";
        url = "https://spagistan.com/";
        version = "0";
        requiredAddons[] =
        {
            "tfar_backpacks",
            "rhssaf_c_gear",
            "rhsusf_c_troops",
        };
        units[] = {
            "spagistan_TFAR_mr3000",
            "spagistan_kitbag_spagpat",
            "Headgear_spagistan_helmet_m97_spagpat",
            "Headgear_spagistan_helmet_m97_spagpat_black_ess",
            "Headgear_spagistan_helmet_m97_spagpat_black_ess_bare",
            "Headgear_spagistan_helmet_m97_veil_spagpat",
            "Headgear_spagistan_beret_red",
            "Headgear_spagistan_beret_red_spagistan",
            "Headgear_spagistan_beret_green",
            "Headgear_spagistan_beret_green_spagistan",
            "Item_spagistan_patrolcap_spagpat",
            "Item_spagistan_uniform_m10_spagpat",
            "Item_spagistan_uniform_m10_spagpat_summer",
            "Vest_spagistan_vest_md12_spagpat"
        };
        weapons[] = {
            "spagistan_helmet_m97_spagpat",
            "spagistan_helmet_m97_spagpat_black_ess",
            "spagistan_helmet_m97_spagpat_black_ess_bare",
            "spagistan_helmet_m97_veil_spagpat",
            "spagistan_beret_red",
            "spagistan_beret_red_spagistan",
            "spagistan_beret_green",
            "spagistan_beret_green_spagistan",
            "spagistan_patrolcap_spagpat",
            "spagistan_uniform_m10_spagpat",
            "spagistan_uniform_m10_spagpat_summer",
            "spagistan_vest_md12_spagpat"
        };
    };
};

class CfgGlasses {};

class CfgWeapons
{
    class UniformItem;
    class rhssaf_helmet_m97_woodland;
    class rhssaf_helmet_m97_woodland_black_ess;
    class rhssaf_helmet_m97_woodland_black_ess_bare;
    class rhssaf_helmet_m97_veil_woodland;
    class rhssaf_beret_para;
    class rhssaf_beret_green;
    class rhsusf_patrolcap_ucp;
    class rhssaf_uniform_m10_digital;
    class rhssaf_uniform_m10_digital_summer;
    class rhssaf_uniform_m93_oakleaf;
    class rhssaf_vest_md12_digital;

    class spagistan_helmet_m97_spagpat: rhssaf_helmet_m97_woodland
    {
        dlc = "spagistan";
        author = "Spagistan Mod Authors";
        displayName = "M97 (Spagpat)"; //todo: consistency
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_gear\data\spagistan_m97_spagpat_co.paa"
        };
    };
    class spagistan_helmet_m97_spagpat_black_ess: rhssaf_helmet_m97_woodland_black_ess
    {
        dlc = "spagistan";
        author = "Spagistan Mod Authors";
        displayName = "M97 (Spagpat/Black ESS)"; //todo: consistency
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_gear\data\spagistan_m97_spagpat_co.paa",
            "\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
        };
    };
    class spagistan_helmet_m97_spagpat_black_ess_bare: rhssaf_helmet_m97_woodland_black_ess_bare
    {
        dlc = "spagistan";
        author = "Spagistan Mod Authors";
        displayName = "M97 (Spagpat/Black ESS/Bare)"; //todo: consistency
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_gear\data\spagistan_m97_spagpat_co.paa",
            "\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
        };
    };
    class spagistan_helmet_m97_veil_spagpat: rhssaf_helmet_m97_veil_woodland
    {
        dlc = "spagistan";
        author = "Spagistan Mod Authors";
        displayName = "M97 (Spagpat/Veil)"; //todo: consistency
        allowedFacewear[] =
        {
            "G_Aviator"
        };
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_gear\data\spagistan_m97_spagpat_co.paa",
            "\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa",
            "\rhssaf\addons\rhssaf_t_headgear_veil\data\rhssaf_veil_green_co.paa"
        };
    };
    class spagistan_beret_red: rhssaf_beret_para
    {
        dlc = "spagistan";
        author = "Spagistan Mod Authors";
        displayName = "Beret (Red)"; //todo: consistency
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_gear\data\spagistan_beret_red_co.paa"
        };
    };
    class spagistan_beret_red_spagistan: rhssaf_beret_para
    {
        dlc = "spagistan";
        author = "Spagistan Mod Authors";
        displayName = "Beret (Red/Spagistan)"; //todo: consistency
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_gear\data\spagistan_beret_red_spagistan_co.paa"
        }; 
    };
    class spagistan_beret_green: rhssaf_beret_green
    {
        dlc = "spagistan";
        author = "Spagistan Mod Authors";
        displayName = "Beret (Green)"; //todo: consistency
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_gear\data\spagistan_beret_green_co.paa"
        };
    };
    class spagistan_beret_green_spagistan: rhssaf_beret_green
    {
        dlc = "spagistan";
        author = "Spagistan Mod Authors";
        displayName = "Beret (Green/Spagistan)"; //todo: consistency
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_gear\data\spagistan_beret_green_spagistan_co.paa"
        };
    };
    class spagistan_patrolcap_spagpat: rhsusf_patrolcap_ucp
    {
        dlc = "spagistan";
        author = "Spagistan Mod Authors";
        displayName = "Patrol Cap (Spagpat)"; //todo: consistency
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_gear\data\spagistan_patrolcap_spagpat_co.paa"
        };
    };
    class spagistan_uniform_m10_spagpat: rhssaf_uniform_m10_digital
    {
        dlc = "spagistan";
        author = "Spagistan Mod Authors";
        displayName = "M10 (Spagpat)"; //todo: consistency
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_gear\data\spagistan_uniform_m10_spagpat_co.paa"
        };
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "spagistan_soldier_m10_spagpat";
            containerClass = "Supply60";
            mass = 40;
            hiddenSelections[]=
            {
                "camo"
            };
        };
    };
    class spagistan_uniform_m10_spagpat_summer: rhssaf_uniform_m10_digital_summer
    {
        dlc = "spagistan";
        author = "Spagistan Mod Authors";
        displayName = "M10 Summer (Spagpat)"; //todo: consistency
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_gear\data\spagistan_uniform_m10_spagpat_summer_co.paa"
        };
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "spagistan_soldier_m10_spagpat_summer";
            containerClass = "Supply60";
            mass = 40;
            hiddenSelections[]=
            {
                "camo"
            };
        };
    };
    class spagistan_vest_md12_spagpat: rhssaf_vest_md12_digital
    {
        dlc = "spagistan";
        author = "Spagistan Mod Authors";
        displayName = "PBB M-12 (Spagpat)";
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_gear\data\spagistan_vest_md12_spagpat_ca.paa"
        };
    };
};

class CfgVehicles
{
    // backpacks
    class TFAR_mr3000;
    class rhssaf_kitbag_digital;

    class spagistan_TFAR_mr3000: TFAR_mr3000
    {
        dlc = "spagistan";
        author = "Spagistan Mod Authors";
        displayName = "MR3000 BWMOD (Spagpat)";
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_gear\data\backpack_spagistan_mr3000_spagpat_ca.paa"
        };
    };
    class spagistan_kitbag_spagpat: rhssaf_kitbag_digital
    {
        dlc = "spagistan";
        author = "Spagistan Mod Authors";
        displayname = "Kitbag (Spagpat)"; //todo: consistency
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_gear\data\backpack_spagistan_kitbag_spagpat_ca.paa"
        };
    };

    // original spagistan mod didn't seem to feature ground holders?
    // structure + configuration again modelled after RHS
    class Headgear_Base_F;
    class spagistan_Headgear_Base_F: Headgear_Base_F
    {
        dlc="spagistan";
        author="Spagistan Mod Authors";
        scope=2;
        scopeCurator=2;
        editorCategory="EdCat_Equipment";
        vehicleClass="ItemsHeadgear";
    };
    class Headgear_spagistan_helmet_m97_spagpat: spagistan_Headgear_Base_F
    {
        displayName="M97 (Spagpat)"; //todo: consistency
        editorSubcategory="EdSubcat_Helmets";
        class TransportItems
        {
            class spagistan_helmet_m97_spagpat
            {
                name="spagistan_helmet_m97_spagpat";
                count=1;
            };
        };
    };
    class Headgear_spagistan_helmet_m97_spagpat_black_ess: spagistan_Headgear_Base_F
    {
        displayName="M97 (Spagpat/Black ESS)"; //todo: consistency
        editorSubcategory="EdSubcat_Helmets";
        class TransportItems
        {
            class spagistan_helmet_m97_spagpat_black_ess
            {
                name="spagistan_helmet_m97_spagpat_black_ess";
                count=1;
            };
        };
    };
    class Headgear_spagistan_helmet_m97_spagpat_black_ess_bare: spagistan_Headgear_Base_F
    {
        displayName="M97 (Spagpat)"; //todo: consistency
        editorSubcategory="EdSubcat_Helmets";
        class TransportItems
        {
            class spagistan_helmet_m97_spagpat_black_ess_bare
            {
                name="spagistan_helmet_m97_spagpat_black_ess_bare";
                count=1;
            };
        };
    };
    class Headgear_spagistan_helmet_m97_veil_spagpat: spagistan_Headgear_Base_F
    {
        displayName="M97 (Spagpat)"; //todo: consistency
        editorSubcategory="EdSubcat_Helmets";
        class TransportItems
        {
            class spagistan_helmet_m97_veil_spagpat
            {
                name="spagistan_helmet_m97_veil_spagpat";
                count=1;
            };
        };
    };
    class Headgear_spagistan_beret_red: spagistan_Headgear_Base_F
    {
        displayName = "Beret (Red)";
        editorSubcategory = "EdSubcat_Hats";
        model = "\A3\Weapons_F\DummyCap.p3d";
        class TransportItems
        {
            class spagistan_beret_red
            {
                name = "spagistan_beret_red";
                count = 1;
            };
        };
    };
    class Headgear_spagistan_beret_red_spagistan: spagistan_Headgear_Base_F
    {
        displayName = "Beret (Red/Spagistan)";
        editorSubcategory = "EdSubcat_Hats";
        model = "\A3\Weapons_F\DummyCap.p3d";
        class TransportItems
        {
            class spagistan_beret_red
            {
                name = "spagistan_beret_red_spagistan";
                count = 1;
            };
        };
    };
    class Headgear_spagistan_beret_green: spagistan_Headgear_Base_F
    {
        displayName = "Beret (Green)";
        editorSubcategory = "EdSubcat_Hats";
        model = "\A3\Weapons_F\DummyCap.p3d";
        class TransportItems
        {
            class spagistan_beret_red
            {
                name = "spagistan_beret_green";
                count = 1;
            };
        };
    };
    class Headgear_spagistan_beret_green_spagistan: spagistan_Headgear_Base_F
    {
        displayName = "Beret (Green/Spagistan)";
        editorSubcategory = "EdSubcat_Hats";
        model = "\A3\Weapons_F\DummyCap.p3d";
        class TransportItems
        {
            class spagistan_beret_red
            {
                name = "spagistan_beret_green_spagistan";
                count = 1;
            };
        };
    };
    class Item_Base_F;
    class spagistan_Item_Base_F: Item_Base_F
    {
        dlc = "spagistan";
        author = "Spagistan Mod Authors";
        scope = 2;
        scopeCurator = 2;
        editorCategory = "EdCat_Equipment";
        model="\A3\Weapons_f\dummyweapon.p3d";
    };
    class Item_spagistan_patrolcap_spagpat: spagistan_Item_Base_F
    {
        // Don't know why this is here and not under headgear. Following RHSUSAF's lead on this one.
        displayName = "Patrol Cap (Spagpat)";
        editorSubcategory = "EdSubcat_Hats";
        vehicleClass = "ItemVests";
        class TransportItems
        {
            class spagistan_patrolcap_spagpat
            {
                name = "spagistan_patrolcap_spagpat";
                count = 1;
            };
        };

    };
    class Item_spagistan_uniform_m10_spagpat: spagistan_Item_Base_F
    {
        displayName = "M10 (Spagpat)"; //todo: consistency
        editorSubcategory = "EdSubcat_Uniforms";
        vehicleClass = "ItemsUniforms";
        class TransportItems
        {
            class spagistan_uniform_m10_spagpat
            {
                name = "spagistan_uniform_m10_spagpat";
                count = 1;
            };
        };
    };
    class Item_spagistan_uniform_m10_spagpat_summer: spagistan_Item_Base_F
    {
        displayName = "M10 Summer (Spagpat)"; //todo: consistency
        editorSubcategory = "EdSubcat_Uniforms";
        vehicleClass = "ItemsUniforms";
        class TransportItems
        {
            class spagistan_uniform_m10_spagpat_summer
            {
                name = "spagistan_uniform_m10_spagpat_summer";
                count = 1;
            };
        };
    };
    class Vest_Base_F;
    class spagistan_Vest_Base_F: Item_Base_F // just copying RHS again here
    {
        dlc = "spagistan";
        author = "Spagistan Mod Authors";
        scope = 2;
        scopeCurator = 2;
        editorCategory="EdCat_Equipment";
        editorSubcategory="EdSubcat_Vests";
        vehicleClass="ItemsVests";
        model="\A3\Weapons_f\dummyweapon.p3d";
    };
    class Vest_spagistan_vest_md12_spagpat: spagistan_Vest_Base_F
    {
        displayName = "PBB M-12 (Spagpat)";
        class TransportItems
        {
            class spagistan_vest_md12_spagpat
            {
                name = "spagistan_vest_md12_spagpat";
                count = 1;
            };
        };
    };
};

