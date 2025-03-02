class CfgRecoils {
	class recoil_default;

	class CUP_SAW_recoil: recoil_default {
		kickBack[] = {0.005, 0.02};//{0.005, 0.02};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		muzzleOuter[] = {0.2, 0.3, 0.7, 0.4};//{0.2, 0.6, 0.2, 0.2};
		permanent = 0.06;//0.06;
		temporary = 0.005;//0.005;
	};
	class CUP_M240_recoil: recoil_default {
		kickBack[] = {0.05, 0.1};//{0.02, 0.04};
		muzzleInner[] = {0, 0, 0.15, 0.15};
		muzzleOuter[] = {0.08, 0.4, 1.4, 1.0};//{0.5, 0.8, 0.5, 0.2};
		permanent = 0.04;//0.2;
		temporary = 0.0025;//0.04;
	};
	class CUP_M240B_recoil: CUP_M240_recoil {
		kickBack[] = {0.05, 0.1};//{0.015, 0.04};
		muzzleOuter[] = {0.08, 0.4, 1.4, 1.0};//{0.44, 0.77, 0.48, 0.2};
	};
	class CUP_M4A1_recoil: recoil_default {
		kickBack[] = {0.04, 0.06};//{0.02, 0.04};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		muzzleOuter[] = {0.2, 0.5, 1.8, 1.0};//{0.25, 0.7, 0.3, 0.3};
		permanent = 0.04;
		temporary = 0.002;//0.015;
	};
	class CUP_XM8_sharpshooter_recoil: recoil_default {
		kickBack[] = {0.04, 0.06};//{0.008, 0.027};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		muzzleOuter[] = {0.2, 0.5, 1.8, 1.0};//{0.18, 0.75, 0.3, 0.2};
		permanent = 0.04;
		temporary = 0.002;//0.008;
	};
	class CUP_M60E4_recoil: recoil_default {
		kickBack[] = {0.05, 0.1};//{0.02, 0.055};
		muzzleInner[] = {0, 0, 0.15, 0.15};
		muzzleOuter[] = {0.08, 0.4, 1.4, 1.0};//{0.58, 1, 0.6, 0.25};
		permanent = 0.04;//0.2;
		temporary = 0.003;//0.0035;
	};
	class CUP_Mk48_recoil: recoil_default {
		kickBack[] = {0.05, 0.1};//{0.026, 0.064};
		muzzleInner[] = {0, 0, 0.15, 0.15};
		muzzleOuter[] = {0.08, 0.4, 1.4, 1.0};//{0.7, 1.2, 0.77, 0.32};
		permanent = 0.04;//0.2;
		temporary = 0.0025;//0.005;
	};
	class CUP_MG3_recoil: recoil_default {
		kickBack[] = {0.05, 0.1};//{0.018, 0.044};
		muzzleInner[] = {0, 0, 0.15, 0.15};
		muzzleOuter[] = {0.08, 0.4, 1.4, 1.0};//{0.5, 0.84, 0.53, 0.22};
		permanent = 0.04;//0.2;
		temporary = 0.002;//0.005;
	};
	class CUP_MG36_recoil: recoil_default {
		kickBack[] = {0.04, 0.06};//{0.009, 0.03};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		muzzleOuter[] = {0.2, 0.5, 1.8, 1.0};//{0.2, 0.8, 0.3, 0.2};
		permanent = 0.04;
		temporary = 0.002;//0.0085;
	};
	class CUP_PK_recoil: recoil_default {
		kickBack[] = {0.05, 0.1};//{0.02, 0.09};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		muzzleOuter[] = {0.55, 1, 1.5, 1.0};//{0.55, 0.95, 0.6, 0.25};
		permanent = 0.02;//0.04;
		temporary = 0.002;//0.005;
	};
	class CUP_RPK_recoil: recoil_default {
		kickBack[] = {0.04, 0.08};//{0.04, 0.08};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		muzzleOuter[] = {0.3, 1, 1.0, 0.6};//{0.3, 1.1, 0.3, 0.4};
		permanent = 0.02;//0.04;
		temporary = 0.002;//0.009;
	};
	class CUP_RPK74_recoil: recoil_default {
		kickBack[] = {0.04, 0.08};//{0.018, 0.038};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		muzzleOuter[] = {0.3, 1, 1.0, 0.6};//{0.2, 0.7, 0.2, 0.2};
		permanent = 0.02;//0.04;
		temporary = 0.002;//0.01;
	};
	class CUP_UK59_recoil: recoil_default {
		kickBack[] = {0.05, 0.1};//{0.026, 0.064};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		muzzleOuter[] = {0.55, 1, 1.5, 1.0};//{0.71, 1, 0.77, 0.32};
		permanent = 0.02;//0.04;
		temporary = 0.003;//0.005;
	};
};
