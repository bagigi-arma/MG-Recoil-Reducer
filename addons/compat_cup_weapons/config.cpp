#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"mgrecoil", "CUP_Weapons_LoadOrder"};
		author = "Bagigi Team";
		authors[] = {"mrschick"};
		url = "https://www.github.com/bagigi-arma/MG-Recoil-Reducer";
		skipWhenMissingDependencies = 1;
		VERSION_CONFIG;
	};
};

#include "CfgRecoils.hpp"
