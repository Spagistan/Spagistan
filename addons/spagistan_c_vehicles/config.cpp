class CfgPatches
{
    class spagistan_c_vehicles
    {
        name = "Spagistan Mod vehicles configuration";
        author = "Spagistan Mod Authors";
        url = "https://spagistan.com/";
        version = "0";
        requiredAddons[] =
        {
            "rhs_c_a2port_air",
        };
        units[] = {
            "spagistan_mi24P_spagistan"
        };
    };
};

class CfgVehicles
{
    class RHS_Mi24P_vvs;
    class spagistan_mi24p_spagistan: RHS_Mi24P_vvs
    {
        displayName = "Mi-24P";
        author = "Spagistan Mod Authors";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        editorCategory = "spagistan_EdCategory_spagistan";
        faction = "spagistan_faction_spagistan_army";
        hiddenSelectionsTextures[] =
        {
            "\spagistan\addons\spagistan_t_vehicles\data\spagistan_mi24p_001_spagpat_co.paa",
            "\spagistan\addons\spagistan_t_vehicles\data\spagistan_mi24p_002_spagpat_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\mi17\data\mi171_det_co.paa"
        };
    };
};