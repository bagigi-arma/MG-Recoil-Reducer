#include "script_component.hpp"

class CfgPatches {
	class PREFIX {
		name = COMPONENT_NAME;
		author = "Bagigi Team";
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"A3_Modules_F", "ace_recoil"};
		units[] = {};
		weapons[] = {};
	};
};

#include "CfgRecoils.hpp"
