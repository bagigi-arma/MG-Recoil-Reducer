class CfgRecoils {
	class recoil_default;

	class rhs_recoil_pkm: recoil_default {
		kickBack[] = {0.05, 0.1};//{0.02, 0.09};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		muzzleOuter[] = {0.55, 1, 1.5, 1.0};//{0.55, 1, 0.7, 0.35};
		permanent = 0.02;//0.04;
		temporary = 0.002;//0.005;
	};
	class rhs_recoil_rpk74: recoil_default {
		kickBack[] = {0.04, 0.08};//{0.02, 0.04};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		muzzleOuter[] = {0.3, 1, 1.0, 0.6};//{0.3, 1, 0.2, 0.2};
		permanent = 0.02;//0.04;
		temporary = 0.002;//0.01;
	};
};
