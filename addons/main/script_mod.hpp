// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX x
#define PREFIX mgrecoil

#include "script_version.hpp"

#define VERSION         MAJOR.MINOR
#define VERSION_STR     MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR      MAJOR,MINOR,PATCHLVL,BUILD

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.56
#define REQUIRED_CBA_VERSION {2,3,1}

#ifndef COMPONENT_BEAUTIFIED
	#define COMPONENT_BEAUTIFIED COMPONENT
#endif
#ifdef SUBCOMPONENT_BEAUTIFIED
	#define COMPONENT_NAME QUOTE(MGRECOIL - COMPONENT_BEAUTIFIED - SUBCOMPONENT_BEAUTIFIED)
#else
	#define COMPONENT_NAME QUOTE(MGRECOIL - COMPONENT_BEAUTIFIED)
#endif
