class CfgRecoils {
	class recoil_default;

	class recoil_sw: recoil_default {
		kickBack[] = {0.028, 0.056};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		muzzleOuter[] = {0.1, 0.8, 1.8, 0.7};//{0.06, 0.8, 0.5, 0.2};
		permanent = 0.01;//0.04;
		temporary = 0.002;//0.012;
	};
	class recoil_mk200: recoil_default {
		kickBack[] = {0.042, 0.084};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		muzzleOuter[] = {0.08, 0.4, 0.8, 0.4};//{0.08, 0.6, 0.6, 0.2};
		permanent = 0.02;//0.04;
		temporary = 0.005;//0.012;
	};
	class recoil_lim: recoil_default {
		kickBack[] = {0.005, 0.02};//{0.01, 0.03};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		muzzleOuter[] = {0.2, 0.3, 0.7, 0.4};//{0.1, 0.3, 0.2, 0.2};
		permanent = 0.06;//0.04;
		temporary = 0.005;
	};
	class recoil_zafir: recoil_default {
		kickBack[] = {0.05, 0.1};//{0.028, 0.112};
		muzzleInner[] = {0, 0, 0.1, 0.1};//{0, 0, 0.1, 0.1};
		muzzleOuter[] = {0.08, 0.4, 0.7, 0.5};//{0.1, 1, 0.7, 0.3};
		permanent = 0.02;//0.04;
		temporary = 0.005;//0.012;
	};
	class recoil_spar_lsw: recoil_default {
		kickBack[] = {0.04, 0.06};//{0.01, 0.03};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		muzzleOuter[] = {0.2, 0.5, 1.8, 1.0};//{0.1, 0.4, 0.3, 0.2};
		permanent = 0.04;
		temporary = 0.002;//0.005;
	};
	class recoil_mmg_01: recoil_default {
		kickBack[] = {0.1, 0.2};//{0.028, 0.112};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		muzzleOuter[] = {0.12, 1.5, 1.8, 1.2};//{0.12, 1.5, 0.8, 0.3};
		permanent = 0.04;//0.04;
		temporary = 0.002;//0.012;
	};
	class recoil_car_lsw: recoil_default {
		kickBack[] = {0.02, 0.03};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		muzzleOuter[] = {0.2, 0.6, 1.5, 0.5};//{0.2, 0.6, 0.3, 0.2};
		permanent = 0.04;
		temporary = 0.002;//0.005;
	};
	class recoil_rpk12: recoil_default {
		kickBack[] = {0.05 0.1};//{0.03, 0.06};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		muzzleOuter[] = {0.3, 0.4, 1.6, 1.0};//{0.3, 0.8, 0.4, 0.3};
		permanent = 0.04;
		temporary = 0.002;//0.005;
	};
};
