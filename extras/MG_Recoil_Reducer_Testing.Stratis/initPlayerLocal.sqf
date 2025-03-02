// Toggle Bullet Tracing
TRACE_BULLETS = false;
private _action = ["tracingOn", "Bullet Tracing On", "", {
	TRACE_BULLETS = true;
	[player, 10] spawn BIS_fnc_traceBullets;
}, {!TRACE_BULLETS}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["tracingOff", "Bullet Tracing Off", "", {
	TRACE_BULLETS = false;
	[player, 0] spawn BIS_fnc_traceBullets;
}, {TRACE_BULLETS}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

// Interactions to switch between multiple MGs
fnc_switchMG = {
	params ["", "_weapon", "_magazines", ["_scope", "rhsusf_acc_ELCAN"]];

	player removeMagazines ((primaryWeaponMagazine player) select 0);
	player removeWeapon (primaryWeapon player);

	player addWeapon _weapon;
	player selectWeapon _weapon;
	player addPrimaryWeaponItem _scope;
	player addPrimaryWeaponItem "bipod_01_F_blk";
	player addPrimaryWeaponItem _magazines;
	for "_i" from 0 to 4 do {
		player addMagazine _magazines;
	};
};

_action = ["switchMG", "Switch out MG", "", {}, {true}] call ace_interact_menu_fnc_createAction;
private _baseAction = [player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["switchMGVAN", "Vanilla MGs", "", {}, {true}] call ace_interact_menu_fnc_createAction;
private _baseActionVAN = [player, 1, _baseAction, _action] call ace_interact_menu_fnc_addActionToObject;
_action = ["switchMGRHS", "RHS MGs", "", {}, {true}] call ace_interact_menu_fnc_createAction;
private _baseActionRHS = [player, 1, _baseAction, _action] call ace_interact_menu_fnc_addActionToObject;
_action = ["switchMGCUP", "CUP MGs", "", {}, {true}] call ace_interact_menu_fnc_createAction;
private _baseActionCUP = [player, 1, _baseAction, _action] call ace_interact_menu_fnc_addActionToObject;

{
	_x params ["_baseAction", "_weapon", "_magazines", ["_scope", "rhsusf_acc_ELCAN"]];

	_action = [
		format ["switchMG_%1", _weapon],
		getText (configFile >> "CfgWeapons" >> _weapon >> "displayName"),
		"",
		{(_this#2) call fnc_switchMG},
		{true},
		{},
		_x
	] call ace_interact_menu_fnc_createAction;
	[player, 1, _baseAction, _action] call ace_interact_menu_fnc_addActionToObject;
} forEach [
	[_baseActionVAN, "arifle_MX_SW_Black_F", "100Rnd_65x39_caseless_black_mag_tracer"],
	[_baseActionVAN, "LMG_Mk200_F", "200Rnd_65x39_cased_Box_Tracer_Red"],
	[_baseActionVAN, "LMG_03_F", "200Rnd_556x45_Box_Tracer_Red_F"],
	[_baseActionVAN, "arifle_SPAR_02_snd_F", "150Rnd_556x45_Drum_Sand_Mag_Tracer_F"],
	[_baseActionVAN, "LMG_Zafir_F", "150Rnd_762x54_Box_Tracer"],
	[_baseActionVAN, "MMG_01_hex_F", "150Rnd_93x64_Mag"],
	[_baseActionVAN, "MMG_02_sand_F", "130Rnd_338_Mag"],
	[_baseActionVAN, "arifle_CTARS_blk_F", "100Rnd_580x42_Mag_Tracer_F"],
	[_baseActionVAN, "arifle_RPK12_F", "75Rnd_762x39_AK12_Mag_Tracer_F"],
	[_baseActionRHS, "rhs_weap_m249_pip", "rhsusf_200Rnd_556x45_mixed_soft_pouch"],
	[_baseActionRHS, "rhs_weap_m240B", "rhsusf_100Rnd_762x51_m62_tracer"],
	[_baseActionRHS, "rhs_weap_m27iar", "rhs_mag_100Rnd_556x45_M855A1_cmag_mixed"],
	[_baseActionRHS, "rhs_weap_pkm", "rhs_100Rnd_762x54mmR_green"],
	[_baseActionRHS, "rhs_weap_pkp", "rhs_100Rnd_762x54mmR_green", "rhs_acc_pso1m2"],
	[_baseActionRHS, "rhs_weap_rpk74m_npz", "rhs_45Rnd_545x39_AK_Green"],
	[_baseActionCUP, "CUP_lmg_m249_pip1", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"],
	[_baseActionCUP, "CUP_lmg_M240_B", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"],
	[_baseActionCUP, "CUP_lmg_M240", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"],
	[_baseActionCUP, "CUP_lmg_Mk48", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"],
	[_baseActionCUP, "CUP_lmg_M60E4", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"],
	[_baseActionCUP, "CUP_arifle_HK_M27", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15"],
	[_baseActionCUP, "CUP_lmg_MG3_rail", "CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"],
	[_baseActionCUP, "CUP_arifle_MG36", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag"],
	[_baseActionCUP, "CUP_lmg_PKM", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"],
	[_baseActionCUP, "CUP_arifle_RPK74_45_top_rail", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"],
	[_baseActionCUP, "CUP_arifle_RPK74_top_rail", "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"],
	[_baseActionCUP, "CUP_lmg_UK59", "CUP_50Rnd_UK59_762x54R_Tracer"],
	[_baseActionCUP, "CUP_arifle_XM8_SAW", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_optic_AMO_PCAP"]
];
