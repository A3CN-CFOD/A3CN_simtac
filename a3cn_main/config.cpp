#define _ARMA_


enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};


class CfgPatches
{
	class a3cn_main
	{
		author = "A3CN Team";
		name = "A3CN SimTac";
		url = "http://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Exp_B"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class Mod_Base;
	class A3CNmod: Mod_Base
	{
		picture = "\a3cn_main\logos\a3cn_icon_ca.paa";
		logo = "\a3cn_main\logos\a3cn_logo_ca.paa";
		logoOver = "\a3cn_main\logos\a3cn_logoOver_ca.paa";
		logoSmall = "\a3cn_main\logos\a3cn_logo_small_ca.paa";
		tooltip = "tooltip";
		tooltipOwned = "tooltip_owned";
		action = "https://arma3.com/";
		dlcColor[] = {0.69,0.25,0.12,1};
		overview = "texto overview";
		hideName = 1;
		hidePicture = 0;
		name = "A3CN SimTac";
        author = "A3CN Team";
		overviewPicture = "\a3cn_main\images\mod_overviewpicture_co.paa";
		dir = "A3CNmod";

		class Features{};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class A3_Mod
		{
			list[] = {"a3cn_main","a3cn_combat_tablet"};
		};
	};
};
