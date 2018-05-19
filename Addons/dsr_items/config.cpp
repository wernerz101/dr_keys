class CfgPatches
{
	class dsr_items
	{
		fileName = "dsr_items.pbo";
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		vehicles[] = {};
		author = "Desolation Redux Dev Team";
	};
};

class CfgEditorSubcategories
{
	class dsr_items
	{
		displayName = "DSR Items";
	};
};


class SmallFire;
class CfgMagazines
{
	class CA_Magazine;
	class DSR_Item_Base: CA_Magazine 
	{
		author = "Desolation Redux Dev Team";
		scope = 1;
		displayName = "Desolation Item";
		picture = "";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		descriptionShort = "Desolation Item - UNDEFINED DESCRIPTION";
		descriptionUse = "Desolation Item - UNDEFINED USE";
		editorSubcategory = "dsr_items";
		icon = "iconObject_4x1";
		mass = 1;
		count = 1;
	};
	#include "configs\cfgkeys.hpp"
	
};