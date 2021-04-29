class CfgPatches
{
    class spagistan_compat
    {
        name = "Spagistan Mod back compat configuration";
        author = "Spagistan Mod Authors";
        url = "https://spagistan.com/";
        version = "0";
        requiredAddons[] =
        {
            "spagistan_c_gear"
        };
        units[] = {};
        weapons[] = {};
    };
};

class CfgVehicles
{
    class spagistan_TFAR_mr3000;
    class spagistan_kitbag_spagpat;
    class Item_spagistan_uniform_m10_spagpat_summer;
    class Item_spagistan_uniform_m10_spagpat;

    class TFAR_SPAG_mr3000: spagistan_TFAR_mr3000
    {
        displayName = "MR3000 BWMOD (Spagpat)";
        scope = 1;
    };
    class S_KitBag_Spag: spagistan_kitbag_spagpat
    {
        displayName = "Kitbag (Spagpat)";
        scope = 1;
    };
    class spagbag: spagistan_kitbag_spagpat
    {
        displayName = "Kitbag (Spagpat)";
        scope = 1;
    };
    class U_S_SPAGPAT: Item_spagistan_uniform_m10_spagpat_summer
    {
        displayName = "M10 Summer (Spagpat)";
        scope = 1;
    };
    class U_S_Neck_SPAGPAT: Item_spagistan_uniform_m10_spagpat
    {
        displayName = "M10 (Spagpat)";
        scope = 1;
    };
    class spag_turk: Item_spagistan_uniform_m10_spagpat_summer
    {
        displayName = "M10 Summer (Spagpat)";
        scope = 1;
    };
};

class CfgWeapons
{
    class spagistan_helmet_m97_spagpat;
    class spagistan_helmet_m97_spagpat_black_ess;
    class spagistan_helmet_m97_spagpat_black_ess_bare;
    class spagistan_patrolcap_spagpat;
    class spagistan_beret_red_spagistan;
    class spagistan_beret_red;
    class spagistan_beret_green_spagistan;
    class spagistan_beret_green;
    class spagistan_vest_md12_spagpat;
    class spagistan_uniform_m10_spagpat_summer;
    class spagistan_uniform_m10_spagpat;

    class S_Helmet_SPAGPAT: spagistan_helmet_m97_spagpat
    {
        displayName = "M97 (Spagpat)";
        scope = 1;
    };
    class S_Helmet_SPAGPAT_black_ess: spagistan_helmet_m97_spagpat_black_ess
    {
        displayName = "M97 (Spagpat/Black ESS)";
        scope = 1;
    };
    class S_Helmet_SPAGPAT_black_ess_bare: spagistan_helmet_m97_spagpat_black_ess_bare
    {
        displayName = "M97 (Spagpat/Black ESS/Bare)";
        scope = 1;
    };
    class S_PatrolCap_SPAGPAT: spagistan_patrolcap_spagpat
    {
        displayName = "Patrol Cap (Spagpat)";
        scope = 1;
    };
    class S_beret_red_SPAGPAT: spagistan_beret_red_spagistan
    {
        displayName = "Beret (Red/Spagistan)";
        scope = 1;
    };
    class S_beret_red_NONE: spagistan_beret_red
    {
        displayName = "Beret (Red)";
        scope = 1;
    };
    class S_beret_green_SPAGPAT: spagistan_beret_green_spagistan
    {
        displayName = "Beret (Green/Spagistan)";
        scope = 1;
    };
    class S_beret_green_NONE: spagistan_beret_green
    {
        displayName = "Beret (Green)";
        scope = 1;
    };
    class spag_helmet: spagistan_helmet_m97_spagpat
    {
        displayName = "M97 (Spagpat)";
        scope = 1;
    };
    class S_Vest_SPAGPAT: spagistan_vest_md12_spagpat
    {
        displayName = "PBB M-12 (Spagpat)";
        scope = 1;
    };
    class m12_spag: spagistan_vest_md12_spagpat
    {
        displayName = "PBB M-12 (Spagpat)";
        scope = 1;
    };
    class U_S_Uniform_SPAGPAT: spagistan_uniform_m10_spagpat_summer
    {
        displayName = "M10 Summer (Spagpat)";
        scope = 1;
    };
    class U_S_Uniform_Neck_SPAGPAT: spagistan_uniform_m10_spagpat
    {
        displayName = "M10 (Spagpat)";
        scope = 1;
    };
    class spag_tsk: spagistan_uniform_m10_spagpat_summer
    {
        displayName = "M10 Summer (Spagpat)";
        scope = 1;
    };
};
