///////////////////////////////////////////////////////////////////////////////
// Static Objects
///////////////////////////////////////////////////////////////////////////////

// Taken away for now
//#include "initServer.sqf"

if (!hasInterface || isServer) exitWith {};

////////////////////////////////////
// Zombies
////////////////////////////////////
// [] execVM "ZOM\init.sqf";

/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */

if (!hasInterface || isServer) exitWith {};

// 24 NPCs
private _npcs = [
["Exile_Trader_Boat", [], "Exile_Trader_Boat", "WhiteHead_20", [[],[],[],["U_OrestesBody",[]],[],[],"H_Cap_surfer","",[],["","","","","",""]], [13062.8, 8221.06, 2.02153], [-0.99608, -0.0884601, 0], [0, 0, 1]],
["Exile_Trader_Diving", [], "Exile_Trader_Diving", "WhiteHead_07", [["arifle_SDAR_F","","","",[],[],""],[],[],["U_I_Wetsuit",[]],["V_RebreatherIA",[]],[],"","G_I_Diving",[],["","","","","",""]], [13062.6, 8239.25, 2.02144], [-0.943828, 0.330437, 0], [0, 0, 1]],
["Exile_Trader_BoatCustoms", [], "Exile_Trader_BoatCustoms", "WhiteHead_21", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","",[],["","","","","",""]], [13062.8, 8255.77, 2.02144], [-0.997581, -0.0695069, 0], [0, 0, 1]],
["Exile_Trader_Armory", [], "Exile_Trader_Armory", "WhiteHead_07", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [13046.1, 8281.49, 2.0015], [0.926061, 0.377374, 0], [0, 0, 1]],
["Exile_Trader_Equipment", [], "Exile_Trader_Equipment", "WhiteHead_09", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","",[],["","","","","",""]], [13044.5, 8285.7, 2.00139], [0.949808, -0.312834, 0], [0, 0, 1]],
["Exile_Trader_Hardware", [], "Exile_Trader_Hardware", "WhiteHead_07", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","",[],["","","","","",""]], [13093.7, 8175.88, 2.00141], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_Food", [], "Exile_Trader_Food", "WhiteHead_13", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","",[],["","","","","",""]], [13089.9, 8173.59, 2.00144], [-0.483744, 0.87521, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", [], "Exile_Trader_Vehicle", "WhiteHead_06", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","",[],["","","","","",""]], [13047.6, 8173.09, 3.4261], [-0.995024, -0.0996371, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", [], "Exile_Trader_VehicleCustoms", "WhiteHead_12", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","",[],["","","","","",""]], [13052.2, 8166.95, 3.03501], [-0.0489753, -0.9988, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "WhiteHead_16", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","G_Tactical_Clear",[],["","","","","",""]], [13037.4, 8212.48, 3.19319], [-0.995405, -0.0957514, 0], [0, 0, 1]],
["Exile_Trader_Office", [], "Exile_Trader_Office", "AfricanHead_02", [[],[],[],["U_I_G_resistanceLeader_F",[]],["V_Rangemaster_belt",[]],[],"H_Hat_brown","G_Tactical_Clear",[],["","","","","",""]], [13065.1, 8202.38, 2.00142], [0.999592, -0.0285598, 0], [0, 0, 1]],
["Exile_Trader_AircraftCustoms", [], "Exile_Trader_AircraftCustoms", "WhiteHead_21", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["V_RebreatherB",[]],[],"H_PilotHelmetFighter_B","",[],["","","","","",""]], [4771.19, 10253.4, 339.001], [-0.436854, -0.899532, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", [], "Exile_Trader_VehicleCustoms", "WhiteHead_08", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","G_Combat",[],["","","","","",""]], [4791.3, 10244.5, 339.001], [-0.464106, -0.88578, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "GreekHead_A3_08", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","",[],["","","","","",""]], [4807.52, 10236.6, 338.991], [-0.613426, -0.789752, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", [], "Exile_Trader_Vehicle", "WhiteHead_18", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","G_Aviator",[],["","","","","",""]], [4824.23, 10210.3, 339.001], [-0.882144, -0.470979, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", [], "Exile_Trader_Aircraft", "WhiteHead_14", [[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_PilotHelmetHeli_O","",[],["","","","","",""]], [4830.06, 10200.1, 339.001], [-0.865442, -0.50101, 0], [0, 0, 1]],
["Exile_Trader_RussianRoulette", [], "Exile_Trader_RussianRoulette", "WhiteHead_19", [[],[],["hgun_Pistol_Signal_F","","","",[],[],""],["U_Marshal",[]],["V_Rangemaster_belt",[]],[],"H_Cap_marshal","G_Sport_Blackyellow",[],["","","","","",""]], [4857.55, 10207.3, 339.082], [-0.62574, 0.780032, 0], [0, 0, 1]],
["Exile_Trader_Office", [], "Exile_Trader_Office", "GreekHead_A3_05", [[],[],[],["U_I_G_resistanceLeader_F",[]],["V_Rangemaster_belt",[]],[],"H_Hat_brown","",[],["","","","","",""]], [4871.93, 10218.2, 339.082], [-0.985898, 0.167348, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", [], "Exile_Trader_SpecialOperations", "WhiteHead_10", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [4858.68, 10235.6, 338.994], [-0.636506, -0.771272, 0], [0, 0, 1]],
["Exile_Trader_Equipment", [], "Exile_Trader_Equipment", "WhiteHead_04", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","G_Tactical_Clear",[],["","","","","",""]], [4855, 10236.6, 338.993], [0.570156, -0.821536, 0], [0, 0, 1]],
["Exile_Trader_Armory", [], "Exile_Trader_Armory", "WhiteHead_10", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [4853.6, 10232.5, 338.998], [0.969371, -0.245603, 0], [0, 0, 1]],
["Exile_Trader_Food", [], "Exile_Trader_Food", "WhiteHead_10", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","",[],["","","","","",""]], [4846.28, 10232.5, 338.996], [0.409254, -0.91242, 0], [0, 0, 1]],
["Exile_Trader_Hardware", [], "Exile_Trader_Hardware", "WhiteHead_03", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","G_Tactical_Black",[],["","","","","",""]], [4842.62, 10231.1, 338.991], [0.240416, -0.97067, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", [], "Exile_Trader_SpecialOperations", "WhiteHead_07", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [13048.3, 8287.38, 2.02144], [0.0556902, -0.998448, 0], [0, 0, 1]]
];

{
    private _logic = "Logic" createVehicleLocal [0, 0, 0];
    private _trader = (_x select 0) createVehicleLocal [0, 0, 0];
    private _animations = _x select 1;
    
    _logic setPosWorld (_x select 5);
    _logic setVectorDirAndUp [_x select 6, _x select 7];
    
    _trader setVariable ["BIS_enableRandomization", false];
    _trader setVariable ["BIS_fnc_animalBehaviour_disable", true];
    _trader setVariable ["ExileAnimations", _animations];
    _trader setVariable ["ExileTraderType", _x select 2];
    _trader disableAI "ANIM";
    _trader disableAI "MOVE";
    _trader disableAI "FSM";
    _trader disableAI "AUTOTARGET";
    _trader disableAI "TARGET";
    _trader disableAI "CHECKVISIBLE";
    _trader allowDamage false;
    _trader setFace (_x select 3);
    _trader setUnitLoadOut (_x select 4);
    _trader setPosWorld (_x select 5);
    _trader setVectorDirAndUp [_x select 6, _x select 7];
    _trader reveal _logic;
    _trader attachTo [_logic, [0, 0, 0]];
    _trader switchMove (_animations select 0);
    _trader addEventHandler ["AnimDone", {_this call ExileClient_object_trader_event_onAnimationDone}];
}
forEach _npcs;