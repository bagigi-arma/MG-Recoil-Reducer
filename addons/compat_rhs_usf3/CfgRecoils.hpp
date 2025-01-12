class CfgRecoils {
	class recoil_default;

	class rhs_recoil_m249: recoil_default {
		kickBack[] = {0.005, 0.02};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		muzzleOuter[] = {0.2, 0.3, 0.7, 0.4};//{0.2, 0.6, 0.25, 0.1};
		permanent = 0.06;//0.06;
		temporary = 0.005;//0.02;
	};
	class rhs_recoil_m240: recoil_default {
		kickBack[] = {0.05, 0.1};//{0.02, 0.08};
		muzzleInner[] = {0, 0, 0.15, 0.15};
		muzzleOuter[] = {0.08, 0.4, 1.4, 1.0};//{0.5, 1, 0.7, 0.3};
		permanent = 0.04;//0.08;
		temporary = 0.002;//0.005;
	};
	class rhs_recoil_m27: recoil_default {
		kickBack[] = {0.04, 0.06};//{0.02, 0.04};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		muzzleOuter[] = {0.2, 0.5, 1.8, 1.0};//{0.3, 0.8, 0.4, 0.3};
		permanent = 0.04;
		temporary = 0.002;//0.01;
	};
};
