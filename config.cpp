class CfgPatches
{
	class SP_Sample_Mod_CfgPatches
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts"
		};
	};
};
class CfgMods
{
	class SP_Sample_Mod_CfgMods
	{	
		
		dir = "SP_Sample_Mod";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "SP_Sample_Mod";
		author = "Scott Porter";
		authorID = "0";
		version = "1.5";
		extra = 0;
		
		type = "mod";
		dependencies[]=
		{
			"World"
		};
		
		class defs
		{

            class worldScriptModule
            {
                value = "";
                files[] = {"SP_Sample_Mod\DZ_Scripts\4_World"};
			};
		};
	};
};