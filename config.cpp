/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 

class CfgClans
{
	/*
		Defines the amount of pop tabs needed to register a new clan

		Default: 20,000
	*/
	registrationFee = 20000;

	/*
		A list of all characters allowed in a clan *name*

		NOTE: 
	*/
	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ._-!:\\/";

	/*

		Maximum markers per clan

	*/
	maximumIcons = 20;

	/*
		Maximum number of characters on a Marker in a presistent system

		Note: MAX 255!
		
	*/
	maximumIconText = 50;

	/*

		Maximum poly markers per clan

	*/
	maximumPolys = 10;


	/* 

		Maximum points in poly
	*/
	maximumPolyNode = 10;
};
class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CfgInteractionModels
	requiresOcean = 0; // isSurfaceWater test
	requiresFire = 0; // inflamed object nearby
	requiresConcreteMixer = 0; // Check if concrete mixer is nearby
};

class CfgCraftingRecipes
{
	
class BreachingChargeBigMomma: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Big Momma)";
	pictureItem = "Exile_Item_BreachingCharge_BigMomma";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_BigMomma"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{3, "Exile_Item_BreachingCharge_Metal"},
		{1, "Exile_Item_MobilePhone"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_ZipTie"}
	};
};

class BreachingChargeMetal: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Metal)";
	pictureItem = "Exile_Item_BreachingCharge_Metal";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_Metal"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_DuctTape"},
		{1, "SatchelCharge_Remote_Mag"}
	};
};

class BreachingChargeWood: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Wood)";
	pictureItem = "Exile_Item_BreachingCharge_Wood";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_Wood"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_DuctTape"},
		{1, "DemoCharge_Remote_Mag"}
	};
};

class CookBBQSandwich: Exile_AbstractCraftingRecipe
{
	name = "Cook BBQ Sandwich";
	pictureItem = "Exile_Item_BBQSandwich_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_BBQSandwich_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_BBQSandwich"}
	};
};

class CookCatFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Food";
	pictureItem = "Exile_Item_CatFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CatFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_CatFood"}
	};
};

class CookChristmasTinner: Exile_AbstractCraftingRecipe
{
	name = "Cook Christmas Tinner";
	pictureItem = "Exile_Item_ChristmasTinner_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ChristmasTinner_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_ChristmasTinner"}
	};
};
class CookCoffee: Exile_AbstractCraftingRecipe
{
	name = "Brew Coffee";
	pictureItem = "Exile_Item_PlasticBottleCoffee";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleCoffee"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleFreshWater"},
		{1, "Exile_Item_InstantCoffee"}
	};
};
class CookDogFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Dog Food";
	pictureItem = "Exile_Item_DogFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_DogFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_DogFood"}
	};
};

class CookGloriousKnakworst: Exile_AbstractCraftingRecipe
{
	name = "Cook Glorious Knakworst";
	pictureItem = "Exile_Item_GloriousKnakworst_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_GloriousKnakworst_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_GloriousKnakworst"}
	};
};

class CookMacasCheese: Exile_AbstractCraftingRecipe
{
	name = "Cook Macas Cheese";
	pictureItem = "Exile_Item_MacasCheese_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MacasCheese_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_MacasCheese"}
	};
};

class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Salt Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};

class CookSausageGravy: Exile_AbstractCraftingRecipe
{
	name = "Cook Sausage Gravy";
	pictureItem = "Exile_Item_SausageGravy_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SausageGravy_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SausageGravy"}
	};
};

class CookSurstromming: Exile_AbstractCraftingRecipe
{
	name = "Cook Surströmming";
	pictureItem = "Exile_Item_Surstromming_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_Surstromming_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_Surstromming"}
	};
};

class CraftBandage: Exile_AbstractCraftingRecipe
{
	name = "Craft Bandage";
	pictureItem = "Exile_Item_Bandage";
	returnedItems[] =
	{
		{1, "Exile_Item_Bandage"}
	};
	components[] = 
	{
		{4, "Exile_Item_ToiletPaper"}
	};
};

class CraftConcreteDoorway: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Doorway";
	pictureItem = "Exile_Item_ConcreteDoorwayKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteDoorwayKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor";
	pictureItem = "Exile_Item_ConcreteFloorKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorKit"},
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor Port";
	pictureItem = "Exile_Item_ConcreteFloorPortKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorPortKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Gate";
	pictureItem = "Exile_Item_ConcreteGateKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteGateKit"},
		{4, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_MetalPole"},
		{4, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcretStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Stairs";
	pictureItem = "Exile_Item_ConcreteStairsKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteStairsKit"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcretSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Support";
	pictureItem = "Exile_Item_ConcreteSupportKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteSupportKit"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Wall";
	pictureItem = "Exile_Item_ConcreteWallKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftFirePlace: Exile_AbstractCraftingRecipe
{
	name = "Craft Fire Place";
	pictureItem = "Exile_Item_CampFireKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_CampFireKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
};
class CraftFloodLight: Exile_AbstractCraftingRecipe
{
	name = "Craft Flood Light";
	pictureItem = "Exile_Item_FloodLightKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_FloodLightKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
{
	name = "Craft Fortification Upgrade";
	pictureItem = "Exile_Item_MetalBoard"; //<< CHANGE IT
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_FortificationUpgrade"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftHBarrier5Kit: Exile_AbstractCraftingRecipe
{
	name = "Craft H-barrier (5 Blocks)";
	pictureItem = "Exile_Item_HBarrier5Kit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Pliers"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_HBarrier5Kit"}
	};
	components[] = 
	{
		{3, "Exile_Item_SandBagsKit_Long"},
		{2, "Exile_Item_MetalWire"}
	};
};
class CraftMetalBoard: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalBoard"}
	};
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalHedgehog: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Hedgehog";
	pictureItem = "Exile_Item_MetalHedgehogKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalHedgehogKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalPole: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalPole"}
	};
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftPortableGenerator: Exile_AbstractCraftingRecipe
{
	name = "Craft Portable Generator";
	pictureItem = "Exile_Item_PortableGeneratorKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
/*class CraftRazorWireKit: Exile_AbstractCraftingRecipe
{
	name = "Craft Razor Wire Kit Kit";
	pictureItem = "Exile_Item_RazorWireKit_Long";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_RazorWireKit_Long"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};*/
class CraftRepairKitConcrete: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Repair Kit";
	pictureItem = "Exile_Item_Cement";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitConcrete"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftRepairKitMetal: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Repair Kit";
	pictureItem = "Exile_Item_RepairKitMetal";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitMetal"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Grinder"
	};
};
class CraftRepairKitWood: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Repair Kit";
	pictureItem = "Exile_Item_RepairKitWood";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitWood"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox"
	};
};
class CraftSandBagsKitCorner: Exile_AbstractCraftingRecipe
{
	name = "Craft Sandbags Kit (Corner)";
	pictureItem = "Exile_Item_SandBagsKit_Corner";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Corner"}
	};
	components[] = 
	{
		{3, "Exile_Item_Sand"}
	};
};
class CraftSandBagsKitLong: Exile_AbstractCraftingRecipe
{
	name = "Craft Sand Bags Kit (Long)";
	pictureItem = "Exile_Item_SandBagsKit_Long";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Long"}
	};
	components[] = 
	{
		{6, "Exile_Item_Sand"}
	};
};
class CraftStorageCrate: Exile_AbstractCraftingRecipe
{
	name = "Craft Storage Crate";
	pictureItem = "Exile_Item_StorageCrateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_StorageCrateKit"}
	};
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"}
	};
};
class CraftWaterBarrel: Exile_AbstractCraftingRecipe
{
	name = "Craft Water Barrel";
	pictureItem = "Exile_Item_WaterBarrelKit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_WaterBarrelKit"}
	};
	components[] = 
	{
		{20, "Exile_Item_PlasticBottleEmpty"}
	};
};
class CraftWireFenceKit: Exile_AbstractCraftingRecipe
{
	name = "Craft Wire Fence Kit";
	pictureItem = "Exile_Item_WireFenceKit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_WireFenceKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"},
		{6, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class CraftWoodDoorWay: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Doorway";
	pictureItem = "Exile_Item_WoodDoorwayKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor";
	pictureItem = "Exile_Item_WoodFloorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{8, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodPlank: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Plank";
	pictureItem = "Exile_Item_WoodPlank";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodPlank"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftWoodStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Stairs";
	pictureItem = "Exile_Item_WoodStairsKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodStairsKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Support";
	pictureItem = "Exile_Item_WoodSupportKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodSupportKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Wall";
	pictureItem = "Exile_Item_WoodWallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWallHalf: Exile_AbstractCraftingRecipe
{
	name = "Craft 1/2 Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWorkBench: Exile_AbstractCraftingRecipe
{
	name = "Craft Work Bench";
	pictureItem = "Exile_Item_WorkBenchKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_WorkBenchKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodLog"}
	};
};
class EmptyFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Empty Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterEmpty";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class EmptyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class EmptyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Salt Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};
class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Fresh Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiredInteractionModelGroup = "CleanWaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Salt Water";
	pictureItem = "Exile_Item_PlasticBottleSaltWater";
	requiresOcean = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyWaterCanisterWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_WaterCanisterDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
};
class FillFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Fill Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterFull";
	requiredInteractionModelGroup = "FuelSource";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
};
class UpgradeToConcreteDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Door";
	pictureItem = "Exile_Item_ConcreteDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteDoorwayKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToConcreteFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Floor Port";
	pictureItem = "Exile_Item_ConcreteFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorPortKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteFloorKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToConcreteGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Gate";
	pictureItem = "Exile_Item_ConcreteGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToConcreteWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Window";
	pictureItem = "Exile_Item_ConcreteWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteWindowKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Door";
	pictureItem = "Exile_Item_WoodDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodFloorKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{4, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodWallHalfKit"}
	};
};
class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
};
class CfgExileArsenal
{
	class Exile_Uniform_BambiOverall				{ quality = 1; price = 1; sellPrice = 1; };

	///////////////////////////////////////////////////////////////////////////////
	// Civillian Clothing
	///////////////////////////////////////////////////////////////////////////////
	class U_C_Journalist 							{ quality = 1; price = 20; };
	class U_C_Poloshirt_blue 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_burgundy 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_salmon 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_stripped 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_tricolour 					{ quality = 1; price = 20; };
	class U_C_Poor_1 								{ quality = 1; price = 20; };
	class U_C_Poor_2 								{ quality = 1; price = 20; };
	class U_C_Poor_shorts_1 						{ quality = 1; price = 20; };
	class U_C_Scientist 							{ quality = 1; price = 20; };
	class U_OrestesBody 							{ quality = 1; price = 40; };
	class U_Rangemaster 							{ quality = 1; price = 40; };
	class U_NikosAgedBody 							{ quality = 1; price = 40; };
	class U_NikosBody 								{ quality = 1; price = 40; };
	class U_Competitor 								{ quality = 1; price = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// Soldier Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_B_CombatUniform_mcam 					{ quality = 2; price = 40; };
	class U_B_CombatUniform_mcam_tshirt 			{ quality = 2; price = 40; };
	class U_B_CombatUniform_mcam_vest 				{ quality = 2; price = 40; };
	class U_B_CombatUniform_mcam_worn 				{ quality = 2; price = 40; };
	class U_B_CTRG_1 								{ quality = 2; price = 40; };
	class U_B_CTRG_2 								{ quality = 2; price = 40; };
	class U_B_CTRG_3								{ quality = 2; price = 40; };
	class U_I_CombatUniform 						{ quality = 2; price = 40; };
	class U_I_CombatUniform_shortsleeve				{ quality = 2; price = 40; };
	class U_I_CombatUniform_tshirt					{ quality = 2; price = 40; };
	class U_I_OfficerUniform						{ quality = 2; price = 40; };
	class U_O_CombatUniform_ocamo 					{ quality = 2; price = 40; };
	class U_O_CombatUniform_oucamo 					{ quality = 2; price = 40; };
	class U_O_OfficerUniform_ocamo 					{ quality = 3; price = 80; };
	class U_B_SpecopsUniform_sgg 					{ quality = 3; price = 80; };
	class U_O_SpecopsUniform_blk 					{ quality = 3; price = 80; };
	class U_O_SpecopsUniform_ocamo 					{ quality = 3; price = 80; };
	class U_I_G_Story_Protagonist_F 				{ quality = 3; price = 100; };
	class Exile_Uniform_Woodland 					{ quality = 3; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Guerilla Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_C_HunterBody_grn						{ quality = 2; price = 40; };
	class U_IG_Guerilla1_1							{ quality = 2; price = 40; };
	class U_IG_Guerilla2_1							{ quality = 2; price = 60; };
	class U_IG_Guerilla2_2							{ quality = 2; price = 40; };
	class U_IG_Guerilla2_3							{ quality = 2; price = 40; };
	class U_IG_Guerilla3_1							{ quality = 2; price = 40; };
	class U_BG_Guerilla2_1							{ quality = 2; price = 40; };
	class U_IG_Guerilla3_2							{ quality = 2; price = 40; };
	class U_BG_Guerrilla_6_1						{ quality = 2; price = 60; };
	class U_BG_Guerilla1_1							{ quality = 2; price = 40; };
	class U_BG_Guerilla2_2							{ quality = 2; price = 40; };
	class U_BG_Guerilla2_3							{ quality = 2; price = 40; };
	class U_BG_Guerilla3_1							{ quality = 2; price = 40; };
	class U_BG_leader								{ quality = 3; price = 40; };
	class U_IG_leader								{ quality = 3; price = 40; };
	class U_I_G_resistanceLeader_F					{ quality = 3; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Ghillie Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_B_FullGhillie_ard						{ quality = 4; price = 150; };
	class U_B_FullGhillie_lsh						{ quality = 4; price = 150; };
	class U_B_FullGhillie_sard						{ quality = 4; price = 150; };
	class U_B_GhillieSuit							{ quality = 3; price = 100; };
	class U_I_FullGhillie_ard						{ quality = 4; price = 150; };
	class U_I_FullGhillie_lsh						{ quality = 4; price = 150; };
	class U_I_FullGhillie_sard						{ quality = 4; price = 150; };
	class U_I_GhillieSuit							{ quality = 3; price = 100; };
	class U_O_FullGhillie_ard						{ quality = 6; price = 150; };
	class U_O_FullGhillie_lsh						{ quality = 6; price = 150; };
	class U_O_FullGhillie_sard						{ quality = 6; price = 150; };
	class U_O_GhillieSuit							{ quality = 5; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Wet Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_I_Wetsuit								{ quality = 3; price = 80; };
	class U_O_Wetsuit								{ quality = 3; price = 80; };
	class U_B_Wetsuit								{ quality = 3; price = 80; };
	class U_B_survival_uniform						{ quality = 3; price = 80; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandolliers
	///////////////////////////////////////////////////////////////////////////////
	class V_BandollierB_blk							{ quality = 1; price = 20; };
	class V_BandollierB_cbr							{ quality = 1; price = 20; };
	class V_BandollierB_khk							{ quality = 1; price = 20; };
	class V_BandollierB_oli							{ quality = 1; price = 20; };
	class V_BandollierB_rgr							{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Chestrigs
	///////////////////////////////////////////////////////////////////////////////
	class V_Chestrig_blk 							{ quality = 1; price = 30; };
	class V_Chestrig_khk 							{ quality = 1; price = 30; };
	class V_Chestrig_oli 							{ quality = 1; price = 30; };
	class V_Chestrig_rgr 							{ quality = 1; price = 30; };

	///////////////////////////////////////////////////////////////////////////////
	// Vests
	///////////////////////////////////////////////////////////////////////////////
	class V_Press_F									{ quality = 1; price = 10; };
	class V_Rangemaster_belt						{ quality = 1; price = 6; };
	class V_TacVest_blk								{ quality = 2; price = 50; };
	class V_TacVest_blk_POLICE						{ quality = 3; price = 50; };
	class V_TacVest_brn								{ quality = 2; price = 50; };
	class V_TacVest_camo							{ quality = 2; price = 50; };
	class V_TacVest_khk								{ quality = 2; price = 50; };
	class V_TacVest_oli								{ quality = 2; price = 50; };
	class V_TacVestCamo_khk							{ quality = 2; price = 50; };
	class V_TacVestIR_blk							{ quality = 2; price = 50; };
	class V_I_G_resistanceLeader_F					{ quality = 2; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// Harnesses
	///////////////////////////////////////////////////////////////////////////////
	class V_HarnessO_brn							{ quality = 1; price = 40; };
	class V_HarnessO_gry							{ quality = 1; price = 40; };
	class V_HarnessOGL_brn							{ quality = 1; price = 30; };
	class V_HarnessOGL_gry							{ quality = 1; price = 30; };
	class V_HarnessOSpec_brn						{ quality = 1; price = 40; };
	class V_HarnessOSpec_gry						{ quality = 1; price = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// Plate Carriers
	///////////////////////////////////////////////////////////////////////////////
	class V_PlateCarrier1_blk 						{ quality = 1; price = 80; };
	class V_PlateCarrier1_rgr 						{ quality = 1; price = 80; };
	class V_PlateCarrier2_rgr 						{ quality = 2; price = 100; };
	class V_PlateCarrier3_rgr 						{ quality = 2; price = 100; };
	class V_PlateCarrierGL_blk 						{ quality = 6; price = 500; };
	class V_PlateCarrierGL_mtp 						{ quality = 6; price = 500; };
	class V_PlateCarrierGL_rgr 						{ quality = 6; price = 500; };
	class V_PlateCarrierH_CTRG 						{ quality = 2; price = 100; };
	class V_PlateCarrierIA1_dgtl 					{ quality = 2; price = 80; };
	class V_PlateCarrierIA2_dgtl 					{ quality = 2; price = 100; };
	class V_PlateCarrierIAGL_dgtl 					{ quality = 3; price = 400; };
	class V_PlateCarrierIAGL_oli 					{ quality = 3; price = 400; };
	class V_PlateCarrierL_CTRG 						{ quality = 2; price = 100; };
	class V_PlateCarrierSpec_blk 					{ quality = 5; price = 200; };
	class V_PlateCarrierSpec_mtp 					{ quality = 5; price = 200; };
	class V_PlateCarrierSpec_rgr 					{ quality = 5; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_Cap_blk 								{ quality = 1; price = 6; };
	class H_Cap_blk_Raven 							{ quality = 1; price = 6; };
	class H_Cap_blu 								{ quality = 1; price = 6; };
	class H_Cap_brn_SPECOPS 						{ quality = 1; price = 6; };
	class H_Cap_grn 								{ quality = 1; price = 6; };
	class H_Cap_headphones 							{ quality = 1; price = 6; };
	class H_Cap_khaki_specops_UK 					{ quality = 1; price = 6; };
	class H_Cap_oli 								{ quality = 1; price = 6; };
	class H_Cap_press 								{ quality = 1; price = 6; };
	class H_Cap_red 								{ quality = 1; price = 6; };
	class H_Cap_tan 								{ quality = 1; price = 6; };
	class H_Cap_tan_specops_US 						{ quality = 1; price = 6; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Glasses
	///////////////////////////////////////////////////////////////////////////////
	class G_Spectacles			 		{ quality = 1; price = 6; };
	class G_Spectacles_Tinted			{ quality = 1; price = 6; };
	class G_Combat			 			{ quality = 1; price = 6; };
	class G_Lowprofile			 		{ quality = 1; price = 6; };
	class G_Shades_Black			 	{ quality = 1; price = 6; };
	class G_Shades_Green			 	{ quality = 1; price = 6; };
	class G_Shades_Red			 		{ quality = 1; price = 6; };
	class G_Squares			 			{ quality = 1; price = 6; };
	class G_Squares_Tinted			 	{ quality = 1; price = 6; };
	class G_Sport_BlackWhite			{ quality = 1; price = 6; };
	class G_Sport_Blackyellow			{ quality = 1; price = 6; };
	class G_Sport_Greenblack			{ quality = 1; price = 6; };
	class G_Sport_Checkered			 	{ quality = 1; price = 6; };
	class G_Sport_Red			 		{ quality = 1; price = 6; };
	class G_Tactical_Black			 	{ quality = 1; price = 6; };
	class G_Aviator			 			{ quality = 1; price = 6; };
	class G_Lady_Mirror			 		{ quality = 1; price = 6; };
	class G_Lady_Dark			 		{ quality = 1; price = 6; };
	class G_Lady_Red			 		{ quality = 1; price = 6; };
	class G_Lady_Blue			 		{ quality = 1; price = 6; };
	class G_Diving			 			{ quality = 1; price = 6; };
	class G_B_Diving			 		{ quality = 1; price = 6; };
	class G_O_Diving			 		{ quality = 1; price = 6; };
	class G_I_Diving			 		{ quality = 1; price = 6; };
	class G_Goggles_VR			 		{ quality = 1; price = 6; };
	class G_Balaclava_blk			 	{ quality = 2; price = 10; };
	class G_Balaclava_oli			 	{ quality = 2; price = 10; };
	class G_Balaclava_combat			{ quality = 2; price = 10; };
	class G_Balaclava_lowprofile		{ quality = 2; price = 10; };
	class G_Bandanna_blk			 	{ quality = 1; price = 6; };
	class G_Bandanna_oli			 	{ quality = 1; price = 6; };
	class G_Bandanna_khk			 	{ quality = 1; price = 6; };
	class G_Bandanna_tan			 	{ quality = 1; price = 6; };
	class G_Bandanna_beast			 	{ quality = 1; price = 6; };
	class G_Bandanna_shades			 	{ quality = 1; price = 6; };
	class G_Bandanna_sport			 	{ quality = 1; price = 6; };
	class G_Bandanna_aviator			{ quality = 1; price = 6; };
	class G_Shades_Blue			 		{ quality = 1; price = 6; };
	class G_Sport_Blackred			 	{ quality = 1; price = 6; };
	class G_Tactical_Clear			 	{ quality = 1; price = 6; };
	class G_Balaclava_TI_blk_F			{ quality = 2; price = 15; };
	class G_Balaclava_TI_tna_F			{ quality = 2; price = 15; };
	class G_Balaclava_TI_G_blk_F		{ quality = 2; price = 15; };
	class G_Balaclava_TI_G_tna_F		{ quality = 2; price = 15; };
	class G_Combat_Goggles_tna_F		{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Military Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_MilCap_blue 							{ quality = 1; price = 8; };
	class H_MilCap_dgtl 							{ quality = 1; price = 8; };
	class H_MilCap_mcamo 							{ quality = 1; price = 8; };
	class H_MilCap_ocamo 							{ quality = 1; price = 8; };
	class H_MilCap_oucamo 							{ quality = 1; price = 8; };
	class H_MilCap_rucamo 							{ quality = 1; price = 8; };

	///////////////////////////////////////////////////////////////////////////////
	// Beanies
	///////////////////////////////////////////////////////////////////////////////
	class H_Watchcap_blk 							{ quality = 1; price = 6; };
	class H_Watchcap_camo 							{ quality = 1; price = 6; };
	class H_Watchcap_khk 							{ quality = 1; price = 6; };
	class H_Watchcap_sgg 							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandannas
	///////////////////////////////////////////////////////////////////////////////
	class H_Bandanna_camo							{ quality = 1; price = 4; };
	class H_Bandanna_cbr							{ quality = 1; price = 4; };
	class H_Bandanna_gry							{ quality = 1; price = 4; };
	class H_Bandanna_khk							{ quality = 1; price = 4; };
	class H_Bandanna_khk_hs							{ quality = 1; price = 4; };
	class H_Bandanna_mcamo							{ quality = 1; price = 4; };
	class H_Bandanna_sgg							{ quality = 1; price = 4; };
	class H_Bandanna_surfer							{ quality = 1; price = 4; };

	///////////////////////////////////////////////////////////////////////////////
	// Boonie Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Booniehat_dgtl							{ quality = 1; price = 6; };
	class H_Booniehat_dirty							{ quality = 1; price = 6; };
	class H_Booniehat_grn							{ quality = 1; price = 6; };
	class H_Booniehat_indp							{ quality = 1; price = 6; };
	class H_Booniehat_khk							{ quality = 1; price = 6; };
	class H_Booniehat_khk_hs						{ quality = 1; price = 6; };
	class H_Booniehat_mcamo							{ quality = 1; price = 6; };
	class H_Booniehat_tan							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Hat_blue								{ quality = 1; price = 6; };
	class H_Hat_brown								{ quality = 1; price = 6; };
	class H_Hat_camo								{ quality = 1; price = 6; };
	class H_Hat_checker								{ quality = 1; price = 6; };
	class H_Hat_grey								{ quality = 1; price = 6; };
	class H_Hat_tan									{ quality = 1; price = 6; };
	class H_StrawHat								{ quality = 1; price = 6; };
	class H_StrawHat_dark							{ quality = 1; price = 6; };
	class Exile_Headgear_SantaHat					{ quality = 1; price = 10; };
	class Exile_Headgear_SafetyHelmet				{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Berets
	///////////////////////////////////////////////////////////////////////////////
	class H_Beret_02								{ quality = 2; price = 6; };
	class H_Beret_blk								{ quality = 2; price = 6; };
	class H_Beret_blk_POLICE						{ quality = 2; price = 6; };
	class H_Beret_brn_SF							{ quality = 2; price = 6; };
	class H_Beret_Colonel							{ quality = 3; price = 8; };
	class H_Beret_grn								{ quality = 2; price = 6; };
	class H_Beret_grn_SF							{ quality = 2; price = 6; };
	class H_Beret_ocamo								{ quality = 2; price = 6; };
	class H_Beret_red								{ quality = 2; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Shemags
	///////////////////////////////////////////////////////////////////////////////
	class H_Shemag_khk								{ quality = 1; price = 10; };
	class H_Shemag_olive							{ quality = 1; price = 10; };
	class H_Shemag_olive_hs							{ quality = 1; price = 10; };
	class H_Shemag_tan								{ quality = 1; price = 10; };
	class H_ShemagOpen_khk							{ quality = 1; price = 10; };
	class H_ShemagOpen_tan							{ quality = 1; price = 10; };
	class H_TurbanO_blk								{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetB_light							{ quality = 2; price = 20; };
	class H_HelmetB_light_black						{ quality = 2; price = 20; };
	class H_HelmetB_light_desert					{ quality = 2; price = 20; };
	class H_HelmetB_light_grass						{ quality = 2; price = 20; };
	class H_HelmetB_light_sand						{ quality = 2; price = 20; };
	class H_HelmetB_light_snakeskin					{ quality = 2; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetIA								{ quality = 3; price = 40; };
	class H_HelmetIA_camo							{ quality = 3; price = 40; };
	class H_HelmetIA_net							{ quality = 3; price = 40; };
	class H_HelmetB									{ quality = 3; price = 60; };
	class H_HelmetB_black							{ quality = 3; price = 60; };
	class H_HelmetB_camo							{ quality = 3; price = 80; }; // This one is awesome!
	class H_HelmetB_desert							{ quality = 3; price = 60; };
	class H_HelmetB_grass							{ quality = 3; price = 60; };
	class H_HelmetB_paint							{ quality = 3; price = 60; };
	class H_HelmetB_plain_blk						{ quality = 3; price = 60; };
	class H_HelmetB_sand							{ quality = 3; price = 60; };
	class H_HelmetB_snakeskin						{ quality = 3; price = 60; };

	///////////////////////////////////////////////////////////////////////////////
	// Spec Ops Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetSpecB								{ quality = 4; price = 80; };
	class H_HelmetSpecB_blk							{ quality = 4; price = 80; };
	class H_HelmetSpecB_paint1						{ quality = 4; price = 80; };
	class H_HelmetSpecB_paint2						{ quality = 4; price = 80; };

	///////////////////////////////////////////////////////////////////////////////
	// Super Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetO_ocamo							{ quality = 5; price = 150; };
	class H_HelmetO_oucamo							{ quality = 5; price = 150; };
	class H_HelmetSpecO_blk							{ quality = 5; price = 100; };
	class H_HelmetSpecO_ocamo						{ quality = 5; price = 100; };
	class H_HelmetLeaderO_ocamo						{ quality = 5; price = 200; };
	class H_HelmetLeaderO_oucamo					{ quality = 5; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Pointer Attachments
	///////////////////////////////////////////////////////////////////////////////
	class acc_flashlight 							{ quality = 1; price = 4; };
	class acc_pointer_IR 							{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Bitpod Attachments
	///////////////////////////////////////////////////////////////////////////////
	class bipod_01_F_blk	 						{ quality = 2; price = 10; };
	class bipod_01_F_mtp	 						{ quality = 2; price = 10; };
	class bipod_01_F_snd	 						{ quality = 2; price = 10; };
	class bipod_02_F_blk	 						{ quality = 2; price = 10; };
	class bipod_02_F_hex	 						{ quality = 2; price = 10; };
	class bipod_02_F_tan	 						{ quality = 2; price = 10; };
	class bipod_03_F_blk	 						{ quality = 2; price = 10; };
	class bipod_03_F_oli	 						{ quality = 2; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Muzzle Attachments
	///////////////////////////////////////////////////////////////////////////////
	class muzzle_snds_338_black 					{ quality = 5; price = 50; };
	class muzzle_snds_338_green 					{ quality = 5; price = 50; };
	class muzzle_snds_338_sand 						{ quality = 5; price = 50; };
	class muzzle_snds_93mmg 						{ quality = 4; price = 50; };
	class muzzle_snds_93mmg_tan 					{ quality = 4; price = 50; };
	class muzzle_snds_acp 							{ quality = 1; price = 10; };
	class muzzle_snds_B 							{ quality = 3; price = 20; };
	class muzzle_snds_H 							{ quality = 2; price = 20; };
	class muzzle_snds_H_MG 							{ quality = 2; price = 20; };
	class muzzle_snds_H_SW 							{ quality = 2; price = 20; };
	class muzzle_snds_L 							{ quality = 1; price = 10; };
	class muzzle_snds_M 							{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// UAVS
	///////////////////////////////////////////////////////////////////////////////
	class I_UavTerminal								{ quality = 4; price = 750; };
	class I_UAV_01_backpack_F						{ quality = 4; price = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// Static MGs
	///////////////////////////////////////////////////////////////////////////////
	class O_HMG_01_weapon_F 						{ quality = 4; price = 5000; };
	class O_HMG_01_support_F 						{ quality = 4; price = 1000; };
	// Does not seem to work with HMG01, only the lower version does
	//class O_HMG_01_support_high_F 				{ quality = QUALITY_LEVEL_9000; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Optic Attachments
	///////////////////////////////////////////////////////////////////////////////
	class optic_Aco									{ quality = 1; price = 70; };
	class optic_ACO_grn								{ quality = 1; price = 70; };
	class optic_ACO_grn_smg							{ quality = 1; price = 70; };
	class optic_Aco_smg								{ quality = 1; price = 70; };
	class optic_AMS									{ quality = 5; price = 300; };
	class optic_AMS_khk								{ quality = 5; price = 300; };
	class optic_AMS_snd								{ quality = 5; price = 300; };
	class optic_Arco								{ quality = 1; price = 100; };
	class optic_DMS									{ quality = 2; price = 150; };
	class optic_Hamr								{ quality = 3; price = 200; };
	class optic_Holosight							{ quality = 1; price = 50; };
	class optic_Holosight_smg						{ quality = 1; price = 50; };
	class optic_KHS_blk								{ quality = 4; price = 300; };
	class optic_KHS_hex								{ quality = 4; price = 300; };
	class optic_KHS_old								{ quality = 4; price = 300; };
	class optic_KHS_tan								{ quality = 4; price = 300; };
	class optic_LRPS								{ quality = 5; price = 300; };
	class optic_MRCO								{ quality = 1; price = 100; };
	class optic_MRD									{ quality = 1; price = 10; };
	class optic_Nightstalker						{ quality = 6; price = 1000; };
	class optic_NVS									{ quality = 4; price = 500; };
	class optic_SOS									{ quality = 2; price = 200; };
	//class optic_tws									{ quality = QUALITY_LEVEL_9000; price = 1500; };
	//class optic_tws_mg								{ quality = QUALITY_LEVEL_9000; price = 1500; };
	class optic_Yorris								{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Hardware
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Rope							{ quality = 1; price = 20; };
	class Exile_Item_DuctTape						{ quality = 1; price = 300; };
	class Exile_Item_ExtensionCord					{ quality = 1; price = 40; };
	class Exile_Item_FuelCanisterEmpty				{ quality = 1; price = 40; };
	class Exile_Item_JunkMetal						{ quality = 1; price = 400; };
	class Exile_Item_LightBulb						{ quality = 1; price = 20; };
	class Exile_Item_MetalBoard						{ quality = 1; price = 600; };
	//class Exile_Item_MetalHedgehogKit				{ quality = 1; price = 1200; };
	class Exile_Item_SafeKit						{ quality = 4; price = 25000; };
	class Exile_Item_CodeLock						{ quality = 1; price = 5000; };
	//class Exile_Item_Laptop						{ quality = 2; price = 9000; };
	//class Exile_Item_BaseCameraKit				{ quality = 2; price = 5000; };
	class Exile_Item_CamoTentKit					{ quality = 1; price = 250; };
	class Exile_Item_MetalPole						{ quality = 1; price = 800; };
	//class Exile_Item_MetalScrews					{ quality = 1; price = 100; };
	//class Exile_Item_MetalWire						{ quality = 1; price = 100; };
	//class Exile_Item_Cement							{ quality = 1; price = 20; };
	//class Exile_Item_Sand							{ quality = 1; price = 20; };
	//class Exile_Item_CarWheel						{ quality = 1; price = 1000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Food
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_EMRE							{ quality = 3; price = 54; }; //75, 60
	class Exile_Item_GloriousKnakworst				{ quality = 3; price = 40; }; //60, 30
	class Exile_Item_Surstromming					{ quality = 3; price = 34; }; //55, 25
	class Exile_Item_SausageGravy					{ quality = 3; price = 30; }; //50, 25
	class Exile_Item_Catfood						{ quality = 2; price = 24; }; //40, 40
	class Exile_Item_ChristmasTinner				{ quality = 3; price = 20; }; //40, 60
	class Exile_Item_BBQSandwich					{ quality = 3; price = 20; }; //40, 60
	class Exile_Item_MacasCheese					{ quality = 3; price = 20; }; //40, 60
	class Exile_Item_Dogfood						{ quality = 2; price = 18; }; //30, 30
	class Exile_Item_BeefParts						{ quality = 2; price = 18; }; //30, 30
	class Exile_Item_Cheathas						{ quality = 2; price = 18; }; //30, 30
	class Exile_Item_Noodles						{ quality = 1; price = 14; }; //25, 50
	class Exile_Item_SeedAstics						{ quality = 1; price = 12; }; //20, 40
	class Exile_Item_Raisins						{ quality = 1; price = 10; }; //15, 30
	class Exile_Item_Moobar							{ quality = 1; price = 8; }; //10, 30
	class Exile_Item_InstantCoffee					{ quality = 1; price = 20; }; //5, 10
	class Exile_Item_Can_Empty						{ quality = 1; price = 1; sellPrice = 1; };

	///////////////////////////////////////////////////////////////////////////////
	// Drinks
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_PlasticBottleCoffee	 		{ quality = 3; price = 70; sellPrice = 10; };//100, 60
	class Exile_Item_PowerDrink						{ quality = 3; price = 60; }; //95, 10
	class Exile_Item_PlasticBottleFreshWater 		{ quality = 2; price = 50; sellPrice = 4; }; //80, 15
	class Exile_Item_Beer 							{ quality = 1; price = 50; }; //75, 30
	class Exile_Item_EnergyDrink					{ quality = 1; price = 40; }; //75, 20
	class Exile_Item_ChocolateMilk					{ quality = 1; price = 25; }; //75, 20
	class Exile_Item_MountainDupe					{ quality = 1; price = 30; }; //50, 20
	class Exile_Item_PlasticBottleEmpty				{ quality = 1; price = 4; };

	///////////////////////////////////////////////////////////////////////////////
	// First Aid
	///////////////////////////////////////////////////////////////////////////////	
	class Exile_Item_InstaDoc                       { quality = 5; price = 1250; };
	class Exile_Item_Vishpirin						{ quality = 3; price = 300; };
	class Exile_Item_Bandage	                    { quality = 2; price = 100; };
	class Exile_Item_Heatpack	                    { quality = 1; price = 50; };

	//class Exile_Item_Defibrillator				{ quality = 1; price = 7500; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Tools
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Matches 						{ quality = 1; price = 60; };
	class Exile_Item_CookingPot						{ quality = 2; price = 80; };
	class Exile_Melee_Axe							{ quality = 2; price = 100; };
	class Exile_Melee_SledgeHammmer					{ quality = 3; price = 500; };
	class Exile_Item_CanOpener						{ quality = 1; price = 80; };
	class Exile_Item_Handsaw						{ quality = 2; price = 500; };
	class Exile_Item_Pliers							{ quality = 2; price = 350; };
	class Exile_Item_Grinder						{ quality = 2; price = 1250; };
	class Exile_Item_Foolbox						{ quality = 2; price = 4000; };
	//class Exile_Item_CordlessScrewdriver			{ quality = 1; price = 750; };
	//class Exile_Item_FireExtinguisher				{ quality = 1; price = 650; };
	//class Exile_Item_Hammer						{ quality = 1; price = 600; };
	//class Exile_Item_OilCanister					{ quality = 1; price = 1750; };
	//class Exile_Item_Screwdriver					{ quality = 1; price = 250; };
	//class Exile_Item_Shovel						{ quality = 1; price = 700; };
	//class Exile_Item_Wrench						{ quality = 1; price = 250; };
	//class Exile_Item_SleepingMat					{ quality = 1; price = 1250; };
	//class Exile_Item_ToiletPaper					{ quality = 1; price = 5; };
	//class Exile_Item_ZipTie						{ quality = 1; price = 250; };

	///////////////////////////////////////////////////////////////////////////////
	// Navigation
	///////////////////////////////////////////////////////////////////////////////
	class ItemWatch									{ quality = 1; price = 2; };	
	class ItemGPS									{ quality = 2; price = 40; };
	class ItemMap									{ quality = 1; price = 6; };
	class ItemCompass								{ quality = 1; price = 6; };
	class ItemRadio									{ quality = 1; price = 40; };
	class Binocular									{ quality = 1; price = 40; };
	class Rangefinder								{ quality = 3; price = 200; };
	class Laserdesignator							{ quality = 6; price = 750; };
	class Laserdesignator_02						{ quality = 6; price = 750; };
	class Laserdesignator_03						{ quality = 6; price = 750; };
	class NVGoggles									{ quality = 2; price = 100; };
	class NVGoggles_INDEP							{ quality = 2; price = 100; };
	class NVGoggles_OPFOR							{ quality = 2; price = 100; };
	class Exile_Item_XM8							{ quality = 2; price = 20; };
	class Exile_Item_MobilePhone					{ quality = 6; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// Watch out for a Walter fart! He has gas!
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Headgear_GasMask					{ quality = 4; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// Rebreather
	///////////////////////////////////////////////////////////////////////////////
	class V_RebreatherB								{ quality = 2; price = 250; };
	class V_RebreatherIA							{ quality = 2; price = 250; };
	class V_RebreatherIR							{ quality = 2; price = 250; };

	///////////////////////////////////////////////////////////////////////////////
	// Pilot Stuff
	///////////////////////////////////////////////////////////////////////////////
	class B_Parachute								{ quality = 3; price = 150; };
	class H_CrewHelmetHeli_B						{ quality = 3; price = 150; };
	class H_CrewHelmetHeli_I						{ quality = 3; price = 150; };
	class H_CrewHelmetHeli_O						{ quality = 3; price = 150; };
	class H_HelmetCrew_I							{ quality = 3; price = 100; };
	class H_HelmetCrew_B							{ quality = 3; price = 100; };
	class H_HelmetCrew_O							{ quality = 3; price = 100; };
	class H_PilotHelmetHeli_B						{ quality = 4; price = 100; };
	class H_PilotHelmetHeli_I						{ quality = 4; price = 100; };
	class H_PilotHelmetHeli_O						{ quality = 4; price = 100; };
	class U_B_HeliPilotCoveralls					{ quality = 4; price = 80; };
	class U_B_PilotCoveralls						{ quality = 2; price = 60; };
	class U_I_HeliPilotCoveralls					{ quality = 2; price = 60; };
	class U_I_pilotCoveralls						{ quality = 2; price = 60; };
	class U_O_PilotCoveralls						{ quality = 2; price = 60; };
	class H_PilotHelmetFighter_B					{ quality = 5; price = 150; };
	class H_PilotHelmetFighter_I					{ quality = 5; price = 150; };
	class H_PilotHelmetFighter_O					{ quality = 5; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Backpacks
	///////////////////////////////////////////////////////////////////////////////
	class B_HuntingBackpack							{ quality = 3; price = 70; };
	class B_OutdoorPack_blk							{ quality = 1; price = 80; };
	class B_OutdoorPack_blu							{ quality = 1; price = 80; };
	class B_OutdoorPack_tan							{ quality = 1; price = 80; };
	class B_AssaultPack_blk							{ quality = 1; price = 90; };
	class B_AssaultPack_cbr							{ quality = 1; price = 90; };
	class B_AssaultPack_dgtl						{ quality = 1; price = 90; };
	class B_AssaultPack_khk							{ quality = 1; price = 90; };
	class B_AssaultPack_mcamo						{ quality = 1; price = 90; };
	class B_AssaultPack_rgr							{ quality = 1; price = 90; };
	class B_AssaultPack_sgg							{ quality = 1; price = 90; };
	class B_FieldPack_blk							{ quality = 2; price = 120; };
	class B_FieldPack_cbr							{ quality = 2; price = 120; };
	class B_FieldPack_ocamo							{ quality = 2; price = 120; };
	class B_FieldPack_oucamo						{ quality = 2; price = 120; };
	class B_TacticalPack_blk						{ quality = 2; price = 150; };
	class B_TacticalPack_rgr						{ quality = 2; price = 150; };
	class B_TacticalPack_ocamo						{ quality = 2; price = 150; };
	class B_TacticalPack_mcamo						{ quality = 2; price = 150; };
	class B_TacticalPack_oli						{ quality = 2; price = 150; };
	class B_Kitbag_cbr								{ quality = 3; price = 200; };
	class B_Kitbag_mcamo							{ quality = 3; price = 200; };
	class B_Kitbag_sgg								{ quality = 3; price = 200; };
	class B_Bergen_blk								{ quality = 3; price = 200; };
	class B_Bergen_mcamo							{ quality = 3; price = 200; };
	class B_Bergen_rgr								{ quality = 3; price = 200; };
	class B_Bergen_sgg								{ quality = 3; price = 200; };
	class B_Carryall_cbr							{ quality = 4; price = 300; };
	class B_Carryall_khk							{ quality = 4; price = 300; };
	class B_Carryall_mcamo							{ quality = 4; price = 300; };
	class B_Carryall_ocamo							{ quality = 4; price = 300; };
	class B_Carryall_oli							{ quality = 4; price = 300; };
	class B_Carryall_oucamo							{ quality = 4; price = 300; };

	///////////////////////////////////////////////////////////////////////////////
	// Ammunition
	///////////////////////////////////////////////////////////////////////////////
	class 100Rnd_65x39_caseless_mag 						{ quality = 2; price = 30; };
	class 100Rnd_65x39_caseless_mag_Tracer 					{ quality = 2; price = 40; };
	class 10Rnd_127x54_Mag 									{ quality = 4; price = 30; };
	// Broken in Arma
	class 10Rnd_338_Mag 									{ quality = 5; price = 30; };

	class 10Rnd_762x54_Mag 									{ quality = 3; price = 30; };
	//class 10Rnd_762x51_Mag { quality = 1; price = 30; };
	class 10Rnd_93x64_DMR_05_Mag 							{ quality = 4; price = 40; };
	class 11Rnd_45ACP_Mag 									{ quality = 1; price = 8; };
	class 150Rnd_762x54_Box 								{ quality = 3; price = 20; };
	class 150Rnd_762x54_Box_Tracer 							{ quality = 3; price = 30; };
	class 16Rnd_9x21_Mag 									{ quality = 1; price = 20; };
	class 200Rnd_65x39_cased_Box 							{ quality = 2; price = 30; };
	class 200Rnd_65x39_cased_Box_Tracer 					{ quality = 2; price = 30; };
	class 150Rnd_93x64_Mag 									{ quality = 6; price = 50; };
	class 130Rnd_338_Mag 									{ quality = 5; price = 40; };
	class 20Rnd_556x45_UW_mag 								{ quality = 1; price = 20; };
	class 20Rnd_762x51_Mag 									{ quality = 2; price = 20; };
	class 30Rnd_45ACP_Mag_SMG_01 							{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green 				{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow				{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red					{ quality = 1; price = 10; };
	class 30Rnd_556x45_Stanag 								{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Green 					{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_green  						{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Red 					{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Yellow 				{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_red 							{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_green 						{ quality = 2; price = 20; };
	class 30Rnd_65x39_caseless_green_mag_Tracer 			{ quality = 2; price = 30; };
	class 30Rnd_65x39_caseless_mag 							{ quality = 2; price = 20; };
	class 30Rnd_65x39_caseless_mag_Tracer 					{ quality = 2; price = 30; };
	class 30Rnd_9x21_Mag 									{ quality = 1; price = 40; };
	class 30Rnd_9x21_Yellow_Mag								{ quality = 1; price = 40; };
	class 30Rnd_9x21_Green_Mag								{ quality = 1; price = 40; };
	class 30Rnd_9x21_Red_Mag								{ quality = 1; price = 40; };
	class 5Rnd_127x108_APDS_Mag 							{ quality = 6; price = 50; };
	class 5Rnd_127x108_Mag 									{ quality = 6; price = 40; };
	class 6Rnd_45ACP_Cylinder 								{ quality = 1; price = 8; };
	class 6Rnd_GreenSignal_F 								{ quality = 1; price = 30; };
	class 6Rnd_RedSignal_F 									{ quality = 1; price = 30; };
	class 7Rnd_408_Mag 										{ quality = 6; price = 10; };
	class 9Rnd_45ACP_Mag 									{ quality = 1; price = 6; };

	// Price for bullet cam magazines is normal magazine price + 20 pop tabs per bullet
	class Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag		{ quality = 6; price = 40 +  5 * 20; };
	class Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag	{ quality = 6; price = 40 + 10 * 20; };
	class Exile_Magazine_7Rnd_408_Bullet_Cam_Mag			{ quality = 6; price = 10 +  7 * 20; };
	class Exile_Magazine_10Rnd_338_Bullet_Cam_Mag			{ quality = 6; price = 30 + 10 * 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Flares
	///////////////////////////////////////////////////////////////////////////////
	class Chemlight_blue							{ quality = 1; price = 2; };
	class Chemlight_green							{ quality = 1; price = 2; };
	class Chemlight_red								{ quality = 1; price = 2; };
	class FlareGreen_F								{ quality = 1; price = 6; };
	class FlareRed_F								{ quality = 1; price = 6; };
	class FlareWhite_F								{ quality = 1; price = 6; };
	class FlareYellow_F								{ quality = 1; price = 6; };
	class UGL_FlareGreen_F							{ quality = 2; price = 8; };
	class UGL_FlareRed_F							{ quality = 2; price = 8; };
	class UGL_FlareWhite_F							{ quality = 2; price = 8; };
	class UGL_FlareYellow_F							{ quality = 2; price = 8; };
	class 3Rnd_UGL_FlareGreen_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareRed_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareWhite_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareYellow_F					{ quality = 3; price = 8*3; };

	///////////////////////////////////////////////////////////////////////////////
	// Smokes
	///////////////////////////////////////////////////////////////////////////////
	class SmokeShell								{ quality = 1; price = 6; };
	class SmokeShellBlue							{ quality = 1; price = 6; };
	class SmokeShellGreen							{ quality = 1; price = 6; };
	class SmokeShellOrange							{ quality = 1; price = 6; };
	class SmokeShellPurple							{ quality = 1; price = 6; };
	class SmokeShellRed								{ quality = 1; price = 6; };
	class SmokeShellYellow							{ quality = 1; price = 6; };
	class 1Rnd_Smoke_Grenade_shell					{ quality = 2; price = 8; };
	class 1Rnd_SmokeBlue_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeGreen_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeOrange_Grenade_shell			{ quality = 2; price = 8; };
	class 1Rnd_SmokePurple_Grenade_shell			{ quality = 2; price = 8; };
	class 1Rnd_SmokeRed_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeYellow_Grenade_shell			{ quality = 2; price = 8; };
	class 3Rnd_Smoke_Grenade_shell					{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeBlue_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeGreen_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeOrange_Grenade_shell			{ quality = 3; price = 8*3; };
	class 3Rnd_SmokePurple_Grenade_shell			{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeRed_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeYellow_Grenade_shell			{ quality = 3; price = 8*3; };

	///////////////////////////////////////////////////////////////////////////////
	// Explosives
	///////////////////////////////////////////////////////////////////////////////
	class HandGrenade								{ quality = 3; price = 40; };
	class MiniGrenade								{ quality = 2; price = 30; };
	class B_IR_Grenade								{ quality = 1; price = 50; };
	class O_IR_Grenade								{ quality = 1; price = 50; };
	class I_IR_Grenade								{ quality = 1; price = 50; };
	class 1Rnd_HE_Grenade_shell						{ quality = 2; price = 70; };
	class 3Rnd_HE_Grenade_shell						{ quality = 3; price = 70*3; };
	class APERSBoundingMine_Range_Mag				{ quality = 3; price = 500; };
	class APERSMine_Range_Mag						{ quality = 3; price = 600; };
	class APERSTripMine_Wire_Mag					{ quality = 3; price = 300; };
	class ClaymoreDirectionalMine_Remote_Mag		{ quality = 3; price = 350; };
	class DemoCharge_Remote_Mag						{ quality = 4; price = 700; };
	class IEDLandBig_Remote_Mag						{ quality = 3; price = 600; };
	class IEDLandSmall_Remote_Mag					{ quality = 3; price = 300; };
	class IEDUrbanBig_Remote_Mag					{ quality = 3; price = 800; };
	class IEDUrbanSmall_Remote_Mag					{ quality = 3; price = 400; };
	class SatchelCharge_Remote_Mag					{ quality = 5; price = 1000; };
	class SLAMDirectionalMine_Wire_Mag				{ quality = 3; price = 700; };

	///////////////////////////////////////////////////////////////////////////////
	// Pistols
	///////////////////////////////////////////////////////////////////////////////
	class hgun_ACPC2_F 								{ quality = 1; price = 50; };
	class hgun_P07_F 								{ quality = 1; price = 50; };
	class hgun_Pistol_heavy_01_F 					{ quality = 2; price = 80; };
	class hgun_Pistol_heavy_02_F 					{ quality = 2; price = 80; };
	class hgun_Pistol_Signal_F 						{ quality = 1; price = 100; };
	class hgun_Rook40_F 							{ quality = 1; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// Sub Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class hgun_PDW2000_F 							{ quality = 1; price = 100; };
	class SMG_01_F 									{ quality = 1; price = 150; };
	class SMG_02_F 									{ quality = 1; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MX_SW_Black_F						{ quality = 2; price = 250; };
	class arifle_MX_SW_F							{ quality = 2; price = 250; };
	class LMG_Mk200_F								{ quality = 2; price = 300; };
	class LMG_Zafir_F								{ quality = 3; price = 350; };
	class MMG_01_hex_F								{ quality = 6; price = 800; };
	class MMG_01_tan_F								{ quality = 6; price = 800; };
	class MMG_02_black_F							{ quality = 6; price = 450; };
	class MMG_02_camo_F								{ quality = 5; price = 450; };
	class MMG_02_sand_F								{ quality = 5; price = 450; };

	///////////////////////////////////////////////////////////////////////////////
	// Assault Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_Katiba_C_F							{ quality = 2; price = 150; };
	class arifle_Katiba_F							{ quality = 2; price = 150; };
	class arifle_Katiba_GL_F						{ quality = 2; price = 200; };
	class arifle_Mk20_F								{ quality = 1; price = 150; };
	class arifle_Mk20_GL_F							{ quality = 1; price = 200; };
	class arifle_Mk20_GL_plain_F					{ quality = 1; price = 200; };
	class arifle_Mk20_plain_F						{ quality = 1; price = 150; };
	class arifle_Mk20C_F							{ quality = 1; price = 150; };
	class arifle_Mk20C_plain_F						{ quality = 1; price = 150; };
	class arifle_MX_Black_F							{ quality = 2; price = 450; };
	class arifle_MX_F								{ quality = 2; price = 450; };
	class arifle_MX_GL_Black_F						{ quality = 2; price = 450; };
	class arifle_MX_GL_F							{ quality = 2; price = 450; };
	class arifle_MXC_Black_F						{ quality = 2; price = 350; };
	class arifle_MXC_F								{ quality = 2; price = 350; };
	class arifle_SDAR_F								{ quality = 1; price = 650; };
	class arifle_TRG20_F							{ quality = 1; price = 250; };
	class arifle_TRG21_F							{ quality = 1; price = 250; };
	class arifle_TRG21_GL_F							{ quality = 1; price = 350; };

	///////////////////////////////////////////////////////////////////////////////
	// Sniper Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MXM_Black_F 						{ quality = 2; price = 550; };
	class arifle_MXM_F 								{ quality = 2; price = 550; };
	class srifle_DMR_01_F 							{ quality = 3; price = 600; };
	class srifle_DMR_02_camo_F 						{ quality = 3; price = 800; };
	class srifle_DMR_02_F 							{ quality = 3; price = 800; };
	class srifle_DMR_02_sniper_F 					{ quality = 3; price = 800; };
	class srifle_DMR_03_F 							{ quality = 3; price = 750; };
	class srifle_DMR_03_khaki_F 					{ quality = 3; price = 750; };
	class srifle_DMR_03_multicam_F 					{ quality = 3; price = 750; };
	class srifle_DMR_03_tan_F 						{ quality = 3; price = 750; };
	class srifle_DMR_03_woodland_F 					{ quality = 3; price = 750; };
	class srifle_DMR_04_F 							{ quality = 4; price = 700; };
	class srifle_DMR_04_Tan_F 						{ quality = 4; price = 700; };
	class srifle_DMR_05_blk_F 						{ quality = 4; price = 850; };
	class srifle_DMR_05_hex_F 						{ quality = 4; price = 850; };
	class srifle_DMR_05_tan_f 						{ quality = 4; price = 850; };
	class srifle_DMR_06_camo_F 						{ quality = 5; price = 800; };
	class srifle_DMR_06_olive_F 					{ quality = 5; price = 800; };
	class srifle_EBR_F 								{ quality = 3; price = 700; };
	class srifle_GM6_camo_F 						{ quality = 6; price = 900; };
	class srifle_GM6_F 								{ quality = 6; price = 900; };
	class srifle_LRR_camo_F 						{ quality = 6; price = 850; };
	class srifle_LRR_F 								{ quality = 6; price = 850; };
	
	///////////////////////////////////////////////////////////////////////////////
	// ArmA 2 Weapons
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Weapon_AK107						{ quality = 1; price = 300; };
	class Exile_Weapon_AK107_GL						{ quality = 2; price = 400; };
	class Exile_Weapon_AK74							{ quality = 2; price = 350; };
	class Exile_Weapon_AK74_GL						{ quality = 2; price = 400; };
	class Exile_Weapon_AK47							{ quality = 3; price = 500; };
	class Exile_Weapon_AKM							{ quality = 3; price = 500; };
	class Exile_Weapon_AKS							{ quality = 3; price = 500; };
	class Exile_Weapon_AKS_Gold						{ quality = 3; price = 550; };
	class Exile_Weapon_DMR							{ quality = 3; price = 650; };
	class Exile_Weapon_LeeEnfield					{ quality = 1; price = 250; };
	class Exile_Weapon_CZ550						{ quality = 2; price = 400; };
	class Exile_Weapon_SVD							{ quality = 4; price = 800; };
	class Exile_Weapon_SVDCamo						{ quality = 4; price = 850; };
	class Exile_Weapon_VSSVintorez					{ quality = 3; price = 600; };
	class Exile_Weapon_RPK							{ quality = 2; price = 250; };
	class Exile_Weapon_PK							{ quality = 3; price = 300; };
	class Exile_Weapon_PKP							{ quality = 3; price = 350; };
	class Exile_Weapon_Colt1911						{ quality = 1; price = 100; };
	class Exile_Weapon_Makarov						{ quality = 1; price = 100; };
	class Exile_Weapon_Taurus						{ quality = 1; price = 100; };
	class Exile_Weapon_TaurusGold					{ quality = 1; price = 150; };
	class Exile_Weapon_M1014						{ quality = 2; price = 200; };
	
	///////////////////////////////////////////////////////////////////////////////
	// ArmA 2 Ammunition
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Magazine_30Rnd_762x39_AK				{ quality = 3; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK				{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK_Green			{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK_Red			{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK_White			{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK_Yellow			{ quality = 1; price = 20; };
	class Exile_Magazine_45Rnd_545x39_RPK_Green			{ quality = 1; price = 20; };
	class Exile_Magazine_75Rnd_545x39_RPK_Green			{ quality = 1; price = 20; };
	class Exile_Magazine_20Rnd_762x51_DMR				{ quality = 3; price = 20; };
	class Exile_Magazine_20Rnd_762x51_DMR_Yellow		{ quality = 3; price = 20; };
	class Exile_Magazine_20Rnd_762x51_DMR_Red			{ quality = 3; price = 20; };
	class Exile_Magazine_20Rnd_762x51_DMR_Green			{ quality = 3; price = 20; };
	class Exile_Magazine_10Rnd_303						{ quality = 1; price = 20; };
	class Exile_Magazine_100Rnd_762x54_PK_Green			{ quality = 3; price = 20; };
	class Exile_Magazine_7Rnd_45ACP						{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_9x18						{ quality = 1; price = 20; };
	class Exile_Magazine_6Rnd_45ACP						{ quality = 1; price = 20; };
	class Exile_Magazine_5Rnd_22LR						{ quality = 1; price = 20; };
	class Exile_Magazine_10Rnd_762x54					{ quality = 1; price = 20; };
	class Exile_Magazine_10Rnd_9x39						{ quality = 1; price = 20; };
	class Exile_Magazine_20Rnd_9x39						{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_74Slug					{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_74Pellets					{ quality = 1; price = 20; }; // broken?
	
	///////////////////////////////////////////////////////////////////////////////
	// Apex Items & Weapons
	///////////////////////////////////////////////////////////////////////////////
	class hgun_Pistol_01_F            { quality = 1; price = 65; };
	class hgun_P07_khk_F              { quality = 1; price = 65; };
	class SMG_05_F					  { quality = 1; price = 150; };
	class LMG_03_F					  { quality = 2; price = 300; };
	class arifle_MX_khk_F             { quality = 2; price = 450; };
	class arifle_MX_GL_khk_F          { quality = 2; price = 500; };
	class arifle_MXC_khk_F            { quality = 2; price = 350; };
	class arifle_MXM_khk_F            { quality = 2; price = 500; };
	class srifle_LRR_tna_F            { quality = 6; price = 850; };
	class srifle_GM6_ghex_F           { quality = 6; price = 900; };
	class srifle_DMR_07_blk_F         { quality = 4; price = 750; };
	class srifle_DMR_07_hex_F         { quality = 4; price = 750; };
	class srifle_DMR_07_ghex_F        { quality = 4; price = 750; };
	class arifle_AK12_F               { quality = 3; price = 650; };
	class arifle_AK12_GL_F            { quality = 3; price = 700; };
	class arifle_AKM_F                { quality = 3; price = 400; };
	class arifle_AKM_FL_F             { quality = 3; price = 400; };
	class arifle_AKS_F                { quality = 3; price = 350; };
	class arifle_ARX_blk_F            { quality = 5; price = 900; };
	class arifle_ARX_ghex_F           { quality = 5; price = 900; };
	class arifle_ARX_hex_F            { quality = 5; price = 900; };
	class arifle_CTAR_blk_F           { quality = 2; price = 450; };
	class arifle_CTAR_hex_F           { quality = 2; price = 450; };
	class arifle_CTAR_ghex_F          { quality = 2; price = 450; };
	class arifle_CTAR_GL_blk_F        { quality = 2; price = 450; };
	class arifle_CTARS_blk_F          { quality = 2; price = 450; };
	class arifle_CTARS_ghex_F          { quality = 2; price = 450; };
	class arifle_CTARS_hex_F          { quality = 2; price = 450; };
	class arifle_SPAR_01_blk_F        { quality = 1; price = 400; };
	class arifle_SPAR_01_khk_F        { quality = 1; price = 400; };
	class arifle_SPAR_01_snd_F        { quality = 1; price = 400; };
	class arifle_SPAR_01_GL_blk_F     { quality = 1; price = 500; };
	class arifle_SPAR_01_GL_khk_F     { quality = 1; price = 500; };
	class arifle_SPAR_01_GL_snd_F     { quality = 1; price = 500; };
	class arifle_SPAR_02_blk_F        { quality = 2; price = 550; };
	class arifle_SPAR_02_khk_F        { quality = 2; price = 550; };
	class arifle_SPAR_02_snd_F        { quality = 2; price = 550; };
	class arifle_SPAR_03_blk_F        { quality = 3; price = 600; };
	class arifle_SPAR_03_khk_F        { quality = 3; price = 600; };
	class arifle_SPAR_03_snd_F        { quality = 3; price = 600; };					
	class muzzle_snds_H_khk_F         { quality = 2; price = 50; };
	class muzzle_snds_H_snd_F         { quality = 2; price = 50; };
	class muzzle_snds_58_blk_F        { quality = 1; price = 20; };
	class muzzle_snds_m_khk_F         { quality = 1; price = 15; };
	class muzzle_snds_m_snd_F         { quality = 1; price = 15; };
	class muzzle_snds_B_khk_F         { quality = 3; price = 50; };
	class muzzle_snds_B_snd_F         { quality = 3; price = 50; };
	class muzzle_snds_58_wdm_F        { quality = 1; price = 20; };
	class muzzle_snds_65_TI_blk_F     { quality = 2; price = 75; };
	class muzzle_snds_65_TI_hex_F     { quality = 2; price = 75; };
	class muzzle_snds_65_TI_ghex_F    { quality = 2; price = 75; };
	class muzzle_snds_H_MG_blk_F      { quality = 2; price = 20; };
	class muzzle_snds_H_MG_khk_F      { quality = 2; price = 20; };
	class optic_Arco_blk_F            { quality = 1; price = 100; };
	class optic_Arco_ghex_F           { quality = 1; price = 100; };
	class optic_DMS_ghex_F            { quality = 2; price = 150; };
	class optic_Hamr_khk_F            { quality = 3; price = 200; };
	class optic_ERCO_blk_F            { quality = 1; price = 125; };
	class optic_ERCO_khk_F            { quality = 1; price = 125; };
	class optic_ERCO_snd_F            { quality = 1; price = 125; };
	class optic_SOS_khk_F             { quality = 2; price = 200; };
	class optic_LRPS_tna_F            { quality = 5; price = 300; };
	class optic_LRPS_ghex_F           { quality = 5; price = 300; };
	class optic_Holosight_blk_F       { quality = 1; price = 50; };
	class optic_Holosight_khk_F       { quality = 1; price = 50; };
	class optic_Holosight_smg_blk_F   { quality = 1; price = 50; };
	class bipod_01_F_khk              { quality = 2; price = 10; };
	class O_NVGoggles_hex_F           { quality = 3; price = 150; };
	class O_NVGoggles_urb_F           { quality = 3; price = 150; };
	class O_NVGoggles_ghex_F          { quality = 3; price = 150; };
	class NVGoggles_tna_F             { quality = 2; price = 100; };
	//class NVGogglesB_blk_F            { quality = 1; price = 1000; }; //Normal NightV but fullscreen thermal
	//class NVGogglesB_grn_F            { quality = 1; price = 1000; };	//Normal NightV but fullscreen thermal
	//class NVGogglesB_gry_F            { quality = 1; price = 1000; };	//Normal NightV but fullscreen thermal
	//class Laserdesignator_01_khk_F    { quality = 1; price = 1000; };	//Thermal
	//class Laserdesignator_02_ghex_F   { quality = 1; price = 1000; };	//Thermal
	class U_B_T_Soldier_F             { quality = 2; price = 40; };
	class U_B_T_Soldier_AR_F          { quality = 2; price = 40; };
	class U_B_T_Soldier_SL_F          { quality = 2; price = 40; };
	class U_B_T_Sniper_F              { quality = 3; price = 100; };
	class U_B_T_FullGhillie_tna_F     { quality = 4; price = 150; };
	class U_B_CTRG_Soldier_F          { quality = 2; price = 40; };
	class U_B_CTRG_Soldier_2_F        { quality = 2; price = 40; };
	class U_B_CTRG_Soldier_3_F        { quality = 2; price = 40; };
	class U_B_GEN_Soldier_F           { quality = 2; price = 35; };
	class U_B_GEN_Commander_F         { quality = 2; price = 35; };
	class U_O_T_Soldier_F             { quality = 2; price = 40; };
	class U_O_T_Officer_F             { quality = 3; price = 40; };
	class U_O_T_Sniper_F              { quality = 3; price = 100; };
	class U_O_T_FullGhillie_tna_F     { quality = 4; price = 150; };
	class U_O_V_Soldier_Viper_F       { quality = 4; price = 150; };
	class U_O_V_Soldier_Viper_hex_F   { quality = 4; price = 150; };
	class U_I_C_Soldier_Para_1_F      { quality = 2; price = 30; };
	class U_I_C_Soldier_Para_2_F      { quality = 2; price = 30; };
	class U_I_C_Soldier_Para_3_F      { quality = 2; price = 30; };
	class U_I_C_Soldier_Para_4_F      { quality = 2; price = 30; };
	class U_I_C_Soldier_Para_5_F      { quality = 2; price = 30; };
	class U_I_C_Soldier_Bandit_1_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Bandit_2_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Bandit_3_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Bandit_4_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Bandit_5_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Camo_F        { quality = 2; price = 30; };
	class U_C_man_sport_1_F           { quality = 1; price = 10; };
	class U_C_man_sport_2_F           { quality = 1; price = 10; };
	class U_C_man_sport_3_F           { quality = 1; price = 10; };
	class U_C_Man_casual_1_F          { quality = 1; price = 10; };
	class U_C_Man_casual_2_F          { quality = 1; price = 10; };
	class U_C_Man_casual_3_F          { quality = 1; price = 10; };
	class U_C_Man_casual_4_F          { quality = 1; price = 10; };
	class U_C_Man_casual_5_F          { quality = 1; price = 10; };
	class U_C_Man_casual_6_F          { quality = 1; price = 10; };
	class U_B_CTRG_Soldier_urb_1_F    { quality = 2; price = 40; };
	class U_B_CTRG_Soldier_urb_2_F    { quality = 2; price = 40; };
	class U_B_CTRG_Soldier_urb_3_F    { quality = 2; price = 40; };
	class H_Helmet_Skate              { quality = 2; price = 20; };
	class H_HelmetB_TI_tna_F          { quality = 4; price = 100; };
	//class H_HelmetO_ViperSP_hex_F     { quality = 4; price = 1000; };		//Themal
	//class H_HelmetO_ViperSP_ghex_F    { quality = 4; price = 1000; }; 	//Themal 
	class H_HelmetB_tna_F             { quality = 3; price = 50; };
	class H_HelmetB_Enh_tna_F         { quality = 4; price = 100; };
	class H_HelmetB_Light_tna_F       { quality = 2; price = 20; };
	class H_HelmetSpecO_ghex_F        { quality = 5; price = 100; };
	class H_HelmetLeaderO_ghex_F      { quality = 5; price = 175; };
	class H_HelmetO_ghex_F            { quality = 5; price = 75; };
	class H_HelmetCrew_O_ghex_F       { quality = 3; price = 75; };
	class H_MilCap_tna_F              { quality = 1; price = 8; };
	class H_MilCap_ghex_F             { quality = 1; price = 8; };
	class H_Booniehat_tna_F           { quality = 1; price = 4; };
	class H_Beret_gen_F               { quality = 2; price = 12; };
	class H_MilCap_gen_F              { quality = 1; price = 10; };
	class H_Cap_oli_Syndikat_F        { quality = 1; price = 6; };
	class H_Cap_tan_Syndikat_F        { quality = 1; price = 6; };
	class H_Cap_blk_Syndikat_F        { quality = 1; price = 6; };
	class H_Cap_grn_Syndikat_F        { quality = 1; price = 6; };
	class H_FakeHeadgear_Syndikat_F   { quality = 1; price = 6; };
	class V_TacChestrig_grn_F         { quality = 1; price = 15; };
	class V_TacChestrig_oli_F         { quality = 1; price = 15; };
	class V_TacChestrig_cbr_F         { quality = 1; price = 15; };
	class V_PlateCarrier1_tna_F       { quality = 3; price = 50; };
	class V_PlateCarrier2_tna_F       { quality = 3; price = 60; };
	class V_PlateCarrierSpec_tna_F    { quality = 5; price = 100; };
	class V_PlateCarrierGL_tna_F      { quality = 6; price = 500; };
	class V_HarnessO_ghex_F           { quality = 2; price = 50; };
	class V_HarnessOGL_ghex_F         { quality = 1; price = 30; };
	class V_BandollierB_ghex_F        { quality = 1; price = 10; };
	class V_TacVest_gen_F             { quality = 1; price = 25; };
	class V_PlateCarrier1_rgr_noflag_F		{ quality = 2; price = 50; };
	class V_PlateCarrier2_rgr_noflag_F		{ quality = 2; price = 60; };
	class B_Bergen_Base_F					{ quality = 5; price = 400; };
	class B_Bergen_mcamo_F                  { quality = 5; price = 400; };
	class B_Bergen_dgtl_F                   { quality = 5; price = 400; };
	class B_Bergen_hex_F                    { quality = 5; price = 400; };
	class B_Bergen_tna_F                    { quality = 5; price = 400; };
	class B_AssaultPack_tna_F               { quality = 1; price = 90; };
	class B_Carryall_ghex_F                 { quality = 4; price = 300; };
	class B_FieldPack_ghex_F                { quality = 2; price = 120; };
	class B_ViperHarness_base_F             { quality = 3; price = 250; };
	class B_ViperHarness_blk_F              { quality = 3; price = 250; };
	class B_ViperHarness_ghex_F             { quality = 3; price = 250; };
	class B_ViperHarness_hex_F              { quality = 3; price = 250; };
	class B_ViperHarness_khk_F              { quality = 3; price = 250; };
	class B_ViperHarness_oli_F              { quality = 3; price = 250; };
	class B_ViperLightHarness_base_F        { quality = 2; price = 200; };
	class B_ViperLightHarness_blk_F         { quality = 2; price = 200; };
	class B_ViperLightHarness_ghex_F        { quality = 2; price = 200; };
	class B_ViperLightHarness_hex_F         { quality = 2; price = 200; };
	class B_ViperLightHarness_khk_F         { quality = 2; price = 200; };
	class B_ViperLightHarness_oli_F         { quality = 2; price = 200; };
	
	class 30Rnd_9x21_Mag_SMG_02						{quality = 1; price = 10; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Red          {quality = 1; price = 15; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow       {quality = 1; price = 15; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Green        {quality = 1; price = 15; };
	class 30Rnd_580x42_Mag_F                        {quality = 2; price = 15; };
	class 30Rnd_580x42_Mag_Tracer_F                 {quality = 2; price = 15; };
	class 100Rnd_580x42_Mag_F                       {quality = 2; price = 15; };
	class 100Rnd_580x42_Mag_Tracer_F                {quality = 2; price = 15; };
	class 20Rnd_650x39_Cased_Mag_F                  {quality = 4; price = 20; };
	class 10Rnd_50BW_Mag_F                          {quality = 5; price = 35; };
	class 150Rnd_556x45_Drum_Mag_F                  {quality = 2; price = 75; };
	class 150Rnd_556x45_Drum_Mag_Tracer_F           {quality = 2; price = 75; };
	class 30Rnd_762x39_Mag_F                        {quality = 3; price = 25; };
	class 30Rnd_762x39_Mag_Green_F                  {quality = 3; price = 25; };
	class 30Rnd_762x39_Mag_Tracer_F                 {quality = 3; price = 25; };
	class 30Rnd_762x39_Mag_Tracer_Green_F           {quality = 3; price = 25; };
	class 30Rnd_545x39_Mag_F                        {quality = 1; price = 10; };
	class 30Rnd_545x39_Mag_Green_F                  {quality = 1; price = 10; };
	class 30Rnd_545x39_Mag_Tracer_F                 {quality = 1; price = 10; };
	class 30Rnd_545x39_Mag_Tracer_Green_F           {quality = 1; price = 10; };
	class 200Rnd_556x45_Box_F                       {quality = 1; price = 90; };
	class 200Rnd_556x45_Box_Red_F                   {quality = 1; price = 90; };
	class 200Rnd_556x45_Box_Tracer_F                {quality = 1; price = 90; };
	class 200Rnd_556x45_Box_Tracer_Red_F            {quality = 1; price = 90; };
	class 10Rnd_9x21_Mag							{quality = 1; price = 10; };
	
	///////////////////////////////////////////////////////////////////////////////
	// BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_OldBike 						{ quality = 1; price = 40; };
	class Exile_Bike_MountainBike 					{ quality = 1; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Black					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Blue					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Red					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_White					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Nato					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Csat					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Fia					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Guerilla01			{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Guerilla02			{ quality = 1; price = 2500; };

	///////////////////////////////////////////////////////////////////////////////
	// KARTS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_BluKing					{ quality = 1; price = 1100; };
	class Exile_Car_Kart_RedStone					{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Vrana						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Green						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Blue						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Orange						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_White						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Yellow						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Black						{ quality = 1; price = 1100; };

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Police				{ quality = 1; price = 700; };
	class Exile_Boat_MotorBoat_Orange				{ quality = 1; price = 700; };
	class Exile_Boat_MotorBoat_White				{ quality = 1; price = 700; };

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_CSAT				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Digital				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Orange				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Blue				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Black				{ quality = 1; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_CSAT						{ quality = 2; price = 11000; };
	class Exile_Boat_SDV_Digital					{ quality = 2; price = 11000; };
	class Exile_Boat_SDV_Grey						{ quality = 2; price = 11000; };

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Green 					{ quality = 2; price = 21000; };
	class Exile_Chopper_Huey_Desert					{ quality = 2; price = 21000; };
	class Exile_Chopper_Huey_Armed_Green			{ quality = 2; price = 25000; };
	class Exile_Chopper_Huey_Armed_Desert			{ quality = 2; price = 25000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Green				{ quality = 3; price = 27500; };
	class Exile_Chopper_Hellcat_FIA					{ quality = 3; price = 27500; };

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Green			{ quality = 3; price = 23000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Blue				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Red				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_ION				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_BlueLine			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Digital			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Elliptical		{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Furious			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_GrayWatcher		{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Jeans				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Light				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Shadow			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Sheriff			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Speedy			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Sunset			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Vrana				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Wasp				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Wave				{ quality = 1; price = 17000; };

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Black								{ quality = 5; price = 50000; };
	class Exile_Chopper_Huron_Green								{ quality = 5; price = 50000; };

	///////////////////////////////////////////////////////////////////////////////
	// Mohawk
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Mohawk_FIA								{ quality = 4; price = 45000; };

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_CSAT								{ quality = 3; price = 28000; };
	class Exile_Chopper_Orca_Black								{ quality = 3; price = 28000; };
	class Exile_Chopper_Orca_BlackCustom						{ quality = 3; price = 28000; };

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_CSAT						{ quality = 3; price = 17000; };
	class Exile_Chopper_Taru_Transport_Black					{ quality = 3; price = 17000; };
	                                                                                      
	class Exile_Chopper_Taru_CSAT								{ quality = 4; price = 33000; };
	class Exile_Chopper_Taru_Black								{ quality = 4; price = 33000; };
                                                                                          
	class Exile_Chopper_Taru_Covered_CSAT						{ quality = 4; price = 43000; };
	class Exile_Chopper_Taru_Covered_Black						{ quality = 4; price = 43000; };

	///////////////////////////////////////////////////////////////////////////////
	// Cessna
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_Cessna									{ quality = 1; price = 16500; };

	///////////////////////////////////////////////////////////////////////////////
	// An-2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_AN2_Green									{ quality = 2; price = 17000; };
	class Exile_Plane_AN2_White									{ quality = 2; price = 17000; };
	class Exile_Plane_AN2_Stripe								{ quality = 2; price = 17000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Beige						{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_Green						{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_Blue						{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_BlueCustom				{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_BeigeCustom				{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_Yellow					{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_Grey						{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_Black						{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_Dark						{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_Rusty1					{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_Rusty2					{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_Rusty3					{ quality = 3; price = 12000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Golf
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Golf_Red							{ quality = 1; price = 8000; };
	class Exile_Car_Golf_Black							{ quality = 1; price = 8000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Blue 				{ quality = 1; price = 17000; };
	class Exile_Car_Ikarus_Red 					{ quality = 1; price = 17000; };
	class Exile_Car_Ikarus_Party 				{ quality = 1; price = 17000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Blue			{ quality = 2; price = 25000; };
	class Exile_Car_Ural_Open_Yellow		{ quality = 2; price = 25000; };
	class Exile_Car_Ural_Open_Worker		{ quality = 2; price = 25000; };
	class Exile_Car_Ural_Open_Military		{ quality = 2; price = 25000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Blue			{ quality = 2; price = 28000; };
	class Exile_Car_Ural_Covered_Yellow			{ quality = 2; price = 28000; };
	class Exile_Car_Ural_Covered_Worker			{ quality = 2; price = 28000; };
	class Exile_Car_Ural_Covered_Military		{ quality = 2; price = 28000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// V3S
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_V3S_Open			{ quality = 2; price = 28000; };
	class Exile_Car_V3S_Covered			{ quality = 2; price = 28000; };

	///////////////////////////////////////////////////////////////////////////////
	// SUVXL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Black 				{ quality = 3; price = 20000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Tractor
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tractor_Red 				{ quality = 1; price = 2000; };

	///////////////////////////////////////////////////////////////////////////////
	// Tractor (Old)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_OldTractor_Red 				{ quality = 1; price = 1200; };

	///////////////////////////////////////////////////////////////////////////////
	// Tow Tractor
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_TowTractor_White			{ quality = 1; price = 1800; };

	///////////////////////////////////////////////////////////////////////////////
	// Octavius
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Octavius_White				{ quality = 2; price = 6000; };
	class Exile_Car_Octavius_Black				{ quality = 2; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// UAZ
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_UAZ_Green				{ quality = 2; price = 7000; };

	///////////////////////////////////////////////////////////////////////////////
	// UAZ (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_UAZ_Open_Green			{ quality = 2; price = 8000; };

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Red 				{ quality = 3; price = 11000; };
	class Exile_Car_LandRover_Urban 			{ quality = 3; price = 11000; };
	class Exile_Car_LandRover_Green 			{ quality = 3; price = 11000; };
	class Exile_Car_LandRover_Sand 				{ quality = 3; price = 11000; };
	class Exile_Car_LandRover_Desert 			{ quality = 3; price = 11000; };

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover (Ambulance)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Ambulance_Green		{ quality = 3; price = 12000; };
	class Exile_Car_LandRover_Ambulance_Desert		{ quality = 3; price = 12000; };
	class Exile_Car_LandRover_Ambulance_Sand		{ quality = 3; price = 12000; };

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Green 				{ quality = 2; price = 6000; };
	class Exile_Car_Lada_Taxi 				{ quality = 2; price = 6000; };
	class Exile_Car_Lada_Red 				{ quality = 2; price = 6000; };
	class Exile_Car_Lada_White 				{ quality = 2; price = 6000; };
	class Exile_Car_Lada_Hipster 			{ quality = 2; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Blue				{ quality = 2; price = 6000; };
	class Exile_Car_Volha_White				{ quality = 2; price = 6000; };
	class Exile_Car_Volha_Black				{ quality = 2; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Red					{ quality = 4; price = 14000; };
	class Exile_Car_Hatchback_Sport_Blue				{ quality = 4; price = 14000; };
	class Exile_Car_Hatchback_Sport_Orange				{ quality = 4; price = 14000; };
	class Exile_Car_Hatchback_Sport_White				{ quality = 4; price = 14000; };
	class Exile_Car_Hatchback_Sport_Beige				{ quality = 4; price = 14000; };
	class Exile_Car_Hatchback_Sport_Green				{ quality = 4; price = 14000; };

	///////////////////////////////////////////////////////////////////////////////
	// HEMMT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HEMMT 								{ quality = 3; price = 48000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hunter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter 								{ quality = 5; price = 26500; };

	///////////////////////////////////////////////////////////////////////////////
	// Ifrit
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit 								{ quality = 4; price = 23000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Red							{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Beige						{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_White						{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Blue						{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_DarkRed						{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_BlueCustom					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla01					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla02					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla03					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla04					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla05					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla06					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla07					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla08					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla09					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla10					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla11					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla12					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Rusty1						{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Rusty2						{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Rusty3						{ quality = 3; price = 16000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Guerilla01 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla02 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla03 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla04 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla05 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla06 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla07 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla08 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla09 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla10 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla11 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla12 			{ quality = 5; price = 25000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Civillian 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Red 					{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Beige 				{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_White 				{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Blue 				{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_DarkRed 				{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_BlueCustom 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla01 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla02 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla03 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla04 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla05 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla06 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla07 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla08 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla09 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla10 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla11 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla12 			{ quality = 4; price = 12500; };

	///////////////////////////////////////////////////////////////////////////////
	// Strider
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Strider 							{ quality = 6; price = 44000; };

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Red 							{ quality = 3; price = 14000; };
	class Exile_Car_SUV_Black 							{ quality = 3; price = 14000; };
	class Exile_Car_SUV_Grey 							{ quality = 3; price = 14000; };
	class Exile_Car_SUV_Orange 							{ quality = 3; price = 14000; };

	///////////////////////////////////////////////////////////////////////////////
	// SUV (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Armed_Black 					{ quality = 4; price = 25000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// BRDM2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BRDM2_HQ 							{ quality = 5; price = 25000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// BTR40
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BTR40_MG_Green 							{ quality = 6; price = 38000; };
	class Exile_Car_BTR40_MG_Camo 							{ quality = 6; price = 38000; };
	class Exile_Car_BTR40_Green 							{ quality = 2; price = 15000; };
	class Exile_Car_BTR40_Camo 								{ quality = 2; price = 15000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// HMMWV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HMMWV_M134_Green 							{ quality = 5; price = 33000; };
	class Exile_Car_HMMWV_M134_Desert 							{ quality = 5; price = 33000; };
	class Exile_Car_HMMWV_M2_Green 								{ quality = 6; price = 40000; };
	class Exile_Car_HMMWV_M2_Desert 							{ quality = 6; price = 40000; };
	class Exile_Car_HMMWV_MEV_Green 							{ quality = 3; price = 21000; };
	class Exile_Car_HMMWV_MEV_Desert 							{ quality = 3; price = 21000; };
	class Exile_Car_HMMWV_UNA_Green 							{ quality = 3; price = 21000; };
	class Exile_Car_HMMWV_UNA_Desert 							{ quality = 3; price = 21000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Tempest
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest 							{ quality = 4; price = 48300; };

	///////////////////////////////////////////////////////////////////////////////
	// Van 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Black 							{ quality = 2; price = 12000; };
	class Exile_Car_Van_White 							{ quality = 2; price = 12000; };
	class Exile_Car_Van_Red 							{ quality = 2; price = 12000; };
	class Exile_Car_Van_Guerilla01 						{ quality = 2; price = 12000; };
	class Exile_Car_Van_Guerilla02 						{ quality = 2; price = 12000; };
	class Exile_Car_Van_Guerilla03 						{ quality = 2; price = 12000; };
	class Exile_Car_Van_Guerilla04 						{ quality = 2; price = 12000; };
	class Exile_Car_Van_Guerilla05 						{ quality = 2; price = 12000; };
	class Exile_Car_Van_Guerilla06 						{ quality = 2; price = 12000; };
	class Exile_Car_Van_Guerilla07 						{ quality = 2; price = 12000; };
	class Exile_Car_Van_Guerilla08 						{ quality = 2; price = 12000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Black 						{ quality = 3; price = 17000; };
	class Exile_Car_Van_Box_White 						{ quality = 3; price = 17000; };
	class Exile_Car_Van_Box_Red 						{ quality = 3; price = 17000; };
	class Exile_Car_Van_Box_Guerilla01 					{ quality = 3; price = 17000; };
	class Exile_Car_Van_Box_Guerilla02 					{ quality = 3; price = 17000; };
	class Exile_Car_Van_Box_Guerilla03 					{ quality = 3; price = 17000; };
	class Exile_Car_Van_Box_Guerilla04 					{ quality = 3; price = 17000; };
	class Exile_Car_Van_Box_Guerilla05 					{ quality = 3; price = 17000; };
	class Exile_Car_Van_Box_Guerilla06 					{ quality = 3; price = 17000; };
	class Exile_Car_Van_Box_Guerilla07 					{ quality = 3; price = 17000; };
	class Exile_Car_Van_Box_Guerilla08 					{ quality = 3; price = 17000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Black 						{ quality = 3; price = 15000; };
	class Exile_Car_Van_Fuel_White 						{ quality = 3; price = 15000; };
	class Exile_Car_Van_Fuel_Red 						{ quality = 3; price = 15000; };
	class Exile_Car_Van_Fuel_Guerilla01 				{ quality = 3; price = 15000; };
	class Exile_Car_Van_Fuel_Guerilla02 				{ quality = 3; price = 15000; };
	class Exile_Car_Van_Fuel_Guerilla03 				{ quality = 3; price = 15000; };

	///////////////////////////////////////////////////////////////////////////////
	// Zamak
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Zamak 								{ quality = 4; price = 43000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Water Scooter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_WaterScooter						{ quality = 2; price = 800; };
	
	///////////////////////////////////////////////////////////////////////////////
	// RHIB
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RHIB								{ quality = 3; price = 1500; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Ceaser BTT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_Ceasar							{ quality = 2; price = 15000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_BlackfishInfantry							{ quality = 6; price = 60000; };
	class Exile_Plane_BlackfishVehicle							{ quality = 6; price = 60000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Prowler
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_ProwlerLight							{ quality = 3; price = 22000; };
	class Exile_Car_ProwlerUnarmed							{ quality = 3; price = 22000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Qilin
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_QilinUnarmed							{ quality = 3; price = 21000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// MB 4WD
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_MB4WD							{ quality = 2; price = 15000; };
	class Exile_Car_MB4WDOpen							{ quality = 2; price = 15000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Flags
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_FlagStolen1						{ quality = 1; price = 5000;  sellPrice = 5000;  };
	class Exile_Item_FlagStolen2						{ quality = 1; price = 10000; sellPrice = 10000; };
	class Exile_Item_FlagStolen3						{ quality = 1; price = 15000; sellPrice = 15000; };
	class Exile_Item_FlagStolen4						{ quality = 1; price = 20000; sellPrice = 20000; };
	class Exile_Item_FlagStolen5						{ quality = 1; price = 25000; sellPrice = 25000; };
	class Exile_Item_FlagStolen6						{ quality = 1; price = 30000; sellPrice = 30000; };
	class Exile_Item_FlagStolen7						{ quality = 1; price = 35000; sellPrice = 35000; };
	class Exile_Item_FlagStolen8						{ quality = 1; price = 40000; sellPrice = 40000; };
	class Exile_Item_FlagStolen9						{ quality = 1; price = 45000; sellPrice = 45000; };
	class Exile_Item_FlagStolen10						{ quality = 1; price = 50000; sellPrice = 50000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// CUP Weapons #CUPEDITS
	///////////////////////////////////////////////////////////////////////////////
	class CUP_arifle_AK74										{ quality = 1; price = 550; };
	class CUP_arifle_AK74M										{ quality = 1; price = 550; };
	class CUP_arifle_AK74_GL									{ quality = 1; price = 550; };
	class CUP_arifle_AK74_GL_kobra								{ quality = 1; price = 550; };
	class CUP_arifle_AKS										{ quality = 1; price = 550; };
	class CUP_arifle_AKS_Gold									{ quality = 1; price = 550; };
	class CUP_arifle_AKS74										{ quality = 1; price = 550; };
	class CUP_arifle_AKS74_kobra								{ quality = 1; price = 550; };
	class CUP_arifle_AKS74_pso									{ quality = 1; price = 550; };
	class CUP_arifle_AKS74_NSPU									{ quality = 1; price = 550; };
	class CUP_arifle_AKS74_Goshawk								{ quality = 1; price = 550; };
	class CUP_arifle_AKS74U										{ quality = 1; price = 550; };
	class CUP_arifle_AKS74UN_kobra_snds							{ quality = 1; price = 550; };
	class CUP_arifle_AK107										{ quality = 1; price = 550; };
	class CUP_arifle_AK107_kobra								{ quality = 1; price = 550; };
	class CUP_arifle_AK107_pso									{ quality = 1; price = 550; };
	class CUP_arifle_AK107_GL									{ quality = 1; price = 550; };
	class CUP_arifle_AK107_GL_kobra								{ quality = 1; price = 550; };
	class CUP_arifle_AK107_GL_pso								{ quality = 1; price = 550; };
	class CUP_arifle_AKM										{ quality = 1; price = 550; };
	class CUP_arifle_CZ805_A1									{ quality = 1; price = 550; };
	class CUP_arifle_CZ805_A1_Holo_Laser						{ quality = 1; price = 550; };
	class CUP_arifle_CZ805_A1_Aco_Laser							{ quality = 1; price = 550; };
	class CUP_arifle_CZ805_A1_MRCO_Laser						{ quality = 1; price = 550; };
	class CUP_arifle_CZ805_A1_ZDDot_Laser						{ quality = 1; price = 550; };
	class CUP_arifle_CZ805_GL									{ quality = 1; price = 550; };
	class CUP_arifle_CZ805_GL_Hamr_Laser						{ quality = 1; price = 550; };
	class CUP_arifle_CZ805_GL_ZDDot_Laser						{ quality = 1; price = 550; };
	class CUP_arifle_CZ805_A2									{ quality = 1; price = 550; };
	class CUP_arifle_CZ805_A2_Holo_Laser						{ quality = 1; price = 550; };
	class CUP_arifle_CZ805_A2_Aco_Laser							{ quality = 1; price = 550; };
	class CUP_arifle_CZ805_A2_ZDDot_Flashlight_Snds				{ quality = 1; price = 550; };
	class CUP_arifle_CZ805_B									{ quality = 1; price = 550; };
	class CUP_arifle_CZ805_B_GL									{ quality = 1; price = 550; };
	class CUP_arifle_CZ805B_GL_ACOG_Laser						{ quality = 1; price = 550; };
	class CUP_arifle_FNFAL										{ quality = 1; price = 550; };
	class CUP_arifle_FNFAL_railed								{ quality = 1; price = 550; };
	class CUP_arifle_FNFAL_ANPVS4								{ quality = 1; price = 550; };
	class CUP_arifle_G36A										{ quality = 1; price = 550; };
	class CUP_arifle_G36A_camo									{ quality = 1; price = 550; };
	class CUP_arifle_G36K										{ quality = 1; price = 550; };
	class CUP_arifle_G36K_camo									{ quality = 1; price = 550; };
	class CUP_arifle_G36C										{ quality = 1; price = 550; };
	class CUP_arifle_G36C_holo_snds								{ quality = 1; price = 550; };
	class CUP_arifle_G36C_camo									{ quality = 1; price = 550; };
	class CUP_arifle_G36C_camo_holo_snds						{ quality = 1; price = 550; };
	class CUP_arifle_L85A2										{ quality = 1; price = 550; };
	class CUP_arifle_L85A2_Holo_laser							{ quality = 1; price = 550; };
	class CUP_arifle_L85A2_SUSAT_Laser							{ quality = 1; price = 550; };
	class CUP_arifle_L85A2_CWS_Laser							{ quality = 1; price = 550; };
	class CUP_arifle_L85A2_ACOG_Laser							{ quality = 1; price = 550; };
	class CUP_arifle_L85A2_GL									{ quality = 1; price = 550; };
	class CUP_arifle_L85A2_GL_Holo_laser						{ quality = 1; price = 550; };
	class CUP_arifle_L85A2_GL_SUSAT_Laser						{ quality = 1; price = 550; };
	class CUP_arifle_L85A2_GL_ACOG_Laser						{ quality = 1; price = 550; };
	class CUP_arifle_M16A2										{ quality = 1; price = 550; };
	class CUP_arifle_M16A2_GL									{ quality = 1; price = 550; };
	class CUP_arifle_M16A4_Base									{ quality = 1; price = 550; };
	class CUP_arifle_M16A4_GL									{ quality = 1; price = 550; };
	class CUP_arifle_M16A4_Aim_Laser							{ quality = 1; price = 550; };
	class CUP_arifle_M16A4_ACOG_Laser							{ quality = 1; price = 550; };
	class CUP_arifle_M16A4_GL_Laser								{ quality = 1; price = 550; };
	class CUP_arifle_M16A4_GL_ACOG_Laser						{ quality = 1; price = 550; };
	class CUP_arifle_M4A1_BUIS_GL								{ quality = 1; price = 550; };
	class CUP_arifle_M4A1_BUIS_camo_GL							{ quality = 1; price = 550; };
	class CUP_arifle_M4A1_BUIS_desert_GL						{ quality = 1; price = 550; };
	class CUP_arifle_M4A1										{ quality = 1; price = 550; };
	class CUP_arifle_M4A1_camo									{ quality = 1; price = 550; };
	class CUP_arifle_M4A1_black									{ quality = 1; price = 550; };
	class CUP_arifle_M4A1_desert								{ quality = 1; price = 550; };
	class CUP_arifle_M4A3_desert								{ quality = 1; price = 550; };
	class CUP_arifle_M4A1_camo_Aim								{ quality = 1; price = 550; };
	class CUP_arifle_M4A3_desert_Aim_Flashlight					{ quality = 1; price = 550; };
	class CUP_arifle_M4A3_desert_GL_ACOG_Laser					{ quality = 1; price = 550; };
	class CUP_arifle_M4A1_Aim									{ quality = 1; price = 550; };
	class CUP_arifle_M4A1_camo_AIM_snds							{ quality = 1; price = 550; };
	class CUP_arifle_M4A1_GL_Holo_Flashlight					{ quality = 1; price = 550; };
	class CUP_arifle_M4A1_GL_ACOG_Flashlight					{ quality = 1; price = 550; };
	class CUP_arifle_M4A1_camo_GL_Holo_Flashlight				{ quality = 1; price = 550; };
	class CUP_arifle_M4A1_camo_GL_Holo_Flashlight_Snds			{ quality = 1; price = 550; };
	class CUP_arifle_Sa58P										{ quality = 1; price = 550; };
	class CUP_arifle_Sa58V										{ quality = 1; price = 550; };
	class CUP_arifle_Sa58V_ACOG_Laser							{ quality = 1; price = 550; };
	class CUP_arifle_Sa58V_Aim_Laser							{ quality = 1; price = 550; };
	class CUP_arifle_Sa58RIS1									{ quality = 1; price = 550; };
	class CUP_arifle_Sa58RIS1_Aco_Laser							{ quality = 1; price = 550; };
	class CUP_arifle_Sa58RIS2									{ quality = 1; price = 550; };
	class CUP_arifle_Sa58RIS2_Arco_Laser						{ quality = 1; price = 550; };
	class CUP_arifle_Sa58RIS2_gl								{ quality = 1; price = 550; };
	class CUP_arifle_Sa58P_des									{ quality = 1; price = 550; };
	class CUP_arifle_Sa58V_camo									{ quality = 1; price = 550; };
	class CUP_arifle_Sa58RIS1_des								{ quality = 1; price = 550; };
	class CUP_arifle_Sa58RIS1_camo_Aco_Laser					{ quality = 1; price = 550; };
	class CUP_arifle_Sa58RIS2_camo								{ quality = 1; price = 550; };
	class CUP_arifle_Sa58RIS2_camo_Arco_Laser					{ quality = 1; price = 550; };
	class CUP_arifle_Mk16_STD										{ quality = 1; price = 550; };
	class CUP_arifle_Mk16_STD_FG									{ quality = 1; price = 550; };
	class CUP_arifle_Mk16_STD_FG_Holo_Laser							{ quality = 1; price = 550; };
	class CUP_arifle_Mk16_STD_FG_LeupoldMk4CQT_Laser				{ quality = 1; price = 550; };
	class CUP_arifle_Mk16_STD_SFG									{ quality = 1; price = 550; };
	class CUP_arifle_Mk16_STD_EGLM									{ quality = 1; price = 550; };
	class CUP_arifle_Mk16_STD_EGLM_ACOG_Laser						{ quality = 1; price = 550; };
	class CUP_arifle_Mk16_STD_EGLM_ANPAS13c1_Laser_mfsup			{ quality = 1; price = 550; };
	class CUP_arifle_Mk16_CQC										{ quality = 1; price = 550; };
	class CUP_arifle_Mk16_CQC_FG									{ quality = 1; price = 550; };
	class CUP_arifle_Mk16_CQC_FG_Aim_Laser_snds						{ quality = 1; price = 550; };
	class CUP_arifle_Mk16_CQC_SFG									{ quality = 1; price = 550; };
	class CUP_arifle_Mk16_CQC_SFG_Holo								{ quality = 1; price = 550; };
	class CUP_arifle_Mk16_CQC_EGLM									{ quality = 1; price = 550; };
	class CUP_arifle_Mk16_CQC_EGLM_Holo_Laser_mfsup					{ quality = 1; price = 550; };
	class CUP_arifle_Mk16_SV										{ quality = 1; price = 550; };
	class CUP_arifle_Mk17_CQC										{ quality = 1; price = 550; };
	class CUP_arifle_Mk17_CQC_FG									{ quality = 1; price = 550; };
	class CUP_arifle_Mk17_CQC_SFG									{ quality = 1; price = 550; };
	class CUP_arifle_Mk17_CQC_EGLM									{ quality = 1; price = 550; };
	class CUP_arifle_Mk17_STD										{ quality = 1; price = 550; };
	class CUP_arifle_Mk17_STD_FG									{ quality = 1; price = 550; };
	class CUP_arifle_Mk17_STD_SFG									{ quality = 1; price = 550; };
	class CUP_arifle_Mk17_STD_EGLM									{ quality = 1; price = 550; };
	class CUP_arifle_Mk17_CQC_SFG_Aim_mfsup							{ quality = 1; price = 550; };
	class CUP_arifle_Mk17_STD_FG_Aim_Laser_snds						{ quality = 1; price = 550; };
	class CUP_arifle_Mk17_STD_EGL_ElcanSpecter_Laser				{ quality = 1; price = 550; };
	class CUP_arifle_Mk17_STD_FG_ANPAS13c1_Laser_Snds				{ quality = 1; price = 550; };
	class CUP_arifle_Mk20										    { quality = 1; price = 550; };
	class CUP_arifle_Mk20_LeupoldMk4MRT								{ quality = 1; price = 550; };
	class CUP_arifle_Mk20_SB11420_snds								{ quality = 1; price = 550; };
	class CUP_arifle_XM8_Carbine									{ quality = 1; price = 550; };
	class CUP_arifle_XM8_Carbine_GL									{ quality = 1; price = 550; };
	class CUP_arifle_xm8_sharpshooter								{ quality = 1; price = 550; };
	class CUP_arifle_XM8_Compact									{ quality = 1; price = 550; };
	class CUP_arifle_XM8_Compact_Rail								{ quality = 1; price = 550; };
	class CUP_arifle_XM8_Compact_Holo_Flashlight					{ quality = 1; price = 550; };
	class CUP_arifle_XM8_Railed										{ quality = 1; price = 550; };
	class CUP_arifle_XM8_Railed_ANPAS13c1_Laser						{ quality = 1; price = 550; };
	class CUP_arifle_XM8_Railed_ANPAS13c1_Laser_snds				{ quality = 1; price = 550; };
	class CUP_arifle_XM8_Railed_Holo_Laser_snds						{ quality = 1; price = 550; };
	class CUP_arifle_XM8_Carbine_FG									{ quality = 1; price = 550; };
	class CUP_RPK_74												{ quality = 1; price = 550; };
	class CUP_lmg_Pecheneg											{ quality = 1; price = 550; };
	class CUP_Pecheneg												{ quality = 1; price = 550; };
	class CUP_lmg_PKM												{ quality = 1; price = 550; };
	class CUP_PK													{ quality = 1; price = 550; };
	class CUP_lmg_UK59												{ quality = 1; price = 550; };
	class CUP_UK59_ACR												{ quality = 1; price = 550; };
	class CUP_arifle_L86A2											{ quality = 1; price = 550; };
	class CUP_arifle_L86A2_ACOG										{ quality = 1; price = 550; };
	class CUP_lmg_L110A1											{ quality = 1; price = 550; };
	class CUP_lmg_L110A1_Aim_Laser									{ quality = 1; price = 550; };
	class CUP_BAF_L110A1_Aim										{ quality = 1; price = 550; };
	class CUP_lmg_L7A2												{ quality = 1; price = 550; };
	class CUP_BAF_L7A2_GPMG											{ quality = 1; price = 550; };
	class CUP_lmg_M249_ElcanM145_Laser								{ quality = 1; price = 550; };
	class CUP_lmg_M249_Laser										{ quality = 1; price = 550; };
	class CUP_lmg_M249_ANPAS13c2_Laser								{ quality = 1; price = 550; };
	class CUP_lmg_M249												{ quality = 1; price = 550; };
	class CUP_M249_m145_EP1											{ quality = 1; price = 550; };
	class CUP_lmg_M240												{ quality = 1; price = 550; };
	class CUP_lmg_M240_ElcanM143									{ quality = 1; price = 550; };
	class CUP_lmg_M60A4												{ quality = 1; price = 550; };
	class CUP_lmg_Mk48_des											{ quality = 1; price = 550; };
	class CUP_lmg_Mk48_wdl											{ quality = 1; price = 550; };
	class CUP_lmg_Mk48_des_Aim_Laser								{ quality = 1; price = 550; };
	class CUP_lmg_Mk48_wdl_Aim_Laser								{ quality = 1; price = 550; };
	class CUP_arifle_MG36											{ quality = 1; price = 550; };
	class CUP_arifle_MG36_camo										{ quality = 1; price = 550; };
	class CUP_MG36													{ quality = 1; price = 550; };
	class CUP_MG36_camo												{ quality = 1; price = 550; };
	class CUP_M249_EP1												{ quality = 1; price = 550; };
	class CUP_M249_TWS_EP1											{ quality = 1; price = 550; };
	class CUP_M249													{ quality = 1; price = 550; };
	class CUP_M240													{ quality = 1; price = 550; };
	class CUP_m240_scoped_EP1										{ quality = 1; price = 550; };
	class CUP_M240_veh_W											{ quality = 1; price = 550; };
	class CUP_M240_veh2_W											{ quality = 1; price = 550; };
	class CUP_M240_Coax_M1_Abrams_W									{ quality = 1; price = 550; };
	class CUP_M240_Loader_M1_Abrams_W								{ quality = 1; price = 550; };
	class CUP_M60A4_EP1												{ quality = 1; price = 550; };
	class CUP_Mk_48_DES_EP1											{ quality = 1; price = 550; };
	class CUP_Mk_48													{ quality = 1; price = 550; };
	class CUP_srifle_AWM_des										{ quality = 1; price = 550; };
	class CUP_srifle_AWM_wdl										{ quality = 1; price = 550; };
	class CUP_srifle_AWM_des_SBPMII									{ quality = 1; price = 550; };
	class CUP_srifle_AWM_wdl_SBPMII									{ quality = 1; price = 550; };
	class CUP_srifle_CZ550											{ quality = 1; price = 550; };
	class CUP_huntingrifle											{ quality = 1; price = 550; };
	class CUP_srifle_CZ750											{ quality = 1; price = 550; };
	class CUP_srifle_CZ750_SOS_bipod								{ quality = 1; price = 550; };
	class CUP_CZ_750_S1_ACR											{ quality = 1; price = 550; };
	class CUP_srifle_DMR											{ quality = 1; price = 550; };
	class CUP_srifle_DMR_LeupoldMk4									{ quality = 1; price = 550; };
	class CUP_srifle_M14											{ quality = 1; price = 550; };
	class CUP_srifle_M14_Aim										{ quality = 1; price = 550; };
	class CUP_DMR													{ quality = 1; price = 550; };
	class CUP_M14_EP1												{ quality = 1; price = 550; };
	class CUP_srifle_M24_des										{ quality = 1; price = 550; };
	class CUP_srifle_M24_wdl										{ quality = 1; price = 550; };
	class CUP_srifle_M24_ghillie									{ quality = 1; price = 550; };
	class CUP_srifle_M24_des_LeupoldMk4LRT							{ quality = 1; price = 550; };
	class CUP_srifle_M24_wdl_LeupoldMk4LRT							{ quality = 1; price = 550; };
	class CUP_M24													{ quality = 1; price = 550; };
	class CUP_M24_des_EP1											{ quality = 1; price = 550; };
	class CUP_srifle_M40A3											{ quality = 1; price = 550; };
	class CUP_M40A3													{ quality = 1; price = 550; };
	class CUP_M110_TWS_EP1											{ quality = 1; price = 550; };
	class CUP_M110_NVG_EP1											{ quality = 1; price = 550; };
	class CUP_srifle_M110											{ quality = 1; price = 550; };
	class CUP_srifle_M110_ANPAS13c2				{ quality = 1; price = 550; };
	class CUP_srifle_M110_ANPVS10				{ quality = 1; price = 550; };
	class CUP_SVD				{ quality = 1; price = 550; };
	class CUP_SVD_CAMO				{ quality = 1; price = 550; };
	class CUP_SVD_des_EP1				{ quality = 1; price = 550; };
	class CUP_SVD_NSPU_EP1				{ quality = 1; price = 550; };
	class CUP_srifle_SVD				{ quality = 1; price = 550; };
	class CUP_srifle_SVD_des				{ quality = 1; price = 550; };
	class CUP_srifle_SVD_des_ghillie_pso				{ quality = 1; price = 550; };
	class CUP_srifle_SVD_wdl_ghillie				{ quality = 1; price = 550; };
	class CUP_srifle_SVD_pso				{ quality = 1; price = 550; };
	class CUP_srifle_SVD_Des_pso				{ quality = 1; price = 550; };
	class CUP_srifle_SVD_NSPU				{ quality = 1; price = 550; };
	class CUP_srifle_VSSVintorez				{ quality = 1; price = 550; };
	class CUP_srifle_VSSVintorez_pso				{ quality = 1; price = 550; };
	class CUP_VSS_vintorez				{ quality = 1; price = 550; };
	class CUP_srifle_LeeEnfield				{ quality = 1; price = 550; };
	class CUP_LeeEnfield				{ quality = 1; price = 550; };
	class CUP_srifle_AS50				{ quality = 1; price = 550; };
	class CUP_srifle_AS50_SBPMII				{ quality = 1; price = 550; };
	class CUP_srifle_AS50_AMPAS13c2				{ quality = 1; price = 550; };
	class CUP_BAF_AS50_scoped				{ quality = 1; price = 550; };
	class CUP_PMC_AS50_scoped				{ quality = 1; price = 550; };
	class CUP_BAF_AS50_TWS				{ quality = 1; price = 550; };
	class CUP_PMC_AS50_TWS				{ quality = 1; price = 550; };
	class CUP_srifle_ksvk				{ quality = 1; price = 550; };
	class CUP_srifle_ksvk_PSO3				{ quality = 1; price = 550; };
	class CUP_ksvk				{ quality = 1; price = 550; };
	class CUP_srifle_M107_Base				{ quality = 1; price = 550; };
	class CUP_srifle_M107_LeupoldVX3				{ quality = 1; price = 550; };
	class CUP_srifle_M107_ANPAS13c2				{ quality = 1; price = 550; };
	class CUP_M107				{ quality = 1; price = 550; };
	class CUP_M107_TWS_EP1				{ quality = 1; price = 550; };
	class CUP_sgun_AA12				{ quality = 1; price = 550; };
	class CUP_AA12_PMC				{ quality = 1; price = 550; };
	class CUP_sgun_M1014				{ quality = 1; price = 550; };
	class CUP_M1014				{ quality = 1; price = 550; };
	class CUP_sgun_Saiga12K				{ quality = 1; price = 550; };
	class CUP_Saiga12K				{ quality = 1; price = 550; };
	class CUP_smg_bizon				{ quality = 1; price = 550; };
	class CUP_smg_bizon_snds				{ quality = 1; price = 550; };
	class CUP_bizon				{ quality = 1; price = 550; };
	class CUP_bizon_silenced				{ quality = 1; price = 550; };
	class CUP_smg_EVO				{ quality = 1; price = 550; };
	class CUP_smg_EVO_MRad_Flashlight				{ quality = 1; price = 550; };
	class CUP_smg_EVO_MRad_Flashlight_Snds				{ quality = 1; price = 550; };
	class CUP_Evo_mrad_ACR				{ quality = 1; price = 550; };
	class CUP_Evo_sd_ACR				{ quality = 1; price = 550; };
	class CUP_Evo_ACR				{ quality = 1; price = 550; };
	class CUP_smg_MP5SD6				{ quality = 1; price = 550; };
	class CUP_smg_MP5A5				{ quality = 1; price = 550; };
	class CUP_MP5SD				{ quality = 1; price = 550; };
	class CUP_MP5A5				{ quality = 1; price = 550; };
	class CUP_hgun_Colt1911 				{ quality = 1; price = 550; };
	class CUP_hgun_Colt1911_snds				{ quality = 1; price = 550; };
	class CUP_Colt1911				{ quality = 1; price = 550; };
	class CUP_hgun_Compact				{ quality = 1; price = 550; };
	class CUP_hgun_Duty				{ quality = 1; price = 550; };
	class CUP_hgun_Duty_M3X				{ quality = 1; price = 550; };
	class CUP_hgun_Phantom				{ quality = 1; price = 550; };
	class CUP_hgun_Phantom_Flashlight				{ quality = 1; price = 550; };
	class CUP_hgun_Phantom_Flashlight_snds				{ quality = 1; price = 550; };
	class CUP_CZ_75_D_COMPACT				{ quality = 1; price = 550; };
	class CUP_CZ_75_P_07_DUTY				{ quality = 1; price = 550; };
	class CUP_CZ_75_SP_01_PHANTOM				{ quality = 1; price = 550; };
	class CUP_CZ_75_SP_01_PHANTOM_SD				{ quality = 1; price = 550; };
	class CUP_hgun_glock17_flashlight				{ quality = 1; price = 550; };
	class CUP_hgun_glock17_flashlight_snds				{ quality = 1; price = 550; };
	class CUP_hgun_glock17_snds				{ quality = 1; price = 550; };
	class CUP_Glock17_EP1				{ quality = 1; price = 550; };
	class CUP_hgun_M9				{ quality = 1; price = 550; };
	class CUP_hgun_M9_snds				{ quality = 1; price = 550; };
	class CUP_M9				{ quality = 1; price = 550; };
	class CUP_M9SD				{ quality = 1; price = 550; };
	class CUP_hgun_Makarov				{ quality = 1; price = 550; };
	class CUP_Makarov				{ quality = 1; price = 550; };
	class CUP_MakarovSD				{ quality = 1; price = 550; };
	class CUP_hgun_PB6P9				{ quality = 1; price = 550; };
	class CUP_hgun_PB6P9_snds				{ quality = 1; price = 550; };
	class CUP_hgun_SA61				{ quality = 1; price = 550; };
	class CUP_Sa61_EP1				{ quality = 1; price = 550; };
	class CUP_hgun_MicroUzi				{ quality = 1; price = 550; };
	class CUP_hgun_MicroUzi_snds				{ quality = 1; price = 550; };
	class CUP_UZI_EP1				{ quality = 1; price = 550; };
	class CUP_UZI_SD_EP1				{ quality = 1; price = 550; };
	class CUP_hgun_TaurusTracker455				{ quality = 1; price = 550; };
	class CUP_Revolver_EP1				{ quality = 1; price = 550; };
	class CUP_hgun_TaurusTracker455_gold				{ quality = 1; price = 550; };
	class CUP_Revolver_gold_EP1				{ quality = 1; price = 550; };
	class CUP_glaunch_M32				{ quality = 1; price = 550; };
	class CUP_M32_EP1				{ quality = 1; price = 550; };
	class CUP_glaunch_M79				{ quality = 1; price = 550; };
	class CUP_M79_EP1				{ quality = 1; price = 550; };
	class CUP_glaunch_Mk13				{ quality = 1; price = 550; };
	class CUP_Mk13_EP1				{ quality = 1; price = 550; };
	class CUP_launch_9K32Strela				{ quality = 1; price = 550; };
	class CUP_Strela				{ quality = 1; price = 550; };
	class CUP_launch_Igla				{ quality = 1; price = 550; };
	class CUP_Igla				{ quality = 1; price = 550; };
	class CUP_launch_FIM92Stinger				{ quality = 1; price = 550; };
	class CUP_Stinger				{ quality = 1; price = 550; };
	class CUP_launch_M47				{ quality = 1; price = 550; };
	class CUP_M47Launcher_EP1				{ quality = 1; price = 550; };
	class CUP_launch_MAAWS				{ quality = 1; price = 550; };
	class CUP_launch_MAAWS_Scope				{ quality = 1; price = 550; };
	class CUP_MAAWS				{ quality = 1; price = 550; };
	class CUP_launch_Metis				{ quality = 1; price = 550; };
	class CUP_MetisLauncher				{ quality = 1; price = 550; };
	class CUP_launch_NLAW				{ quality = 1; price = 550; };
	class CUP_BAF_NLAW_Launcher				{ quality = 1; price = 550; };
	class CUP_launch_Javelin				{ quality = 1; price = 550; };
	class CUP_Javelin				{ quality = 1; price = 550; };
	class CUP_launch_Mk153Mod0				{ quality = 1; price = 550; };
	class CUP_launch_Mk153Mod0_SMAWOptics				{ quality = 1; price = 550; };
	class CUP_SMAW				{ quality = 1; price = 550; };
	class CUP_launch_RPG7V				{ quality = 1; price = 550; };
	class CUP_RPG7V				{ quality = 1; price = 550; };
	class CUP_launch_RPG18				{ quality = 1; price = 550; };
	class CUP_RPG18				{ quality = 1; price = 550; };
	class CUP_launch_M136				{ quality = 1; price = 550; };
	class CUP_M136				{ quality = 1; price = 550; };
	class CUP_30Rnd_545x39_AK_M 				{ quality = 1; price = 30; };
	class CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M 				{ quality = 1; price = 30; };
	class CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M 				{ quality = 1; price = 30; };
	class CUP_30Rnd_TE1_White_Tracer_545x39_AK_M 				{ quality = 1; price = 30; };
	class CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M 				{ quality = 1; price = 30; };
	class CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M 				{ quality = 1; price = 30; };
	class CUP_30Rnd_556x45_G36 				{ quality = 1; price = 30; };
	class CUP_30Rnd_TE1_Red_Tracer_556x45_G36 				{ quality = 1; price = 30; };
	class CUP_30Rnd_TE1_Green_Tracer_556x45_G36 				{ quality = 1; price = 30; };
	class CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36 				{ quality = 1; price = 30; };
	class CUP_100Rnd_556x45_BetaCMag 				{ quality = 1; price = 30; };
	class CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag 				{ quality = 1; price = 30; };
	class CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag 				{ quality = 1; price = 30; };
	class CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag 				{ quality = 1; price = 30; };
	class CUP_100Rnd_TE4_Green_Tracer_556x45_M249 				{ quality = 1; price = 30; };
	class CUP_100Rnd_TE4_Red_Tracer_556x45_M249 				{ quality = 1; price = 30; };
	class CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249 				{ quality = 1; price = 30; };
	class CUP_200Rnd_TE4_Green_Tracer_556x45_M249 				{ quality = 1; price = 30; };
	class CUP_200Rnd_TE4_Red_Tracer_556x45_M249 				{ quality = 1; price = 30; };
	class CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249 				{ quality = 1; price = 30; };
	class CUP_200Rnd_TE1_Red_Tracer_556x45_M249 				{ quality = 1; price = 30; };
	class CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1 				{ quality = 1; price = 30; };
	class CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1 				{ quality = 1; price = 30; };
	class CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1 				{ quality = 1; price = 30; };
	class CUP_10x_303_M 				{ quality = 1; price = 30; };
	class CUP_30Rnd_Sa58_M 				{ quality = 1; price = 30; };
	class CUP_30Rnd_Sa58_M_TracerG 				{ quality = 1; price = 30; };
	class CUP_30Rnd_Sa58_M_TracerR 				{ quality = 1; price = 30; };
	class CUP_30Rnd_Sa58_M_TracerY 				{ quality = 1; price = 30; };
	class CUP_30Rnd_762x39_AK47_M 				{ quality = 1; price = 30; };
	class CUP_5Rnd_762x51_M24 				{ quality = 1; price = 30; };
	class CUP_5x_22_LR_17_HMR_M 				{ quality = 1; price = 30; };
	class CUP_10Rnd_762x51_CZ750 				{ quality = 1; price = 30; };
	class CUP_10Rnd_762x51_CZ750_Tracer 				{ quality = 1; price = 30; };
	class CUP_20Rnd_762x51_FNFAL_M 				{ quality = 1; price = 30; };
	class CUP_20Rnd_762x51_DMR 				{ quality = 1; price = 30; };
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR 				{ quality = 1; price = 30; };
	class CUP_20Rnd_TE1_Red_Tracer_762x51_DMR 				{ quality = 1; price = 30; };
	class CUP_20Rnd_TE1_Green_Tracer_762x51_DMR 				{ quality = 1; price = 30; };
	class CUP_20Rnd_TE1_White_Tracer_762x51_DMR 				{ quality = 1; price = 30; };
	class CUP_20Rnd_762x51_B_SCAR 				{ quality = 1; price = 30; };
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR 				{ quality = 1; price = 30; };
	class CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR 				{ quality = 1; price = 30; };
	class CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR 				{ quality = 1; price = 30; };
	class CUP_20Rnd_TE1_White_Tracer_762x51_SCAR 				{ quality = 1; price = 30; };
	class CUP_20Rnd_762x51_B_M110 				{ quality = 1; price = 30; };
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110 				{ quality = 1; price = 30; };
	class CUP_20Rnd_TE1_Red_Tracer_762x51_M110 				{ quality = 1; price = 30; };
	class CUP_20Rnd_TE1_Green_Tracer_762x51_M110 				{ quality = 1; price = 30; };
	class CUP_20Rnd_TE1_White_Tracer_762x51_M110 				{ quality = 1; price = 30; };
	class CUP_20Rnd_762x51_CZ805B 				{ quality = 1; price = 30; };
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B 				{ quality = 1; price = 30; };
	class CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B 				{ quality = 1; price = 30; };
	class CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B 				{ quality = 1; price = 30; };
	class CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B 				{ quality = 1; price = 30; };
	class CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M 				{ quality = 1; price = 30; };
	class CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M 				{ quality = 1; price = 30; };
	class CUP_100Rnd_TE4_White_Tracer_762x51_M240_M 				{ quality = 1; price = 30; };
	class CUP_200Rnd_TE4_White_Tracer_762x51_M240_M 				{ quality = 1; price = 30; };
	class CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M 				{ quality = 1; price = 30; };
	class CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M 				{ quality = 1; price = 30; };
	class CUP_1200Rnd_TE4_White_Tracer_762x51_M240_M 				{ quality = 1; price = 30; };
	class CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M 				{ quality = 1; price = 30; };
	class CUP_2000Rnd_TE5_White_Tracer_762x51_M134_M 				{ quality = 1; price = 30; };
	class CUP_2000Rnd_TE1_White_Tracer_762x51_M134_M 				{ quality = 1; price = 30; };
	class CUP_2000Rnd_TE5_Red_Tracer_762x51_M134_M 				{ quality = 1; price = 30; };
	class CUP_2000Rnd_TE1_Red_Tracer_762x51_M134_M 				{ quality = 1; price = 30; };
	class CUP_4000Rnd_TE5_White_Tracer_762x51_M134_M 				{ quality = 1; price = 30; };
	class CUP_4000Rnd_TE5_Red_Tracer_762x51_M134_M 				{ quality = 1; price = 30; };
	class CUP_10Rnd_762x54_SVD_M 				{ quality = 1; price = 30; };
	class CUP_50Rnd_UK59_762x54R_Tracer 				{ quality = 1; price = 30; };
	class CUP_10Rnd_B_765x17_Ball_M 				{ quality = 1; price = 30; };
	class CUP_20Rnd_B_765x17_Ball_M 				{ quality = 1; price = 30; };
	class CUP_5Rnd_86x70_L115A1 				{ quality = 1; price = 30; };
	class CUP_8Rnd_9x18_Makarov_M 				{ quality = 1; price = 30; };
	class CUP_8Rnd_9x18_MakarovSD_M 				{ quality = 1; price = 30; };
	class CUP_10Rnd_9x19_Compact 				{ quality = 1; price = 30; };
	class CUP_15Rnd_9x19_M9 				{ quality = 1; price = 30; };
	class CUP_17Rnd_9x19_glock17 				{ quality = 1; price = 30; };
	class CUP_18Rnd_9x19_Phantom 				{ quality = 1; price = 30; };
	class CUP_30Rnd_9x19_EVO 				{ quality = 1; price = 30; };
	class CUP_30Rnd_9x19_UZI 				{ quality = 1; price = 30; };
	class CUP_30Rnd_9x19_MP5 				{ quality = 1; price = 30; };
	class CUP_64Rnd_9x19_Bizon_M 				{ quality = 1; price = 30; };
	class CUP_64Rnd_Green_Tracer_9x19_Bizon_M 				{ quality = 1; price = 30; };
	class CUP_64Rnd_Red_Tracer_9x19_Bizon_M 				{ quality = 1; price = 30; };
	class CUP_64Rnd_White_Tracer_9x19_Bizon_M 				{ quality = 1; price = 30; };
	class CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M 				{ quality = 1; price = 30; };
	class CUP_10Rnd_9x39_SP5_VSS_M 				{ quality = 1; price = 30; };
	class CUP_20Rnd_9x39_SP5_VSS_M 				{ quality = 1; price = 30; };
	class CUP_6Rnd_45ACP_M 				{ quality = 1; price = 30; };
	class CUP_7Rnd_45ACP_1911 				{ quality = 1; price = 30; };
	class CUP_5Rnd_127x99_as50_M 				{ quality = 1; price = 30; };
	class CUP_10Rnd_127x99_M107 				{ quality = 1; price = 30; };
	class CUP_100Rnd_127x99_M 				{ quality = 1; price = 30; };
	class CUP_100Rnd_TE4_Red_Tracer_127x99_M 				{ quality = 1; price = 30; };
	class CUP_100Rnd_TE4_Green_Tracer_127x99_M 				{ quality = 1; price = 30; };
	class CUP_100Rnd_TE4_Yellow_Tracer_127x99_M 				{ quality = 1; price = 30; };
	class CUP_100Rnd_TE4_White_Tracer_127x99_M 				{ quality = 1; price = 30; };
	class CUP_100Rnd_TE1_Red_Tracer_127x99_M 				{ quality = 1; price = 30; };
	class CUP_100Rnd_TE1_Green_Tracer_127x99_M 				{ quality = 1; price = 30; };
	class CUP_100Rnd_TE1_Yellow_Tracer_127x99_M 				{ quality = 1; price = 30; };
	class CUP_100Rnd_TE1_White_Tracer_127x99_M 				{ quality = 1; price = 30; };
	class CUP_100Rnd_TE3_LRT5_Green_Tracer_127x107_DSHKM_M 				{ quality = 1; price = 30; };
	class CUP_100Rnd_TE3_LRT5_127x107_DSHKM_M 				{ quality = 1; price = 30; };
	class CUP_5Rnd_127x108_KSVK_M 				{ quality = 1; price = 30; };
	class CUP_8Rnd_B_Saiga12_74Slug_M 				{ quality = 1; price = 30; };
	class CUP_8Rnd_B_Saiga12_74Pellets_M 				{ quality = 1; price = 30; };
	class CUP_8Rnd_B_Beneli_74Slug 				{ quality = 1; price = 30; };
	class CUP_8Rnd_B_Beneli_74Pellets 				{ quality = 1; price = 30; };
	class CUP_20Rnd_B_AA12_Pellets 				{ quality = 1; price = 30; };
	class CUP_20Rnd_B_AA12_74Slug 				{ quality = 1; price = 30; };
	class CUP_20Rnd_B_AA12_HE 				{ quality = 1; price = 30; };
	class CUP_750Rnd_TE2_Red_Tracer_M197_20mm_AP_M 				{ quality = 1; price = 30; };
	class CUP_50Rnd_TE2_LRT4_Green_Tracer_23mm_KPVB_APHE_M 				{ quality = 1; price = 30; };
	class CUP_520Rnd_TE2_23mm_GSh23L_APHE_M 				{ quality = 1; price = 30; };
	class CUP_300Rnd_TE1_White_Tracer_25mm_GAU12_M 				{ quality = 1; price = 30; };
	class CUP_300Rnd_TE1_Red_Tracer_25mm_GAU12_M 				{ quality = 1; price = 30; };
	class CUP_300Rnd_TE1_Green_Tracer_25mm_GAU12_M 				{ quality = 1; price = 30; };
	class CUP_300Rnd_TE1_Yellow_Tracer_25mm_GAU12_M 				{ quality = 1; price = 30; };
	class CUP_29Rnd_30mm_AGS30_M 				{ quality = 1; price = 30; };
	class CUP_150Rnd_TE1_White_Tracer_30mmAP_2A42_M 				{ quality = 1; price = 30; };
	class CUP_150Rnd_TE1_Red_Tracer_30mmAP_2A42_M 				{ quality = 1; price = 30; };
	class CUP_150Rnd_TE1_Green_Tracer_30mmAP_2A42_M 				{ quality = 1; price = 30; };
	class CUP_150Rnd_TE1_Yellow_Tracer_30mmAP_2A42_M 				{ quality = 1; price = 30; };
	class CUP_150Rnd_TE1_White_Tracer_30mmHE_2A42_M 				{ quality = 1; price = 30; };
	class CUP_150Rnd_TE1_Red_Tracer_30mmHE_2A42_M 				{ quality = 1; price = 30; };
	class CUP_150Rnd_TE1_Green_Tracer_30mmHE_2A42_M 				{ quality = 1; price = 30; };
	class CUP_150Rnd_TE1_Yellow_Tracer_30mmHE_2A42_M 				{ quality = 1; price = 30; };
	class CUP_230Rnd_TE1_White_Tracer_30mmAP_2A42_M 				{ quality = 1; price = 30; };
	class CUP_230Rnd_TE1_Red_Tracer_30mmAP_2A42_M 				{ quality = 1; price = 30; };
	class CUP_230Rnd_TE1_Green_Tracer_30mmAP_2A42_M 				{ quality = 1; price = 30; };
	class CUP_230Rnd_TE1_Yellow_Tracer_30mmAP_2A42_M 				{ quality = 1; price = 30; };
	class CUP_230Rnd_TE1_White_Tracer_30mmHE_2A42_M 				{ quality = 1; price = 30; };
	class CUP_230Rnd_TE1_Red_Tracer_30mmHE_2A42_M 				{ quality = 1; price = 30; };
	class CUP_230Rnd_TE1_Green_Tracer_30mmHE_2A42_M 				{ quality = 1; price = 30; };
	class CUP_230Rnd_TE1_Yellow_Tracer_30mmHE_2A42_M 				{ quality = 1; price = 30; };
	class CUP_250Rnd_TE1_White_Tracer_30mmHE_2A42_M 				{ quality = 1; price = 30; };
	class CUP_250Rnd_TE1_Red_Tracer_30mmHE_2A42_M 				{ quality = 1; price = 30; };
	class CUP_250Rnd_TE1_Green_Tracer_30mmHE_2A42_M 				{ quality = 1; price = 30; };
	class CUP_250Rnd_TE1_Yellow_Tracer_30mmHE_2A42_M 				{ quality = 1; price = 30; };
	class CUP_250Rnd_TE1_White_Tracer_30mmAP_2A42_M 				{ quality = 1; price = 30; };
	class CUP_250Rnd_TE1_Red_Tracer_30mmAP_2A42_M 				{ quality = 1; price = 30; };
	class CUP_250Rnd_TE1_Green_Tracer_30mmAP_2A42_M 				{ quality = 1; price = 30; };
	class CUP_250Rnd_TE1_Yellow_Tracer_30mmAP_2A42_M 				{ quality = 1; price = 30; };
	class CUP_400Rnd_30mm_AGS17_M 				{ quality = 1; price = 30; };
	class CUP_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M 				{ quality = 1; price = 30; };
	class CUP_1200Rnd_TE1_Green_Tracer_30x113mm_M789_HEDP_M 				{ quality = 1; price = 30; };
	class CUP_1200Rnd_TE1_Yellow_Tracer_30x113mm_M789_HEDP_M 				{ quality = 1; price = 30; };
	class CUP_1200Rnd_TE1_White_Tracer_30x113mm_M789_HEDP_M 				{ quality = 1; price = 30; };
	class CUP_1Rnd_HE_M203 				{ quality = 1; price = 30; };
	class CUP_1Rnd_HEDP_M203 				{ quality = 1; price = 30; };
	class CUP_1Rnd_HE_GP25_M 				{ quality = 1; price = 30; };
	class CUP_1Rnd_SMOKE_GP25_M 				{ quality = 1; price = 30; };
	class CUP_1Rnd_Smoke_M203 				{ quality = 1; price = 30; };
	class CUP_1Rnd_SmokeRed_GP25_M 				{ quality = 1; price = 30; };
	class CUP_1Rnd_SmokeRed_M203 				{ quality = 1; price = 30; };
	class CUP_1Rnd_SmokeGreen_GP25_M 				{ quality = 1; price = 30; };
	class CUP_1Rnd_SmokeGreen_M203 				{ quality = 1; price = 30; };
	class CUP_1Rnd_SmokeYellow_GP25_M 				{ quality = 1; price = 30; };
	class CUP_1Rnd_SmokeYellow_M203 				{ quality = 1; price = 30; };
	class CUP_FlareWhite_GP25_M 				{ quality = 1; price = 30; };
	class CUP_FlareWhite_M203 				{ quality = 1; price = 30; };
	class CUP_FlareRed_GP25_M 				{ quality = 1; price = 30; };
	class CUP_FlareRed_M203 				{ quality = 1; price = 30; };
	class CUP_FlareGreen_GP25_M 				{ quality = 1; price = 30; };
	class CUP_FlareGreen_M203 				{ quality = 1; price = 30; };
	class CUP_FlareYellow_GP25_M 				{ quality = 1; price = 30; };
	class CUP_FlareYellow_M203 				{ quality = 1; price = 30; };
	class CUP_6Rnd_HE_M203 				{ quality = 1; price = 30; };
	class CUP_6Rnd_Smoke_M203 				{ quality = 1; price = 30; };
	class CUP_6Rnd_SmokeRed_M203 				{ quality = 1; price = 30; };
	class CUP_6Rnd_SmokeGreen_M203 				{ quality = 1; price = 30; };
	class CUP_6Rnd_SmokeYellow_M203 				{ quality = 1; price = 30; };
	class CUP_6Rnd_FlareWhite_M203 				{ quality = 1; price = 30; };
	class CUP_6Rnd_FlareGreen_M203 				{ quality = 1; price = 30; };
	class CUP_6Rnd_FlareRed_M203 				{ quality = 1; price = 30; };
	class CUP_6Rnd_FlareYellow_M203 				{ quality = 1; price = 30; };
	class CUP_32Rnd_40mm_MK19_M 				{ quality = 1; price = 30; };
	class CUP_48Rnd_40mm_MK19_M 				{ quality = 1; price = 30; };
	class CUP_20Rnd_TE1_Red_Tracer_120mmHE_M256_Cannon_M 				{ quality = 1; price = 30; };
	class CUP_20Rnd_TE1_Red_Tracer_120mmSABOT_M256_Cannon_M 				{ quality = 1; price = 30; };
	class CUP_HandGrenade_M67 				{ quality = 1; price = 30; };
	class CUP_HandGrenade_L109A1_HE	 				{ quality = 1; price = 30; };
	class CUP_HandGrenade_L109A2_HE 				{ quality = 1; price = 30; };
	class CUP_HandGrenade_RGD5 				{ quality = 1; price = 30; };
	class CUP_HandGrenade_RGO 				{ quality = 1; price = 30; };
	class CUP_TimeBomb_M 				{ quality = 1; price = 30; };
	class CUP_Mine_M 				{ quality = 1; price = 30; };
	class CUP_MineE_M 				{ quality = 1; price = 30; };
	class CUP_PipeBomb_M 				{ quality = 1; price = 30; };
	class CUP_IED_V1_M 				{ quality = 1; price = 30; };
	class CUP_IED_V2_M 				{ quality = 1; price = 30; };
	class CUP_IED_V3_M 				{ quality = 1; price = 30; };
	class CUP_IED_V4_M 				{ quality = 1; price = 30; };
	class CUP_Strela_2_M 				{ quality = 1; price = 30; };
	class CUP_Stinger_M 				{ quality = 1; price = 30; };
	class CUP_Igla_M 				{ quality = 1; price = 30; };
	class CUP_Javelin_M 				{ quality = 1; price = 30; };
	class CUP_M136_M 				{ quality = 1; price = 30; };
	class CUP_Dragon_EP1_M 				{ quality = 1; price = 30; };
	class CUP_MAAWS_HEDP_M 				{ quality = 1; price = 30; };
	class CUP_MAAWS_HEAT_M 				{ quality = 1; price = 30; };
	class CUP_AT13_M 				{ quality = 1; price = 30; };
	class CUP_NLAW_M 				{ quality = 1; price = 30; };
	class CUP_RPG18_M 				{ quality = 1; price = 30; };
	class CUP_PG7V_M 				{ quality = 1; price = 30; };
	class CUP_PG7VL_M 				{ quality = 1; price = 30; };
	class CUP_PG7VR_M 				{ quality = 1; price = 30; };
	class CUP_OG7_M 				{ quality = 1; price = 30; };
	class CUP_SMAW_HEDP_M_N 				{ quality = 1; price = 30; };
	class CUP_SMAW_HEAA_M_N 				{ quality = 1; price = 30; };
	class CUP_PG9_AT_M 				{ quality = 1; price = 30; };
	class CUP_OG9_HE_M 				{ quality = 1; price = 30; };
	class CUP_8Rnd_AT5_BMP2_M 				{ quality = 1; price = 30; };
	class CUP_5Rnd_AT5_BRDM2_M 				{ quality = 1; price = 30; };
	class CUP_2Rnd_Hydra_Pod_7_M 				{ quality = 1; price = 30; };
	class CUP_4Rnd_Hydra_Pod_7_M 				{ quality = 1; price = 30; };
	class CUP_14Rnd_FFAR_M 				{ quality = 1; price = 30; };
	class CUP_28Rnd_FFAR_M 				{ quality = 1; price = 30; };
	class CUP_38Rnd_FFAR_M 				{ quality = 1; price = 30; };
	class CUP_38Rnd_FFAR_AH64Out_M 				{ quality = 1; price = 30; };
	class CUP_38Rnd_FFAR_AH64In_M 				{ quality = 1; price = 30; };
	class CUP_14Rnd_FFAR_Mid_M 				{ quality = 1; price = 30; };
	class CUP_14Rnd_FFAR_In_M 				{ quality = 1; price = 30; };
	class CUP_8Rnd_AGM114L_Hellfire_II_M 				{ quality = 1; price = 30; };
	class CUP_4Rnd_AGM114L_Hellfire_II_M 				{ quality = 1; price = 30; };
	class CUP_8Rnd_AGM114K_Hellfire_II_M 				{ quality = 1; price = 30; };
	class CUP_4Rnd_AGM114K_Hellfire_II_M 				{ quality = 1; price = 30; };
	class CUP_1Rnd_AIM_9L_Sidewinder_External_M 				{ quality = 1; price = 30; };
	class CUP_4Rnd_AIM_9L_Sidewinder_External_M 				{ quality = 1; price = 30; };
	class CUP_2Rnd_AIM_9L_Sidewinder_Internal_M 				{ quality = 1; price = 30; };
	class CUP_2Rnd_AIM_9L_Sidewinder_External_M 				{ quality = 1; price = 30; };
	class CUP_2Rnd_AGM65_M 				{ quality = 1; price = 30; };
	class CUP_6Rnd_AGM65_M 				{ quality = 1; price = 30; };
	class CUP_8Rnd_AGM65_M 				{ quality = 1; price = 30; };
	class CUP_6Rnd_GBU12_M 				{ quality = 1; price = 30; };
	class CUP_2Rnd_MK82_Rack_M 				{ quality = 1; price = 30; };
	class CUP_4Rnd_MK82_Rack_M 				{ quality = 1; price = 30; };
	class CUP_1Rnd_MK82_Rack_M 				{ quality = 1; price = 30; };
	class CUP_2Rnd_Mk82_M 				{ quality = 1; price = 30; };
	class CUP_muzzleFlash2SCAR_L 				{ quality = 1; price = 30; };
	class CUP_muzzle_snds_AWM 				{ quality = 1; price = 30; };
	class CUP_muzzle_PBS4 				{ quality = 1; price = 30; };
	class CUP_muzzle_PB6P9 				{ quality = 1; price = 30; };
	class CUP_muzzle_Bizon 				{ quality = 1; price = 30; };
	class CUP_muzzle_snds_G36_black 				{ quality = 1; price = 30; };
	class CUP_muzzle_snds_G36_desert 				{ quality = 1; price = 30; };
	class CUP_muzzle_snds_L85 				{ quality = 1; price = 30; };
	class CUP_muzzle_snds_M110 				{ quality = 1; price = 30; };
	class CUP_muzzle_snds_M14 				{ quality = 1; price = 30; };
	class CUP_muzzle_snds_M16_camo 				{ quality = 1; price = 30; };
	class CUP_muzzle_snds_M16 				{ quality = 1; price = 30; };
	class CUP_muzzle_snds_M9 				{ quality = 1; price = 30; };
	class CUP_muzzle_snds_MicroUzi 				{ quality = 1; price = 30; };
	class CUP_muzzle_snds_XM8 				{ quality = 1; price = 30; };
	class CUP_muzzle_snds_SCAR_L 				{ quality = 1; price = 30; };
	class CUP_muzzle_snds_SCAR_H 				{ quality = 1; price = 30; };
	class CUP_optic_MAAWS_Scope 				{ quality = 1; price = 30; };
	class CUP_optic_SMAW_Scope 				{ quality = 1; price = 30; };
	class CUP_optic_AN_PAS_13c1 				{ quality = 1; price = 30; };
	class CUP_optic_AN_PAS_13c2 				{ quality = 1; price = 30; };
	class CUP_optic_GOSHAWK 				{ quality = 1; price = 30; };
	class CUP_optic_AN_PVS_10 				{ quality = 1; price = 30; };
	class CUP_optic_AN_PVS_4 				{ quality = 1; price = 30; };
	class CUP_optic_NSPU 				{ quality = 1; price = 30; };
	class CUP_optic_SB_3_12x50_PMII 				{ quality = 1; price = 30; };
	class CUP_optic_LeupoldMk4 				{ quality = 1; price = 30; };
	class CUP_optic_Leupold_VX3 				{ quality = 1; price = 30; };
	class CUP_optic_LeupoldM3LR 				{ quality = 1; price = 30; };
	class CUP_optic_LeupoldMk4_10x40_LRT_Desert 				{ quality = 1; price = 30; };
	class CUP_optic_LeupoldMk4_10x40_LRT_Woodland 				{ quality = 1; price = 30; };
	class CUP_optic_LeupoldMk4_CQ_T 				{ quality = 1; price = 30; };
	class CUP_optic_LeupoldMk4_MRT_tan 				{ quality = 1; price = 30; };
	class CUP_optic_PechenegScope 				{ quality = 1; price = 30; };
	class CUP_optic_PSO_1 				{ quality = 1; price = 30; };
	class CUP_optic_PSO_3 				{ quality = 1; price = 30; };
	class CUP_optic_SUSAT 				{ quality = 1; price = 30; };
	class CUP_optic_ElcanM145 				{ quality = 1; price = 30; };
	class CUP_optic_ELCAN_SpecterDR 				{ quality = 1; price = 30; };
	class CUP_optic_CWS 				{ quality = 1; price = 30; };
	class CUP_optic_RCO_desert 				{ quality = 1; price = 30; };
	class CUP_optic_RCO 				{ quality = 1; price = 30; };
	class CUP_optic_ZDDot 				{ quality = 1; price = 30; };
	class CUP_optic_MRad 				{ quality = 1; price = 30; };
	class CUP_optic_SB_11_4x20_PM 				{ quality = 1; price = 30; };
	class CUP_optic_TrijiconRx01_desert 				{ quality = 1; price = 30; };
	class CUP_optic_TrijiconRx01_black 				{ quality = 1; price = 30; };
	class CUP_optic_CompM4 				{ quality = 1; price = 30; };
	class CUP_optic_CompM2_Black 				{ quality = 1; price = 30; };
	class CUP_optic_CompM2_Woodland 				{ quality = 1; price = 30; };
	class CUP_optic_CompM2_Woodland2 				{ quality = 1; price = 30; };
	class CUP_optic_CompM2_Desert 				{ quality = 1; price = 30; };
	class CUP_optic_HoloBlack 				{ quality = 1; price = 30; };
	class CUP_optic_HoloWdl 				{ quality = 1; price = 30; };
	class CUP_optic_HoloDesert 				{ quality = 1; price = 30; };
	class CUP_optic_Eotech533 				{ quality = 1; price = 30; };
	class CUP_optic_Eotech533Grey 				{ quality = 1; price = 30; };
	class CUP_acc_Flashlight 				{ quality = 1; price = 30; };
	class CUP_acc_Flashlight_wdl 				{ quality = 1; price = 30; };
	class CUP_acc_Flashlight_desert 				{ quality = 1; price = 30; };
	class CUP_acc_XM8_light_module 				{ quality = 1; price = 30; };
	class CUP_acc_CZ_M3X 				{ quality = 1; price = 30; };
	class CUP_acc_Glock17_Flashlight 				{ quality = 1; price = 30; };
	
	class CUP_O_UAZ_AGS30_RU                            { quality = 1; price = 4000; };
	class CUP_O_UAZ_MG_RU                                { quality = 1; price = 3500; };
	class CUP_O_UAZ_Open_RU                                { quality = 1; price = 4000; };
	class CUP_O_UAZ_SPG9_RU                                { quality = 1; price = 8000; };
	class CUP_O_UAZ_Unarmed_RU                            { quality = 1; price = 3500; };
	class CUP_O_Ural_RU                                    { quality = 1; price = 12000; };
	class CUP_O_Ural_Refuel_RU                            { quality = 1; price = 13000; };
	class CUP_I_Ural_ZU23_TK_Gue                        { quality = 1; price = 25000; };
	class CUP_C_Datsun_Covered                            { quality = 1; price = 3000; };
	class CUP_C_Datsun_Plain                            { quality = 1; price = 3000; };
	class CUP_C_Datsun_Tubeframe                        { quality = 1; price = 3000; };
	class CUP_O_Datsun_PK                                { quality = 1; price = 3000; };
	class CUP_O_Datsun_PK_Random                        { quality = 1; price = 3000; };
	class CUP_B_HMMWV_Ambulance_USMC                    { quality = 1; price = 26000; };
	class CUP_B_HMMWV_M1114_USMC                        { quality = 1; price = 28000; };
	class CUP_B_HMMWV_M2_USMC                            { quality = 1; price = 28000; };
	class CUP_B_HMMWV_MK19_USMC                            { quality = 1; price = 24000; };
	class CUP_B_HMMWV_TOW_USMC                            { quality = 1; price = 35000; };
	class CUP_B_HMMWV_Unarmed_USMC                        { quality = 1; price = 23000; };
	class CUP_B_LR_Transport_GB_W                        { quality = 1; price = 8000; };
	class CUP_I_BRDM2_HQ_TK_Gue                            { quality = 1; price = 37000; };
	class CUP_O_BTR90_HQ_RU                                { quality = 1; price = 35000; };
	class CUP_O_BTR90_RU                                { quality = 1; price = 39000; };
	class CUP_B_M1126_ICV_M2_Woodland_Slat                { quality = 1; price = 33000; };
	class CUP_B_M1133_MEV_Woodland_Slat                    { quality = 1; price = 31000; };
	class CUP_B_M1135_ATGMV_Woodland_Slat                { quality = 1; price = 80000; };
	class CUP_B_M113_Med_USA                            { quality = 1; price = 40000; };
	class CUP_B_M113_USA                                { quality = 1; price = 40000; };
	class CUP_I_T55_TK_GUE                                { quality = 1; price = 80000; };
	class CUP_I_T34_TK_GUE                                { quality = 1; price = 40000; };
	class CUP_B_CH47F_USA                                { quality = 1; price = 50000; };
	class CUP_B_CH53E_USMC                                { quality = 1; price = 55000; };
	class CUP_B_MH60S_USMC                                { quality = 1; price = 45000; };
	class CUP_B_UH1Y_MEV_USMC                            { quality = 1; price = 40000; };
	class CUP_B_UH1Y_UNA_USMC                            { quality = 1; price = 45000; };
	class CUP_B_UH60M_US                                { quality = 1; price = 43750; };
	class CUP_B_UH60M_Unarmed_FFV_US                    { quality = 1; price = 43750; };
	class CUP_C_Mi17_Civilian_RU                        { quality = 1; price = 25000; };
	class CUP_O_Mi24_P_RU                                { quality = 1; price = 65000; };
	class CUP_B_MV22_USMC                                { quality = 1; price = 80000; };
	class CUP_B_C130J_USMC                                { quality = 1; price = 150000; };

	class CUP_O_TKI_Khet_Partug_01                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Partug_02                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Partug_03                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Partug_04                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Partug_05                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Partug_06                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Partug_07                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Partug_08                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Jeans_01                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Jeans_02                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Jeans_03                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Jeans_04                                     { quality = 1; price = 50; };
    class CUP_U_C_Pilot_01                                             { quality = 1; price = 50; };
    class CUP_U_C_Citizen_01                                         { quality = 1; price = 50; };
    class CUP_U_C_Citizen_02                                         { quality = 1; price = 50; };
    class CUP_U_C_Citizen_03                                         { quality = 1; price = 50; };
    class CUP_U_C_Citizen_04                                         { quality = 1; price = 50; };
    class CUP_U_C_Worker_01                                             { quality = 1; price = 50; };
    class CUP_U_C_Worker_02                                             { quality = 1; price = 50; };
    class CUP_U_C_Worker_03                                             { quality = 1; price = 50; };
    class CUP_U_C_Worker_04                                             { quality = 1; price = 50; };
    class CUP_U_C_Profiteer_01                                         { quality = 1; price = 50; };
    class CUP_U_C_Profiteer_02                                         { quality = 1; price = 50; };
    class CUP_U_C_Profiteer_03                                         { quality = 1; price = 50; };
    class CUP_U_C_Profiteer_04                                         { quality = 1; price = 50; };
    class CUP_U_C_Woodlander_01                                         { quality = 1; price = 50; };
    class CUP_U_C_Woodlander_02                                         { quality = 1; price = 50; };
    class CUP_U_C_Woodlander_03                                         { quality = 1; price = 50; };
    class CUP_U_C_Woodlander_04                                         { quality = 1; price = 50; };
    class CUP_U_C_Villager_01                                         { quality = 1; price = 50; };
    class CUP_U_C_Villager_02                                         { quality = 1; price = 50; };
    class CUP_U_C_Villager_03                                         { quality = 1; price = 50; };
    class CUP_U_C_Villager_04                                         { quality = 1; price = 50; };
    class CUP_U_B_CZ_WDL_TShirt                                         { quality = 1; price = 50; };
    class CUP_U_B_GER_Tropentarn_1                                     { quality = 1; price = 50; };
    class CUP_U_B_GER_Tropentarn_2                                     { quality = 1; price = 50; };
    class CUP_U_B_GER_Ghillie                                         { quality = 1; price = 50; };
    class CUP_U_B_GER_Flecktarn_1                                     { quality = 1; price = 50; };
    class CUP_U_B_GER_Flecktarn_2                                     { quality = 1; price = 50; };
    class CUP_U_B_GER_Fleck_Ghillie                                     { quality = 1; price = 50; };
    class CUP_U_B_USMC_Officer                                         { quality = 1; price = 50; };
    class CUP_U_B_USMC_PilotOverall                                     { quality = 1; price = 50; };
    class CUP_U_B_USMC_Ghillie_WDL                                     { quality = 1; price = 50; };
    class CUP_U_B_USMC_MARPAT_WDL_Sleeves                            { quality = 1; price = 50; };
    class CUP_U_B_USMC_MARPAT_WDL_RolledUp                             { quality = 1; price = 50; };
    class CUP_U_B_USMC_MARPAT_WDL_Kneepad                             { quality = 1; price = 50; };
    class CUP_U_B_USMC_MARPAT_WDL_TwoKneepads                         { quality = 1; price = 50; };
    class CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad                        { quality = 1; price = 50; };
    class CUP_U_B_FR_SpecOps                                         { quality = 1; price = 50; };
    class CUP_U_B_FR_Scout                                             { quality = 1; price = 50; };
    class CUP_U_B_FR_Scout1                                             { quality = 1; price = 50; };
    class CUP_U_B_FR_Scout2                                             { quality = 1; price = 50; };
    class CUP_U_B_FR_Scout3                                             { quality = 1; price = 50; };
    class CUP_U_B_FR_Officer                                         { quality = 1; price = 50; };
    class CUP_U_B_FR_Corpsman                                         { quality = 1; price = 50; };
    class CUP_U_B_FR_DirAction                                         { quality = 1; price = 50; };
    class CUP_U_B_FR_DirAction2                                         { quality = 1; price = 50; };
    class CUP_U_B_FR_Light                                             { quality = 1; price = 50; };
    class CUP_U_I_GUE_Flecktarn                                         { quality = 1; price = 50; };
    class CUP_U_I_GUE_Flecktarn2                                     { quality = 1; price = 50; };
    class CUP_U_I_GUE_Flecktarn3                                     { quality = 1; price = 50; };
    class CUP_U_I_GUE_Woodland1                                         { quality = 1; price = 50; };
    class CUP_U_I_Ghillie_Top                                         { quality = 1; price = 50; };
    class CUP_U_I_RACS_PilotOverall                                     { quality = 1; price = 50; };
    class CUP_U_I_RACS_Desert_1                                         { quality = 1; price = 50; };
    class CUP_U_I_RACS_Desert_2                                         { quality = 1; price = 50; };
    class CUP_U_I_RACS_Urban_1                                         { quality = 1; price = 50; };
    class CUP_U_I_RACS_Urban_2                                         { quality = 1; price = 50; };
    class CUP_U_O_SLA_Officer                                         { quality = 1; price = 50; };
    class CUP_U_O_SLA_Officer_Suit                                     { quality = 1; price = 50; };
    class CUP_U_O_SLA_MixedCamo                                         { quality = 1; price = 50; };
    class CUP_U_O_SLA_Green                                             { quality = 1; price = 50; };
    class CUP_U_O_SLA_Urban                                             { quality = 1; price = 50; };
    class CUP_U_O_SLA_Desert                                         { quality = 1; price = 50; };
    class CUP_U_O_SLA_Overalls_Pilot                                 { quality = 1; price = 50; };
    class CUP_U_O_SLA_Overalls_Tank                                     { quality = 1; price = 50; };
    class CUP_U_O_Partisan_TTsKO                                     { quality = 1; price = 50; };
    class CUP_U_O_Partisan_TTsKO_Mixed                                { quality = 1; price = 50; };
    class CUP_U_O_Partisan_VSR_Mixed1                                { quality = 1; price = 50; };
    class CUP_U_O_Partisan_VSR_Mixed2                                { quality = 1; price = 50; };
    class CUP_U_O_TK_Officer                                         { quality = 1; price = 50; };
    class CUP_U_O_TK_MixedCamo                                         { quality = 1; price = 50; };
    class CUP_U_O_TK_Green                                             { quality = 1; price = 50; };
    class CUP_U_O_TK_Ghillie                                         { quality = 1; price = 50; };
    class CUP_U_O_TK_Ghillie_Top                                     { quality = 1; price = 50; };
    class CUP_H_C_Ushanka_01                                         { quality = 1; price = 50; };
    class CUP_H_C_Ushanka_02                                         { quality = 1; price = 50; };
    class CUP_H_C_Ushanka_03                                         { quality = 1; price = 50; };
    class CUP_H_C_Ushanka_04                                         { quality = 1; price = 50; };
    class CUP_H_C_Beanie_01                                             { quality = 1; price = 50; };
    class CUP_H_C_Beanie_02                                             { quality = 1; price = 50; };
    class CUP_H_C_Beanie_03                                             { quality = 1; price = 50; };
    class CUP_H_C_Beanie_04                                             { quality = 1; price = 50; };
    class CUP_H_C_Beret_01                                             { quality = 1; price = 50; };
    class CUP_H_C_Beret_02                                             { quality = 1; price = 50; };
    class CUP_H_C_Beret_03                                             { quality = 1; price = 50; };
    class CUP_H_C_Beret_04                                             { quality = 1; price = 50; };
    class CUP_H_GER_Boonie_desert                                     { quality = 1; price = 50; };
    class CUP_H_GER_Boonie_Flecktarn                                { quality = 1; price = 50; };
    class CUP_H_NAPA_Fedora                                             { quality = 1; price = 50; };
    class CUP_H_PMC_PRR_Headset                                         { quality = 1; price = 50; };
    class CUP_H_PMC_EP_Headset                                         { quality = 1; price = 50; };
    class CUP_H_PMC_Cap_Tan                                             { quality = 1; price = 50; };
    class CUP_H_PMC_Cap_Grey                                         { quality = 1; price = 50; };
    class CUP_H_PMC_Cap_PRR_Tan                                         { quality = 1; price = 50; };
    class CUP_H_PMC_Cap_PRR_Grey                                     { quality = 1; price = 50; };
    class CUP_H_RACS_Beret_Blue                                         { quality = 1; price = 50; };
    class CUP_H_RACS_Helmet_Des                                         { quality = 1; price = 50; };
    class CUP_H_RACS_Helmet_Goggles_Des                                 { quality = 1; price = 50; };
    class CUP_H_RACS_Helmet_Headset_Des                                 { quality = 1; price = 50; };
    class CUP_H_RACS_Helmet_DPAT                                     { quality = 1; price = 50; };
    class CUP_H_RACS_Helmet_Goggles_DPAT                             { quality = 1; price = 50; };
    class CUP_H_RACS_Helmet_Headset_DPAT                             { quality = 1; price = 50; };
    class CUP_H_SLA_TankerHelmet                                     { quality = 1; price = 50; };
    class CUP_H_SLA_Helmet                                             { quality = 1; price = 50; };
    class CUP_H_SLA_Pilot_Helmet                                    { quality = 1; price = 50; };
    class CUP_H_SLA_OfficerCap                                         { quality = 1; price = 50; };
    class CUP_H_SLA_SLCap                                             { quality = 1; price = 50; };
    class CUP_H_SLA_Boonie                                             { quality = 1; price = 50; };
    class CUP_H_SLA_Beret                                             { quality = 1; price = 50; };
    ///class CUP_H_SLA_BeretRed                                         { quality = 1; price = 50; };
    class CUP_H_SLA_BeenieGreen                                         { quality = 1; price = 50; };
    class CUP_H_TK_TankerHelmet                                         { quality = 1; price = 50; };
    class CUP_H_TK_PilotHelmet                                         { quality = 1; price = 50; };
    class CUP_H_TK_Helmet                                             { quality = 1; price = 50; };
    class CUP_H_TK_Lungee                                             { quality = 1; price = 50; };
    class CUP_H_TK_Beret                                             { quality = 1; price = 50; };
    class CUP_H_TKI_SkullCap_01                                         { quality = 1; price = 50; };
    class CUP_H_TKI_SkullCap_02                                         { quality = 1; price = 50; };
    class CUP_H_TKI_SkullCap_03                                         { quality = 1; price = 50; };
    class CUP_H_TKI_SkullCap_04                                         { quality = 1; price = 50; };
    class CUP_H_TKI_SkullCap_05                                         { quality = 1; price = 50; };
    class CUP_H_TKI_SkullCap_06                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_01                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_02                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_03                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_04                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_05                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_06                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_Open_01                                     { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_Open_02                                     { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_Open_03                                     { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_Open_04                                     { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_Open_05                                     { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_Open_06                                     { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_1_01                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_1_02                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_1_03                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_1_04                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_1_05                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_1_06                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_2_01                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_2_02                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_2_03                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_2_04                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_2_05                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_2_06                                         { quality = 1; price = 50; };
    class CUP_H_USMC_Officer_Cap                                     { quality = 1; price = 50; };
    class CUP_H_USMC_HelmetWDL                                         { quality = 1; price = 50; };
    class CUP_H_USMC_HeadSet_HelmetWDL                                 { quality = 1; price = 50; };
    class CUP_H_USMC_HeadSet_GoggleW_HelmetWDL                         { quality = 1; price = 50; };
    class CUP_H_USMC_Crew_Helmet                                     { quality = 1; price = 50; };
    class CUP_H_USMC_Goggles_HelmetWDL                                 { quality = 1; price = 50; };
    class CUP_H_USMC_Helmet_Pilot                                     { quality = 1; price = 50; };
    class CUP_H_FR_Headset                                             { quality = 1; price = 50; };
    class CUP_H_FR_Cap_Headset_Green                                 { quality = 1; price = 50; };
    class CUP_H_FR_Cap_Officer_Headset                                 { quality = 1; price = 50; };
    class CUP_H_FR_BandanaGreen                                         { quality = 1; price = 50; };
    class CUP_H_FR_BandanaWdl                                         { quality = 1; price = 50; };
    class CUP_H_FR_Bandana_Headset                                     { quality = 1; price = 50; };
    class CUP_H_FR_Headband_Headset                                     { quality = 1; price = 50; };
    class CUP_H_FR_ECH                                                 { quality = 1; price = 50; };
    class CUP_H_FR_BoonieMARPAT                                         { quality = 1; price = 50; };
    class CUP_H_FR_BoonieWDL                                         { quality = 1; price = 50; };
    class CUP_H_FR_BeanieGreen                                         { quality = 1; price = 50; };
    class CUP_H_FR_PRR_BoonieWDL                                     { quality = 1; price = 50; };
    class CUP_H_Navy_CrewHelmet_Blue                                 { quality = 1; price = 50; };
    class CUP_H_Navy_CrewHelmet_Brown                                 { quality = 1; price = 50; };
    class CUP_H_Navy_CrewHelmet_Green                                 { quality = 1; price = 50; };
    class CUP_H_Navy_CrewHelmet_Red                                     { quality = 1; price = 50; };
    class CUP_H_Navy_CrewHelmet_Violet                                 { quality = 1; price = 50; };
    class CUP_H_Navy_CrewHelmet_White                                 { quality = 1; price = 50; };
    class CUP_H_Navy_CrewHelmet_Yellow                                 { quality = 1; price = 50; };
    class CUP_V_B_GER_Carrier_Rig                                     { quality = 1; price = 50; };
    class CUP_V_B_GER_Carrier_Rig_2                                     { quality = 1; price = 50; };
    class CUP_V_B_GER_Carrier_Vest                                     { quality = 1; price = 50; };
    class CUP_V_B_GER_Carrier_Vest_2                                 { quality = 1; price = 50; };
    class CUP_V_B_GER_Carrier_Vest_3                                 { quality = 1; price = 50; };
    class CUP_V_B_GER_Vest_1                                         { quality = 1; price = 50; };
    class CUP_V_B_GER_Vest_2                                         { quality = 1; price = 50; };
    class CUP_V_B_MTV                                                 { quality = 1; price = 50; };
    class CUP_V_B_MTV_Patrol                                         { quality = 1; price = 50; };
    class CUP_V_B_MTV_Pouches                                         { quality = 1; price = 50; };
    class CUP_V_B_MTV_noCB                                             { quality = 1; price = 50; };
    class CUP_V_B_MTV_Marksman                                         { quality = 1; price = 50; };
    class CUP_V_B_MTV_PistolBlack                                     { quality = 1; price = 50; };
    class CUP_V_B_MTV_LegPouch                                         { quality = 1; price = 50; };
    class CUP_V_B_MTV_MG                                             { quality = 1; price = 50; };
    class CUP_V_B_MTV_Mine                                             { quality = 1; price = 50; };
    class CUP_V_B_MTV_TL                                             { quality = 1; price = 50; };
    class CUP_V_B_PilotVest                                             { quality = 1; price = 50; };
    class CUP_V_B_RRV_TL                                             { quality = 1; price = 50; };
    class CUP_V_B_RRV_Officer                                         { quality = 1; price = 50; };
    class CUP_V_B_RRV_Medic                                             { quality = 1; price = 50; };
    class CUP_V_B_RRV_DA1                                             { quality = 1; price = 50; };
    class CUP_V_B_RRV_DA2                                             { quality = 1; price = 50; };
    class CUP_V_B_RRV_MG                                             { quality = 1; price = 50; };
    class CUP_V_B_RRV_Light                                             { quality = 1; price = 50; };
    class CUP_V_B_RRV_Scout                                             { quality = 1; price = 50; };
    class CUP_V_B_RRV_Scout2                                         { quality = 1; price = 50; };
    class CUP_V_B_RRV_Scout3                                         { quality = 1; price = 50; };
    class CUP_V_B_LHDVest_Blue                                         { quality = 1; price = 50; };
    class CUP_V_B_LHDVest_Brown                                         { quality = 1; price = 50; };
    class CUP_V_B_LHDVest_Green                                         { quality = 1; price = 50; };
    class CUP_V_B_LHDVest_Red                                         { quality = 1; price = 50; };
    class CUP_V_B_LHDVest_Violet                                     { quality = 1; price = 50; };
    class CUP_V_B_LHDVest_White                                         { quality = 1; price = 50; };
    class CUP_V_B_LHDVest_Yellow                                     { quality = 1; price = 50; };
    class CUP_V_I_Carrier_Belt                                         { quality = 1; price = 50; };
    class CUP_V_I_Guerilla_Jacket                                     { quality = 1; price = 50; };
    class CUP_V_I_RACS_Carrier_Vest                                     { quality = 1; price = 50; };
    class CUP_V_I_RACS_Carrier_Vest_2                                 { quality = 1; price = 50; };
    class CUP_V_I_RACS_Carrier_Vest_3                                 { quality = 1; price = 50; };
    class CUP_V_O_SLA_Carrier_Belt                                     { quality = 1; price = 50; };
    class CUP_V_O_SLA_Carrier_Belt02                                 { quality = 1; price = 50; };
    class CUP_V_O_SLA_Carrier_Belt03                                 { quality = 1; price = 50; };
    class CUP_V_O_SLA_Flak_Vest01                                     { quality = 1; price = 50; };
    class CUP_V_O_SLA_Flak_Vest02                                     { quality = 1; price = 50; };
    class CUP_V_O_SLA_Flak_Vest03                                     { quality = 1; price = 50; };
    class CUP_V_O_TK_CrewBelt                                         { quality = 1; price = 50; };
    class CUP_V_O_TK_OfficerBelt                                     { quality = 1; price = 50; };
    class CUP_V_O_TK_OfficerBelt2                                     { quality = 1; price = 50; };
    class CUP_V_O_TK_Vest_1                                             { quality = 1; price = 50; };
    class CUP_V_O_TK_Vest_2                                             { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket1_01                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket1_02                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket1_03                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket1_04                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket1_05                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket1_06                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket2_01                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket2_02                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket2_03                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket2_04                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket2_05                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket2_06                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket3_01                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket3_02                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket3_03                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket3_04                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket3_05                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket3_06                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket4_01                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket4_02                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket4_03                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket4_04                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket4_05                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket4_06                                     { quality = 1; price = 50; };
	
	//////////////////////////////////////////////////////////////////////////////
	//	NIA EDITS
	//////////////////////////////////////////////////////////////////////////////
		
			//GAYFUCKINGSHITFUCKTHEHELLFUCK
	
		//Awper

	class hlc_rifle_awcovert { quality = 1; price = 550; };
	class hlc_rifle_awcovert_BL	 { quality = 1; price = 550; };
	class hlc_rifle_awcovert_FDE	 { quality = 1; price = 550; };
	class hlc_rifle_awmagnum { quality = 1; price = 550; };
	class hlc_rifle_awmagnum_BL	 { quality = 1; price = 550; };
	class hlc_rifle_awMagnum_FDE_ghillie { quality = 1; price = 550; };
	class hlc_rifle_awMagnum_BL_ghillie { quality = 1; price = 550; };
	class hlc_rifle_awMagnum_OD_ghillie { quality = 1; price = 550; };
		//Ammo
	class hlc_5rnd_300WM_FMJ_AWM { quality = 1; price = 30; };
	class hlc_5rnd_300WM_AP_AWM { quality = 1; price = 30; };
	class hlc_5rnd_300WM_BTSP_AWM { quality = 1; price = 30; };
	class hlc_5rnd_300WM_mk248_AWM { quality = 1; price = 30; };
	class hlc_5rnd_300WM_SBT_AWM { quality = 1; price = 30; };

		//Fal
	
	class hlc_rifle_l1a1slr { quality = 1; price = 550; };
	class hlc_rifle_SLR { quality = 1; price = 550; };
	class hlc_rifle_STG58F { quality = 1; price = 550; };
	class hlc_rifle_FAL5061 { quality = 1; price = 550; };
	class hlc_rifle_c1A1	 { quality = 1; price = 550; };
	class hlc_rifle_LAR	 { quality = 1; price = 550; };
	class hlc_rifle_SLRchopmod { quality = 1; price = 550; };
	class hlc_rifle_falosw { quality = 1; price = 550; };
	class hlc_rifle_osw_GL { quality = 1; price = 550; };

	class hlc_optic_PVS4FAL { quality = 1; price = 150; };
	class hlc_optic_suit	 { quality = 1; price = 150; };
	class hlc_muzzle_snds_fal { quality = 1; price = 50; };
		//Ammo
	class hlc_20Rnd_762x51_B_fal { quality = 1; price = 30; };
	class hlc_20Rnd_762x51_t_fal { quality = 1; price = 30; };
	class hlc_20Rnd_762x51_S_fal { quality = 1; price = 30; };
	class hlc_50rnd_762x51_M_FAL { quality = 1; price = 30; };

		//G3

	class hlc_rifle_g3sg1	 { quality = 1; price = 550; };  //Debug this Section...
	class hlc_rifle_psg1 { quality = 1; price = 550; };
	class hlc_rifle_g3a3	 { quality = 1; price = 550; };
	class hlc_rifle_g3ka4	 { quality = 1; price = 550; };
	class HLC_Rifle_g3ka4_GL { quality = 1; price = 550; };
	class hlc_rifle_hk51	 { quality = 1; price = 550; };
	class hlc_rifle_hk53 { quality = 1; price = 550; };
		//Attatchments
	class hlc_muzzle_snds_HK33 { quality = 1; price = 50; };
	class hlc_muzzle_snds_G3 { quality = 1; price = 50; };
	class HLC_Optic_ZFSG1 { quality = 1; price = 150; };
	class hlc_optic_accupoint_g3 { quality = 1; price = 50; };
		//Ammo
	class hlc_20Rnd_762x51_B_G3 { quality = 1; price = 30; };
	class hlc_20rnd_762x51_T_G3 { quality = 1; price = 30; };
	class hlc_50rnd_762x51_M_G3 { quality = 1; price = 30; };

		//AR15

	class hlc_rifle_RU556 { quality = 1; price = 550; };
	class hlc_rifle_RU5562 { quality = 1; price = 550; };
	class hlc_rifle_Colt727 { quality = 1; price = 550; };
	class hlc_rifle_Colt727_GL { quality = 1; price = 550; };
	class hlc_rifle_bcmjack { quality = 1; price = 550; };
	class hlc_rifle_SAMR { quality = 1; price = 550; };
		//Ammo
	class hlc_30rnd_556x45_EPR { quality = 1; price = 30; };
	class hlc_30rnd_556x45_SOST { quality = 1; price = 30; };
	class hlc_30rnd_556x45_SPR { quality = 1; price = 30; };
		//Attatchments
	class hlc_muzzle_556NATO_KAC { quality = 1; price = 50; };

		//.300 AR 15

	class hlc_rifle_honeybadger { quality = 1; price = 550; };
	class hlc_rifle_honeybase { quality = 1; price = 550; };
	class hlc_rifle_vendimus { quality = 1; price = 550; };
	class hlc_rifle_Bushmaster300 { quality = 1; price = 550; };
		//Ammo
	class 29rnd_300BLK_STANAG_T { quality = 1; price = 30; };
	class 29rnd_300BLK_STANAG_S { quality = 1; price = 30; };
	class 29rnd_300BLK_STANAG { quality = 1; price = 30; };
		//Attatchments
	class hlc_muzzle_300blk_KAC { quality = 1; price = 50; };

		//Springfield.

	class hlc_rifle_M1903A1_unertl { quality = 1; price = 550; };
	class hlc_rifle_M1903A1 { quality = 1; price = 550; };
		//Ammo
	class hlc_5rd_3006_1903 { quality = 1; price = 30; };

		//ACR

	class hlc_rifle_ACR_Carb_black { quality = 1; price = 550; };
	class hlc_rifle_ACR_Carb_green { quality = 1; price = 550; };
	class hlc_rifle_ACR_Carb_tan { quality = 1; price = 550; };
	class hlc_rifle_ACR_full_black { quality = 1; price = 550; };
	class hlc_rifle_ACR_full_green { quality = 1; price = 550; };
	class hlc_rifle_ACR_full_tan { quality = 1; price = 550; };
	class hlc_rifle_ACR_mid_black { quality = 1; price = 550; };
	class hlc_rifle_ACR_mid_green { quality = 1; price = 550; };
	class hlc_rifle_ACR_mid_tan { quality = 1; price = 550; };
	class hlc_rifle_ACR_SBR_black { quality = 1; price = 550; };
	class hlc_rifle_ACR_SBR_green { quality = 1; price = 550; };
	class hlc_rifle_ACR_SBR_tan { quality = 1; price = 550; };



		//ACR68

	class hlc_rifle_ACR68_aron { quality = 1; price = 550; };
	class hlc_rifle_ACR68_Carb_black { quality = 1; price = 550; };
	class hlc_rifle_ACR68_Carb_green { quality = 1; price = 550; };
	class hlc_rifle_ACR68_Carb_tan { quality = 1; price = 550; };
	class hlc_rifle_ACR68_full_black { quality = 1; price = 550; };
	class hlc_rifle_ACR68_full_green { quality = 1; price = 550; };
	class hlc_rifle_ACR68_full_tan { quality = 1; price = 550; };
	class hlc_rifle_ACR68_mid_black { quality = 1; price = 550; };
	class hlc_rifle_ACR68_mid_green { quality = 1; price = 550; };
	class hlc_rifle_ACR68_mid_tan { quality = 1; price = 550; };
	class hlc_rifle_ACR68_SBR_black { quality = 1; price = 550; };
	class hlc_rifle_ACR68_SBR_green { quality = 1; price = 550; };
	class hlc_rifle_ACR68_SBR_tan { quality = 1; price = 550; };
	class hlc_rifle_ACR68_Squant { quality = 1; price = 550; };
		//Ammo
	class hlc_30rnd_68x43_FMJ { quality = 1; price = 30; };
	class hlc_30rnd_68x43_OTM { quality = 1; price = 30; };
	class hlc_30rnd_68x43_MFMJ { quality = 1; price = 30; };
	class hlc_30rnd_68x43_MIRDIM { quality = 1; price = 30; };
	class hlc_30rnd_68x43_Tracer { quality = 1; price = 30; };
	class hlc_30rnd_68x43_IRDIM { quality = 1; price = 30; };
	
	
	class CUP_O_UAZ_AGS30_RU                            { quality = 1; price = 12000; };
 
  class CUP_O_UAZ_MG_RU                                { quality = 1; price = 8000; };
 
  class CUP_O_UAZ_Open_RU                                { quality = 1; price = 4000; };
 
  class CUP_O_UAZ_SPG9_RU                                { quality = 1; price = 10000; };
 
  class CUP_O_UAZ_Unarmed_RU                            { quality = 1; price = 3500; };
 
  class CUP_O_Ural_RU                                    { quality = 1; price = 1200; };
 
  class CUP_O_Ural_Refuel_RU                            { quality = 1; price = 2500; };
 
  class CUP_I_Ural_ZU23_TK_Gue                        { quality = 1; price = 25000; };
 
  class CUP_C_Datsun_Covered                            { quality = 1; price = 3000; };
 
  class CUP_C_Datsun_Plain                            { quality = 1; price = 3000; };
 
  class CUP_C_Datsun_Tubeframe                        { quality = 1; price = 3000; };
 
  class CUP_O_Datsun_PK                                { quality = 1; price = 5000; };
 
  class CUP_O_Datsun_PK_Random                        { quality = 1; price = 4950; };
 
  class CUP_B_HMMWV_Ambulance_USMC                    { quality = 1; price = 5500; };
 
  class CUP_B_HMMWV_M1114_USMC                        { quality = 1; price = 8000; };
 
  class CUP_B_HMMWV_M2_USMC                            { quality = 1; price = 11500; };
 
  class CUP_B_HMMWV_MK19_USMC                            { quality = 1; price = 20000; };
 
  class CUP_B_HMMWV_TOW_USMC                            { quality = 1; price = 25000; };
 
  class CUP_B_HMMWV_Unarmed_USMC                        { quality = 1; price = 5500; };
  
  class CUP_B_LR_Transport_GB_W                        { quality = 1; price = 8000; };
 
  class CUP_I_BRDM2_HQ_TK_Gue                            { quality = 1; price = 37000; };
 
  class CUP_O_BTR90_HQ_RU                                { quality = 1; price = 195000; };
 
  class CUP_O_BTR90_RU                                { quality = 1; price = 195000; };
 
  class CUP_B_M1126_ICV_M2_Woodland_Slat                { quality = 1; price = 33000; };
 
  class CUP_B_M1133_MEV_Woodland_Slat                    { quality = 1; price = 31000; };
 
  class CUP_B_M1135_ATGMV_Woodland_Slat                { quality = 1; price = 80000; };
 
  class CUP_B_M113_Med_USA                            { quality = 1; price = 40000; };
 
  class CUP_B_M113_USA                                { quality = 1; price = 40000; };
 
  class CUP_I_T55_TK_GUE                                { quality = 1; price = 11000; };
 
  class CUP_I_T34_TK_GUE                                { quality = 1; price = 80000; };
 
  class CUP_B_CH47F_USA                                { quality = 1; price = 100000; };
 
  class CUP_B_CH53E_USMC                                { quality = 1; price = 55000; };
 
  class CUP_B_MH60S_USMC                                { quality = 1; price = 45000; };
 
  class CUP_B_UH1Y_MEV_USMC                            { quality = 1; price = 40000; };
 
  class CUP_B_UH1Y_UNA_USMC                            { quality = 1; price = 55000; };
 
  class CUP_B_UH60M_US                                { quality = 1; price = 65000; };
 
  class CUP_B_UH60M_Unarmed_FFV_US                    { quality = 1; price = 43750; };
 
  class CUP_C_Mi17_Civilian_RU                        { quality = 1; price = 25000; };
 
  class CUP_O_Mi24_P_RU                                { quality = 1; price = 130500; };
 
  class CUP_B_MV22_USMC                                { quality = 1; price = 80000; };
 
  class CUP_B_C130J_USMC                                { quality = 1; price = 65000; };
 
	
};



class CfgExileCustomCode 
{
	/*
		You can overwrite every single file of our code without touching it.
		To do that, add the function name you want to overwrite plus the 
		path to your custom file here. If you wonder how this works, have a
		look at our bootstrap/fn_preInit.sqf function.

		Simply add the following scheme here:

		<Function Name of Exile> = "<New File Name>";

		Example:

		ExileClient_util_fusRoDah = "myaddon\myfunction.sqf";
	*/
};
class CfgExileEnvironment
{
	class Altis 
	{
		class FireFlies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour fire flies begin to spawn
			startHour = 18;

			// At this hour fire flies stop spawning
			endHour = 4;
		};

		class Anomalies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour anomalies begin to spawn
			startHour = 19;

			// At this hour anomalies stop spawning
			endHour = 6;
		};

		class Breathing
		{
			// 1 = enabled, 0 = disabled
			enable = 0;
		};

		class Snow
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// https://community.bistudio.com/wiki/surfaceType
			surfaces[] = {};
		};

		class Radiation 
		{
			// 1 = enabled, 0 = disabled
			enable = 1;
		};

		class Temperature
		{
			// Temperature in °C for the time of day, per hour
			// Add the first index to the last index, so it is 25 indizes!
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		
			// Temperature change in °C when it is 100% overcast
			overcast = -2;

			// Temperature change in °C when it is 100% raining
			rain = -5;

			// Temperature change in °C when it is 100% windy
			wind = -1;

			// Temperature change per 100m altitude in °C
			altitude = -0.5;

			// Difference from the daytime temperature to the water temperature
			water = -5;
		};
	};

	class Namalsk: Altis 
	{
		class FireFlies: FireFlies
		{
			enable = 1;
		};

		class Anomalies: Anomalies
		{
			enable = 1;
		};

		class Breathing: Breathing
		{
			enable = 1;
		};

		class Snow: Snow
		{
			enable = 1;
			surfaces[] = {"#nam_snow"};
		};

		class Radiation: Radiation
		{
			enable = 1;
			contaminatedZones[] = 
			{
				{{3960.14,	8454.75,	152.862}, 	80, 	140},	// Object A1
				{{4974.70,	6632.82,	4.74293}, 	40, 	150},	// Object A2
				{{6487.92,	9302.03,	36.0014}, 	60, 	110}	// Sebjan Chemical Factory
			};
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {-2.00,-1.77,-1.12,-0.10,1.24,2.78,4.40,6.00,7.46,8.65,9.50,9.90,9.90,9.50,8.65,7.46,6.00,4.40,2.78,1.24,-0.10,-1.12,-1.77,-2.00,-2.00};
		};
	};
	
	class Chernarus: Altis 
	{
		class FireFlies: FireFlies
		{
			enable = 1;
		};

		class Anomalies: Anomalies
		{
			enable = 0;
		};

		class Breathing: Breathing
		{
			enable = 1;
		};

		class Snow: Snow
		{
			enable = 0;
			surfaces[] = {""};
		};

		class Radiation: Radiation
		{
			enable = 0;
			contaminatedZones[] = 
			{
				
			};
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		};
	};
	
	class Tanoa: Altis
	{
		class FireFlies: FireFlies
		{
			enable = 0;
		};

		class Anomalies: Anomalies
		{
			enable = 0;
		};

		class Breathing: Breathing
		{
			enable = 0;
		};

		class Snow: Snow
		{
			enable = 0;
		};

		class Radiation: Radiation
		{
			enable = 1;
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		};
	};
};
class CfgExileHUD
{
	class ShortItemNames
	{
		SmokeShell[] 						= {"WHITE", 	"SMOKE"};
		1Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};
		3Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};

		SmokeShellBlue[] 					= {"BLUE", 		"SMOKE"};
		1Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};
		3Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};

		SmokeShellGreen[] 					= {"GREEN", 	"SMOKE"};
		1Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};
		3Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};

		SmokeShellOrange[] 					= {"ORANGE", 	"SMOKE"};
		1Rnd_SmokeOrange_Grenade_shell[]	= {"ORANGE", 	"SMOKE"};
		3Rnd_SmokeOrange_Grenade_shell[] 	= {"ORANGE", 	"SMOKE"};

		SmokeShellPurple[] 					= {"PURPLE", 	"SMOKE"};
		1Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};
		3Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};

		SmokeShellRed[] 					= {"RED", 		"SMOKE"};
		1Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
		3Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
				
		SmokeShellYellow[] 					= {"YELLOW", 	"SMOKE"};
		1Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
		3Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
				
		UGL_FlareCIR_F[] 					= {"IR", 		"FLARE"};
		3Rnd_UGL_FlareCIR_F[] 				= {"IR", 		"FLARE"};

		UGL_FlareGreen_F[] 					= {"GREEN", 	"FLARE"};
		3Rnd_UGL_FlareGreen_F[] 			= {"GREEN", 	"FLARE"};

		UGL_FlareRed_F[] 					= {"RED", 		"FLARE"};
		3Rnd_UGL_FlareRed_F[] 				= {"RED", 		"FLARE"};

		UGL_FlareWhite_F[] 					= {"WHITE", 	"FLARE"};
		3Rnd_UGL_FlareWhite_F[] 			= {"WHITE", 	"FLARE"};

		UGL_FlareYellow_F[] 				= {"YELLOW", 	"FLARE"};
		3Rnd_UGL_FlareYellow_F[] 			= {"YELLOW", 	"FLARE"};

		Chemlight_blue[] 					= {"BLUE", 		"LIGHT"};
		Chemlight_green[] 					= {"GREEN", 	"LIGHT"};
		Chemlight_red[] 					= {"RED", 		"LIGHT"};
		Chemlight_yellow[] 					= {"YELLOW", 	"LIGHT"};

		1Rnd_HE_Grenade_shell[] 			= {"40MM"};
		3Rnd_HE_Grenade_shell[] 			= {"40MM"};

		O_IR_Grenade[] 						= {"IR"};
		I_IR_Grenade[] 						= {"IR"};
		B_IR_Grenade[] 						= {"IR"};

		HandGrenade[] 						= {"RGO"};
		MiniGrenade[] 						= {"RGN"};

		Exile_Item_ZipTie[]					= {"ZIP", "TIE"};
	};
};
class CfgExileLootSettings
{
	/**
	 * Lifetime of loot in minutes. Synchronize this with
	 * the garbage collector settings of your server
	 * CfgSettings!
	 */
	lifeTime = 8;

	/**
	 * Interval in seconds when the client searches for
	 * new buildings to spawn loot in
	 */
	spawnInterval = 15;

	/**
	 * This is a percentage value to determine how many loot
	 * positions should contain loot when the system spawns loot.
	 *
	 * If a building has 20 positions defined, Exile will 
	 * spawn loot in 10 random positions of them.
	 * 
	 * This means smaller buildings spawn less loot and larger
	 * ones spawn more loot.
	 *
	 * You can also cap it at a maximum value. See below.
	 */
	maximumPositionCoverage = 45;

 	/**
 	 * Limit the number of loot positions per building. If the 
 	 * above percentage value exceeds this value, it will be capped.
 	 *
 	 * Example: Coverage is 50%. Building has 60 loot positions defined.
 	 * This results in 30 loot positions and that is too much. So we
 	 * cap this at 10
 	 */
	maximumNumberOfLootSpotsPerBuilding = 5;

	/**
	 * Exile spawns a random number of items per loot spot. This 
	 * is the upper cap for that. So 3 means it could spawn 1, 2 
	 * or 3.
	 */
	maximumNumberOfItemsPerLootSpot = 3;

	/**
	 * Radius in meter to spawn loot AROUND each player.
	 * Do NOT touch this value if you dont know what you do.
	 * The higher the number, the higher the drop rates, the
	 * easier your server will lag.
	 *
	 * 50m  = Minimum
	 * 200m = Maximum
	 */
	spawnRadius = 80;

	/**
	 * Defines the radius around trader cities where the system should
	 * not spawn loot. Set this to 0 if you want to have loot spawning
	 * in trader citites, ugh.
	 */
	minimumDistanceToTraderZones = 500;

	/**
	 * Defines the radius around territories where no loot spawns.
	 * This does not regard the actual size of a territory. So do not
	 * set this to a lower value than the maximum radius of a territory,
	 * which is 150m by default.
	 */
	minimumDistanceToTerritories = 150;
};
class CfgExileMobileXM8
{
	/**
	 * Add the 4 digit permission code here, so players can authorize
	 * your server to send them messages to their Mobile XM8 app.
	 */
	code = "";
};
class CfgExileMusic
{
	Ambient[] = {"ExileTrack03","ExileTrack04"};
	Combat[] = {"ExileTrack06","ExileTrack07"};
	Intro[] = {"ExileTrack02","ExileTrack03"};
};
class CfgExileParty 
{
	showESP = 1;
	allow3DMarkers = 1;
};
class CfgExileRussianRoulette
{
	/*
		Minimum amount to join a session of 
		russian roulette
	*/
	buyInAmount = 100;
};
class CfgFlags 
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uids[] = {};
	};
};

class ExileAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};

/**
 * Sort this by probability of occurence to speed things up a bit
 */
class CfgInteractionMenus
{
	class Car 
	{
		targetType = 2;
		target = "Car";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
		};
	};

	class Air
	{
		target = "Air";
		targetType = 2;

		class Actions
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && ((locked ExileClientInteractionObject) != 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			class RotateLeft: ExileAbstractAction
			{
				title = "Rotate Left";	
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,-15] call ExileClient_object_vehicle_rotate";
			};

			class RotateRight: ExileAbstractAction
			{
				title = "Rotate Right";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,15] call ExileClient_object_vehicle_rotate";
			};
		};
	};

	class Safe
	{
		targetType = 2;
		target = "Exile_Container_Safe";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Pack : ExileAbstractAction
			{
				title = "Pack";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_container_pack";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
		};
	};

	class Laptop
	{
		targetType = 2;
		target = "Exile_Construction_Laptop_Static";

		class Actions
		{
			class CameraSystem: ExileAbstractAction
			{
				title = "CCTV Access";
				condition = "((ExileClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
				action = "_this call ExileClient_gui_baseCamera_show";
			};
		};
	};

	class SupplyBox
	{
		targetType = 2;
		target = "Exile_Container_SupplyBox";

		class Actions
		{
			class Mount: ExileAbstractAction
			{
				title = "Mount";
				condition = "(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_mount";
			};

			class Install: ExileAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExileClientInteractionObject) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_install";
			};

			class Unmount: ExileAbstractAction
			{
				title = "Unmount";
				condition = "!(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_unmount";
			};
		};
	};

	class Construction
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_Static";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Picks up the construction so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_move";
			};

			// Removes the construction.
			class Deconstruct: ExileAbstractAction
			{
				title = "Remove";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_deconstruct";
			};

			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};

			class Upgrade : ExileAbstractAction
			{
				title = "Upgrade";
				condition = "call ExileClient_object_construction_upgradeShow";
				action = "_this call ExileClient_object_construction_upgrade";
			};

			class MakeBoom : ExileAbstractAction
			{
				title = "Plant charge";
				condition = "call ExileClient_system_breaching_condition";
				action = "_this call ExileClient_system_breaching_action";
			};

			class Repair : ExileAbstractAction
			{
				title = "Repair";
				condition = "(!((ExileClientInteractionObject getVariable ['ExileConstructionDamage',0]) isEqualTo 0)) && (call ExileClient_util_world_isInOwnTerritory)";
				action = "_this call ExileClient_object_construction_repair";
			};

		};
	};

	/*
		Tent, Storage crate etc.
	*/
	class Container
	{
		targetType = 2;
		target = "Exile_Container_Abstract";

		class Actions 
		{
			class Pack 
			{
				title = "Pack";
				condition = "!((typeOf ExileClientInteractionObject) isEqualTo 'Exile_Container_SupplyBox')";
				action = "_this spawn ExileClient_object_container_pack";
			};
			// Picks up the container so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "(getNumber(configFile >> 'CfgVehicles' >> typeOf ExileClientInteractionObject >> 'exileIsLockable') isEqualTo 0) || ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_construction_move";
			};
		};
	};

	class Flag
	{
		targetType = 2;
		target = "Exile_Construction_Flag_Static";

		class Actions
		{
			/*
			class Manage : ExileAbstractAction
			{
				title = "Manage";
				condition = "true";
				action = "_this call ExileClient_gui_baseManagement_event_show";
			};
			*/
			class StealFlag: ExileAbstractAction
			{
				title = "Steal Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',1]) isEqualTo 0)";
				action = "['StealFlag', _this select 0] call ExileClient_action_execute";
			};
			
			class RestoreFlag: ExileAbstractAction
			{
				title = "Restore Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',0]) isEqualTo 1)";
				action = "['restoreFlagRequest', [netID ExileClientInteractionObject]] call ExileClient_system_network_send";
			};
		};
	};

	class Boat 
	{
		targetType = 2;
		target = "Ship";

		class Actions
		{
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			// Pushes a boat into look direction to move into water
			class Push: ExileAbstractAction
			{
				title = "Fus Ro Dah!";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
			};
		};
	};

	class Bikes
	{
		targetType = 2;
		target = "Bicycle";

		class Actions
		{
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "true";
				action = "_this call ExileClient_object_vehicle_flip";
			};
		};
	};

	class Player 
	{
		targetType = 2;
		target = "Exile_Unit_Player";

		class Actions 
		{
			class Free: ExileAbstractAction
			{
				title = "Free";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_free";
			};
			
			class Search: ExileAbstractAction
			{
				title = "Search Gear";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_searchGear";
			};

			class Identify: ExileAbstractAction
			{
				title = "Identify Body";
				condition = "!(alive ExileClientInteractionObject)";
				action = "_this call ExileClient_object_player_identifyBody";
			};
			
			class HideCorpse: ExileAbstractAction
			{
				title = "Hide Body";
				condition = "!(alive ExileClientInteractionObject) && ('Exile_Melee_Shovel' isEqualTo (currentWeapon player))";
				action = "['HideBody', (_this select 0)] call ExileClient_action_execute";
			};
		};
	};
};
/**
 * Classname is used for reference
 * name is displayed in crafting requirements
 * models is used for crafting and interaction menus
 */
class CfgInteractionModels
{
	class WaterSource
	{
		name = "Water tanks, barrels, coolers or pumps";
		models[] = 	
		{
			"barrelwater_f", 
			"barrelwater_grey_f",
			"waterbarrel_f",
			"watertank_f",
			"stallwater_f",
			"waterpump_01_f",
			"water_source_f",

			// Namalsk
			"wellpump",
			"Land_jhad_stand_water",
			"Land_Jbad_Misc_Well_L",
			"Land_jbad_Fridge",
			"Land_jbad_reservoir",
			"Land_jbad_teapot",
			"Land_KBud",
			
			//Tanoa
			"watertank_01_f",
			"watertank_02_f",
			"watertank_03_f",
			"watertank_04_f"
		};
	};

	class CleanWaterSource
	{
		name = "Water cooler";
		models[] = 	
		{
			"watercooler"
		};
	};

	class WorkBench
	{
		name = "Work Bench";
		models[] = 
		{
			"workstand_f.p3d"
		};
	};

	class ShippingContainerSource
	{
		name = "Shipping Containers";
		models[] = 
		{
			// Arma 3
			"CargoBox_V1_F",
			"Cargo20_blue_F",
			"Cargo20_brick_red_F",
			"Cargo20_cyan_F",
			"Cargo20_grey_F",
			"Cargo20_light_blue_F",
			"Cargo20_light_green_F",
			"Cargo20_military_green_F",
			"Cargo20_military_ruins_F",
			"Cargo20_orange_F",
			"Cargo20_red_F",
			"Cargo20_sand_F",
			"Cargo20_white_F",
			"Cargo20_yellow_F",
			"Cargo40_blue_F",
			"Cargo40_brick_red_F",
			"Cargo40_cyan_F",
			"Cargo40_grey_F",
			"Cargo40_light_blue_F",
			"Cargo40_light_green_F",
			"Cargo40_military_green_F",
			"Cargo40_orange_F",
			"Cargo40_red_F",
			"Cargo40_sand_F",
			"Cargo40_white_F",
			"Cargo40_yellow_F",

			// Namalsk
			"nam_container.p3d",
			"misc_cargo1d.p3d",
			"misc_cargo1b.p3d",
			"misc_cargo1bo.p3d",
			"misc_cargo2c.p3d",
			"misc_cargo1ao.p3d",
			
			//Tanoa
			"Land_ContainerLine_01_F",
			"Land_ContainerLine_02_F",
			"Land_ContainerLine_03_F",

			// Also allow wrecks
			"wreck_"
/*			
			"wreck_bmp2_f.p3d",
			"wreck_brdm2_f.p3d",
			"wreck_car2_f.p3d",
			"wreck_car3_f.p3d",
			"wreck_car_f.p3d",
			"wreck_cardismantled_f.p3d",
			"wreck_hmmwv_f.p3d",
			"wreck_hunter_f.p3d",
			"wreck_offroad2_f.p3d",
			"wreck_offroad_f.p3d",
			"wreck_skodovka_f.p3d",
			"wreck_slammer_f.p3d",
			"wreck_slammer_hull_f.p3d",
			"wreck_slammer_turret_f.p3d",
			"wreck_t72_hull_f.p3d",
			"wreck_t72_turret_f.p3d",
			"wreck_truck_dropside_f.p3d",
			"wreck_truck_f.p3d",
			"wreck_uaz_f.p3d",
			"wreck_ural_f.p3d"
			"wreck_van_f.p3d",
			*/


			// TODO: Ask community for CUP/AiA model names	
		};
	};

	class WoodSource
	{
		name = "Trees";
		models[] = 
		{
			" t_",
			" bo_t_",

			// A2 trees
            " str_",
            " Smrk_",
            " les_",
            " brg_"			
		};
	};

	// TODO: Add https://community.bistudio.com/wikidata/images/thumb/6/60/Arma3_CfgVehicles_Land_Tank_rust_F.jpg/150px-Arma3_CfgVehicles_Land_Tank_rust_F.jpg
	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			"fuelstation_feed_f.p3d",
			"metalbarrel_f.p3d",
			"flexibletank_01_f.p3d",
			"fs_feed_f.p3d",
			//Tanoa
			"fuelstation_01_pump_f.p3d",
			"fuelstation_02_pump_f.p3d"
		};	
	};
};
class CfgLocker 
{
	numbersOnly = "0123456789";
	
	maxDeposit = 10000000;
};

class CfgPlayer 
{
	// In minutes ammount of time it takes to go from 100 - 0 if stationary
	hungerDecay = 180; //Def: 90
	thirstDecay = 120; //Def: 60

	// Damage taken from 0 (health||thirst)/sec
	healthDecay = 5.0;

	// Health regen if over BOTH
	thirstRegen = 70;
	hungerRegen = 70;

	// IF above meet recover HP%/MIN
	recoveryPerMinute = 5;

	// Set custom aim precision coefficient for weapon sway
	// https://community.bistudio.com/wiki/Arma_3_Stamina
	// Set to -1 if you want to use Arma 3 default value
	// setCustomAimCoef
	customAimCoefficient = 0.5;

	// 0 or 1
	enableFatigue = 0;
	enableStamina = 0;

	disableMapDrawing = 1;
};
class CfgSlothMachine
{
	spinCost = 100;
	Jackpot = 10100;
	
	chances[] = 
	{
		{85, ""}, 					// 85% = Nothing
		{95, "Level1"}, 			// 10% = 1pt
		{96, "Level2"}, 			// 1% = 10pt
		{97, "Level3"}, 			// 1% = 25pt
		{98, "Level4"}, 			// 1% = 50pt
		{99, "Level5"},				// 1% = 100pt
		{100, "Jackpot"} 			// 1% = Jackpot
	};

	class Prizes 
	{
		class Level1
		{
			symbol = "\exile_assets\texture\item\Exile_Item_ToiletPaper.paa";
			prize = 101;
		};

		class Level2
		{
			symbol = "\exile_assets\texture\item\Exile_Item_CockONut.paa";
			prize = 110;
		};

		class Level3
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Beer.paa";
			prize = 125;
		};

		class Level4
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Knife.paa";
			prize = 150;
		};

		class Level5
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Safe.paa";
			prize = 200;
		};
		
		class Jackpot
		{
			symbol = "\exile_assets\texture\item\Exile_Item_XmasPresent.paa";
		};
	};
};
class CfgTerritories
{
	// Base Cost / Radius
	// Level 1 is allways for Pop Tabs, >= 2 for Respect
	prices[] = 
	{
		// Purchase Price 		Radius 		Number of Objects
		{5000,					15,			30 					}, // Level 1
		{10000,					30,			60 					}, // Level 2 
		{15000,					45,			90 					}, // Level 3
		{20000,					60,			120					}, // Level 4
		{25000,					75,			150					}, // Level 5
		{30000,					90,			180					}, // Level 6
		{35000,					105,		210					}, // Level 7
		{40000,					120,		240					}, // Level 8
		{45000,					135,		270					}, // Level 9
		{50000,					150,		300					}  // Level 10
	};

	// A shortcut of the above maximum radius
	maximumRadius = 150;

	// The above * 2 plus coverving the 20m you can move while placing things
	minimumDistanceToOtherTerritories = 325; 

	// Maximum number of territories a player can own
	maximumNumberOfTerritoriesPerPlayer = 4;

	/**
	 * Defines the minimum distance to safe zones / trader cities where players
	 * cannot build territories
	 */
	minimumDistanceToTraderZones = 1000;

	/**
	 * Defines the minimum distance to spawn zones where players
	 * cannot build territories
	 */
	minimumDistanceToSpawnZones = 1000;

	// Amount of pop tabs per object to pay
	popTabAmountPerObject = 10;
};
class CfgTraderCategories 
{
	class Community
	{
		name = "Community Items";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community2
	{
		name = "Community Items 2";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community3
	{
		name = "Community Items 3";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community4
	{
		name = "Community Items 4";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community5
	{
		name = "Community Items 5";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community6
	{
		name = "Community Items 6";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community7
	{
		name = "Community Items 7";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community8
	{
		name = "Community Items 8";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community9
	{
		name = "Community Items 9";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community10
	{
		name = "Community Items 10";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Uniforms
	{
		name = "Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			"U_C_Journalist",
			"U_C_Poloshirt_blue",
			"U_C_Poloshirt_burgundy",
			"U_C_Poloshirt_salmon",
			"U_C_Poloshirt_stripped",
			"U_C_Poloshirt_tricolour",
			"U_C_Poor_1",
			"U_C_Poor_2",
			"U_C_Poor_shorts_1",
			"U_C_Scientist",
			"U_OrestesBody",
			"U_Rangemaster",
			"U_NikosAgedBody",
			"U_NikosBody",
			"U_Competitor",
			"U_B_CombatUniform_mcam",
			"U_B_CombatUniform_mcam_tshirt",
			"U_B_CombatUniform_mcam_vest",
			"U_B_CombatUniform_mcam_worn",
			"U_B_CTRG_1",
			"U_B_CTRG_2",
			"U_B_CTRG_3",
			"U_I_CombatUniform",
			"U_I_CombatUniform_shortsleeve",
			"U_I_CombatUniform_tshirt",
			"U_I_OfficerUniform",
			"U_O_CombatUniform_ocamo",
			"U_O_CombatUniform_oucamo",
			"U_O_OfficerUniform_ocamo",
			"U_B_SpecopsUniform_sgg",
			"U_O_SpecopsUniform_blk",
			"U_O_SpecopsUniform_ocamo",
			"U_I_G_Story_Protagonist_F",
			"Exile_Uniform_Woodland",
			"U_C_HunterBody_grn",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla3_1",
			"U_BG_Guerilla2_1",
			"U_IG_Guerilla3_2",
			"U_BG_Guerrilla_6_1",
			"U_BG_Guerilla1_1",
			"U_BG_Guerilla2_2",
			"U_BG_Guerilla2_3",
			"U_BG_Guerilla3_1",
			"U_BG_leader",
			"U_IG_leader",
			"U_I_G_resistanceLeader_F",
			"U_B_FullGhillie_ard",
			"U_B_FullGhillie_lsh",
			"U_B_FullGhillie_sard",
			"U_B_GhillieSuit",
			"U_I_FullGhillie_ard",
			"U_I_FullGhillie_lsh",
			"U_I_FullGhillie_sard",
			"U_I_GhillieSuit",
			"U_O_FullGhillie_ard",
			"U_O_FullGhillie_lsh",
			"U_O_FullGhillie_sard",
			"U_O_GhillieSuit",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit",
			"U_B_survival_uniform",
			"U_B_HeliPilotCoveralls",
			"U_I_HeliPilotCoveralls",
			"U_B_PilotCoveralls",
			"U_I_pilotCoveralls",
			"U_O_PilotCoveralls",
			//Apex
			"U_B_T_Soldier_F",
			"U_B_T_Soldier_AR_F",
			"U_B_T_Soldier_SL_F",
			"U_B_T_Sniper_F",
			"U_B_T_FullGhillie_tna_F",
			"U_B_CTRG_Soldier_F",
			"U_B_CTRG_Soldier_2_F",
			"U_B_CTRG_Soldier_3_F",
			"U_B_GEN_Soldier_F",
			"U_B_GEN_Commander_F",
			"U_O_T_Soldier_F",
			"U_O_T_Officer_F",
			"U_O_T_Sniper_F",
			"U_O_T_FullGhillie_tna_F",
			"U_O_V_Soldier_Viper_F",
			"U_O_V_Soldier_Viper_hex_F",
			"U_I_C_Soldier_Para_1_F",
			"U_I_C_Soldier_Para_2_F",
			"U_I_C_Soldier_Para_3_F",
			"U_I_C_Soldier_Para_4_F",
			"U_I_C_Soldier_Para_5_F",
			"U_I_C_Soldier_Bandit_1_F",
			"U_I_C_Soldier_Bandit_2_F",
			"U_I_C_Soldier_Bandit_3_F",
			"U_I_C_Soldier_Bandit_4_F",
			"U_I_C_Soldier_Bandit_5_F",
			"U_I_C_Soldier_Camo_F",
			"U_C_man_sport_1_F",
			"U_C_man_sport_2_F",
			"U_C_man_sport_3_F",
			"U_C_Man_casual_1_F",
			"U_C_Man_casual_2_F",
			"U_C_Man_casual_3_F",
			"U_C_Man_casual_4_F",
			"U_C_Man_casual_5_F",
			"U_C_Man_casual_6_F",
			"U_B_CTRG_Soldier_urb_1_F",
			"U_B_CTRG_Soldier_urb_2_F",
			"U_B_CTRG_Soldier_urb_3_F",
			// Wolfe fuckin CUP EDITS
				"CUP_O_TKI_Khet_Partug_01",
				"CUP_O_TKI_Khet_Partug_02",
				"CUP_O_TKI_Khet_Partug_03",
				"CUP_O_TKI_Khet_Partug_04",
				"CUP_O_TKI_Khet_Partug_05",
				"CUP_O_TKI_Khet_Partug_06",
				"CUP_O_TKI_Khet_Partug_07",
				"CUP_O_TKI_Khet_Partug_08",
				"CUP_O_TKI_Khet_Jeans_01",
				"CUP_O_TKI_Khet_Jeans_02",
				"CUP_O_TKI_Khet_Jeans_03",
				"CUP_O_TKI_Khet_Jeans_04",
				"CUP_U_C_Pilot_01",
				"CUP_U_C_Citizen_01",
				"CUP_U_C_Citizen_02",
				"CUP_U_C_Citizen_03",
				"CUP_U_C_Citizen_04",
				"CUP_U_C_Worker_01",
				"CUP_U_C_Worker_02",
				"CUP_U_C_Worker_03",
				"CUP_U_C_Worker_04",
				"CUP_U_C_Profiteer_01",
				"CUP_U_C_Profiteer_02",
				"CUP_U_C_Profiteer_03",
				"CUP_U_C_Profiteer_04",
				"CUP_U_C_Woodlander_01",
				"CUP_U_C_Woodlander_02",
				"CUP_U_C_Woodlander_03",
				"CUP_U_C_Woodlander_04",
				"CUP_U_C_Villager_01",
				"CUP_U_C_Villager_02",
				"CUP_U_C_Villager_03",
				"CUP_U_C_Villager_04",
				"CUP_U_B_CZ_WDL_TShirt",
				"CUP_U_B_GER_Tropentarn_1",
				"CUP_U_B_GER_Tropentarn_2",
				"CUP_U_B_GER_Ghillie",
				"CUP_U_B_GER_Flecktarn_1",
				"CUP_U_B_GER_Flecktarn_2",
				"CUP_U_B_GER_Fleck_Ghillie",
				"CUP_U_B_USMC_Officer",
				"CUP_U_B_USMC_PilotOverall",
				"CUP_U_B_USMC_Ghillie_WDL",
				"CUP_U_B_USMC_MARPAT_WDL_Sleeves",
				"CUP_U_B_USMC_MARPAT_WDL_RolledUp",
				"CUP_U_B_USMC_MARPAT_WDL_Kneepad",
				"CUP_U_B_USMC_MARPAT_WDL_TwoKneepads",
				"CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad",
				"CUP_U_B_FR_SpecOps",
				"CUP_U_B_FR_Scout",
				"CUP_U_B_FR_Scout1",
				"CUP_U_B_FR_Scout2",
				"CUP_U_B_FR_Scout3",
				"CUP_U_B_FR_Officer",
				"CUP_U_B_FR_Corpsman",
				"CUP_U_B_FR_DirAction",
				"CUP_U_B_FR_DirAction2",
				"CUP_U_B_FR_Light",
				"CUP_U_I_GUE_Flecktarn",
				"CUP_U_I_GUE_Flecktarn2",
				"CUP_U_I_GUE_Flecktarn3",
				"CUP_U_I_GUE_Woodland1",
				"CUP_U_I_Ghillie_Top",
				"CUP_U_I_RACS_PilotOverall",
				"CUP_U_I_RACS_Desert_1",
				"CUP_U_I_RACS_Desert_2",
				"CUP_U_I_RACS_Urban_1",
				"CUP_U_I_RACS_Urban_2",
				"CUP_U_O_SLA_Officer",
				"CUP_U_O_SLA_Officer_Suit",
				"CUP_U_O_SLA_MixedCamo",
				"CUP_U_O_SLA_Green",
				"CUP_U_O_SLA_Urban",
				"CUP_U_O_SLA_Desert",
				"CUP_U_O_SLA_Overalls_Pilot",
				"CUP_U_O_SLA_Overalls_Tank",
				"CUP_U_O_Partisan_TTsKO",
				"CUP_U_O_Partisan_TTsKO_Mixed",
				"CUP_U_O_Partisan_VSR_Mixed1",
				"CUP_U_O_Partisan_VSR_Mixed2",
				"CUP_U_O_TK_Officer",
				"CUP_U_O_TK_MixedCamo",
				"CUP_U_O_TK_Green",
				"CUP_U_O_TK_Ghillie",
				"CUP_U_O_TK_Ghillie_Top"
		};
	};

	class Vests
	{
		name = "Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] = 
		{
			"V_Press_F",
			"V_Rangemaster_belt",
			"V_TacVest_blk",
			"V_TacVest_blk_POLICE",
			"V_TacVest_brn",
			"V_TacVest_camo",
			"V_TacVest_khk",
			"V_TacVest_oli",
			"V_TacVestCamo_khk",
			"V_TacVestIR_blk",
			"V_I_G_resistanceLeader_F",
			"V_BandollierB_blk",
			"V_BandollierB_cbr",
			"V_BandollierB_khk",
			"V_BandollierB_oli",
			"V_BandollierB_rgr",
			"V_Chestrig_blk",
			"V_Chestrig_khk",
			"V_Chestrig_oli",
			"V_Chestrig_rgr",
			"V_HarnessO_brn",
			"V_HarnessO_gry",
			"V_HarnessOGL_brn",
			"V_HarnessOGL_gry",
			"V_HarnessOSpec_brn",
			"V_HarnessOSpec_gry",
			"V_PlateCarrier1_blk",
			"V_PlateCarrier1_rgr",
			"V_PlateCarrier2_rgr",
			"V_PlateCarrier3_rgr",
			"V_PlateCarrierGL_blk",
			"V_PlateCarrierGL_mtp",
			"V_PlateCarrierGL_rgr",
			"V_PlateCarrierH_CTRG",
			"V_PlateCarrierIA1_dgtl",
			"V_PlateCarrierIA2_dgtl",
			"V_PlateCarrierIAGL_dgtl",
			"V_PlateCarrierIAGL_oli",
			"V_PlateCarrierL_CTRG",
			"V_PlateCarrierSpec_blk",
			"V_PlateCarrierSpec_mtp",
			"V_PlateCarrierSpec_rgr",
			//Apex
			"V_TacChestrig_grn_F",
			"V_TacChestrig_oli_F",
			"V_TacChestrig_cbr_F",
			"V_PlateCarrier1_tna_F",
			"V_PlateCarrier2_tna_F",
			"V_PlateCarrierSpec_tna_F",
			"V_PlateCarrierGL_tna_F",
			"V_HarnessO_ghex_F",
			"V_HarnessOGL_ghex_F",
			"V_BandollierB_ghex_F",
			"V_TacVest_gen_F",
			"V_PlateCarrier1_rgr_noflag_F",
			"V_PlateCarrier2_rgr_noflag_F",
			// Wolfe fuckin CUP EDITS
			"CUP_V_B_GER_Carrier_Rig",
            "CUP_V_B_GER_Carrier_Rig_2",
            "CUP_V_B_GER_Carrier_Vest",
            "CUP_V_B_GER_Carrier_Vest_2",
            "CUP_V_B_GER_Carrier_Vest_3",
            "CUP_V_B_GER_Vest_1",
            "CUP_V_B_GER_Vest_2",
            "CUP_V_B_MTV",
            "CUP_V_B_MTV_Patrol",
            "CUP_V_B_MTV_Pouches",
            "CUP_V_B_MTV_noCB",
            "CUP_V_B_MTV_Marksman",
            "CUP_V_B_MTV_PistolBlack",
            "CUP_V_B_MTV_LegPouch",
            "CUP_V_B_MTV_MG",
            "CUP_V_B_MTV_Mine",
            "CUP_V_B_MTV_TL",
            "CUP_V_B_PilotVest",
            "CUP_V_B_RRV_TL",
            "CUP_V_B_RRV_Officer",
            "CUP_V_B_RRV_Medic",
            "CUP_V_B_RRV_DA1",
            "CUP_V_B_RRV_DA2",
            "CUP_V_B_RRV_MG",
            "CUP_V_B_RRV_Light",
            "CUP_V_B_RRV_Scout",
            "CUP_V_B_RRV_Scout2",
            "CUP_V_B_RRV_Scout3",
            "CUP_V_B_LHDVest_Blue",
            "CUP_V_B_LHDVest_Brown",
            "CUP_V_B_LHDVest_Green",
            "CUP_V_B_LHDVest_Red",
            "CUP_V_B_LHDVest_Violet",
            "CUP_V_B_LHDVest_White",
            "CUP_V_B_LHDVest_Yellow",
            "CUP_V_I_Carrier_Belt",
            "CUP_V_I_Guerilla_Jacket",
            "CUP_V_I_RACS_Carrier_Vest",
            "CUP_V_I_RACS_Carrier_Vest_2",
            "CUP_V_I_RACS_Carrier_Vest_3",
            "CUP_V_O_SLA_Carrier_Belt",
            "CUP_V_O_SLA_Carrier_Belt02",
            "CUP_V_O_SLA_Carrier_Belt03",
            "CUP_V_O_SLA_Flak_Vest01",
            "CUP_V_O_SLA_Flak_Vest02",
            "CUP_V_O_SLA_Flak_Vest03",
            "CUP_V_O_TK_CrewBelt",
            "CUP_V_O_TK_OfficerBelt",
            "CUP_V_O_TK_OfficerBelt2",
            "CUP_V_O_TK_Vest_1",
            "CUP_V_O_TK_Vest_2",
            "CUP_V_OI_TKI_Jacket1_01",
            "CUP_V_OI_TKI_Jacket1_02",
            "CUP_V_OI_TKI_Jacket1_03",
            "CUP_V_OI_TKI_Jacket1_04",
            "CUP_V_OI_TKI_Jacket1_05",
            "CUP_V_OI_TKI_Jacket1_06",
            "CUP_V_OI_TKI_Jacket2_01",
            "CUP_V_OI_TKI_Jacket2_02",
            "CUP_V_OI_TKI_Jacket2_03",
            "CUP_V_OI_TKI_Jacket2_04",
            "CUP_V_OI_TKI_Jacket2_05",
            "CUP_V_OI_TKI_Jacket2_06",
            "CUP_V_OI_TKI_Jacket3_01",
            "CUP_V_OI_TKI_Jacket3_02",
            "CUP_V_OI_TKI_Jacket3_03",
            "CUP_V_OI_TKI_Jacket3_04",
            "CUP_V_OI_TKI_Jacket3_05",
            "CUP_V_OI_TKI_Jacket3_06",
            "CUP_V_OI_TKI_Jacket4_01",
            "CUP_V_OI_TKI_Jacket4_02",
            "CUP_V_OI_TKI_Jacket4_03",
            "CUP_V_OI_TKI_Jacket4_04",
            "CUP_V_OI_TKI_Jacket4_05",
            "CUP_V_OI_TKI_Jacket4_06"	
		};
	};

	class Headgear 
	{
		name = "Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			"Exile_Headgear_SantaHat",
			"Exile_Headgear_SafetyHelmet",
			"H_Cap_blk",
			"H_Cap_blk_Raven",
			"H_Cap_blu",
			"H_Cap_brn_SPECOPS",
			"H_Cap_grn",
			"H_Cap_headphones",
			"H_Cap_khaki_specops_UK",
			"H_Cap_oli",
			"H_Cap_press",
			"H_Cap_red",
			"H_Cap_tan",
			"H_Cap_tan_specops_US",
			"H_Watchcap_blk",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Watchcap_sgg",
			"H_MilCap_blue",
			"H_MilCap_dgtl",
			"H_MilCap_mcamo",
			"H_MilCap_ocamo",
			"H_MilCap_oucamo",
			"H_MilCap_rucamo",
			"H_Bandanna_camo",
			"H_Bandanna_cbr",
			"H_Bandanna_gry",
			"H_Bandanna_khk",
			"H_Bandanna_khk_hs",
			"H_Bandanna_mcamo",
			"H_Bandanna_sgg",
			"H_Bandanna_surfer",
			"H_Booniehat_dgtl",
			"H_Booniehat_dirty",
			"H_Booniehat_grn",
			"H_Booniehat_indp",
			"H_Booniehat_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_mcamo",
			"H_Booniehat_tan",
			"H_Hat_blue",
			"H_Hat_brown",
			"H_Hat_camo",
			"H_Hat_checker",
			"H_Hat_grey",
			"H_Hat_tan",
			"H_StrawHat",
			"H_StrawHat_dark",
			"H_Beret_02",
			"H_Beret_blk",
			"H_Beret_blk_POLICE",
			"H_Beret_brn_SF",
			"H_Beret_Colonel",
			"H_Beret_grn",
			"H_Beret_grn_SF",
			"H_Beret_ocamo",
			"H_Beret_red",
			"H_Shemag_khk",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_Shemag_tan",
			"H_ShemagOpen_khk",
			"H_ShemagOpen_tan",
			"H_TurbanO_blk",
			"H_HelmetB",
			"H_HelmetB_black",
			"H_HelmetB_camo",
			"H_HelmetB_desert",
			"H_HelmetB_grass",
			"H_HelmetB_light",
			"H_HelmetB_light_black",
			"H_HelmetB_light_desert",
			"H_HelmetB_light_grass",
			"H_HelmetB_light_sand",
			"H_HelmetB_light_snakeskin",
			"H_HelmetB_paint",
			"H_HelmetB_plain_blk",
			"H_HelmetB_sand",
			"H_HelmetB_snakeskin",
			"H_HelmetCrew_B",
			"H_HelmetCrew_I",
			"H_HelmetCrew_O",
			"H_HelmetIA",
			"H_HelmetIA_camo",
			"H_HelmetIA_net",
			"H_HelmetLeaderO_ocamo",
			"H_HelmetLeaderO_oucamo",
			"H_HelmetO_ocamo",
			"H_HelmetO_oucamo",
			"H_HelmetSpecB",
			"H_HelmetSpecB_blk",
			"H_HelmetSpecB_paint1",
			"H_HelmetSpecB_paint2",
			"H_HelmetSpecO_blk",
			"H_HelmetSpecO_ocamo",
			"H_CrewHelmetHeli_B",
			"H_CrewHelmetHeli_I",
			"H_CrewHelmetHeli_O",
			"H_HelmetCrew_I",
			"H_HelmetCrew_B",
			"H_HelmetCrew_O",
			"H_PilotHelmetHeli_B",
			"H_PilotHelmetHeli_I",
			"H_PilotHelmetHeli_O",
			//Apex
			"H_Helmet_Skate",
			"H_HelmetB_TI_tna_F",
			//"H_HelmetO_ViperSP_hex_F",
			//"H_HelmetO_ViperSP_ghex_F",
			"H_HelmetB_tna_F",
			"H_HelmetB_Enh_tna_F",
			"H_HelmetB_Light_tna_F",
			"H_HelmetSpecO_ghex_F",
			"H_HelmetLeaderO_ghex_F",
			"H_HelmetO_ghex_F",
			"H_HelmetCrew_O_ghex_F",
			"H_MilCap_tna_F",
			"H_MilCap_ghex_F",
			"H_Booniehat_tna_F",
			"H_Beret_gen_F",
			"H_MilCap_gen_F",
			"H_Cap_oli_Syndikat_F",
			"H_Cap_tan_Syndikat_F",
			"H_Cap_blk_Syndikat_F",
			"H_Cap_grn_Syndikat_F",
			//Wolfe fuckin CUP EIDTS
				"CUP_H_C_Ushanka_01",
				"CUP_H_C_Ushanka_02",
				"CUP_H_C_Ushanka_03",
				"CUP_H_C_Ushanka_04",
				"CUP_H_C_Beanie_01",
				"CUP_H_C_Beanie_02",
				"CUP_H_C_Beanie_03",
				"CUP_H_C_Beanie_04",
				"CUP_H_C_Beret_01",
				"CUP_H_C_Beret_02",
				"CUP_H_C_Beret_03",
				"CUP_H_C_Beret_04",
				"CUP_H_GER_Boonie_desert",
				"CUP_H_GER_Boonie_Flecktarn",
				"CUP_H_NAPA_Fedora",
				"CUP_H_PMC_PRR_Headset",
				"CUP_H_PMC_EP_Headset",
				"CUP_H_PMC_Cap_Tan",
				"CUP_H_PMC_Cap_Grey",
				"CUP_H_PMC_Cap_PRR_Tan",
				"CUP_H_PMC_Cap_PRR_Grey",
				"CUP_H_RACS_Beret_Blue",
				"CUP_H_RACS_Helmet_Des",
				"CUP_H_RACS_Helmet_Goggles_Des",
				"CUP_H_RACS_Helmet_Headset_Des",
				"CUP_H_RACS_Helmet_DPAT",
				"CUP_H_RACS_Helmet_Goggles_DPAT",
				"CUP_H_RACS_Helmet_Headset_DPAT",
				"CUP_H_SLA_TankerHelmet",
				"CUP_H_SLA_Helmet",
				"CUP_H_SLA_Pilot_Helmet",
				"CUP_H_SLA_OfficerCap",
				"CUP_H_SLA_SLCap",
				"CUP_H_SLA_Boonie",
				"CUP_H_SLA_Beret",
				//"CUP_H_SLA_BeretRed",
				"CUP_H_SLA_BeenieGreen",
				"CUP_H_TK_TankerHelmet",
				"CUP_H_TK_PilotHelmet",
				"CUP_H_TK_Helmet",
				"CUP_H_TK_Lungee",
				"CUP_H_TK_Beret",
				"CUP_H_TKI_SkullCap_01",
				"CUP_H_TKI_SkullCap_02",
				"CUP_H_TKI_SkullCap_03",
				"CUP_H_TKI_SkullCap_04",
				"CUP_H_TKI_SkullCap_05",
				"CUP_H_TKI_SkullCap_06",
				"CUP_H_TKI_Lungee_01",
				"CUP_H_TKI_Lungee_02",
				"CUP_H_TKI_Lungee_03",
				"CUP_H_TKI_Lungee_04",
				"CUP_H_TKI_Lungee_05",
				"CUP_H_TKI_Lungee_06",
				"CUP_H_TKI_Lungee_Open_01",
				"CUP_H_TKI_Lungee_Open_02",
				"CUP_H_TKI_Lungee_Open_03",
				"CUP_H_TKI_Lungee_Open_04",
				"CUP_H_TKI_Lungee_Open_05",
				"CUP_H_TKI_Lungee_Open_06",
				"CUP_H_TKI_Pakol_1_01",
				"CUP_H_TKI_Pakol_1_02",
				"CUP_H_TKI_Pakol_1_03",
				"CUP_H_TKI_Pakol_1_04",
				"CUP_H_TKI_Pakol_1_05",
				"CUP_H_TKI_Pakol_1_06",
				"CUP_H_TKI_Pakol_2_01",
				"CUP_H_TKI_Pakol_2_02",
				"CUP_H_TKI_Pakol_2_03",
				"CUP_H_TKI_Pakol_2_04",
				"CUP_H_TKI_Pakol_2_05",
				"CUP_H_TKI_Pakol_2_06",
				"CUP_H_USMC_Officer_Cap",
				"CUP_H_USMC_HelmetWDL",
				"CUP_H_USMC_HeadSet_HelmetWDL",
				"CUP_H_USMC_HeadSet_GoggleW_HelmetWDL",
				"CUP_H_USMC_Crew_Helmet",
				"CUP_H_USMC_Goggles_HelmetWDL",
				"CUP_H_USMC_Helmet_Pilot",
				"CUP_H_FR_Headset",
				"CUP_H_FR_Cap_Headset_Green",
				"CUP_H_FR_Cap_Officer_Headset",
				"CUP_H_FR_BandanaGreen",
				"CUP_H_FR_BandanaWdl",
				"CUP_H_FR_Bandana_Headset",
				"CUP_H_FR_Headband_Headset",
				"CUP_H_FR_ECH",
				"CUP_H_FR_BoonieMARPAT",
				"CUP_H_FR_BoonieWDL",
				"CUP_H_FR_BeanieGreen",
				"CUP_H_FR_PRR_BoonieWDL",
				"CUP_H_Navy_CrewHelmet_Blue",
				"CUP_H_Navy_CrewHelmet_Brown",
				"CUP_H_Navy_CrewHelmet_Green",
				"CUP_H_Navy_CrewHelmet_Red",
				"CUP_H_Navy_CrewHelmet_Violet",
				"CUP_H_Navy_CrewHelmet_White",
				"CUP_H_Navy_CrewHelmet_Yellow"
			
		};
	};

class Glasses 
	{
		name = "Glasses";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\Goggles_ca.paa";
		items[] =
		{
			"G_Spectacles",
			"G_Spectacles_Tinted",
			"G_Combat",
			"G_Lowprofile",
			"G_Shades_Black",
			"G_Shades_Green",
			"G_Shades_Red",
			"G_Squares",
			"G_Squares_Tinted",
			"G_Sport_BlackWhite",
			"G_Sport_Blackyellow",
			"G_Sport_Greenblack",
			"G_Sport_Checkered",
			"G_Sport_Red",
			"G_Tactical_Black",
			"G_Aviator",
			"G_Lady_Mirror",
			"G_Lady_Dark",
			"G_Lady_Red",
			"G_Lady_Blue",
			"G_Diving",
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving",
			"G_Goggles_VR",
			"G_Balaclava_blk",
			"G_Balaclava_oli",
			"G_Balaclava_combat",
			"G_Balaclava_lowprofile",
			"G_Bandanna_blk",
			"G_Bandanna_oli",
			"G_Bandanna_khk",
			"G_Bandanna_tan",
			"G_Bandanna_beast",
			"G_Bandanna_shades",
			"G_Bandanna_sport",
			"G_Bandanna_aviator",
			"G_Shades_Blue",
			"G_Sport_Blackred",
			"G_Tactical_Clear",
			"G_Balaclava_TI_blk_F",
			"G_Balaclava_TI_tna_F",
			"G_Balaclava_TI_G_blk_F",
			"G_Balaclava_TI_G_tna_F",
			"G_Combat_Goggles_tna_F"
		};
	};

	class PointerAttachments 
	{
		name = "Pointer Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"acc_flashlight",
			"acc_pointer_IR"
		};
	};

	class BipodAttachments 
	{
		name = "Bipod Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itembipod_ca.paa";
		items[] = 
		{
			"bipod_01_F_blk",
			"bipod_01_F_mtp",
			"bipod_01_F_snd",
			"bipod_02_F_blk",
			"bipod_02_F_hex",
			"bipod_02_F_tan",
			"bipod_03_F_blk",
			"bipod_03_F_oli",
			//Apex
			"bipod_01_F_khk"
		};
	};

	class MuzzleAttachments 
	{
		name = "Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] = 
		{
			"muzzle_snds_338_black",
			"muzzle_snds_338_green",
			"muzzle_snds_338_sand",
			"muzzle_snds_93mmg",
			"muzzle_snds_93mmg_tan",
			"muzzle_snds_acp",
			"muzzle_snds_B",
			"muzzle_snds_H",
			"muzzle_snds_H_MG",
			"muzzle_snds_H_SW",
			"muzzle_snds_L",
			"muzzle_snds_M",
			//Apex
			"muzzle_snds_H_khk_F",
			"muzzle_snds_H_snd_F",
			"muzzle_snds_58_blk_F",
			"muzzle_snds_m_khk_F",
			"muzzle_snds_m_snd_F",
			"muzzle_snds_B_khk_F",
			"muzzle_snds_B_snd_F",
			"muzzle_snds_58_wdm_F",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_65_TI_hex_F",
			"muzzle_snds_65_TI_ghex_F",
			"muzzle_snds_H_MG_blk_F",
			"muzzle_snds_H_MG_khk_F",
			
			//Wolfe FUCKINNFG CUP EDITSXS
			"CUP_muzzleFlash2SCAR_L",
			"CUP_muzzle_mfsup_SCAR_H",
			"CUP_muzzleFlash2SCAR_L",
			"CUP_muzzle_mfsup_SCAR_L",
			"CUP_muzzle_mfsup_SCAR_H",
			"CUP_muzzle_snds_AWM",
			"CUP_muzzle_PBS4",
			"CUP_muzzle_PB6P9",
			"CUP_muzzle_Bizon",
			"CUP_muzzle_snds_G36_black",
			"CUP_muzzle_snds_G36_desert",
			"CUP_muzzle_snds_L85",
			"CUP_muzzle_snds_M110",
			"CUP_muzzle_snds_M14",
			"CUP_muzzle_snds_M16_camo",
			"CUP_muzzle_snds_M16",
			"CUP_muzzle_snds_M9",
			"CUP_muzzle_snds_MicroUzi",
			"CUP_muzzle_snds_XM8",
			"CUP_muzzle_snds_SCAR_L",
			"CUP_muzzle_snds_SCAR_H",
			"CUP_optic_MAAWS_Scope",
			"CUP_optic_SMAW_Scope",
			"CUP_optic_AN_PAS_13c1",
			"CUP_optic_AN_PAS_13c2",
			"CUP_optic_GOSHAWK",
			"CUP_optic_AN_PVS_10",
			"CUP_optic_AN_PVS_4",
			"CUP_optic_NSPU",
			"CUP_optic_SB_3_12x50_PMII",
			"CUP_optic_LeupoldMk4",
			"CUP_optic_Leupold_VX3",
			"CUP_optic_LeupoldM3LR",
			"CUP_optic_LeupoldMk4_10x40_LRT_Desert",
			"CUP_optic_LeupoldMk4_10x40_LRT_Woodland",
			"CUP_optic_LeupoldMk4_CQ_T",
			"CUP_optic_LeupoldMk4_MRT_tan",
			"CUP_optic_PechenegScope",
			"CUP_optic_PSO_1",
			"CUP_optic_PSO_3",
			"CUP_optic_SUSAT",
			"CUP_optic_ElcanM145",
			"CUP_optic_ELCAN_SpecterDR",
			"CUP_optic_CWS",
			"CUP_optic_RCO",
			"CUP_optic_RCO_desert",
			"CUP_optic_RCO",
			"CUP_optic_ZDDot",
			"CUP_optic_MRad",
			"CUP_optic_SB_11_4x20_PM",
			"CUP_optic_TrijiconRx01_desert",
			"CUP_optic_TrijiconRx01_black",
			"CUP_optic_CompM4",
			"CUP_optic_CompM2_Black",
			"CUP_optic_CompM2_Woodland",
			"CUP_optic_CompM2_Woodland2",
			"CUP_optic_CompM2_Desert",
			"CUP_optic_HoloBlack",
			"CUP_optic_HoloWdl",
			"CUP_optic_HoloDesert",
			"CUP_optic_Eotech533",
			"CUP_optic_Eotech533Grey",
			"CUP_optic_Eotech533Grey",
			"CUP_acc_Flashlight",
			"CUP_acc_Flashlight_wdl",
			"CUP_acc_Flashlight_desert",
			"CUP_acc_XM8_light_module",
			"CUP_acc_CZ_M3X",
			"CUP_acc_Glock17_Flashlight"
		};
	};

	class UAVs
	{
		name = "Unmanned Aerial Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
		items[] = 
		{
			"I_UavTerminal",
			"I_UAV_01_backpack_F"
		};
	};

	class StaticMGs
	{
		name = "Static Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"O_HMG_01_support_F",
			//"O_HMG_01_support_high_F", // Does not seem to work with HMG01, only the lower version does
			"O_HMG_01_weapon_F"
		};
	};

	class OpticAttachments 
	{
		name = "Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] = 
		{
			"optic_Aco",
			"optic_ACO_grn",
			"optic_ACO_grn_smg",
			"optic_Aco_smg",
			"optic_AMS",
			"optic_AMS_khk",
			"optic_AMS_snd",
			"optic_Arco",
			"optic_DMS",
			"optic_Hamr",
			"optic_Holosight",
			"optic_Holosight_smg",
			"optic_KHS_blk",
			"optic_KHS_hex",
			"optic_KHS_old",
			"optic_KHS_tan",
			"optic_LRPS",
			"optic_MRCO",
			"optic_MRD",
			"optic_Nightstalker",
			"optic_NVS",
			"optic_SOS",
			//"optic_tws",
			//"optic_tws_mg",
			"optic_Yorris",
			//Apex
			"optic_Arco_blk_F",
			"optic_Arco_ghex_F",
			"optic_DMS_ghex_F",
			"optic_Hamr_khk_F",
			"optic_ERCO_blk_F",
			"optic_ERCO_khk_F",
			"optic_ERCO_snd_F",
			"optic_SOS_khk_F",
			"optic_LRPS_tna_F",
			"optic_LRPS_ghex_F",
			"optic_Holosight_blk_F",
			"optic_Holosight_khk_F",
			"optic_Holosight_smg_blk_F",
			
				//nia shit
			
			"hlc_optic_PVS4FAL",
			"hlc_optic_suit	",
			"hlc_muzzle_snds_fal",
			"hlc_muzzle_snds_HK33",
			"hlc_muzzle_snds_G3",
			"HLC_Optic_ZFSG1",
			"hlc_optic_accupoint_g3",
			"hlc_muzzle_556NATO_KAC",
			"hlc_muzzle_300blk_KAC"
		};
	};

	class Hardware 
	{
		name = "Hardware";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			
			"Exile_Item_DuctTape",
			"Exile_Item_ExtensionCord",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_JunkMetal",
			"Exile_Item_LightBulb",
			"Exile_Item_MetalBoard",
			"Exile_Item_MetalPole",
			"Exile_Item_SafeKit",
			"Exile_Item_CamoTentKit",
			"Exile_Item_CodeLock"
			
			/*
			--Not for Sale--
			"Exile_Item_MetalScrews",
			"Exile_Item_MetalWire",
			"Exile_Item_Laptop",
			"Exile_Item_BaseCameraKit",
			"Exile_Item_MetalHedgehogKit",
			"Exile_Item_Cement",
			"Exile_Item_Sand",
			"Exile_Item_MobilePhone",
			--Unused--
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_FireExtinguisher",
			"Exile_Item_OilCanister",
			"Exile_Item_Hammer",
			"Exile_Item_Carwheel",
			"Exile_Item_SleepingMat",
			"Exile_Item_Defibrillator",
			"Exile_Item_Wrench",
			"Exile_Item_Rope"
		*/
		};
	};

	class Food 
	{
		name = "Fast Food";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_EMRE",		
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_Surstromming",
			"Exile_Item_SausageGravy",
			"Exile_Item_Catfood",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_BBQSandwich",
			"Exile_Item_MacasCheese",
			"Exile_Item_Dogfood",
			"Exile_Item_BeefParts",
			"Exile_Item_Cheathas",
			"Exile_Item_Noodles",
			"Exile_Item_SeedAstics",
			"Exile_Item_Raisins",
			"Exile_Item_Moobar",
			"Exile_Item_InstantCoffee"
		};
	};

	class Drinks 
	{
		name = "Drinks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_PlasticBottleCoffee",
			"Exile_Item_PowerDrink",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_Beer",
			"Exile_Item_EnergyDrink",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_MountainDupe",
			"Exile_Item_PlasticBottleEmpty"
		};
	};

	class Tools
	{
		name = "Tools";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_Matches",
			"Exile_Item_CookingPot",
			"Exile_Item_CanOpener",
			"Exile_Item_Handsaw",
			"Exile_Item_Pliers",
			"Exile_Item_Grinder",
			"Exile_Item_Foolbox",

			/*
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_FireExtinguisher",
			"Exile_Item_Hammer",
			"Exile_Item_OilCanister",
			"Exile_Item_Screwdriver",
			"Exile_Item_Shovel",
			"Exile_Item_Wrench",
			"Exile_Item_SleepingMat",	
			"Exile_Item_ToiletPaper",			
			"Exile_Item_ZipTie",
			*/

			"Binocular",
			"Rangefinder",
			/*
			"Laserdesignator",
			"Laserdesignator_02",
			"Laserdesignator_03",
			*/
			"NVGoggles",
			"NVGoggles_INDEP",
			"NVGoggles_OPFOR",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemRadio",
			"ItemWatch",
			"Exile_Item_XM8",
			
			//Apex
			"O_NVGoggles_hex_F",
			"O_NVGoggles_urb_F",
			"O_NVGoggles_ghex_F",
			"NVGoggles_tna_F"
		};
	};

	class FirstAid
	{
		name = "FirstAid";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_InstaDoc",
			"Exile_Item_Bandage",
			"Exile_Item_Vishpirin",
			"Exile_Item_Heatpack"

			// Not available in 0.9.4!
			//"Exile_Item_Defibrillator"
		};
	};

	class Navigation
	{
		name = "Special Environment";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"B_Parachute",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR",
			"Exile_Headgear_GasMask",
			"G_Diving",
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving"			
		};
	};

	class Backpacks
	{
		name = "Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] = 
		{
			"B_AssaultPack_blk",
			"B_AssaultPack_cbr",
			"B_AssaultPack_dgtl",
			"B_AssaultPack_khk",
			"B_AssaultPack_mcamo",
			"B_AssaultPack_rgr",
			"B_AssaultPack_sgg",
			"B_Bergen_blk",
			"B_Bergen_mcamo",
			"B_Bergen_rgr",
			"B_Bergen_sgg",
			"B_Carryall_cbr",
			"B_Carryall_khk",
			"B_Carryall_mcamo",
			"B_Carryall_ocamo",
			"B_Carryall_oli",
			"B_Carryall_oucamo",
			"B_FieldPack_blk",
			"B_FieldPack_cbr",
			"B_FieldPack_ocamo",
			"B_FieldPack_oucamo",
			"B_HuntingBackpack",
			"B_Kitbag_cbr",
			"B_Kitbag_mcamo",
			"B_Kitbag_sgg",
			"B_OutdoorPack_blk",
			"B_OutdoorPack_blu",
			"B_OutdoorPack_tan",
			"B_TacticalPack_blk",
			"B_TacticalPack_mcamo",
			"B_TacticalPack_ocamo",
			"B_TacticalPack_oli",
			"B_TacticalPack_rgr",
			//Apex
			"B_Bergen_mcamo_F",
			"B_Bergen_dgtl_F",
			"B_Bergen_hex_F",
			"B_Bergen_tna_F",
			"B_AssaultPack_tna_F",
			"B_Carryall_ghex_F",
			"B_FieldPack_ghex_F",
			"B_ViperHarness_blk_F",
			"B_ViperHarness_ghex_F",
			"B_ViperHarness_hex_F",
			"B_ViperHarness_khk_F",
			"B_ViperHarness_oli_F",
			"B_ViperLightHarness_blk_F",
			"B_ViperLightHarness_ghex_F",
			"B_ViperLightHarness_hex_F",
			"B_ViperLightHarness_khk_F",
			"B_ViperLightHarness_oli_F",
			//TFARRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
			"TFAR_rt1523g",
			"TFAR_rt1523g_big",
			"TFAR_rt1523g_black",
			"TFAR_rt1523g_fabric",
			"TFAR_rt1523g_green",
			"TFAR_rt1523g_rhs",
			"TFAR_rt1523g_sage",
			"TFAR_mr3000",
			"TFAR_mr3000_multicam",
			"TFAR_mr3000_rhs"
		};
	};

	class Ammunition
	{
		name = "Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\CargoMag_ca.paa";
		items[] = 
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"10Rnd_127x54_Mag",
			"10Rnd_338_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"11Rnd_45ACP_Mag",
			//"130Rnd_338_Mag", SPMG
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box_Tracer",
			//"150Rnd_93x64_Mag", // NAVID
			"16Rnd_9x21_Mag",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box_Tracer",
			"20Rnd_556x45_UW_mag",
			"20Rnd_762x51_Mag",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01_tracer_green",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Yellow_Mag",
			"30Rnd_9x21_Green_Mag",
			"30Rnd_9x21_Red_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_Mag",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_GreenSignal_F",
			"6Rnd_RedSignal_F",
			"7Rnd_408_Mag",
			"9Rnd_45ACP_Mag",
			"Exile_Magazine_30Rnd_762x39_AK",
			"Exile_Magazine_30Rnd_545x39_AK_Green",
			"Exile_Magazine_30Rnd_545x39_AK_Red",
			"Exile_Magazine_30Rnd_545x39_AK_White",
			"Exile_Magazine_30Rnd_545x39_AK_Yellow",
			"Exile_Magazine_45Rnd_545x39_RPK_Green",
			"Exile_Magazine_75Rnd_545x39_RPK_Green",
			"Exile_Magazine_20Rnd_762x51_DMR",
			"Exile_Magazine_20Rnd_762x51_DMR_Yellow",
			"Exile_Magazine_20Rnd_762x51_DMR_Red",
			"Exile_Magazine_20Rnd_762x51_DMR_Green",
			"Exile_Magazine_10Rnd_303",
			"Exile_Magazine_100Rnd_762x54_PK_Green",
			"Exile_Magazine_7Rnd_45ACP",
			"Exile_Magazine_8Rnd_9x18",
			"Exile_Magazine_30Rnd_545x39_AK",
			"Exile_Magazine_6Rnd_45ACP",
			"Exile_Magazine_5Rnd_22LR",
			"Exile_Magazine_10Rnd_762x54",
			"Exile_Magazine_10Rnd_9x39",
			"Exile_Magazine_20Rnd_9x39",
			//"Exile_Magazine_8Rnd_74Pellets",
			"Exile_Magazine_8Rnd_74Slug",
			//Apex
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_Tracer_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_Tracer_F",
			"20Rnd_650x39_Cased_Mag_F",
			"10Rnd_50BW_Mag_F",
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_Green_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Tracer_Green_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_Green_F",
			"30Rnd_545x39_Mag_Tracer_F",
			"30Rnd_545x39_Mag_Tracer_Green_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_Red_F",
			"200Rnd_556x45_Box_Tracer_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"10Rnd_9x21_Mag",
			"Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag",
			"Exile_Magazine_7Rnd_408_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_338_Bullet_Cam_Mag",
			//Wolfe CUP FUKIN EDITSF
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_White_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M",
			"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_20Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_TE1_Red_Tracer_556x45_G36",
			"CUP_30Rnd_TE1_Green_Tracer_556x45_G36",
			"CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36",
			"CUP_100Rnd_556x45_BetaCMag",
			"CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag",
			"CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag",
			"CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag",
			"CUP_100Rnd_TE4_Green_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249",
			"CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1",
			"CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1",
			"CUP_10x_303_M",
			"CUP_30Rnd_Sa58_M",
			"CUP_30Rnd_Sa58_M_TracerG",
			"CUP_30Rnd_Sa58_M_TracerR",
			"CUP_30Rnd_Sa58_M_TracerY",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_5Rnd_762x51_M24",
			"CUP_5x_22_LR_17_HMR_M",
			"CUP_10Rnd_762x51_CZ750",
			"CUP_10Rnd_762x51_CZ750_Tracer",
			"20Rnd_762x51_Mag",
			"CUP_20Rnd_762x51_FNFAL_M",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR",
			"CUP_20Rnd_TE1_Red_Tracer_762x51_DMR",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_DMR",
			"CUP_20Rnd_TE1_White_Tracer_762x51_DMR",
			"CUP_20Rnd_762x51_B_SCAR",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_White_Tracer_762x51_SCAR",
			"CUP_20Rnd_762x51_B_M110",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110",
			"CUP_20Rnd_TE1_Red_Tracer_762x51_M110",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_M110",
			"CUP_20Rnd_TE1_White_Tracer_762x51_M110",
			"CUP_20Rnd_762x51_CZ805B",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B",
			"CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B",
			"CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B",
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_White_Tracer_762x51_M240_M",
			"CUP_200Rnd_TE4_White_Tracer_762x51_M240_M",
			"CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
			"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_1200Rnd_TE4_White_Tracer_762x51_M240_M",
			"CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M",
			"CUP_2000Rnd_TE5_White_Tracer_762x51_M134_M",
			"CUP_2000Rnd_TE1_White_Tracer_762x51_M134_M",
			"CUP_2000Rnd_TE5_Red_Tracer_762x51_M134_M",
			"CUP_2000Rnd_TE1_Red_Tracer_762x51_M134_M",
			"CUP_4000Rnd_TE5_White_Tracer_762x51_M134_M",
			"CUP_4000Rnd_TE5_Red_Tracer_762x51_M134_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_50Rnd_UK59_762x54R_Tracer",
			"CUP_10Rnd_B_765x17_Ball_M",
			"CUP_20Rnd_B_765x17_Ball_M",
			"CUP_5Rnd_86x70_L115A1",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_MakarovSD_M",
			"CUP_10Rnd_9x19_Compact",
			"CUP_15Rnd_9x19_M9",
			"CUP_17Rnd_9x19_glock17",
			"CUP_18Rnd_9x19_Phantom",
			"CUP_30Rnd_9x19_EVO",
			"CUP_30Rnd_9x19_UZI",
			"CUP_30Rnd_9x19_MP5",
			"CUP_64Rnd_9x19_Bizon_M",
			"CUP_64Rnd_Green_Tracer_9x19_Bizon_M",
			"CUP_64Rnd_Red_Tracer_9x19_Bizon_M",
			"CUP_64Rnd_White_Tracer_9x19_Bizon_M",
			"CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M",
			"16Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"CUP_10Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_6Rnd_45ACP_M",
			"CUP_7Rnd_45ACP_1911",
			"CUP_5Rnd_127x99_as50_M",
			"CUP_10Rnd_127x99_M107",
			"CUP_100Rnd_127x99_M",
			"CUP_100Rnd_TE4_Red_Tracer_127x99_M",
			"CUP_100Rnd_TE4_Green_Tracer_127x99_M",
			"CUP_100Rnd_TE4_Yellow_Tracer_127x99_M",
			"CUP_100Rnd_TE4_White_Tracer_127x99_M",
			"CUP_100Rnd_TE1_Red_Tracer_127x99_M",
			"CUP_100Rnd_TE1_Green_Tracer_127x99_M",
			"CUP_100Rnd_TE1_Yellow_Tracer_127x99_M",
			"CUP_100Rnd_TE1_White_Tracer_127x99_M",
			"CUP_100Rnd_TE3_LRT5_Green_Tracer_127x107_DSHKM_M",
			"CUP_100Rnd_TE3_LRT5_127x107_DSHKM_M",
			"CUP_5Rnd_127x108_KSVK_M",
			"CUP_8Rnd_B_Saiga12_74Slug_M",
			"CUP_8Rnd_B_Saiga12_74Pellets_M",
			"CUP_8Rnd_B_Beneli_74Slug",
			"CUP_8Rnd_B_Beneli_74Pellets",
			"CUP_20Rnd_B_AA12_Pellets",
			"CUP_20Rnd_B_AA12_74Slug",
			"CUP_20Rnd_B_AA12_HE",
			"CUP_750Rnd_TE2_Red_Tracer_M197_20mm_AP_M",
			"CUP_50Rnd_TE2_LRT4_Green_Tracer_23mm_KPVB_APHE_M",
			"CUP_520Rnd_TE2_23mm_GSh23L_APHE_M",
			"CUP_300Rnd_TE1_White_Tracer_25mm_GAU12_M",
			"CUP_300Rnd_TE1_Red_Tracer_25mm_GAU12_M",
			"CUP_300Rnd_TE1_Green_Tracer_25mm_GAU12_M",
			"CUP_300Rnd_TE1_Yellow_Tracer_25mm_GAU12_M",
			"CUP_29Rnd_30mm_AGS30_M",
			"CUP_150Rnd_TE1_White_Tracer_30mmAP_2A42_M",
			"CUP_150Rnd_TE1_Red_Tracer_30mmAP_2A42_M",
			"CUP_150Rnd_TE1_Green_Tracer_30mmAP_2A42_M",
			"CUP_150Rnd_TE1_Yellow_Tracer_30mmAP_2A42_M",
			"CUP_150Rnd_TE1_White_Tracer_30mmHE_2A42_M",
			"CUP_150Rnd_TE1_Red_Tracer_30mmHE_2A42_M",
			"CUP_150Rnd_TE1_Green_Tracer_30mmHE_2A42_M",
			"CUP_150Rnd_TE1_Yellow_Tracer_30mmHE_2A42_M",
			"CUP_230Rnd_TE1_White_Tracer_30mmAP_2A42_M",
			"CUP_230Rnd_TE1_Red_Tracer_30mmAP_2A42_M",
			"CUP_230Rnd_TE1_Green_Tracer_30mmAP_2A42_M",
			"CUP_230Rnd_TE1_Yellow_Tracer_30mmAP_2A42_M",
			"CUP_230Rnd_TE1_White_Tracer_30mmHE_2A42_M",
			"CUP_230Rnd_TE1_Red_Tracer_30mmHE_2A42_M",
			"CUP_230Rnd_TE1_Green_Tracer_30mmHE_2A42_M",
			"CUP_230Rnd_TE1_Yellow_Tracer_30mmHE_2A42_M",
			"CUP_250Rnd_TE1_White_Tracer_30mmHE_2A42_M",
			"CUP_250Rnd_TE1_Red_Tracer_30mmHE_2A42_M",
			"CUP_250Rnd_TE1_Green_Tracer_30mmHE_2A42_M",
			"CUP_250Rnd_TE1_Yellow_Tracer_30mmHE_2A42_M",
			"CUP_250Rnd_TE1_White_Tracer_30mmAP_2A42_M",
			"CUP_250Rnd_TE1_Red_Tracer_30mmAP_2A42_M",
			"CUP_250Rnd_TE1_Green_Tracer_30mmAP_2A42_M",
			"CUP_250Rnd_TE1_Yellow_Tracer_30mmAP_2A42_M",
			"CUP_400Rnd_30mm_AGS17_M",
			"CUP_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M",
			"CUP_1200Rnd_TE1_Green_Tracer_30x113mm_M789_HEDP_M",
			"CUP_1200Rnd_TE1_Yellow_Tracer_30x113mm_M789_HEDP_M",
			"CUP_1200Rnd_TE1_White_Tracer_30x113mm_M789_HEDP_M",
			"1Rnd_HE_Grenade_shell",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HEDP_M203",
			"CUP_1Rnd_HE_GP25_M",
			"1Rnd_Smoke_Grenade_shell",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_Smoke_M203",
			"1Rnd_SmokeRed_Grenade_shell",
			"CUP_1Rnd_SmokeRed_GP25_M",
			"CUP_1Rnd_SmokeRed_M203",
			"1Rnd_SmokeGreen_Grenade_shell",
			"CUP_1Rnd_SmokeGreen_GP25_M",
			"CUP_1Rnd_SmokeGreen_M203",
			"1Rnd_SmokeYellow_Grenade_shell",
			"CUP_1Rnd_SmokeYellow_GP25_M",
			"CUP_1Rnd_SmokeYellow_M203",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"CUP_FlareWhite_GP25_M",
			"CUP_FlareWhite_M203",
			"CUP_FlareRed_GP25_M",
			"CUP_FlareRed_M203",
			"CUP_FlareGreen_GP25_M",
			"CUP_FlareGreen_M203",
			"CUP_FlareYellow_GP25_M",
			"CUP_FlareYellow_M203",
			"CUP_6Rnd_HE_M203",
			"CUP_6Rnd_Smoke_M203",
			"CUP_6Rnd_SmokeRed_M203",
			"CUP_6Rnd_SmokeGreen_M203",
			"CUP_6Rnd_SmokeYellow_M203",
			"CUP_6Rnd_FlareWhite_M203",
			"CUP_6Rnd_FlareGreen_M203",
			"CUP_6Rnd_FlareRed_M203",
			"CUP_6Rnd_FlareYellow_M203",
			"CUP_32Rnd_40mm_MK19_M",
			"CUP_48Rnd_40mm_MK19_M",
			"CUP_20Rnd_TE1_Red_Tracer_120mmHE_M256_Cannon_M",
			"CUP_20Rnd_TE1_Red_Tracer_120mmSABOT_M256_Cannon_M",
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_L109A1_HE	",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGO",
			"CUP_TimeBomb_M",
			"CUP_Mine_M",
			"CUP_MineE_M",
			"CUP_PipeBomb_M",
			"CUP_IED_V1_M",
			"CUP_IED_V2_M",
			"CUP_IED_V3_M",
			"CUP_IED_V4_M",
			"CUP_Strela_2_M",
			"CUP_Stinger_M",
			"CUP_Igla_M",
			"CUP_Javelin_M",
			"CUP_M136_M",
			"CUP_Dragon_EP1_M",
			"CUP_MAAWS_HEDP_M",
			"CUP_MAAWS_HEAT_M",
			"CUP_AT13_M",
			"CUP_NLAW_M",
			"CUP_RPG18_M",
			"CUP_PG7V_M",
			"CUP_PG7VL_M",
			"CUP_PG7VR_M",
			"CUP_OG7_M",
			"CUP_SMAW_HEDP_M_N",
			"CUP_SMAW_HEAA_M_N",
			"CUP_PG9_AT_M",
			"CUP_OG9_HE_M",
			"CUP_8Rnd_AT5_BMP2_M",
			"CUP_5Rnd_AT5_BRDM2_M",
			"CUP_2Rnd_Hydra_Pod_7_M",
			"CUP_4Rnd_Hydra_Pod_7_M",
			"CUP_14Rnd_FFAR_M",
			"CUP_28Rnd_FFAR_M",
			"CUP_38Rnd_FFAR_M",
			"CUP_38Rnd_FFAR_AH64Out_M",
			"CUP_38Rnd_FFAR_AH64In_M",
			"CUP_14Rnd_FFAR_Mid_M",
			"CUP_14Rnd_FFAR_In_M",
			"CUP_8Rnd_AGM114L_Hellfire_II_M",
			"CUP_4Rnd_AGM114L_Hellfire_II_M",
			"CUP_8Rnd_AGM114K_Hellfire_II_M",
			"CUP_4Rnd_AGM114K_Hellfire_II_M",
			"CUP_1Rnd_AIM_9L_Sidewinder_External_M",
			"CUP_4Rnd_AIM_9L_Sidewinder_External_M",
			"CUP_2Rnd_AIM_9L_Sidewinder_Internal_M",
			"CUP_2Rnd_AIM_9L_Sidewinder_External_M",
			"CUP_2Rnd_AGM65_M",
			"CUP_6Rnd_AGM65_M",
			"CUP_8Rnd_AGM65_M",
			"CUP_6Rnd_GBU12_M",
			"CUP_2Rnd_MK82_Rack_M",
			"CUP_4Rnd_MK82_Rack_M",
			"CUP_1Rnd_MK82_Rack_M",
			"CUP_2Rnd_Mk82_M",
			
			//nia shit
			
			"hlc_5rnd_300WM_FMJ_AWM",
			"hlc_5rnd_300WM_AP_AWM",
			"hlc_5rnd_300WM_BTSP_AWM",
			"hlc_5rnd_300WM_mk248_AWM",
			"hlc_5rnd_300WM_SBT_AWM",
			"hlc_20Rnd_762x51_B_fal",
			"hlc_20Rnd_762x51_t_fal",
			"hlc_20Rnd_762x51_S_fal",
			"hlc_50rnd_762x51_M_FAL",
			"hlc_20Rnd_762x51_B_G3",
			"hlc_20rnd_762x51_T_G3",
			"hlc_50rnd_762x51_M_G3",
			"hlc_30rnd_556x45_EPR",
			"hlc_30rnd_556x45_SOST",
			"hlc_30rnd_556x45_SPR",
			"29rnd_300BLK_STANAG_T",
			"29rnd_300BLK_STANAG_S",
			"29rnd_300BLK_STANAG",
			"hlc_5rd_3006_1903",
			"hlc_30rnd_556x45_EPR",
			"hlc_30rnd_556x45_SOST",
			"hlc_30rnd_556x45_SPR",
			"hlc_30rnd_68x43_FMJ",
			"hlc_30rnd_68x43_OTM",
			"hlc_30rnd_68x43_MFMJ",
			"hlc_30rnd_68x43_MIRDIM",
			"hlc_30rnd_68x43_Tracer",
			"hlc_30rnd_68x43_Tracer",
			"hlc_30rnd_68x43_IRDIM"

		};
	};

	class Flares 
	{
		name = "Flares";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Chemlight_blue",
			"Chemlight_green",
			"Chemlight_red",
			"FlareGreen_F",
			"FlareRed_F",
			"FlareWhite_F",
			"FlareYellow_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareWhite_F",
			"UGL_FlareYellow_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareYellow_F"
		};
	};

	class Smokes 
	{
		name = "Smokes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShellYellow",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell"
		};
	};	

	class Explosives
	{
		name = "Explosives";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] = 
		{
			"HandGrenade",
			"MiniGrenade",
			"B_IR_Grenade",
			"O_IR_Grenade",
			"I_IR_Grenade",
			"1Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"APERSBoundingMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSTripMine_Wire_Mag",
			"ClaymoreDirectionalMine_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"IEDLandBig_Remote_Mag",
			"IEDLandSmall_Remote_Mag",
			"IEDUrbanBig_Remote_Mag",
			"IEDUrbanSmall_Remote_Mag",
			"SatchelCharge_Remote_Mag",
			"SLAMDirectionalMine_Wire_Mag"
		};
	};

	class Pistols 
	{
		name = "Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] = 
		{
			"hgun_ACPC2_F",
			"hgun_P07_F",
			"hgun_Pistol_heavy_01_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_Pistol_Signal_F",
			"hgun_Rook40_F",
			"Exile_Weapon_Colt1911",
			"Exile_Weapon_Makarov",
			"Exile_Weapon_Taurus",
			"Exile_Weapon_TaurusGold",
			//Apex
			"hgun_Pistol_01_F",
			"hgun_P07_khk_F",
			//FUCKIN WOLEF FUJKIN EIDT CUIP
			"CUP_hgun_Colt1911",
			"CUP_hgun_Colt1911_snds",
			"CUP_Colt1911",
			"CUP_hgun_Compact",
			"CUP_hgun_Duty",
			"CUP_hgun_Duty_M3X",
			"CUP_hgun_Phantom",
			"CUP_hgun_Phantom_Flashlight",
			"CUP_hgun_Phantom_Flashlight_snds",
			"CUP_CZ_75_D_COMPACT",
			"CUP_CZ_75_P_07_DUTY",
			"CUP_CZ_75_SP_01_PHANTOM",
			"CUP_CZ_75_SP_01_PHANTOM_SD",
			"CUP_hgun_glock17_flashlight",
			"CUP_hgun_glock17_flashlight_snds",
			"CUP_hgun_glock17_snds",
			"CUP_Glock17_EP1",
			"CUP_hgun_M9",
			"CUP_hgun_M9_snds",
			"CUP_M9",
			"CUP_M9SD",
			"CUP_hgun_Makarov",
			"CUP_Makarov",
			"CUP_MakarovSD",
			"CUP_hgun_PB6P9",
			"CUP_hgun_PB6P9_snds",
			"CUP_hgun_SA61",
			"CUP_Sa61_EP1",
			"CUP_hgun_MicroUzi",
			"CUP_hgun_MicroUzi_snds",
			"CUP_UZI_EP1",
			"CUP_UZI_SD_EP1",
			"CUP_hgun_TaurusTracker455",
			"CUP_Revolver_EP1",
			"CUP_hgun_TaurusTracker455_gold",
			"CUP_Revolver_gold_EP1"
		};
	};

	class SubMachineGuns 
	{
		name = "Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"hgun_PDW2000_F",
			"SMG_01_F",
			"SMG_02_F",
			"SMG_05_F",
			//WOLFE DDID THIS EDDITS FORM CUP 
			"CUP_smg_bizon",
			"CUP_smg_bizon_snds",
			"CUP_bizon",
			"CUP_bizon_silenced",
			"CUP_smg_EVO",
			"CUP_smg_EVO_MRad_Flashlight",
			"CUP_smg_EVO_MRad_Flashlight_Snds",
			"CUP_Evo_mrad_ACR",
			"CUP_Evo_sd_ACR",
			"CUP_Evo_ACR",
			"CUP_smg_MP5SD6",
			"CUP_smg_MP5A5"
		};
	};

	class LightMachineGuns 
	{
		name = "Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_MX_SW_Black_F",
			"arifle_MX_SW_F",
			"LMG_Mk200_F",
			"LMG_Zafir_F",
			"LMG_03_F",
			"Exile_Weapon_RPK",
			"Exile_Weapon_PK",
			"Exile_Weapon_PKP",

			/*
			"MMG_01_hex_F",
			"MMG_01_tan_F",
			"MMG_02_black_F",
			"MMG_02_camo_F",
			"MMG_02_sand_F"
			*/
			
			//SATAN IM COMING FOR YOUR FCKIN EDIT CUP WOLFE
			"CUP_RPK_74",
			"CUP_lmg_Pecheneg",
			"CUP_Pecheneg",
			"CUP_lmg_PKM",
			"CUP_PK",
			"CUP_lmg_UK59",
			"CUP_UK59_ACR",
			"CUP_arifle_L86A2",
			"CUP_arifle_L86A2_ACOG",
			"CUP_lmg_L110A1",
			"CUP_lmg_L110A1_Aim_Laser",
			"CUP_BAF_L110A1_Aim",
			"CUP_lmg_L7A2",
			"CUP_BAF_L7A2_GPMG",
			"CUP_lmg_M249_ElcanM145_Laser",
			"CUP_lmg_M249_Laser",
			"CUP_lmg_M249_ANPAS13c2_Laser",
			"CUP_lmg_M249",
			"CUP_M249_m145_EP1",
			"CUP_lmg_M240",
			"CUP_lmg_M240_ElcanM143",
			"CUP_lmg_M60A4",
			"CUP_lmg_Mk48_des",
			"CUP_lmg_Mk48_wdl",
			"CUP_lmg_Mk48_des_Aim_Laser",
			"CUP_lmg_Mk48_wdl_Aim_Laser"
		};
	};

	class AssaultRifles
	{
		name = "Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_Katiba_C_F",
			"arifle_Katiba_F",
			"arifle_Katiba_GL_F",
			"arifle_Mk20_F",
			"arifle_Mk20_GL_F",
			"arifle_Mk20_GL_plain_F",
			"arifle_Mk20_plain_F",
			"arifle_Mk20C_F",
			"arifle_Mk20C_plain_F",
			"arifle_MX_Black_F",
			"arifle_MX_F",
			"arifle_MX_GL_Black_F",
			"arifle_MX_GL_F",
			"arifle_MXC_Black_F",
			"arifle_MXC_F",
			"arifle_SDAR_F",
			"arifle_TRG20_F",
			"arifle_TRG21_F",
			"arifle_TRG21_GL_F",
			"Exile_Weapon_AK107",
			"Exile_Weapon_AK107_GL",
			"Exile_Weapon_AK74",
			"Exile_Weapon_AK74_GL",
			"Exile_Weapon_AK47",
			"Exile_Weapon_AKS_Gold",
			//Apex
			"arifle_AK12_F",
			"arifle_AK12_GL_F",
			"arifle_AKM_F",
			"arifle_AKM_FL_F",
			"arifle_AKS_F",
			"arifle_ARX_blk_F",
			"arifle_ARX_ghex_F",
			"arifle_ARX_hex_F",
			"arifle_CTAR_blk_F",
			"arifle_CTAR_hex_F",
			"arifle_CTAR_ghex_F",
			"arifle_CTAR_GL_blk_F",
			"arifle_CTARS_blk_F",
			"arifle_CTARS_hex_F",
			"arifle_CTARS_ghex_F",
			"arifle_SPAR_01_blk_F",
			"arifle_SPAR_01_khk_F",
			"arifle_SPAR_01_snd_F",
			"arifle_SPAR_01_GL_blk_F",
			"arifle_SPAR_01_GL_khk_F",
			"arifle_SPAR_01_GL_snd_F",
			"arifle_SPAR_02_blk_F",
			"arifle_SPAR_02_khk_F",
			"arifle_SPAR_02_snd_F",			
			"arifle_SPAR_03_blk_F",
			"arifle_SPAR_03_khk_F",
			"arifle_SPAR_03_snd_F",
			"arifle_MX_khk_F",
			"arifle_MX_GL_khk_F",
			"arifle_MXC_khk_F",
			"arifle_MXM_khk_F",
			//SHORTS A FUCKING FURRY EDUT CUP WOLFE FUKING FUCKIN
			"CUP_arifle_AK74",
			"CUP_arifle_AK74M",
			"CUP_arifle_AK74_GL",
			"CUP_arifle_AK74_GL_kobra",
			"CUP_arifle_AKS",
			"CUP_arifle_AKS_Gold",
			"CUP_arifle_AKS74",
			"CUP_arifle_AKS74_kobra",
			"CUP_arifle_AKS74_pso",
			"CUP_arifle_AKS74_NSPU",
			"CUP_arifle_AKS74_Goshawk",
			"CUP_arifle_AKS74U",
			"CUP_arifle_AKS74UN_kobra_snds",
			"CUP_arifle_AK107",
			"CUP_arifle_AK107_kobra",
			"CUP_arifle_AK107_pso",
			"CUP_arifle_AK107_GL",
			"CUP_arifle_AK107_GL_kobra",
			"CUP_arifle_AK107_GL_pso",
			"CUP_arifle_AKM",
			"CUP_arifle_CZ805_A1",
			"CUP_arifle_CZ805_A1_Holo_Laser",
			"CUP_arifle_CZ805_A1_Aco_Laser",
			"CUP_arifle_CZ805_A1_MRCO_Laser",
			"CUP_arifle_CZ805_A1_ZDDot_Laser",
			"CUP_arifle_CZ805_GL",
			"CUP_arifle_CZ805_GL_Hamr_Laser",
			"CUP_arifle_CZ805_GL_ZDDot_Laser",
			"CUP_arifle_CZ805_A2",
			"CUP_arifle_CZ805_A2_Holo_Laser",
			"CUP_arifle_CZ805_A2_Aco_Laser",
			"CUP_arifle_CZ805_A2_ZDDot_Flashlight_Snds",
			"CUP_arifle_CZ805_B",
			"CUP_arifle_CZ805_B_GL",
			"CUP_arifle_CZ805B_GL_ACOG_Laser",
			"CUP_arifle_FNFAL",
			"CUP_arifle_FNFAL_railed",
			"CUP_arifle_FNFAL_ANPVS4",
			"CUP_arifle_G36A",
			"CUP_arifle_G36A_camo",
			"CUP_arifle_G36K",
			"CUP_arifle_G36K_camo",
			"CUP_arifle_G36C",
			"CUP_arifle_G36C_holo_snds",
			"CUP_arifle_G36C_camo",
			"CUP_arifle_G36C_camo_holo_snds",
			"CUP_arifle_L85A2",
			"CUP_arifle_L85A2_Holo_laser",
			"CUP_arifle_L85A2_SUSAT_Laser",
			"CUP_arifle_L85A2_CWS_Laser",
			"CUP_arifle_L85A2_ACOG_Laser",
			"CUP_arifle_L85A2_GL",
			"CUP_arifle_L85A2_GL_Holo_laser",
			"CUP_arifle_L85A2_GL_SUSAT_Laser",
			"CUP_arifle_L85A2_GL_ACOG_Laser",
			"CUP_arifle_M16A2",
			"CUP_arifle_M16A2_GL",
			"CUP_arifle_M16A4_Base",
			"CUP_arifle_M16A4_GL",
			"CUP_arifle_M16A4_Aim_Laser",
			"CUP_arifle_M16A4_ACOG_Laser",
			"CUP_arifle_M16A4_GL_Laser",
			"CUP_arifle_M16A4_GL_ACOG_Laser",
			"CUP_arifle_M4A1_BUIS_GL",
			"CUP_arifle_M4A1_BUIS_camo_GL",
			"CUP_arifle_M4A1_BUIS_desert_GL",
			"CUP_arifle_M4A1",
			"CUP_arifle_M4A1_camo",
			"CUP_arifle_M4A1_black",
			"CUP_arifle_M4A1_desert",
			"CUP_arifle_M4A3_desert",
			"CUP_arifle_M4A1_camo_Aim",
			"CUP_arifle_M4A3_desert_Aim_Flashlight",
			"CUP_arifle_M4A3_desert_GL_ACOG_Laser",
			"CUP_arifle_M4A1_Aim",
			"CUP_arifle_M4A1_camo_AIM_snds",
			"CUP_arifle_M4A1_GL_Holo_Flashlight",
			"CUP_arifle_M4A1_GL_ACOG_Flashlight",
			"CUP_arifle_M4A1_camo_GL_Holo_Flashlight",
			"CUP_arifle_M4A1_camo_GL_Holo_Flashlight_Snds",
			"CUP_arifle_Sa58P",
			"CUP_arifle_Sa58V",
			"CUP_arifle_Sa58V_ACOG_Laser",
			"CUP_arifle_Sa58V_Aim_Laser",
			"CUP_arifle_Sa58RIS1",
			"CUP_arifle_Sa58RIS1_Aco_Laser",
			"CUP_arifle_Sa58RIS2",
			"CUP_arifle_Sa58RIS2_Arco_Laser",
			"CUP_arifle_Sa58RIS2_gl",
			"CUP_arifle_Sa58P_des",
			"CUP_arifle_Sa58V_camo",
			"CUP_arifle_Sa58RIS1_des",
			"CUP_arifle_Sa58RIS1_camo_Aco_Laser",
			"CUP_arifle_Sa58RIS2_camo",
			"CUP_arifle_Sa58RIS2_camo_Arco_Laser",
			"CUP_arifle_Mk16_STD",
			"CUP_arifle_Mk16_STD_FG",
			"CUP_arifle_Mk16_STD_FG_Holo_Laser",
			"CUP_arifle_Mk16_STD_FG_LeupoldMk4CQT_Laser",
			"CUP_arifle_Mk16_STD_SFG",
			"CUP_arifle_Mk16_STD_EGLM",
			"CUP_arifle_Mk16_STD_EGLM_ACOG_Laser",
			"CUP_arifle_Mk16_STD_EGLM_ANPAS13c1_Laser_mfsup",
			"CUP_arifle_Mk16_CQC",
			"CUP_arifle_Mk16_CQC_FG",
			"CUP_arifle_Mk16_CQC_FG_Aim_Laser_snds",
			"CUP_arifle_Mk16_CQC_SFG",
			"CUP_arifle_Mk16_CQC_SFG_Holo",
			"CUP_arifle_Mk16_CQC_EGLM",
			"CUP_arifle_Mk16_CQC_EGLM_Holo_Laser_mfsup",
			"CUP_arifle_Mk16_SV",
			"CUP_arifle_Mk17_CQC",
			"CUP_arifle_Mk17_CQC_FG",
			"CUP_arifle_Mk17_CQC_SFG",
			"CUP_arifle_Mk17_CQC_EGLM",
			"CUP_arifle_Mk17_STD",
			"CUP_arifle_Mk17_STD_FG",
			"CUP_arifle_Mk17_STD_SFG",
			"CUP_arifle_Mk17_STD_EGLM",
			"CUP_arifle_Mk17_CQC_SFG_Aim_mfsup",
			"CUP_arifle_Mk17_STD_FG_Aim_Laser_snds",
			"CUP_arifle_Mk17_STD_EGL_ElcanSpecter_Laser",
			"CUP_arifle_Mk17_STD_FG_ANPAS13c1_Laser_Snds",
			"CUP_arifle_Mk20",
			"CUP_arifle_Mk20_LeupoldMk4MRT",
			"CUP_arifle_Mk20_SB11420_snds",
			"CUP_arifle_XM8_Carbine",
			"CUP_arifle_XM8_Carbine_GL",
			"CUP_arifle_xm8_sharpshooter",
			"CUP_arifle_XM8_Compact",
			"CUP_arifle_XM8_Compact_Rail",
			"CUP_arifle_XM8_Compact_Holo_Flashlight",
			"CUP_arifle_XM8_Railed",
			"CUP_arifle_XM8_Railed_ANPAS13c1_Laser",
			"CUP_arifle_XM8_Railed_ANPAS13c1_Laser_snds",
			"CUP_arifle_XM8_Railed_Holo_Laser_snds",
			"CUP_arifle_XM8_Carbine_FG",
			
			//nia
			"hlc_rifle_l1a1slr",
			"hlc_rifle_SLR",
			"hlc_rifle_STG58F",
			"hlc_rifle_FAL5061",
			"hlc_rifle_c1A1	",
			"hlc_rifle_LAR	",
			"hlc_rifle_SLRchopmod",
			"hlc_rifle_falosw",
			"hlc_rifle_osw_GL",
			"hlc_rifle_g3sg1",
			"hlc_rifle_psg1",
			"hlc_rifle_g3a3	",
			"hlc_rifle_g3ka4	",
			"HLC_Rifle_g3ka4_GL",
			"hlc_rifle_hk51	",
			"hlc_rifle_hk53",
			"hlc_rifle_RU556",
			"hlc_rifle_RU5562",
			"hlc_rifle_Colt727",
			"hlc_rifle_Colt727_GL",
			"hlc_rifle_bcmjack",
			"hlc_rifle_SAMR",
			"hlc_rifle_honeybadger",
			"hlc_rifle_honeybase",
			"hlc_rifle_vendimus",
			"hlc_rifle_Bushmaster300",
			"hlc_rifle_ACR_Carb_black",
			"hlc_rifle_ACR_Carb_green",
			"hlc_rifle_ACR_Carb_tan",
			"hlc_rifle_ACR_full_black",
			"hlc_rifle_ACR_full_green",
			"hlc_rifle_ACR_full_tan",
			"hlc_rifle_ACR_mid_black",
			"hlc_rifle_ACR_mid_green",
			"hlc_rifle_ACR_mid_tan",
			"hlc_rifle_ACR_SBR_black",
			"hlc_rifle_ACR_SBR_green",
			"hlc_rifle_ACR_SBR_tan",
			"hlc_rifle_ACR68_aron",
			"hlc_rifle_ACR68_Carb_black",
			"hlc_rifle_ACR68_Carb_green",
			"hlc_rifle_ACR68_Carb_tan",
			"hlc_rifle_ACR68_full_black",
			"hlc_rifle_ACR68_full_green",
			"hlc_rifle_ACR68_full_tan",
			"hlc_rifle_ACR68_mid_black",
			"hlc_rifle_ACR68_mid_green",
			"hlc_rifle_ACR68_mid_tan",
			"hlc_rifle_ACR68_SBR_black",
			"hlc_rifle_ACR68_SBR_green",
			"hlc_rifle_ACR68_SBR_tan",
			"hlc_rifle_ACR68_Squant"
						
		};
	};
	
	class Shotguns
	{
		name = "Shotguns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Weapon_M1014",
			//SATANF PLZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ WOLFE CUTP EITSSD
			"CUP_sgun_AA12",
			"CUP_AA12_PMC",
			"CUP_sgun_M1014",
			"CUP_M1014",
			"CUP_sgun_Saiga12K",
			"CUP_Saiga12K"
		};
	};

	class SniperRifles
	{
		name = "Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_MXM_Black_F",
			"arifle_MXM_F",
			"srifle_DMR_01_F",
			"srifle_DMR_02_camo_F",
			"srifle_DMR_02_F",
			"srifle_DMR_02_sniper_F",
			"srifle_DMR_03_F",
			"srifle_DMR_03_khaki_F",
			"srifle_DMR_03_multicam_F",
			"srifle_DMR_03_tan_F",
			"srifle_DMR_03_woodland_F",
			"srifle_DMR_04_F",
			"srifle_DMR_04_Tan_F",
			"srifle_DMR_05_blk_F",
			"srifle_DMR_05_hex_F",
			"srifle_DMR_05_tan_f",
			"srifle_DMR_06_camo_F",
			"srifle_DMR_06_olive_F",
			"srifle_EBR_F",
			"srifle_GM6_camo_F",
			"srifle_GM6_F",
			"srifle_LRR_camo_F",
			"srifle_LRR_F",
			"Exile_Weapon_CZ550",
			"Exile_Weapon_SVD",
			"Exile_Weapon_SVDCamo",
			"Exile_Weapon_VSSVintorez",
			"Exile_Weapon_DMR",
			"Exile_Weapon_LeeEnfield",
			//Apex
			"srifle_LRR_tna_F",
			"srifle_GM6_ghex_F",
			"srifle_DMR_07_blk_F",
			"srifle_DMR_07_hex_F",
			"srifle_DMR_07_ghex_F",
			//FITSFUCKING FFICLITNG EFDIT FOR CUP EAHR
			"CUP_srifle_AWM_des",
			"CUP_srifle_AWM_wdl",
			"CUP_srifle_AWM_des_SBPMII",
			"CUP_srifle_AWM_wdl_SBPMII",
			"CUP_srifle_CZ550",
			"CUP_huntingrifle",
			"CUP_srifle_CZ750",
			"CUP_srifle_CZ750_SOS_bipod",
			"CUP_CZ_750_S1_ACR",
			"CUP_srifle_DMR",
			"CUP_srifle_DMR_LeupoldMk4",
			"CUP_srifle_M14",
			"CUP_srifle_M14_Aim",
			"CUP_DMR",
			"CUP_M14_EP1",
			"CUP_srifle_M24_des",
			"CUP_srifle_M24_wdl",
			"CUP_srifle_M24_ghillie",
			"CUP_srifle_M24_des_LeupoldMk4LRT",
			"CUP_srifle_M24_wdl_LeupoldMk4LRT",
			"CUP_M24",
			"CUP_M24_des_EP1",
			"CUP_srifle_M40A3",
			"CUP_M40A3",
			"CUP_M110_TWS_EP1",
			"CUP_M110_NVG_EP1",
			"CUP_srifle_M110",
			"CUP_srifle_M110_ANPAS13c2",
			"CUP_srifle_M110_ANPVS10",
			"CUP_SVD",
			"CUP_SVD_CAMO",
			"CUP_SVD_des_EP1",
			"CUP_SVD_NSPU_EP1",
			"CUP_srifle_SVD",
			"CUP_srifle_SVD_des",
			"CUP_srifle_SVD_des_ghillie_pso",
			"CUP_srifle_SVD_wdl_ghillie",
			"CUP_srifle_SVD_pso",
			"CUP_srifle_SVD_Des_pso",
			"CUP_srifle_SVD_NSPU",
			"CUP_srifle_VSSVintorez",
			"CUP_srifle_VSSVintorez_pso",
			"CUP_VSS_vintorez",
			"CUP_srifle_LeeEnfield",
			"CUP_LeeEnfield",
			"CUP_srifle_AS50",
			"CUP_srifle_AS50_SBPMII",
			"CUP_srifle_AS50_AMPAS13c2",
			"CUP_BAF_AS50_scoped",
			"CUP_PMC_AS50_scoped",
			"CUP_BAF_AS50_TWS",
			"CUP_PMC_AS50_TWS",
			"CUP_srifle_ksvk",
			"CUP_srifle_ksvk_PSO3",
			"CUP_ksvk",
			"CUP_srifle_M107_Base",
			"CUP_srifle_M107_LeupoldVX3",
			"CUP_srifle_M107_ANPAS13c2",
			"CUP_M107",
			"CUP_M107_TWS_EP1",
			//nia
			"hlc_rifle_awcovert",
			"hlc_rifle_awcovert_BL	",
			"hlc_rifle_awcovert_FDE	",
			"hlc_rifle_awmagnum",
			"hlc_rifle_awmagnum_BL	",
			"hlc_rifle_awMagnum_FDE_ghillie",
			"hlc_rifle_awMagnum_BL_ghillie",
			"hlc_rifle_awMagnum_OD_ghillie",
			"hlc_rifle_M1903A1_unertl",
			"hlc_rifle_M1903A1"
		};
	};
	
	class Launchers
	{
		name = "Launchers";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			// FUCKING CFICKFI SHORT BUS' FGAGOOT  FUCK YOU DUDE  SHIT SFUCK ASFD RIFT ASDFLJCI[ CUP EDITS]
			"CUP_glaunch_M32",
			"CUP_M32_EP1",
			"CUP_glaunch_M79",
			"CUP_M79_EP1",
			"CUP_glaunch_Mk13",
			"CUP_Mk13_EP1",
			"CUP_launch_9K32Strela",
			"CUP_Strela",
			"CUP_launch_Igla",
			"CUP_Igla",
			"CUP_launch_FIM92Stinger",
			"CUP_Stinger",
			"CUP_launch_M47",
			"CUP_M47Launcher_EP1",
			"CUP_launch_MAAWS",
			"CUP_launch_MAAWS_Scope",
			"CUP_MAAWS",
			"CUP_launch_Metis",
			"CUP_MetisLauncher",
			"CUP_launch_NLAW",
			"CUP_BAF_NLAW_Launcher",
			"CUP_launch_Javelin",
			"CUP_Javelin",
			"CUP_launch_Mk153Mod0",
			"CUP_launch_Mk153Mod0_SMAWOptics",
			"CUP_SMAW",
			"CUP_launch_RPG7V",
			"CUP_RPG7V",
			"CUP_launch_RPG18",
			"CUP_RPG18",
			"CUP_launch_M136",
			"CUP_M136"
		};
	};
	
	class Bikes
	{
		name = "Bikes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Bike_OldBike",
			"Exile_Bike_MountainBike"
		};
	};

	class Cars
	{
		name = "Cars";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Car_Kart_Black",
			"Exile_Bike_QuadBike_Black",
			"Exile_Car_OldTractor_Red",
			"Exile_Car_TowTractor_White",
			"Exile_Car_Tractor_Red",
			"Exile_Car_UAZ_Green",
			"Exile_Car_UAZ_Open_Green",
			"Exile_Car_Octavius_White",
			"Exile_Car_Golf_Red",
			"Exile_Car_LandRover_Green",
			"Exile_Car_LandRover_Ambulance_Green",
			"Exile_Car_Lada_Green",
			"Exile_Car_Volha_White",
			"Exile_Car_Hatchback_Rusty1",
			"Exile_Car_Hatchback_Rusty2",
			"Exile_Car_Hatchback_Rusty3",
			"Exile_Car_Hatchback_Sport_Red",
			"Exile_Car_SUV_Red",
			"Exile_Car_SUVXL_Black",
			"Exile_Car_SUV_Armed_Black",
			"Exile_Car_Offroad_Rusty1",
			"Exile_Car_Offroad_Rusty2",
			"Exile_Car_Offroad_Rusty3",
			"Exile_Car_Offroad_Repair_Civillian",
			"Exile_Car_Offroad_Armed_Guerilla01",
			"Exile_Car_BRDM2_HQ",
			"Exile_Car_BTR40_MG_Green",
			"Exile_Car_BTR40_Green",
			"Exile_Car_HMMWV_M134_Green",
			"Exile_Car_HMMWV_M2_Green",
			"Exile_Car_HMMWV_MEV_Green",
			"Exile_Car_HMMWV_UNA_Green",
			"Exile_Car_Strider",
			"Exile_Car_Hunter",
			"Exile_Car_Ifrit",
			"Exile_Car_ProwlerLight",
			"Exile_Car_ProwlerUnarmed",
			"Exile_Car_QilinUnarmed",
			"Exile_Car_MB4WD",
			"Exile_Car_MB4WDOpen",
			
			"CUP_O_UAZ_AGS30_RU",
			"CUP_O_UAZ_MG_RU",
			"CUP_O_UAZ_Open_RU",
			"CUP_O_UAZ_SPG9_RU",
			"CUP_O_UAZ_Unarmed_RU",
			"CUP_O_Ural_RU",
			"CUP_O_Ural_Refuel_RU",
			"CUP_I_Ural_ZU23_TK_Gue",
			"CUP_C_Datsun_Covered",
			"CUP_C_Datsun_Plain",
			"CUP_C_Datsun_Tubeframe",
			"CUP_O_Datsun_PK",
			"CUP_O_Datsun_PK_Random",
			"CUP_B_HMMWV_Ambulance_USMC",
			"CUP_B_HMMWV_M1114_USMC",
			"CUP_B_HMMWV_M2_USMC",
			"CUP_B_HMMWV_MK19_USMC",
			"CUP_B_HMMWV_TOW_USMC",
			"CUP_B_HMMWV_Unarmed_USMC"
		};
	};

	class Trucks
	{
		name = "Trucks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Car_Van_Black",
			"Exile_Car_Van_Box_Black",
			"Exile_Car_Van_Fuel_Black",
			"Exile_Car_Ural_Open_Worker",
			"Exile_Car_Ural_Covered_Worker",
			"Exile_Car_V3S_Covered",
			"Exile_Car_Zamak",
			"Exile_Car_Tempest",
			"Exile_Car_HEMMT",
			"Exile_Car_Ikarus_Blue",
			//FUCKITY FUCKI NG FUVK SATANS GONNA BEATGS ME TOFDFAY THANKS YOU FUCK YOU SHORT BUS <3
			//CUP EDITS
			"CUP_B_LR_Transport_GB_W",
			"CUP_I_BRDM2_HQ_TK_Gue",
			"CUP_O_BTR90_HQ_RU",
			"CUP_O_BTR90_RU",
			"CUP_B_M1126_ICV_M2_Woodland_Slat",
			"CUP_B_M1133_MEV_Woodland_Slat",
			"CUP_B_M1135_ATGMV_Woodland_Slat",
			"CUP_B_M113_Med_USA",
			"CUP_B_M113_USA",
			"CUP_I_T55_TK_GUE",
			"CUP_I_T34_TK_GUE"
		};
	};

	class Choppers
	{
		name = "Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Chopper_Hummingbird_Green",
			"Exile_Chopper_Hummingbird_Civillian_Wasp",
			"Exile_Chopper_Huey_Green",
			"Exile_Chopper_Huey_Armed_Green",
			"Exile_Chopper_Taru_Black",
			"Exile_Chopper_Taru_Covered_Black",
			"Exile_Chopper_Taru_Transport_Black",
			"Exile_Chopper_Orca_BlackCustom",
			"Exile_Chopper_Mohawk_FIA",
			"Exile_Chopper_Huron_Black",
			"Exile_Chopper_Hellcat_Green",
			/*SHORT FUCKING HAS A FUCKING HOLE IN HIS FUCKING SHIT FUCKING UNDERFWERADF FUCKING WEHRE FUCKING
				HIS BALLS FUCKING SHOOULD BE FUCKING RIPPIGN CONSTANTLY WITH THE FUCKING GIGGLED FFHFUCKING USLLBSHIT
				FUVOGNSDF FUCK THIS SISHTI LIKE WHTIY ASDF THE  FUKING GING FUKER CANT SFOHE HEJUST GIOOTA FUCKING FSETESDF 
				SDFTRSLDFIT TESLL US THIS FHTISF ST0 IM SO  DONENEEEEE FIRHGHT FUVKING NWO,S FUCK IGN CUP EDITS */
			"CUP_B_CH47F_USA",
			"CUP_B_CH53E_USMC",
			"CUP_B_MH60S_USMC",
			"CUP_B_UH1Y_MEV_USMC",
			"CUP_B_UH1Y_UNA_USMC",
			"CUP_B_UH60M_US",
			"CUP_B_UH60M_Unarmed_FFV_US",
			"CUP_C_Mi17_Civilian_RU",
			"CUP_O_Mi24_P_RU"
		};
	};

	class Boats
	{
		name = "Boats";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey",
			"Exile_Boat_WaterScooter",
			"Exile_Boat_RHIB",
			
			//FCKING SEE YOU ON THE FORUMS KID
			 //#CUP EDITS 2017
			 "CUP_C_Fishing_Boat_Chernarus",
            "CUP_B_RHIB2Turret_USMC",
            "CUP_B_RHIB_USMC",
            "CUP_B_RHIB2Turret_RACS",
            "CUP_B_RHIB_RACS",
            "CUP_B_Seafox_USMC",
            "CUP_B_Seafox_USV_USMC",
            "CUP_B_Zodiac_USMC"
		};
	};

	class Planes
	{
		name = "Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Plane_Cessna",
			"Exile_Plane_AN2_Green",
			"Exile_Plane_Ceasar",
			"Exile_Plane_BlackfishInfantry",
			"Exile_Plane_BlackfishVehicle",
			//THIS IS OSOME BVULLSHIT THIFUCKING SFDITDF SFUCKING THASNKS FOR READING KIDS CUP EDITSCup Edits
			"CUP_B_MV22_USMC ",
			"CUP_B_C130J_USMC"
		};
	};

	class Diving 
	{
		name = "Diving";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit"
		};
	};
};

class CfgTraders
{
	/**
	 * Weapons, scopes, silencers, ammo
	 */
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] = 
		{
			"PointerAttachments",
			"BipodAttachments",
			"MuzzleAttachments",
			"OpticAttachments",
			"Ammunition",
			"Pistols",
			"Shotguns",
			"SubMachineGuns",
			"LightMachineGuns",
			"AssaultRifles",
			"SniperRifles"
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] = 
		{
			"Flares",
			"Smokes",
			"UAVs",
			"StaticMGs",
			"Explosives",
			"Navigation",
			"Launchers"
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{	
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Headgear",
			"Glasses",
			"Uniforms",
			"Vests",
			"Backpacks",
			"FirstAid"
		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Food",
			"Drinks"
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware",
			"Tools"
		};
	};

	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Cars",
			"Trucks"
		};
	};

	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Choppers", 
			"Planes"
		};
	};

	/**
	 * Sells ships and boats
	 */ 
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Boats"
		};
	};

	class Exile_Trader_Diving
	{
		name = "DIVERS";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Diving"
		};
	};

	/**
	 * Sells Community Items
	 */ 
	class Exile_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community"
		};
	};

	class Exile_Trader_CommunityCustoms2
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community2"
		};
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community3"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community4"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community5"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community6"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community7"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community8"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community9"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community10"
		};
	};
};
class CfgTrading 
{
	/*
	* This factor defines the difference between sales/purchase price of
	* items and vehicles. It is used if there is no sales price defined
	* in CfgExileArsenal. 
	*/
	sellPriceFactor = 0.5;
	
	rekeyPriceFactor = 0.1;

	class requiredRespect 
	{
		Level1 = 0;
		Level2 = 0;
		Level3 = 0;
		Level4 = 0;
		Level5 = 0;
		Level6 = 0;
	};
};
class CfgVehicleCustoms
{
	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Bike_QuadBike_Blue",		100, "Blue",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"};},
			{"Exile_Bike_QuadBike_Red",			100, "Red",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"};},
			{"Exile_Bike_QuadBike_White",		100, "White",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"};},
			{"Exile_Bike_QuadBike_Nato",		150, "NATO",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"};},
			{"Exile_Bike_QuadBike_Csat",		150, "CSAT",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"};},
			{"Exile_Bike_QuadBike_Fia",			150, "FIA",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_INDP_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_INDP_CO.paa"};},
			{"Exile_Bike_QuadBike_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"};},
			{"Exile_Bike_QuadBike_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"};},
			{"Exile_Bike_QuadBike_Black",		100, "Black",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"};},
			{"Exile_Bike_QuadBike_Black",		100, "Hex",		{"\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_ghex_CO.paa","\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_wheel_ghex_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_MotorBoat_Police",		350, "Police", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"};},
			{"Exile_Boat_MotorBoat_Orange",		300, "Orange", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"};},
			{"Exile_Boat_MotorBoat_White",		300, "White",  {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_RubberDuck_CSAT",		200, "CSAT", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"};},
			{"Exile_Boat_RubberDuck_Digital",	200, "Digital",{"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"};},
			{"Exile_Boat_RubberDuck_Orange",	150, "Orange", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"};},
			{"Exile_Boat_RubberDuck_Blue",		150, "Blue", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"};},
			{"Exile_Boat_RubberDuck_Black",		150, "Black", {"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_SDV_CSAT",		200, "CSAT", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"};},
			{"Exile_Boat_SDV_Digital",	200, "Digital", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"};},
			{"Exile_Boat_SDV_Grey",		100, "Grey", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hellcat_Green", 350, "Green", 	{"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"};},
			{"Exile_Chopper_Hellcat_FIA", 	500, "FIA", 	{"\A3\Air_F_EPB\Heli_Light_03\data\heli_light_03_base_indp_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Karts
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Kart_BluKing", 				100, "Bluking", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_RedStone", 			100, "RedStone", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},
			{"Exile_Car_Kart_Vrana", 				100, "Vrana", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Green", 				100, "Green", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Blue", 				100, "Blue", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Orange", 				100, "Orange",		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_White", 				100, "White", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Yellow", 				100, "Yellow", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Black", 				100, "Black", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};}	
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hummingbird_Civillian_Blue", 		350, "Blue", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Red", 		350, "Red", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_ION", 		350, "ION", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_BlueLine", 	350, "BlueLine", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Digital", 	350, "Digital", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Elliptical", 	350, "Elliptical", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Furious", 	350, "Furious", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_GrayWatcher", 350, "GrayWatcher",	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Jeans", 		350, "Jeans", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Light", 		350, "Light", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Shadow", 		350, "Shadow", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Sheriff", 	350, "Sheriff", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Speedy", 		350, "Speedy", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Sunset", 		350, "Sunset", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Vrana", 		350, "Vrana", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Wasp", 		350, "Wasp", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Wave", 		350, "Wave", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huron_Black", 	450, "Black", {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"};},
			{"Exile_Chopper_Huron_Green", 	450, "Green", {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Orca_CSAT", 		350, "CSAT", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"};},
			{"Exile_Chopper_Orca_Black", 		350, "Black", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};},
			{"Exile_Chopper_Orca_BlackCustom", 	350, "Black Custom", 	{"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_CSAT",		500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};},
			{"Exile_Chopper_Taru_Black",	500, "BLACK", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Transport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_Transport_CSAT",	500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};},
			{"Exile_Chopper_Taru_Transport_Black",	500, "Black", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Covered_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_Covered_CSAT",		500, "CSAT",	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"};},
			{"Exile_Chopper_Taru_Covered_Black",	500, "Black",	{"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Hatchback_Rusty1", 			50, "Rusty White",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_01_co.paa"};},
			{"Exile_Car_Hatchback_Rusty2", 			50, "Rusty Red",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_02_co.paa"};},
			{"Exile_Car_Hatchback_Rusty3", 			50, "Rusty Yellow",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_03_co.paa"};},
			{"Exile_Car_Hatchback_Beige", 			100, "Beige",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Hatchback_Green", 			100, "Green",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Hatchback_Blue", 			100, "Blue",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Hatchback_BlueCustom", 		100, "Blue Custom",		{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Hatchback_BeigeCustom", 	100, "Beige Custom",	{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Hatchback_Yellow", 			100, "Yellow",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa"};},
			{"Exile_Car_Hatchback_Grey", 			100, "Grey",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa"};},
			{"Exile_Car_Hatchback_Black", 			100, "Black",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"};},
			{"Exile_Car_Hatchback_Dark", 			100, "Dark",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Hatchback_Sport_Red", 		100, "Red",		{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT01_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Blue", 		100, "Blue",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT02_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Orange", 	100, "Orange",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT03_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_White", 	100, "White",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT04_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Beige", 	100, "Beige",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT05_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Green", 	100, "Green",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Rusty1", 		50, "Rusty White",	{"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"};},
			{"Exile_Car_Offroad_Rusty2", 		50, "Rusty Red",	{"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"};},
			{"Exile_Car_Offroad_Rusty3", 		50, "Rusty Blue",	{"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"};},
			{"Exile_Car_Offroad_Red", 			500, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};},
			{"Exile_Car_Offroad_Beige", 		500, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Offroad_White", 		500, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Offroad_Blue", 			500, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Offroad_DarkRed", 		500, "Dark Red",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Offroad_BlueCustom", 	500, "Blue Custom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla01", 	700, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla02", 	700, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla03", 	700, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla04", 	700, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla05", 	700, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla06", 	700, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla07", 	700, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla08", 	700, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla09", 	700, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla10", 	700, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla11", 	700, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla12", 	700, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Black", {"exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Light Blue", {"exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Orange",{"exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Pink",	{"exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile White",	{"exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Yellow",{"exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_LandRover_Red", 250, "Red", {"Exile_psycho_LRC\data\r_lr_base_co.paa","Exile_psycho_LRC\data\r_lr_special_co.paa"};},
			{"Exile_Car_LandRover_Urban", 250, "Urban", {"Exile_psycho_LRC\data\textures\lr_base_urbancamo_co.paa","Exile_psycho_LRC\data\textures\lr_special_urbancamo_co.paa"};},
			{"Exile_Car_LandRover_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};},
			{"Exile_Car_LandRover_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};},
			{"Exile_Car_LandRover_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover (Ambulance)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Ambulance_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_LandRover_Ambulance_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};},
			{"Exile_Car_LandRover_Ambulance_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};},
			{"Exile_Car_LandRover_Ambulance_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Octavius
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Octavius_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Octavius_White", 250, "White", {"exile_psycho_Octavia\Data\car_body_co.paa"};},
			{"Exile_Car_Octavius_Black", 250, "Black", {"exile_psycho_Octavia\Data\car_body_bl_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huey_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};},
			{"Exile_Chopper_Huey_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Armed_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huey_Armed_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};},
			{"Exile_Chopper_Huey_Armed_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Armed_Guerilla01",	250, "Guerilla 01", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla02",	250, "Guerilla 02", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla03",	250, "Guerilla 03", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla04",	250, "Guerilla 04", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla05",	250, "Guerilla 05", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla06",	250, "Guerilla 06", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla07",	250, "Guerilla 07", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla08",	250, "Guerilla 08", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla09",	250, "Guerilla 09", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla10",	250, "Guerilla 10", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla11",	250, "Guerilla 11", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla12",	250, "Guerilla 12", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Repair_Civillian",		150, "Civillian",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Red",			150, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Beige",			150, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Offroad_Repair_White",			150, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Blue",			150, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Offroad_Repair_DarkRed",		150, "DarkRed",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Offroad_Repair_BlueCustom",		150, "BlueCustom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla01",		250, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla02",		250, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla03",		250, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla04",		250, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla05",		250, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla06",		250, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla07",		250, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla08",		250, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla09",		250, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla10",		250, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla11",		250, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla12",		250, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_SUV_Red", 		100, "Red",					{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Black",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"};},
			{"Exile_Car_SUV_Grey", 		100, "Grey",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa"};},
			{"Exile_Car_SUV_Orange", 	100, "Orange",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Snow Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Snow_co.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Light_co.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo (Dark)",	{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Dark_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV XL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_SUVXL_Black", 100, "Black", {""};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Red",			100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};},
			{"Exile_Car_Van_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};},
			{"Exile_Car_Van_Guerilla03",	150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};},
			{"Exile_Car_Van_Guerilla04",	150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};},
			{"Exile_Car_Van_Guerilla05",	150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};},
			{"Exile_Car_Van_Guerilla06",	150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};},
			{"Exile_Car_Van_Guerilla07",	150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};},
			{"Exile_Car_Van_Guerilla08",	150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};},
			{"Exile_Car_Van_Black",	150, "Brown",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"};},
			{"Exile_Car_Van_Black",	150, "Olive",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Box_Black",				100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_White",				100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla04",		150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla05",		150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla06",		150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla07",		150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla08",		150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Fuel_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Tempest
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Tempest", 		200, "Green Hex",	{"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ikarus_Blue", 		200, "Blue",	{"Exile_psycho_Ikarus\Data\bus_exterior_co.paa"};},
			{"Exile_Car_Ikarus_Red", 		200, "Red",		{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};},
			{"Exile_Car_Ikarus_Party", 		500, "Party",	{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ural_Open_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\Ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Open_Yellow",			300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};},
			{"Exile_Car_Ural_Open_Worker",			300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Open_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ural_Covered_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Covered_Yellow",		300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};},
			{"Exile_Car_Ural_Covered_Worker",		300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Covered_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Lada_Green", 		100, "Green",	{"exile_psycho_lada\data\lada_eciv1_co.paa","exile_psycho_lada\data\Lada_glass_ECIV1_CA.paa"};},
			{"Exile_Car_Lada_Taxi", 		100, "Taxi",	{"exile_psycho_lada\data\Lada_red_CO.paa"};},
			{"Exile_Car_Lada_Red", 			100, "Red",		{"exile_psycho_lada\data\Lada_red_CO.paa"};},
			{"Exile_Car_Lada_Hipster", 		100, "Hipster",	{"exile_psycho_lada\data\lada_eciv2_co.paa","exile_psycho_lada\data\Lada_glass_ECIV2_CA.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Volha_Blue", 		100, "Blue",	{"Exile_psycho_Gaz_volha\data\Volha_ECIV_CO.paa"};},
			{"Exile_Car_Volha_White", 		100, "White",	{"Exile_psycho_Gaz_volha\data\Volha_Gray_ECIV_CO.paa"};},
			{"Exile_Car_Volha_Black",		100, "Black",	{"Exile_psycho_Gaz_volha\data\Volha_Black_ECIV_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// HUNTER
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_Hunter",		1000, "Exile White Edition",	{"exile_assets\texture\vehicle\Exile_Hunter_Snow_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Snow_Back_co.paa"};},
			{"Exile_Car_Hunter",		1000, "Exile Hex",				{"exile_assets\texture\vehicle\Exile_Hunter_Hex_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};},
			{"Exile_Car_Hunter",		1000, "Exile Black",			{"exile_assets\texture\vehicle\Exile_Hunter_Black_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// IFRIT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_Ifrit",		1000, "Green Hex",	{"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa","\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// HMMWV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HMMWV_M2_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_M2_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_M2_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_M134_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_M134_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_M134_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_MEV_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_MEV_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_cm.paa"};},
			{"Exile_Car_HMMWV_MEV_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_cm.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_UNA_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_UNA_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_UNA_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// BTR40
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BTR40_MG_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_BTR40_MG_Green",		1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"};},
			{"Exile_Car_BTR40_MG_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"};}
		};
	};
	
	class Exile_Car_BTR40_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_BTR40_Green",			1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"};},
			{"Exile_Car_BTR40_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Golf
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Golf_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_Golf_Red",				1000, "Red",	{"exile_psycho_VWGolf\data\vwgolf_body_co.paa"};},
			{"Exile_Car_Golf_Black",			1000, "Black",	{"exile_psycho_VWGolf\data\texture\black_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// AN-2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_AN2_Abstract
	{
		skins[] = 
		{
			{"Exile_Plane_AN2_Green", 700, "Green", {"Exile_psycho_An2\data\an2_1_co.paa","Exile_psycho_An2\data\an2_2_co.paa","Exile_psycho_An2\data\an2_wings_co.paa"};},
			{"Exile_Plane_AN2_White", 700, "Red, White & Blue", {"Exile_psycho_An2\data\an2_1_a_co.paa",
		"Exile_psycho_An2\data\an2_2_a_co.paa","Exile_psycho_An2\data\an2_wings_a_co.paa"};},
			{"Exile_Plane_AN2_Stripe", 700, "Green Stripe", {"Exile_psycho_An2\data\an2_1_b_co.paa","Exile_psycho_An2\data\an2_2_b_co.paa","Exile_psycho_An2\data\an2_wings_b_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// RHIB
	///////////////////////////////////////////////////////////////////////////////
	class B_G_Boat_Transport_02_F
	{
		skins[] = 
		{
			{"Exile_Boat_RHIB",		150, "Blue", {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_civilian_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Water Scooter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_WaterScooter_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_WaterScooter",		150, "Blue", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Grey", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Lime", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Red", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};},
			{"Exile_Boat_WaterScooter",		150, "White", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Yellow", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Ceasar BTT
	///////////////////////////////////////////////////////////////////////////////
	class C_Plane_Civil_01_F
	{
		skins[] = 
		{
			{"Exile_Plane_Ceasar",		150, "Racing (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Racing", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Red Line (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Tribal (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Tribal", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Blue Wave (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Blue Wave", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish (Infantry Transport)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_VTOL_01_infantry_F
	{
		skins[] = 
		{
			{"Exile_Plane_BlackfishInfantry",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish (Vehicle Transport)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_VTOL_01_vehicle_F
	{
		skins[] = 
		{
			{"Exile_Plane_BlackfishVehicle",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Light)
	///////////////////////////////////////////////////////////////////////////////
	class B_CTRG_LSV_01_light_F
	{
		skins[] = 
		{
			{"Exile_Car_ProwlerLight",		150, "Black", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"};},
			{"Exile_Car_ProwlerLight",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerLight",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_LSV_01_unarmed_black_F
	{
		skins[] = 
		{
			{"Exile_Car_ProwlerUnarmed",		150, "Olive", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerUnarmed",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerUnarmed",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Qilin (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class O_T_LSV_02_unarmed_black_F
	{
		skins[] = 
		{
			{"Exile_Car_QilinUnarmed",		150, "Arid", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"};},
			{"Exile_Car_QilinUnarmed",		150, "Green Hex", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// MB 4WD
	///////////////////////////////////////////////////////////////////////////////
	class C_Offroad_02_unarmed_orange_F
	{
		skins[] = 
		{
			{"Exile_Car_MB4WD",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"};},
			{"Exile_Car_MB4WD",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"};}
		};
	};
	
	class I_C_Offroad_02_unarmed_F
	{
		skins[] = 
		{
			{"Exile_Car_MB4WDOpen",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Orange", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};}
		};
	};
};
class CfgVehicleTransport 
{
	class Exile_Container_SupplyBox
	{
		vehicles[] = {"Exile_Car_Van_Abstract", "Exile_Car_Offroad_Abstract", "Exile_Car_Zamak_Abstract", "Exile_Car_HEMMT_Abstract", "Exile_Car_Tempest_Abstract"};

		class Exile_Car_Van_Abstract
		{
			attachPosition[] = {0, -1.1, 0.2};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0, -4.4};
		};

		class Exile_Car_Offroad_Abstract
		{
			attachPosition[] = {0, -1.6, 0.4};
			cargoIndizes[] = {1, 2, 3, 4}; 
			detachPosition[] = {0, -4};
		};

		class Exile_Car_Zamak_Abstract
		{
			attachPosition[] = {0.03, 0.3, 0};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0.03, -4.8};
		};

		class Exile_Car_HEMMT_Abstract
		{
			attachPosition[] = {0.05, -0.1, 0.3};
			cargoIndizes[] = {1, 2, 8, 9}; 
			detachPosition[] = {0.05, -6.1};
		};

		class Exile_Car_Tempest_Abstract
		{
			attachPosition[] = {0.08, -0.85, 0.4};
			cargoIndizes[] = {1, 6, 7, 9}; 
			detachPosition[] = {0.08, -6};
		};
	};
};

class CfgLootTables
{
	/**
	  Result of 100 rounds:

	  Chemlight_yellow
	  FlareGreen_F
	  U_C_Poloshirt_tricolour
	  Exile_Item_CockONut
	  Exile_Item_CockONut
	  H_Hat_checker
	  H_Cap_blk
	  B_OutdoorPack_blk
	  Exile_Item_ToiletPaper
	  Exile_Item_ChocolateMilk
	  optic_Holosight_smg
	  Exile_Item_Surstromming
	  hgun_P07_F
	  H_StrawHat_dark
	  Exile_Item_Magazine04
	  B_OutdoorPack_blk
	  H_Hat_grey
	  B_AssaultPack_tna_F
	  Exile_Item_Magazine04
	  Exile_Item_CanOpener
	  U_I_C_Soldier_Bandit_5_F
	  11Rnd_45ACP_Mag
	  ItemWatch
	  U_C_man_sport_2_F
	  FlareGreen_F
	  hgun_P07_khk_F
	  SMG_01_F
	  FlareWhite_F
	  optic_Aco
	  H_Cap_blk
	  Exile_Weapon_M1014
	  muzzle_snds_L
	  FlareGreen_F
	  H_Cap_oli
	  FlareGreen_F
	  U_I_C_Soldier_Bandit_2_F
	  Exile_Weapon_Taurus
	  Exile_Item_Dogfood
	  B_Kitbag_cbr
	  Exile_Item_GloriousKnakworst
	  U_C_Poor_2
	  Exile_Item_Dogfood
	  Exile_Item_Magazine01
	  B_OutdoorPack_tan
	  9Rnd_45ACP_Mag
	  30Rnd_45ACP_Mag_SMG_01
	  FlareGreen_F
	  10Rnd_9x21_Mag
	  U_C_HunterBody_grn
	  optic_Holosight_smg_blk_F
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  B_AssaultPack_khk
	  FlareYellow_F
	  H_Hat_grey
	  FlareYellow_F
	  B_OutdoorPack_tan
	  Exile_Magazine_6Rnd_45ACP
	  V_Rangemaster_belt
	  Exile_Item_EnergyDrink
	  U_C_Man_casual_2_F
	  Exile_Item_SeedAstics
	  H_Cap_blk_Raven
	  Exile_Item_Magazine01
	  Chemlight_yellow
	  Exile_Item_Magazine04
	  FlareWhite_F
	  Exile_Item_Can_Empty
	  Exile_Item_Raisins
	  Exile_Item_BeefParts
	  B_OutdoorPack_blu
	  Exile_Item_PlasticBottleEmpty
	  U_C_man_sport_2_F
	  SMG_02_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine01
	  H_StrawHat_dark
	  U_C_Journalist
	  Exile_Item_PowerDrink
	  Chemlight_green
	  H_Cap_oli
	  SMG_05_F
	  Binocular
	  6Rnd_45ACP_Cylinder
	  U_C_Journalist
	  Exile_Item_Can_Empty
	  hgun_Rook40_F
	  hgun_Pistol_heavy_02_F
	  Exile_Magazine_8Rnd_74Slug
	  hgun_Pistol_Signal_F
	  Exile_Item_PlasticBottleEmpty
	  optic_ACO_grn_smg
	  V_Rangemaster_belt
	  Exile_Item_SeedAstics
	  H_Cap_headphones
	  Chemlight_blue
	  B_OutdoorPack_tan
	  optic_Yorris
	  H_Hat_tan
	  Exile_Item_GloriousKnakworst
	*/
	class CivillianLowerClass
	{
		count = 161;
		half = 7481.25369930428;
		halfIndex = 80;
		sum = 10000;
		items[] = 
		{
			{398.936170212766, "Exile_Item_Can_Empty"}, // 3.99%
			{797.872340425532, "Exile_Item_ToiletPaper"}, // 3.99%
			{1196.8085106383, "Exile_Item_PlasticBottleEmpty"}, // 3.99%
			{1409.57446808511, "Exile_Weapon_M1014"}, // 2.13%
			{1569.14893617021, "Exile_Magazine_8Rnd_74Slug"}, // 1.60%
			{1702.12765957447, "FlareRed_F"}, // 1.33%
			{1835.10638297872, "FlareGreen_F"}, // 1.33%
			{1968.08510638298, "Chemlight_yellow"}, // 1.33%
			{2101.06382978723, "Chemlight_red"}, // 1.33%
			{2234.04255319149, "Chemlight_green"}, // 1.33%
			{2367.02127659574, "Chemlight_blue"}, // 1.33%
			{2500, "V_Rangemaster_belt"}, // 1.33%
			{2632.97872340425, "FlareWhite_F"}, // 1.33%
			{2765.95744680851, "FlareYellow_F"}, // 1.33%
			{2893.61702127659, "Exile_Item_PlasticBottleDirtyWater"}, // 1.28%
			{3011.82033096927, "Exile_Item_Heatpack"}, // 1.18%
			{3125.59101654846, "Exile_Item_InstantCoffee"}, // 1.14%
			{3231.97399527187, "Exile_Item_ChocolateMilk"}, // 1.06%
			{3335.40189125295, "ItemMap"}, // 1.03%
			{3435.13593380615, "Exile_Item_Magazine04"}, // 1.00%
			{3534.86997635934, "Exile_Item_Magazine03"}, // 1.00%
			{3634.60401891253, "Exile_Item_Magazine02"}, // 1.00%
			{3734.33806146572, "Exile_Item_Magazine01"}, // 1.00%
			{3827.4231678487, "Exile_Item_Raisins"}, // 0.93%
			{3920.50827423168, "Exile_Item_Moobar"}, // 0.93%
			{4009.16075650118, "ItemRadio"}, // 0.89%
			{4097.81323877069, "ItemWatch"}, // 0.89%
			{4182.91962174941, "Exile_Item_MountainDupe"}, // 0.85%
			{4265.66193853428, "Exile_Item_CockONut"}, // 0.83%
			{4348.40425531915, "Exile_Item_SeedAstics"}, // 0.83%
			{4420.80378250591, "Exile_Item_Surstromming"}, // 0.72%
			{4493.20330969267, "Exile_Item_ChristmasTinner"}, // 0.72%
			{4565.60283687943, "Exile_Item_SausageGravy"}, // 0.72%
			{4638.0023640662, "Exile_Item_Noodles"}, // 0.72%
			{4710.40189125296, "Exile_Item_DsNuts"}, // 0.72%
			{4782.80141843972, "Exile_Item_Cheathas"}, // 0.72%
			{4855.20094562648, "Exile_Item_BeefParts"}, // 0.72%
			{4927.60047281324, "Exile_Item_Dogfood"}, // 0.72%
			{5000, "Exile_Item_CatFood"}, // 0.72%
			{5072.39952718677, "Exile_Item_BBQSandwich"}, // 0.72%
			{5144.79905437353, "Exile_Item_MacasCheese"}, // 0.72%
			{5217.13947990544, "Exile_Item_EnergyDrink"}, // 0.72%
			{5283.62884160757, "V_Press_F"}, // 0.66%
			{5350.1182033097, "V_TacVest_blk_POLICE"}, // 0.66%
			{5413.94799054374, "H_Cap_press"}, // 0.64%
			{5477.77777777778, "H_Cap_red"}, // 0.64%
			{5541.60756501183, "H_Cap_tan"}, // 0.64%
			{5605.43735224587, "H_Hat_blue"}, // 0.64%
			{5669.26713947991, "H_StrawHat_dark"}, // 0.64%
			{5733.09692671395, "H_Hat_checker"}, // 0.64%
			{5796.926713948, "H_Hat_grey"}, // 0.64%
			{5860.75650118204, "H_Hat_tan"}, // 0.64%
			{5924.58628841608, "H_StrawHat"}, // 0.64%
			{5988.41607565012, "H_Hat_brown"}, // 0.64%
			{6050.47281323878, "Exile_Item_GloriousKnakworst"}, // 0.62%
			{6110.04728132388, "Exile_Item_Beer"}, // 0.60%
			{6169.14893617022, "Binocular"}, // 0.59%
			{6228.25059101655, "ItemGPS"}, // 0.59%
			{6285.69739952719, "muzzle_snds_L"}, // 0.57%
			{6343.14420803783, "muzzle_snds_acp"}, // 0.57%
			{6399.1352494712, "U_C_Journalist"}, // 0.56%
			{6455.12629090457, "U_Rangemaster"}, // 0.56%
			{6511.11733233794, "U_C_HunterBody_grn"}, // 0.56%
			{6567.10837377131, "U_C_Poor_shorts_1"}, // 0.56%
			{6623.09941520469, "U_C_Scientist"}, // 0.56%
			{6679.09045663806, "U_C_Poor_2"}, // 0.56%
			{6735.08149807143, "U_C_Poor_1"}, // 0.56%
			{6789.76433760215, "B_OutdoorPack_blk"}, // 0.55%
			{6844.15563499457, "SMG_01_F"}, // 0.54%
			{6897.34712435627, "H_Bandanna_surfer"}, // 0.53%
			{6950.53861371797, "H_Beret_blk_POLICE"}, // 0.53%
			{7003.73010307967, "H_Cap_blk"}, // 0.53%
			{7056.92159244137, "H_Cap_blu"}, // 0.53%
			{7110.11308180308, "H_Cap_grn"}, // 0.53%
			{7163.30457116478, "H_Cap_headphones"}, // 0.53%
			{7216.49606052648, "H_Cap_blk_Raven"}, // 0.53%
			{7269.68754988818, "Exile_Item_ZipTie"}, // 0.53%
			{7322.87903924989, "H_Cap_oli"}, // 0.53%
			{7375.67059260135, "SMG_02_F"}, // 0.53%
			{7428.46214595281, "SMG_05_F"}, // 0.53%
			{7481.25369930428, "hgun_PDW2000_F"}, // 0.53%
			{7532.96764729482, "Exile_Item_CanOpener"}, // 0.52%
			{7584.68159528536, "Exile_Item_Matches"}, // 0.52%
			{7635.7454250726, "Exile_Item_PlasticBottleFreshWater"}, // 0.51%
			{7685.9486285151, "hgun_P07_F"}, // 0.50%
			{7735.16318409275, "B_OutdoorPack_tan"}, // 0.49%
			{7784.3777396704, "B_OutdoorPack_blu"}, // 0.49%
			{7832.19031437755, "hgun_Rook40_F"}, // 0.48%
			{7880.0028890847, "hgun_ACPC2_F"}, // 0.48%
			{7923.74916070928, "B_HuntingBackpack"}, // 0.44%
			{7967.29774849079, "U_C_Poloshirt_burgundy"}, // 0.44%
			{8010.8463362723, "U_C_Poloshirt_blue"}, // 0.44%
			{8054.39492405381, "U_C_Poloshirt_salmon"}, // 0.44%
			{8097.94351183532, "U_C_Poloshirt_tricolour"}, // 0.44%
			{8141.49209961683, "U_C_Poloshirt_stripped"}, // 0.44%
			{8179.77008728833, "B_AssaultPack_tna_F"}, // 0.38%
			{8218.04807495984, "B_AssaultPack_mcamo"}, // 0.38%
			{8256.32606263134, "B_AssaultPack_cbr"}, // 0.38%
			{8294.60405030285, "B_AssaultPack_blk"}, // 0.38%
			{8332.88203797435, "B_AssaultPack_sgg"}, // 0.38%
			{8371.16002564586, "B_AssaultPack_rgr"}, // 0.38%
			{8409.43801331736, "B_AssaultPack_dgtl"}, // 0.38%
			{8447.71600098887, "B_AssaultPack_khk"}, // 0.38%
			{8478.82213511852, "U_C_Man_casual_1_F"}, // 0.31%
			{8509.92826924817, "U_I_C_Soldier_Bandit_1_F"}, // 0.31%
			{8541.03440337782, "U_I_C_Soldier_Bandit_2_F"}, // 0.31%
			{8572.14053750747, "U_C_man_sport_3_F"}, // 0.31%
			{8603.24667163712, "U_I_C_Soldier_Bandit_4_F"}, // 0.31%
			{8634.35280576677, "U_I_C_Soldier_Bandit_5_F"}, // 0.31%
			{8665.45893989642, "U_C_man_sport_1_F"}, // 0.31%
			{8696.56507402607, "U_C_man_sport_2_F"}, // 0.31%
			{8727.67120815572, "U_I_C_Soldier_Bandit_3_F"}, // 0.31%
			{8758.77734228537, "U_C_Man_casual_6_F"}, // 0.31%
			{8789.88347641502, "U_C_Man_casual_5_F"}, // 0.31%
			{8820.98961054467, "U_C_Man_casual_4_F"}, // 0.31%
			{8852.09574467432, "U_C_Man_casual_3_F"}, // 0.31%
			{8883.20187880397, "U_C_Man_casual_2_F"}, // 0.31%
			{8914.28005236361, "Exile_Weapon_Makarov"}, // 0.31%
			{8945.35822592326, "hgun_Pistol_01_F"}, // 0.31%
			{8976.43639948291, "Exile_Weapon_TaurusGold"}, // 0.31%
			{9007.51457304255, "Exile_Weapon_Taurus"}, // 0.31%
			{9038.5927466022, "Exile_Weapon_Colt1911"}, // 0.31%
			{9069.67092016185, "hgun_P07_khk_F"}, // 0.31%
			{9100.74909372149, "hgun_Pistol_heavy_01_F"}, // 0.31%
			{9131.82726728114, "hgun_Pistol_heavy_02_F"}, // 0.31%
			{9162.90544084079, "hgun_Pistol_Signal_F"}, // 0.31%
			{9193.93380963511, "Exile_Item_CookingPot"}, // 0.31%
			{9224.96217842944, "Exile_Item_EMRE"}, // 0.31%
			{9254.74941247199, "Exile_Item_PowerDrink"}, // 0.30%
			{9284.30023989516, "11Rnd_45ACP_Mag"}, // 0.30%
			{9313.85106731833, "30Rnd_9x21_Mag"}, // 0.30%
			{9343.40189474149, "Exile_Magazine_7Rnd_45ACP"}, // 0.30%
			{9372.95272216466, "Exile_Magazine_8Rnd_9x18"}, // 0.30%
			{9402.50354958783, "10Rnd_9x21_Mag"}, // 0.30%
			{9432.05437701099, "Exile_Magazine_6Rnd_45ACP"}, // 0.30%
			{9461.60520443416, "9Rnd_45ACP_Mag"}, // 0.30%
			{9488.94662419952, "B_Kitbag_sgg"}, // 0.27%
			{9516.28804396488, "B_Kitbag_cbr"}, // 0.27%
			{9543.62946373024, "B_Kitbag_mcamo"}, // 0.27%
			{9570.22520841109, "optic_ACO_grn_smg"}, // 0.27%
			{9596.82095309194, "optic_Aco"}, // 0.27%
			{9623.4166977728, "30Rnd_45ACP_Mag_SMG_01"}, // 0.27%
			{9650.01244245365, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.27%
			{9676.6081871345, "optic_Holosight_smg"}, // 0.27%
			{9703.20393181535, "optic_Aco_smg"}, // 0.27%
			{9729.7996764962, "optic_Holosight_smg_blk_F"}, // 0.27%
			{9756.39542117705, "optic_ACO_grn"}, // 0.27%
			{9782.99116585791, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.27%
			{9809.58691053876, "30Rnd_9x21_Mag_SMG_02"}, // 0.27%
			{9836.18265521961, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.27%
			{9862.77839990046, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.27%
			{9886.41906183899, "6Rnd_45ACP_Cylinder"}, // 0.24%
			{9908.75948737091, "optic_MRD"}, // 0.22%
			{9931.09991290282, "optic_Yorris"}, // 0.22%
			{9945.87532661441, "16Rnd_9x21_Mag"}, // 0.15%
			{9960.65074032599, "Exile_Item_MobilePhone"}, // 0.15%
			{9970.9935299241, "6Rnd_RedSignal_F"}, // 0.10%
			{9981.33631952221, "6Rnd_GreenSignal_F"}, // 0.10%
			{9987.55754634814, "U_OrestesBody"}, // 0.06%
			{9993.77877317407, "U_NikosBody"}, // 0.06%
			{10000, "U_NikosAgedBody"} // 0.06%
		};
	};

	/**
	  Result of 100 rounds:

	  H_Cap_grn
	  Exile_Item_ToiletPaper
	  H_StrawHat
	  optic_ACO_grn_smg
	  Exile_Item_ChocolateMilk
	  30Rnd_9x21_Mag_SMG_02_Tracer_Yellow
	  Exile_Item_CatFood
	  Exile_Item_Magazine04
	  Exile_Weapon_VSSVintorez
	  Exile_Weapon_Makarov
	  Exile_Weapon_Makarov
	  Chemlight_yellow
	  H_Hat_checker
	  U_C_Poloshirt_blue
	  H_Cap_blk
	  U_C_Poloshirt_blue
	  Exile_Item_InstantCoffee
	  optic_Holosight_smg_blk_F
	  V_TacVest_blk_POLICE
	  Exile_Item_Magazine03
	  Exile_Item_PlasticBottleEmpty
	  H_Cap_headphones
	  Exile_Item_CockONut
	  B_AssaultPack_tna_F
	  B_AssaultPack_khk
	  Exile_Item_Heatpack
	  muzzle_snds_58_blk_F
	  Binocular
	  Exile_Item_Magazine02
	  Exile_Item_ZipTie
	  H_Cap_press
	  U_C_Man_casual_4_F
	  Exile_Item_BeefParts
	  hgun_ACPC2_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_InstantCoffee
	  Exile_Item_Magazine04
	  FlareWhite_F
	  H_Cap_red
	  hgun_Pistol_heavy_01_F
	  Exile_Magazine_8Rnd_9x18
	  Exile_Item_Magazine03
	  FlareWhite_F
	  Exile_Item_InstantCoffee
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  H_Cap_headphones
	  Exile_Item_PlasticBottleEmpty
	  Exile_Magazine_7Rnd_45ACP
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Item_Raisins
	  B_AssaultPack_mcamo
	  H_StrawHat_dark
	  H_Beret_blk_POLICE
	  30Rnd_545x39_Mag_Tracer_Green_F
	  U_C_Poor_1
	  B_AssaultPack_rgr
	  Exile_Weapon_M1014
	  Exile_Item_Can_Empty
	  optic_Yorris
	  hgun_Pistol_Signal_F
	  arifle_CTAR_ghex_F
	  Exile_Item_Heatpack
	  Exile_Item_Raisins
	  Exile_Item_Can_Empty
	  hgun_ACPC2_F
	  B_AssaultPack_cbr
	  H_Beret_blk_POLICE
	  Exile_Item_CockONut
	  Exile_Item_MacasCheese
	  Exile_Item_ToiletPaper
	  Exile_Item_MountainDupe
	  H_Cap_blk_Raven
	  Exile_Item_MacasCheese
	  U_C_Poloshirt_tricolour
	  Exile_Item_SausageGravy
	  Exile_Item_PlasticBottleEmpty
	  SMG_02_F
	  SMG_05_F
	  U_C_Poor_2
	  Exile_Weapon_Taurus
	  SMG_05_F
	  FlareWhite_F
	  Exile_Item_Surstromming
	  Exile_Magazine_8Rnd_74Slug
	  Exile_Item_ToiletPaper
	  10Rnd_9x21_Mag
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  SMG_01_F
	  H_StrawHat_dark
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_EnergyDrink
	  10Rnd_9x21_Mag
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine03
	  optic_ERCO_snd_F
	  optic_ACO_grn
	  Exile_Item_ToiletPaper
	*/
	class CivillianUpperClass
	{
		count = 295;
		half = 9336.05248315373;
		halfIndex = 147;
		sum = 9999.99999999997;
		items[] = 
		{
			{380.710659898477, "Exile_Item_Can_Empty"}, // 3.81%
			{761.421319796954, "Exile_Item_ToiletPaper"}, // 3.81%
			{1142.13197969543, "Exile_Item_PlasticBottleEmpty"}, // 3.81%
			{1345.17766497462, "Exile_Weapon_M1014"}, // 2.03%
			{1497.46192893401, "Exile_Magazine_8Rnd_74Slug"}, // 1.52%
			{1624.3654822335, "V_Rangemaster_belt"}, // 1.27%
			{1751.269035533, "Chemlight_blue"}, // 1.27%
			{1878.17258883249, "Chemlight_green"}, // 1.27%
			{2005.07614213198, "Chemlight_red"}, // 1.27%
			{2131.97969543147, "Chemlight_yellow"}, // 1.27%
			{2258.88324873096, "FlareYellow_F"}, // 1.27%
			{2385.78680203046, "FlareGreen_F"}, // 1.27%
			{2512.69035532995, "FlareWhite_F"}, // 1.27%
			{2639.59390862944, "FlareRed_F"}, // 1.27%
			{2761.42131979695, "Exile_Item_PlasticBottleDirtyWater"}, // 1.22%
			{2874.22447828539, "Exile_Item_Heatpack"}, // 1.13%
			{2982.79751833051, "Exile_Item_InstantCoffee"}, // 1.09%
			{3084.32036097011, "Exile_Item_ChocolateMilk"}, // 1.02%
			{3183.02312464749, "ItemMap"}, // 0.99%
			{3278.20078962211, "Exile_Item_Magazine03"}, // 0.95%
			{3373.37845459673, "Exile_Item_Magazine04"}, // 0.95%
			{3468.55611957135, "Exile_Item_Magazine02"}, // 0.95%
			{3563.73378454597, "Exile_Item_Magazine01"}, // 0.95%
			{3652.56627185561, "Exile_Item_Raisins"}, // 0.89%
			{3741.39875916526, "Exile_Item_Moobar"}, // 0.89%
			{3826.00112803158, "ItemWatch"}, // 0.85%
			{3910.60349689791, "ItemRadio"}, // 0.85%
			{3991.82177100959, "Exile_Item_MountainDupe"}, // 0.81%
			{4070.78398195149, "Exile_Item_CockONut"}, // 0.79%
			{4149.7461928934, "Exile_Item_SeedAstics"}, // 0.79%
			{4218.83812746757, "Exile_Item_Surstromming"}, // 0.69%
			{4287.93006204174, "Exile_Item_SausageGravy"}, // 0.69%
			{4357.0219966159, "Exile_Item_MacasCheese"}, // 0.69%
			{4426.11393119007, "Exile_Item_BBQSandwich"}, // 0.69%
			{4495.20586576424, "Exile_Item_CatFood"}, // 0.69%
			{4564.29780033841, "Exile_Item_ChristmasTinner"}, // 0.69%
			{4633.38973491257, "Exile_Item_BeefParts"}, // 0.69%
			{4702.48166948674, "Exile_Item_Cheathas"}, // 0.69%
			{4771.57360406091, "Exile_Item_DsNuts"}, // 0.69%
			{4840.66553863508, "Exile_Item_Noodles"}, // 0.69%
			{4909.75747320925, "Exile_Item_Dogfood"}, // 0.69%
			{4978.79300620417, "Exile_Item_EnergyDrink"}, // 0.69%
			{5042.24478285392, "V_Press_F"}, // 0.63%
			{5105.69655950366, "V_TacVest_blk_POLICE"}, // 0.63%
			{5166.61026508742, "H_Cap_press"}, // 0.61%
			{5227.52397067117, "H_Cap_red"}, // 0.61%
			{5288.43767625493, "H_Cap_tan"}, // 0.61%
			{5349.35138183869, "H_Hat_blue"}, // 0.61%
			{5410.26508742244, "H_Hat_tan"}, // 0.61%
			{5471.1787930062, "H_Hat_checker"}, // 0.61%
			{5532.09249858996, "H_Hat_grey"}, // 0.61%
			{5593.00620417371, "H_StrawHat_dark"}, // 0.61%
			{5653.91990975747, "H_Hat_brown"}, // 0.61%
			{5714.83361534123, "H_StrawHat"}, // 0.61%
			{5774.05527354766, "Exile_Item_GloriousKnakworst"}, // 0.59%
			{5830.90806542583, "Exile_Item_Beer"}, // 0.57%
			{5887.30964467005, "ItemGPS"}, // 0.56%
			{5943.71122391427, "Binocular"}, // 0.56%
			{5998.53355893965, "muzzle_snds_L"}, // 0.55%
			{6053.35589396503, "muzzle_snds_acp"}, // 0.55%
			{6106.7889690385, "U_C_Poor_2"}, // 0.53%
			{6160.22204411197, "U_C_Poor_shorts_1"}, // 0.53%
			{6213.65511918544, "U_C_HunterBody_grn"}, // 0.53%
			{6267.08819425891, "U_C_Journalist"}, // 0.53%
			{6320.52126933238, "U_C_Scientist"}, // 0.53%
			{6373.95434440585, "U_C_Poor_1"}, // 0.53%
			{6427.38741947932, "U_Rangemaster"}, // 0.53%
			{6479.5720582193, "B_OutdoorPack_blk"}, // 0.52%
			{6531.47847400496, "SMG_01_F"}, // 0.52%
			{6582.23989532476, "H_Cap_blk_Raven"}, // 0.51%
			{6633.00131664455, "H_Cap_grn"}, // 0.51%
			{6683.76273796435, "H_Cap_oli"}, // 0.51%
			{6734.52415928415, "H_Cap_headphones"}, // 0.51%
			{6785.28558060394, "H_Bandanna_surfer"}, // 0.51%
			{6836.04700192374, "H_Beret_blk_POLICE"}, // 0.51%
			{6886.80842324354, "H_Cap_blk"}, // 0.51%
			{6937.56984456333, "H_Cap_blu"}, // 0.51%
			{6988.33126588313, "Exile_Item_ZipTie"}, // 0.51%
			{7038.71102238097, "SMG_02_F"}, // 0.50%
			{7089.09077887882, "SMG_05_F"}, // 0.50%
			{7139.47053537666, "hgun_PDW2000_F"}, // 0.50%
			{7188.82191721535, "Exile_Item_CanOpener"}, // 0.49%
			{7238.17329905404, "Exile_Item_Matches"}, // 0.49%
			{7286.90426352105, "Exile_Item_PlasticBottleFreshWater"}, // 0.49%
			{7334.81391959816, "hgun_P07_F"}, // 0.48%
			{7381.78009446414, "B_OutdoorPack_tan"}, // 0.47%
			{7428.74626933012, "B_OutdoorPack_blu"}, // 0.47%
			{7474.37451321309, "hgun_Rook40_F"}, // 0.46%
			{7520.00275709605, "hgun_ACPC2_F"}, // 0.46%
			{7561.75046808803, "B_HuntingBackpack"}, // 0.42%
			{7603.30952647851, "U_C_Poloshirt_tricolour"}, // 0.42%
			{7644.86858486899, "U_C_Poloshirt_blue"}, // 0.42%
			{7686.42764325946, "U_C_Poloshirt_burgundy"}, // 0.42%
			{7727.98670164994, "U_C_Poloshirt_stripped"}, // 0.42%
			{7769.54576004042, "U_C_Poloshirt_salmon"}, // 0.42%
			{7806.0750071584, "B_AssaultPack_rgr"}, // 0.37%
			{7842.60425427639, "B_AssaultPack_sgg"}, // 0.37%
			{7879.13350139437, "B_AssaultPack_blk"}, // 0.37%
			{7915.66274851235, "B_AssaultPack_cbr"}, // 0.37%
			{7952.19199563034, "B_AssaultPack_tna_F"}, // 0.37%
			{7988.72124274832, "B_AssaultPack_khk"}, // 0.37%
			{8025.25048986631, "B_AssaultPack_dgtl"}, // 0.37%
			{8061.77973698429, "B_AssaultPack_mcamo"}, // 0.37%
			{8091.46477869178, "U_I_C_Soldier_Bandit_5_F"}, // 0.30%
			{8121.14982039926, "U_I_C_Soldier_Bandit_2_F"}, // 0.30%
			{8150.83486210674, "U_I_C_Soldier_Bandit_3_F"}, // 0.30%
			{8180.51990381423, "U_I_C_Soldier_Bandit_4_F"}, // 0.30%
			{8210.20494552171, "U_I_C_Soldier_Bandit_1_F"}, // 0.30%
			{8239.8899872292, "U_C_man_sport_1_F"}, // 0.30%
			{8269.57502893668, "U_C_Man_casual_5_F"}, // 0.30%
			{8299.26007064416, "U_C_Man_casual_6_F"}, // 0.30%
			{8328.94511235165, "U_C_Man_casual_3_F"}, // 0.30%
			{8358.63015405913, "U_C_Man_casual_2_F"}, // 0.30%
			{8388.31519576661, "U_C_Man_casual_1_F"}, // 0.30%
			{8418.0002374741, "U_C_man_sport_3_F"}, // 0.30%
			{8447.68527918158, "U_C_man_sport_2_F"}, // 0.30%
			{8477.37032088907, "U_C_Man_casual_4_F"}, // 0.30%
			{8507.02867941299, "hgun_Pistol_heavy_01_F"}, // 0.30%
			{8536.68703793692, "hgun_Pistol_heavy_02_F"}, // 0.30%
			{8566.34539646084, "Exile_Weapon_Colt1911"}, // 0.30%
			{8596.00375498477, "hgun_Pistol_Signal_F"}, // 0.30%
			{8625.6621135087, "hgun_P07_khk_F"}, // 0.30%
			{8655.32047203262, "Exile_Weapon_Taurus"}, // 0.30%
			{8684.97883055655, "Exile_Weapon_TaurusGold"}, // 0.30%
			{8714.63718908047, "hgun_Pistol_01_F"}, // 0.30%
			{8744.2955476044, "Exile_Weapon_Makarov"}, // 0.30%
			{8773.90637670761, "Exile_Item_EMRE"}, // 0.30%
			{8803.51720581083, "Exile_Item_CookingPot"}, // 0.30%
			{8831.94360174991, "Exile_Item_PowerDrink"}, // 0.28%
			{8860.14439137202, "9Rnd_45ACP_Mag"}, // 0.28%
			{8888.34518099413, "Exile_Magazine_7Rnd_45ACP"}, // 0.28%
			{8916.54597061624, "Exile_Magazine_8Rnd_9x18"}, // 0.28%
			{8944.74676023835, "Exile_Magazine_6Rnd_45ACP"}, // 0.28%
			{8972.94754986046, "30Rnd_9x21_Mag"}, // 0.28%
			{9001.14833948257, "11Rnd_45ACP_Mag"}, // 0.28%
			{9029.34912910468, "10Rnd_9x21_Mag"}, // 0.28%
			{9055.44144847467, "B_Kitbag_cbr"}, // 0.26%
			{9081.53376784466, "B_Kitbag_sgg"}, // 0.26%
			{9107.62608721465, "B_Kitbag_mcamo"}, // 0.26%
			{9133.00679787454, "30Rnd_9x21_Mag_SMG_02"}, // 0.25%
			{9158.38750853444, "optic_Holosight_smg"}, // 0.25%
			{9183.76821919434, "optic_Holosight_smg_blk_F"}, // 0.25%
			{9209.14892985424, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.25%
			{9234.52964051414, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.25%
			{9259.91035117403, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.25%
			{9285.29106183393, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.25%
			{9310.67177249383, "optic_ACO_grn_smg"}, // 0.25%
			{9336.05248315373, "optic_ACO_grn"}, // 0.25%
			{9361.43319381363, "30Rnd_45ACP_Mag_SMG_01"}, // 0.25%
			{9386.81390447352, "optic_Aco"}, // 0.25%
			{9412.19461513342, "optic_Aco_smg"}, // 0.25%
			{9434.75524683111, "6Rnd_45ACP_Cylinder"}, // 0.23%
			{9456.07504378542, "optic_MRD"}, // 0.21%
			{9477.39484073974, "optic_Yorris"}, // 0.21%
			{9491.49523555079, "16Rnd_9x21_Mag"}, // 0.14%
			{9505.59563036185, "Exile_Item_MobilePhone"}, // 0.14%
			{9515.46590672959, "6Rnd_RedSignal_F"}, // 0.10%
			{9525.33618309732, "6Rnd_GreenSignal_F"}, // 0.10%
			{9532.46654997168, "acc_flashlight"}, // 0.07%
			{9538.40355831317, "U_NikosBody"}, // 0.06%
			{9544.34056665467, "U_NikosAgedBody"}, // 0.06%
			{9550.27757499617, "U_OrestesBody"}, // 0.06%
			{9555.75542621773, "30Rnd_65x39_caseless_green"}, // 0.05%
			{9561.23327743929, "30Rnd_556x45_Stanag_red"}, // 0.05%
			{9566.71112866085, "30Rnd_556x45_Stanag_green"}, // 0.05%
			{9572.18897988241, "30Rnd_556x45_Stanag"}, // 0.05%
			{9577.28209907838, "muzzle_snds_H_khk_F"}, // 0.05%
			{9582.37521827434, "muzzle_snds_65_TI_blk_F"}, // 0.05%
			{9587.46833747031, "muzzle_snds_65_TI_hex_F"}, // 0.05%
			{9592.56145666628, "muzzle_snds_65_TI_ghex_F"}, // 0.05%
			{9597.65457586224, "muzzle_snds_H_MG_blk_F"}, // 0.05%
			{9602.74769505821, "muzzle_snds_H_MG_khk_F"}, // 0.05%
			{9607.84081425418, "optic_Arco"}, // 0.05%
			{9612.93393345014, "optic_Arco_blk_F"}, // 0.05%
			{9618.02705264611, "optic_Arco_ghex_F"}, // 0.05%
			{9623.12017184207, "optic_Hamr"}, // 0.05%
			{9628.21329103804, "optic_Hamr_khk_F"}, // 0.05%
			{9633.30641023401, "optic_Holosight"}, // 0.05%
			{9638.39952942997, "optic_Holosight_blk_F"}, // 0.05%
			{9643.49264862594, "optic_Holosight_khk_F"}, // 0.05%
			{9648.58576782191, "acc_pointer_IR"}, // 0.05%
			{9653.67888701787, "optic_MRCO"}, // 0.05%
			{9658.77200621384, "optic_DMS"}, // 0.05%
			{9663.8651254098, "optic_DMS_ghex_F"}, // 0.05%
			{9668.95824460577, "optic_ERCO_blk_F"}, // 0.05%
			{9674.05136380174, "optic_ERCO_khk_F"}, // 0.05%
			{9679.1444829977, "optic_ERCO_snd_F"}, // 0.05%
			{9684.23760219367, "muzzle_snds_58_wdm_F"}, // 0.05%
			{9689.33072138964, "muzzle_snds_m_khk_F"}, // 0.05%
			{9694.4238405856, "muzzle_snds_m_snd_F"}, // 0.05%
			{9699.51695978157, "muzzle_snds_H_snd_F"}, // 0.05%
			{9704.61007897753, "muzzle_snds_H"}, // 0.05%
			{9709.7031981735, "muzzle_snds_M"}, // 0.05%
			{9714.79631736947, "muzzle_snds_58_blk_F"}, // 0.05%
			{9718.8250016012, "Exile_Weapon_LeeEnfield"}, // 0.04%
			{9722.85368583292, "Exile_Weapon_AK74"}, // 0.04%
			{9726.88237006465, "Exile_Weapon_AK47"}, // 0.04%
			{9730.91105429638, "Exile_Weapon_AKS_Gold"}, // 0.04%
			{9734.93973852811, "Exile_Weapon_AK107"}, // 0.04%
			{9738.96842275984, "Exile_Weapon_DMR"}, // 0.04%
			{9742.99710699157, "Exile_Weapon_CZ550"}, // 0.04%
			{9747.0257912233, "Exile_Weapon_SVDCamo"}, // 0.04%
			{9751.05447545503, "Exile_Weapon_AK74_GL"}, // 0.04%
			{9755.08315968676, "Exile_Weapon_VSSVintorez"}, // 0.04%
			{9759.11184391849, "arifle_Katiba_F"}, // 0.04%
			{9763.14052815022, "Exile_Weapon_SVD"}, // 0.04%
			{9767.16921238194, "Exile_Weapon_AK107_GL"}, // 0.04%
			{9771.18630327776, "20Rnd_556x45_UW_mag"}, // 0.04%
			{9774.47301401069, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.03%
			{9777.75972474363, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.03%
			{9781.04643547657, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.03%
			{9784.3331462095, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.03%
			{9787.61985694244, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.03%
			{9790.90656767538, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.03%
			{9794.19327840831, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.03%
			{9797.47998914125, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.03%
			{9800.76669987419, "30Rnd_65x39_caseless_mag"}, // 0.03%
			{9804.05341060712, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.03%
			{9807.34012134006, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.03%
			{9810.626832073, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.03%
			{9813.91354280593, "Exile_Magazine_10Rnd_762x54"}, // 0.03%
			{9817.20025353887, "Exile_Magazine_10Rnd_9x39"}, // 0.03%
			{9820.48696427181, "Exile_Magazine_20Rnd_9x39"}, // 0.03%
			{9823.77367500474, "30Rnd_762x39_Mag_F"}, // 0.03%
			{9827.06038573768, "30Rnd_762x39_Mag_Green_F"}, // 0.03%
			{9830.34709647062, "30Rnd_762x39_Mag_Tracer_F"}, // 0.03%
			{9833.63380720355, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.03%
			{9836.92051793649, "30Rnd_762x39_AK47_M"}, // 0.03%
			{9840.20722866943, "30Rnd_545x39_Mag_F"}, // 0.03%
			{9843.49393940236, "30Rnd_545x39_Mag_Green_F"}, // 0.03%
			{9846.7806501353, "30Rnd_545x39_Mag_Tracer_F"}, // 0.03%
			{9850.06736086824, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.03%
			{9853.35407160117, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.03%
			{9856.64078233411, "Exile_Magazine_5Rnd_22LR"}, // 0.03%
			{9859.92749306705, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.03%
			{9863.21420379998, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.03%
			{9866.50091453292, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.03%
			{9869.78762526586, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.03%
			{9873.07433599879, "150Rnd_556x45_Drum_Mag_F"}, // 0.03%
			{9876.36104673173, "30Rnd_580x42_Mag_F"}, // 0.03%
			{9879.64775746467, "30Rnd_580x42_Mag_Tracer_F"}, // 0.03%
			{9882.9344681976, "20Rnd_762x51_Mag"}, // 0.03%
			{9886.22117893054, "100Rnd_580x42_Mag_F"}, // 0.03%
			{9889.50788966348, "100Rnd_580x42_Mag_Tracer_F"}, // 0.03%
			{9892.79460039641, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.03%
			{9896.0175477818, "arifle_MX_khk_F"}, // 0.03%
			{9899.24049516718, "arifle_TRG20_F"}, // 0.03%
			{9902.46344255256, "arifle_MX_F"}, // 0.03%
			{9905.68638993795, "arifle_MXC_F"}, // 0.03%
			{9908.90933732333, "arifle_Katiba_GL_F"}, // 0.03%
			{9912.13228470872, "arifle_TRG21_F"}, // 0.03%
			{9915.3552320941, "arifle_MXC_khk_F"}, // 0.03%
			{9918.2767527456, "Exile_Magazine_10Rnd_303"}, // 0.03%
			{9921.09683170781, "arifle_Mk20C_F"}, // 0.03%
			{9923.91691067002, "arifle_Mk20_F"}, // 0.03%
			{9926.46347026801, "optic_NVS"}, // 0.03%
			{9928.88068080704, "arifle_SDAR_F"}, // 0.02%
			{9931.29789134608, "arifle_MXM_F"}, // 0.02%
			{9933.31223346194, "arifle_SPAR_03_snd_F"}, // 0.02%
			{9935.32657557781, "arifle_SPAR_03_khk_F"}, // 0.02%
			{9937.34091769367, "arifle_AKM_FL_F"}, // 0.02%
			{9939.35525980954, "arifle_AK12_F"}, // 0.02%
			{9941.3696019254, "arifle_SPAR_01_GL_khk_F"}, // 0.02%
			{9943.38394404127, "arifle_SPAR_01_khk_F"}, // 0.02%
			{9945.39828615713, "arifle_SPAR_01_blk_F"}, // 0.02%
			{9947.412628273, "arifle_SPAR_01_GL_snd_F"}, // 0.02%
			{9949.42697038886, "arifle_SPAR_02_blk_F"}, // 0.02%
			{9951.44131250472, "arifle_SPAR_02_khk_F"}, // 0.02%
			{9953.45565462059, "arifle_SPAR_02_snd_F"}, // 0.02%
			{9955.46999673645, "arifle_CTARS_hex_F"}, // 0.02%
			{9957.48433885232, "arifle_CTARS_ghex_F"}, // 0.02%
			{9959.49868096818, "arifle_CTARS_blk_F"}, // 0.02%
			{9961.51302308405, "arifle_CTAR_GL_blk_F"}, // 0.02%
			{9963.52736519991, "arifle_CTAR_ghex_F"}, // 0.02%
			{9965.54170731578, "arifle_CTAR_hex_F"}, // 0.02%
			{9967.55604943164, "arifle_CTAR_blk_F"}, // 0.02%
			{9969.57039154751, "arifle_ARX_hex_F"}, // 0.02%
			{9971.58473366337, "arifle_ARX_ghex_F"}, // 0.02%
			{9973.59907577924, "arifle_ARX_blk_F"}, // 0.02%
			{9975.6134178951, "arifle_AKS_F"}, // 0.02%
			{9977.62776001096, "arifle_AKM_F"}, // 0.02%
			{9979.64210212683, "arifle_AK12_GL_F"}, // 0.02%
			{9981.65644424269, "arifle_SPAR_03_blk_F"}, // 0.02%
			{9983.67078635856, "arifle_SPAR_01_snd_F"}, // 0.02%
			{9985.68512847442, "arifle_SPAR_01_GL_blk_F"}, // 0.02%
			{9987.51107888161, "10Rnd_50BW_Mag_F"}, // 0.02%
			{9989.1225525743, "arifle_Mk20_GL_F"}, // 0.02%
			{9990.73402626699, "arifle_MX_GL_F"}, // 0.02%
			{9992.34549995969, "arifle_MX_GL_khk_F"}, // 0.02%
			{9993.95697365238, "arifle_TRG21_GL_F"}, // 0.02%
			{9995.1655789219, "arifle_MXM_Black_F"}, // 0.01%
			{9996.37418419142, "arifle_MXC_Black_F"}, // 0.01%
			{9997.58278946094, "arifle_MXM_khk_F"}, // 0.01%
			{9998.79139473046, "arifle_MX_GL_Black_F"}, // 0.01%
			{9999.99999999997, "arifle_MX_Black_F"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_CockONut
	  Exile_Item_Can_Empty
	  ItemWatch
	  30Rnd_9x21_Mag
	  Exile_Item_EnergyDrink
	  Exile_Magazine_8Rnd_9x18
	  Chemlight_blue
	  Exile_Item_Magazine01
	  H_Cap_headphones
	  muzzle_snds_acp
	  muzzle_snds_acp
	  Exile_Weapon_M1014
	  hgun_PDW2000_F
	  Exile_Item_CatFood
	  hgun_P07_khk_F
	  Exile_Item_BBQSandwich
	  Exile_Item_MountainDupe
	  10Rnd_9x21_Mag
	  Chemlight_yellow
	  Exile_Item_Magazine01
	  Exile_Item_ToiletPaper
	  ItemGPS
	  Exile_Item_Heatpack
	  Exile_Item_Dogfood
	  Exile_Item_Dogfood
	  Exile_Item_ChocolateMilk
	  H_Bandanna_surfer
	  hgun_Rook40_F
	  Exile_Item_Magazine02
	  hgun_Pistol_heavy_01_F
	  Chemlight_yellow
	  Exile_Item_Matches
	  FlareYellow_F
	  Exile_Item_Cheathas
	  Exile_Item_ToiletPaper
	  Exile_Item_ChocolateMilk
	  Exile_Item_Magazine01
	  Exile_Item_ZipTie
	  Chemlight_red
	  V_Rangemaster_belt
	  B_AssaultPack_khk
	  Exile_Item_EnergyDrink
	  Exile_Item_ZipTie
	  Exile_Item_MountainDupe
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  ItemGPS
	  Exile_Item_ToiletPaper
	  B_AssaultPack_rgr
	  Exile_Item_ToiletPaper
	  Exile_Item_ChocolateMilk
	  Exile_Item_Magazine03
	  Exile_Item_GloriousKnakworst
	  hgun_P07_F
	  hgun_Pistol_01_F
	  Exile_Item_MetalScrews
	  Exile_Item_Moobar
	  Exile_Item_ChristmasTinner
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  H_Cap_red
	  Exile_Melee_Axe
	  Exile_Item_Knife
	  Exile_Item_ChocolateMilk
	  Exile_Item_Magazine03
	  Exile_Item_Can_Empty
	  Exile_Item_BeefParts
	  Exile_Item_Surstromming
	  hgun_Pistol_01_F
	  Exile_Item_Heatpack
	  ItemMap
	  Exile_Item_Can_Empty
	  Exile_Item_Beer
	  Exile_Item_CockONut
	  SMG_01_F
	  Exile_Item_Cheathas
	  ItemMap
	  Exile_Item_ToiletPaper
	  hgun_Pistol_heavy_02_F
	  hgun_Pistol_Signal_F
	  hgun_ACPC2_F
	  B_OutdoorPack_blu
	  hgun_Pistol_Signal_F
	  Exile_Item_ZipTie
	  Exile_Item_PlasticBottleFreshWater
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Handsaw
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_PowerDrink
	  hgun_P07_F
	  Exile_Item_ToiletPaper
	  FlareGreen_F
	  Exile_Item_Handsaw
	  Exile_Item_Can_Empty
	  Exile_Item_EnergyDrink
	  optic_Aco
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_ToiletPaper
	*/
	class Shop
	{
		count = 193;
		half = 9064.5076897852;
		halfIndex = 96;
		sum = 10000;
		items[] = 
		{
			{600, "Exile_Item_Can_Empty"}, // 6.00%
			{1200, "Exile_Item_ToiletPaper"}, // 6.00%
			{1800, "Exile_Item_PlasticBottleEmpty"}, // 6.00%
			{2120, "Exile_Weapon_M1014"}, // 3.20%
			{2408, "Exile_Item_PlasticBottleDirtyWater"}, // 2.88%
			{2648, "Exile_Item_ZipTie"}, // 2.40%
			{2888, "Exile_Item_ChocolateMilk"}, // 2.40%
			{3080, "Exile_Item_MountainDupe"}, // 1.92%
			{3243.2, "Exile_Item_EnergyDrink"}, // 1.63%
			{3393.2, "Exile_Item_Magazine01"}, // 1.50%
			{3543.2, "Exile_Item_Magazine02"}, // 1.50%
			{3693.2, "Exile_Item_Magazine03"}, // 1.50%
			{3843.2, "Exile_Item_Magazine04"}, // 1.50%
			{3977.6, "Exile_Item_Beer"}, // 1.34%
			{4102.04444444444, "Exile_Item_Heatpack"}, // 1.24%
			{4217.24444444444, "Exile_Item_PlasticBottleFreshWater"}, // 1.15%
			{4326.13333333333, "ItemMap"}, // 1.09%
			{4428.38897243108, "SMG_01_F"}, // 1.02%
			{4528.38897243108, "Chemlight_blue"}, // 1.00%
			{4628.38897243108, "FlareYellow_F"}, // 1.00%
			{4728.38897243108, "FlareWhite_F"}, // 1.00%
			{4828.38897243108, "FlareRed_F"}, // 1.00%
			{4928.38897243108, "FlareGreen_F"}, // 1.00%
			{5028.38897243108, "Chemlight_green"}, // 1.00%
			{5128.38897243108, "Chemlight_yellow"}, // 1.00%
			{5228.38897243108, "Chemlight_red"}, // 1.00%
			{5327.63709273183, "SMG_05_F"}, // 0.99%
			{5426.88521303258, "hgun_PDW2000_F"}, // 0.99%
			{5526.13333333333, "SMG_02_F"}, // 0.99%
			{5620.51535580524, "hgun_P07_F"}, // 0.94%
			{5713.84868913858, "ItemWatch"}, // 0.93%
			{5807.18202247191, "ItemRadio"}, // 0.93%
			{5898.84868913858, "Exile_Item_InstantCoffee"}, // 0.92%
			{5988.73632958802, "hgun_Rook40_F"}, // 0.90%
			{6078.62397003745, "hgun_ACPC2_F"}, // 0.90%
			{6167.51285892634, "Exile_Item_Vishpirin"}, // 0.89%
			{6256.40174781523, "Exile_Item_Heatpack"}, // 0.89%
			{6336.40174781523, "Exile_Magazine_8Rnd_74Slug"}, // 0.80%
			{6411.40174781523, "Exile_Item_Moobar"}, // 0.75%
			{6486.40174781523, "Exile_Item_Raisins"}, // 0.75%
			{6553.60174781523, "Exile_Item_PowerDrink"}, // 0.67%
			{6620.2684144819, "Exile_Item_CockONut"}, // 0.67%
			{6686.93508114856, "Exile_Item_SeedAstics"}, // 0.67%
			{6749.15730337079, "ItemGPS"}, // 0.62%
			{6811.37952559301, "Binocular"}, // 0.62%
			{6869.80649188515, "hgun_Pistol_01_F"}, // 0.58%
			{6928.23345817728, "hgun_P07_khk_F"}, // 0.58%
			{6986.66042446942, "hgun_Pistol_heavy_01_F"}, // 0.58%
			{7045.08739076155, "hgun_Pistol_heavy_02_F"}, // 0.58%
			{7103.51435705369, "hgun_Pistol_Signal_F"}, // 0.58%
			{7161.94132334582, "Exile_Weapon_Colt1911"}, // 0.58%
			{7220.36828963796, "Exile_Weapon_Makarov"}, // 0.58%
			{7278.79525593009, "Exile_Weapon_TaurusGold"}, // 0.58%
			{7337.22222222223, "Exile_Weapon_Taurus"}, // 0.58%
			{7395.55555555556, "Exile_Item_DsNuts"}, // 0.58%
			{7453.88888888889, "Exile_Item_Noodles"}, // 0.58%
			{7512.22222222223, "Exile_Item_BeefParts"}, // 0.58%
			{7570.55555555556, "Exile_Item_Cheathas"}, // 0.58%
			{7628.88888888889, "Exile_Item_CatFood"}, // 0.58%
			{7687.22222222222, "Exile_Item_BBQSandwich"}, // 0.58%
			{7745.55555555556, "Exile_Item_MacasCheese"}, // 0.58%
			{7803.88888888889, "Exile_Item_ChristmasTinner"}, // 0.58%
			{7862.22222222222, "Exile_Item_SausageGravy"}, // 0.58%
			{7920.55555555556, "Exile_Item_Surstromming"}, // 0.58%
			{7978.88888888889, "Exile_Item_Dogfood"}, // 0.58%
			{8028.88888888889, "Exile_Item_GloriousKnakworst"}, // 0.50%
			{8074.60317460317, "SmokeShell"}, // 0.46%
			{8120.31746031746, "SmokeShellYellow"}, // 0.46%
			{8166.03174603175, "SmokeShellPurple"}, // 0.46%
			{8211.74603174603, "SmokeShellBlue"}, // 0.46%
			{8257.46031746032, "SmokeShellOrange"}, // 0.46%
			{8303.1746031746, "SmokeShellGreen"}, // 0.46%
			{8348.88888888889, "SmokeShellRed"}, // 0.46%
			{8393.33333333334, "Exile_Item_Bandage"}, // 0.44%
			{8435, "Exile_Item_CanOpener"}, // 0.42%
			{8476.66666666667, "Exile_Item_Matches"}, // 0.42%
			{8516.66666666667, "V_Rangemaster_belt"}, // 0.40%
			{8554.04984423676, "B_OutdoorPack_blk"}, // 0.37%
			{8588.78668634202, "Exile_Melee_Axe"}, // 0.35%
			{8622.43154615511, "B_OutdoorPack_tan"}, // 0.34%
			{8656.07640596819, "B_OutdoorPack_blu"}, // 0.34%
			{8685.98294802427, "B_HuntingBackpack"}, // 0.30%
			{8714.78294802427, "muzzle_snds_L"}, // 0.29%
			{8743.58294802427, "muzzle_snds_acp"}, // 0.29%
			{8769.75117232333, "B_AssaultPack_tna_F"}, // 0.26%
			{8795.9193966224, "B_AssaultPack_mcamo"}, // 0.26%
			{8822.08762092146, "B_AssaultPack_blk"}, // 0.26%
			{8848.25584522052, "B_AssaultPack_cbr"}, // 0.26%
			{8874.42406951959, "B_AssaultPack_rgr"}, // 0.26%
			{8900.59229381865, "B_AssaultPack_dgtl"}, // 0.26%
			{8926.76051811772, "B_AssaultPack_khk"}, // 0.26%
			{8952.92874241678, "B_AssaultPack_sgg"}, // 0.26%
			{8977.92874241678, "Exile_Item_CookingPot"}, // 0.25%
			{9002.92874241678, "Exile_Item_EMRE"}, // 0.25%
			{9023.45505820626, "Exile_Item_Handsaw"}, // 0.21%
			{9043.98137399573, "Exile_Item_Pliers"}, // 0.21%
			{9064.5076897852, "Exile_Item_ScrewDriver"}, // 0.21%
			{9084.5076897852, "V_Press_F"}, // 0.20%
			{9104.5076897852, "V_TacVest_blk_POLICE"}, // 0.20%
			{9123.19927857025, "B_Kitbag_cbr"}, // 0.19%
			{9141.8908673553, "B_Kitbag_sgg"}, // 0.19%
			{9160.58245614034, "B_Kitbag_mcamo"}, // 0.19%
			{9178.36023391812, "10Rnd_9x21_Mag"}, // 0.18%
			{9196.1380116959, "Exile_Magazine_8Rnd_9x18"}, // 0.18%
			{9213.91578947367, "Exile_Magazine_6Rnd_45ACP"}, // 0.18%
			{9231.69356725145, "Exile_Magazine_7Rnd_45ACP"}, // 0.18%
			{9249.47134502923, "9Rnd_45ACP_Mag"}, // 0.18%
			{9267.24912280701, "11Rnd_45ACP_Mag"}, // 0.18%
			{9285.02690058478, "Exile_Item_InstaDoc"}, // 0.18%
			{9302.80467836256, "30Rnd_9x21_Mag"}, // 0.18%
			{9320.17309941519, "Exile_Item_JunkMetal"}, // 0.17%
			{9335.9625730994, "Exile_Item_WaterCanisterEmpty"}, // 0.16%
			{9351.75204678361, "Exile_Melee_Shovel"}, // 0.16%
			{9367.30760233917, "Exile_Item_MobilePhone"}, // 0.16%
			{9381.70760233917, "H_Cap_tan"}, // 0.14%
			{9396.10760233917, "H_Hat_blue"}, // 0.14%
			{9410.50760233917, "H_Hat_brown"}, // 0.14%
			{9424.90760233917, "H_Hat_checker"}, // 0.14%
			{9439.30760233917, "H_Hat_tan"}, // 0.14%
			{9453.70760233917, "H_StrawHat"}, // 0.14%
			{9468.10760233917, "H_StrawHat_dark"}, // 0.14%
			{9482.50760233916, "H_Cap_red"}, // 0.14%
			{9496.90760233916, "H_Hat_grey"}, // 0.14%
			{9511.30760233916, "H_Cap_press"}, // 0.14%
			{9525.52982456139, "6Rnd_45ACP_Cylinder"}, // 0.14%
			{9539.74035087718, "Exile_Item_LightBulb"}, // 0.14%
			{9553.07368421051, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.13%
			{9566.40701754384, "optic_Holosight_smg_blk_F"}, // 0.13%
			{9579.74035087718, "optic_ACO_grn"}, // 0.13%
			{9593.07368421051, "30Rnd_9x21_Mag_SMG_02"}, // 0.13%
			{9606.40701754385, "optic_Aco_smg"}, // 0.13%
			{9619.74035087718, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.13%
			{9633.07368421051, "optic_ACO_grn_smg"}, // 0.13%
			{9646.40701754385, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.13%
			{9659.74035087718, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.13%
			{9673.07368421052, "optic_Holosight_smg"}, // 0.13%
			{9686.40701754385, "optic_Aco"}, // 0.13%
			{9699.74035087718, "30Rnd_45ACP_Mag_SMG_01"}, // 0.13%
			{9712.37192982455, "Exile_Item_ExtensionCord"}, // 0.13%
			{9724.37192982455, "H_Bandanna_surfer"}, // 0.12%
			{9736.37192982455, "H_Beret_blk_POLICE"}, // 0.12%
			{9748.37192982455, "H_Cap_oli"}, // 0.12%
			{9760.37192982455, "H_Cap_headphones"}, // 0.12%
			{9772.37192982455, "H_Cap_blk"}, // 0.12%
			{9784.37192982455, "H_Cap_grn"}, // 0.12%
			{9796.37192982455, "H_Cap_blu"}, // 0.12%
			{9808.37192982455, "H_Cap_blk_Raven"}, // 0.12%
			{9819.57192982455, "optic_MRD"}, // 0.11%
			{9830.77192982455, "optic_Yorris"}, // 0.11%
			{9839.66081871344, "16Rnd_9x21_Mag"}, // 0.09%
			{9847.55555555555, "Exile_Item_Grinder"}, // 0.08%
			{9855.45029239765, "Exile_Item_MetalScrews"}, // 0.08%
			{9863.34502923976, "Exile_Melee_SledgeHammer"}, // 0.08%
			{9869.66081871344, "Exile_Item_Sand"}, // 0.06%
			{9875.97660818713, "Exile_Item_Foolbox"}, // 0.06%
			{9882.29239766081, "Exile_Item_MetalBoard"}, // 0.06%
			{9888.6081871345, "Exile_Item_CamoTentKit"}, // 0.06%
			{9894.83040935672, "6Rnd_RedSignal_F"}, // 0.06%
			{9901.05263157894, "6Rnd_GreenSignal_F"}, // 0.06%
			{9905.78947368421, "Exile_Item_PortableGeneratorKit"}, // 0.05%
			{9910.52631578947, "Exile_Item_Cement"}, // 0.05%
			{9915.26315789473, "Exile_Item_FloodLightKit"}, // 0.05%
			{9919.47368421052, "U_C_Poor_2"}, // 0.04%
			{9923.68421052631, "U_C_Poor_1"}, // 0.04%
			{9927.8947368421, "U_C_Poor_shorts_1"}, // 0.04%
			{9932.10526315789, "U_C_HunterBody_grn"}, // 0.04%
			{9936.31578947368, "U_C_Journalist"}, // 0.04%
			{9940.52631578947, "U_C_Scientist"}, // 0.04%
			{9944.73684210526, "U_Rangemaster"}, // 0.04%
			{9948.01169590643, "U_C_Poloshirt_salmon"}, // 0.03%
			{9951.2865497076, "U_C_Poloshirt_tricolour"}, // 0.03%
			{9954.56140350877, "U_C_Poloshirt_stripped"}, // 0.03%
			{9957.83625730994, "U_C_Poloshirt_burgundy"}, // 0.03%
			{9961.11111111111, "U_C_Poloshirt_blue"}, // 0.03%
			{9964.26900584795, "Exile_Item_Knife"}, // 0.03%
			{9966.6081871345, "U_C_Man_casual_5_F"}, // 0.02%
			{9968.94736842105, "U_C_Man_casual_6_F"}, // 0.02%
			{9971.2865497076, "U_I_C_Soldier_Bandit_5_F"}, // 0.02%
			{9973.62573099415, "U_I_C_Soldier_Bandit_2_F"}, // 0.02%
			{9975.9649122807, "U_I_C_Soldier_Bandit_3_F"}, // 0.02%
			{9978.30409356725, "U_I_C_Soldier_Bandit_4_F"}, // 0.02%
			{9980.6432748538, "U_C_man_sport_1_F"}, // 0.02%
			{9982.98245614035, "U_C_man_sport_2_F"}, // 0.02%
			{9985.3216374269, "U_C_man_sport_3_F"}, // 0.02%
			{9987.66081871345, "U_C_Man_casual_1_F"}, // 0.02%
			{9990, "U_C_Man_casual_2_F"}, // 0.02%
			{9992.33918128655, "U_C_Man_casual_3_F"}, // 0.02%
			{9994.6783625731, "U_C_Man_casual_4_F"}, // 0.02%
			{9997.01754385965, "U_I_C_Soldier_Bandit_1_F"}, // 0.02%
			{9998.59649122808, "Exile_Item_ThermalScannerPro"}, // 0.02%
			{9999.06432748539, "U_NikosBody"}, // 0.00%
			{9999.5321637427, "U_OrestesBody"}, // 0.00%
			{10000, "U_NikosAgedBody"} // 0.00%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Handsaw
	  Exile_Item_FuelCanisterEmpty
	  FlareGreen_F
	  Exile_Melee_SledgeHammer
	  Exile_Item_ToiletPaper
	  Exile_Item_Grinder
	  Exile_Item_ZipTie
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_Magazine04
	  Exile_Item_Magazine04
	  Exile_Item_Can_Empty
	  FlareRed_F
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Pliers
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Grinder
	  FlareWhite_F
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Handsaw
	  Exile_Melee_Axe
	  Exile_Item_DuctTape
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_CamoTentKit
	  FlareYellow_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Pliers
	  FlareWhite_F
	  Exile_Item_Magazine02
	  Exile_Item_ZipTie
	  Exile_Melee_Shovel
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  FlareRed_F
	  Exile_Item_Magazine02
	  Exile_Item_Magazine03
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Handsaw
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Magazine03
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_LightBulb
	  FlareGreen_F
	  Exile_Item_Pliers
	  Exile_Item_FloodLightKit
	  Exile_Item_ScrewDriver
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Foolbox
	  Exile_Item_Magazine01
	  Exile_Item_Knife
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Melee_Shovel
	  Exile_Item_DuctTape
	  Exile_Item_Pliers
	  Exile_Melee_Axe
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterEmpty
	  Exile_Melee_Axe
	  Exile_Item_Handsaw
	  Exile_Melee_Axe
	  Exile_Item_WaterCanisterEmpty
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Pliers
	  Exile_Item_JunkMetal
	  FlareYellow_F
	  Exile_Item_Magazine01
	  Exile_Item_JunkMetal
	  Exile_Item_Can_Empty
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Magazine03
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Handsaw
	  FlareGreen_F
	  Exile_Item_FuelCanisterFull
	  FlareWhite_F
	  Exile_Item_Magazine03
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_CamoTentKit
	  Exile_Melee_SledgeHammer
	  Exile_Item_FuelCanisterEmpty
	*/
	class Industrial
	{
		count = 36;
		half = 8180.77803203661;
		halfIndex = 18;
		sum = 10000;
		items[] = 
		{
			{1086.95652173913, "Exile_Item_FuelCanisterEmpty"}, // 10.87%
			{1956.52173913043, "Exile_Item_FuelCanisterFull"}, // 8.70%
			{2608.69565217391, "Exile_Item_Can_Empty"}, // 6.52%
			{3260.86956521739, "Exile_Item_ToiletPaper"}, // 6.52%
			{3913.04347826087, "Exile_Item_PlasticBottleEmpty"}, // 6.52%
			{4416.47597254005, "Exile_Melee_Axe"}, // 5.03%
			{4851.2585812357, "Exile_Item_ZipTie"}, // 4.35%
			{5177.34553775744, "FlareWhite_F"}, // 3.26%
			{5503.43249427918, "FlareRed_F"}, // 3.26%
			{5829.51945080091, "FlareGreen_F"}, // 3.26%
			{6155.60640732265, "FlareYellow_F"}, // 3.26%
			{6453.08924485126, "Exile_Item_ScrewDriver"}, // 2.97%
			{6750.57208237986, "Exile_Item_Handsaw"}, // 2.97%
			{7048.05491990847, "Exile_Item_Pliers"}, // 2.97%
			{7299.77116704805, "Exile_Item_JunkMetal"}, // 2.52%
			{7528.60411899313, "Exile_Melee_Shovel"}, // 2.29%
			{7757.43707093821, "Exile_Item_WaterCanisterEmpty"}, // 2.29%
			{7974.82837528604, "Exile_Item_DuctTape"}, // 2.17%
			{8180.77803203661, "Exile_Item_LightBulb"}, // 2.06%
			{8363.84439359268, "Exile_Item_ExtensionCord"}, // 1.83%
			{8526.88787185355, "Exile_Item_Magazine02"}, // 1.63%
			{8689.93135011442, "Exile_Item_Magazine01"}, // 1.63%
			{8852.97482837529, "Exile_Item_Magazine04"}, // 1.63%
			{9016.01830663616, "Exile_Item_Magazine03"}, // 1.63%
			{9130.4347826087, "Exile_Item_MetalScrews"}, // 1.14%
			{9244.85125858124, "Exile_Item_Grinder"}, // 1.14%
			{9359.26773455378, "Exile_Melee_SledgeHammer"}, // 1.14%
			{9450.80091533181, "Exile_Item_Sand"}, // 0.92%
			{9542.33409610984, "Exile_Item_Foolbox"}, // 0.92%
			{9633.86727688787, "Exile_Item_MetalBoard"}, // 0.92%
			{9725.4004576659, "Exile_Item_CamoTentKit"}, // 0.92%
			{9794.05034324943, "Exile_Item_PortableGeneratorKit"}, // 0.69%
			{9862.70022883295, "Exile_Item_FloodLightKit"}, // 0.69%
			{9931.35011441647, "Exile_Item_Cement"}, // 0.69%
			{9977.11670480549, "Exile_Item_Knife"}, // 0.46%
			{10000, "Exile_Item_ThermalScannerPro"} // 0.23%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Melee_Shovel
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ScrewDriver
	  Exile_Item_MetalBoard
	  Exile_Melee_Axe
	  Exile_Item_Sand
	  Exile_Item_BaseCameraKit
	  Exile_Melee_Axe
	  Exile_Item_FloodLightKit
	  Exile_Item_Grinder
	  Exile_Item_Grinder
	  Exile_Item_ToiletPaper
	  Exile_Item_Handsaw
	  Exile_Item_Magazine01
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Magazine01
	  Exile_Item_ToiletPaper
	  Exile_Item_Sand
	  Exile_Item_Pliers
	  Exile_Melee_Axe
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Laptop
	  Exile_Item_Magazine02
	  Exile_Item_Magazine02
	  Exile_Item_ToiletPaper
	  Exile_Item_FloodLightKit
	  Exile_Item_ScrewDriver
	  Exile_Melee_Axe
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Pliers
	  Exile_Item_Magazine04
	  Exile_Item_BaseCameraKit
	  Exile_Item_ExtensionCord
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Melee_Axe
	  Exile_Item_ToiletPaper
	  Exile_Item_Handsaw
	  Exile_Item_Magazine04
	  Exile_Item_MetalScrews
	  Exile_Melee_Axe
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_MetalScrews
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Melee_Axe
	  Exile_Item_Magazine02
	  Exile_Item_ScrewDriver
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Cement
	  Exile_Melee_Shovel
	  Exile_Item_Magazine01
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_CamoTentKit
	  Exile_Item_Magazine04
	  Exile_Item_Knife
	  Exile_Item_ToiletPaper
	  Exile_Melee_Axe
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ExtensionCord
	  Exile_Item_Magazine02
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Laptop
	  Exile_Item_BaseCameraKit
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Laptop
	  Exile_Melee_Shovel
	  Exile_Item_BaseCameraKit
	  Exile_Item_ExtensionCord
	  Exile_Item_BaseCameraKit
	  Exile_Item_Can_Empty
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_LightBulb
	  Exile_Item_JunkMetal
	  Exile_Item_Grinder
	  Exile_Item_LightBulb
	  Exile_Item_ToiletPaper
	  Exile_Item_Laptop
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Melee_SledgeHammer
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Melee_Shovel
	  Exile_Item_Handsaw
	  Exile_Item_Can_Empty
	  Exile_Item_Pliers
	  Exile_Melee_SledgeHammer
	  Exile_Item_PlasticBottleEmpty
	  Exile_Melee_Axe
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_MetalBoard
	  Exile_Item_PlasticBottleEmpty
	*/
	class Factories
	{
		count = 30;
		half = 8085.52631578947;
		halfIndex = 15;
		sum = 10000;
		items[] = 
		{
			{1000, "Exile_Item_PlasticBottleEmpty"}, // 10.00%
			{2000, "Exile_Item_Can_Empty"}, // 10.00%
			{3000, "Exile_Item_ToiletPaper"}, // 10.00%
			{3723.68421052632, "Exile_Melee_Axe"}, // 7.24%
			{4223.68421052632, "Exile_Item_Laptop"}, // 5.00%
			{4723.68421052632, "Exile_Item_BaseCameraKit"}, // 5.00%
			{5151.31578947368, "Exile_Item_Pliers"}, // 4.28%
			{5578.94736842105, "Exile_Item_Handsaw"}, // 4.28%
			{6006.57894736842, "Exile_Item_ScrewDriver"}, // 4.28%
			{6368.42105263158, "Exile_Item_JunkMetal"}, // 3.62%
			{6697.36842105263, "Exile_Melee_Shovel"}, // 3.29%
			{7026.31578947368, "Exile_Item_WaterCanisterEmpty"}, // 3.29%
			{7322.36842105263, "Exile_Item_LightBulb"}, // 2.96%
			{7585.52631578947, "Exile_Item_ExtensionCord"}, // 2.63%
			{7835.52631578947, "Exile_Item_Magazine01"}, // 2.50%
			{8085.52631578947, "Exile_Item_Magazine02"}, // 2.50%
			{8335.52631578947, "Exile_Item_Magazine03"}, // 2.50%
			{8585.52631578947, "Exile_Item_Magazine04"}, // 2.50%
			{8750, "Exile_Item_Grinder"}, // 1.64%
			{8914.47368421053, "Exile_Item_MetalScrews"}, // 1.64%
			{9078.94736842105, "Exile_Melee_SledgeHammer"}, // 1.64%
			{9210.52631578948, "Exile_Item_Sand"}, // 1.32%
			{9342.1052631579, "Exile_Item_MetalBoard"}, // 1.32%
			{9473.68421052632, "Exile_Item_Foolbox"}, // 1.32%
			{9605.26315789474, "Exile_Item_CamoTentKit"}, // 1.32%
			{9703.94736842106, "Exile_Item_PortableGeneratorKit"}, // 0.99%
			{9802.63157894737, "Exile_Item_FloodLightKit"}, // 0.99%
			{9901.31578947369, "Exile_Item_Cement"}, // 0.99%
			{9967.1052631579, "Exile_Item_Knife"}, // 0.66%
			{10000, "Exile_Item_ThermalScannerPro"} // 0.33%
		};
	};

	/**
	  Result of 100 rounds:

	  FlareGreen_F
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_ExtensionCord
	  Exile_Item_FuelCanisterFull
	  Exile_Item_LightBulb
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_MetalBoard
	  Exile_Item_JunkMetal
	  Exile_Item_JunkMetal
	  Exile_Item_FuelCanisterFull
	  Exile_Item_ZipTie
	  Exile_Item_ScrewDriver
	  FlareYellow_F
	  Exile_Item_ScrewDriver
	  Exile_Item_FuelCanisterFull
	  Exile_Item_LightBulb
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	  FlareGreen_F
	  Exile_Item_ToiletPaper
	  Exile_Item_Handsaw
	  Exile_Item_Handsaw
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Foolbox
	  FlareWhite_F
	  Exile_Item_Can_Empty
	  FlareYellow_F
	  Exile_Item_ZipTie
	  Exile_Item_Magazine02
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ScrewDriver
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_ZipTie
	  Exile_Item_Magazine02
	  Exile_Melee_Shovel
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  FlareGreen_F
	  Exile_Item_FuelCanisterEmpty
	  Exile_Melee_Shovel
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Can_Empty
	  Exile_Item_Handsaw
	  Exile_Item_DuctTape
	  FlareGreen_F
	  Exile_Item_PortableGeneratorKit
	  FlareRed_F
	  Exile_Item_Pliers
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Grinder
	  Exile_Item_Magazine03
	  Exile_Item_Knife
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ScrewDriver
	  Exile_Item_Handsaw
	  FlareGreen_F
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ToiletPaper
	  FlareGreen_F
	  Exile_Item_ToiletPaper
	  Exile_Item_ScrewDriver
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  FlareYellow_F
	  FlareYellow_F
	  FlareWhite_F
	  Exile_Item_Magazine03
	  FlareYellow_F
	  Exile_Item_FuelCanisterFull
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  FlareRed_F
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Foolbox
	  Exile_Item_ExtensionCord
	  Exile_Item_FuelCanisterEmpty
	*/
	class VehicleService
	{
		count = 36;
		half = 8698.51258581236;
		halfIndex = 18;
		sum = 10000;
		items[] = 
		{
			{1739.13043478261, "Exile_Item_FuelCanisterEmpty"}, // 17.39%
			{3130.4347826087, "Exile_Item_FuelCanisterFull"}, // 13.91%
			{3782.60869565217, "Exile_Item_Can_Empty"}, // 6.52%
			{4434.78260869565, "Exile_Item_ToiletPaper"}, // 6.52%
			{5086.95652173913, "Exile_Item_PlasticBottleEmpty"}, // 6.52%
			{5521.73913043478, "Exile_Item_ZipTie"}, // 4.35%
			{5869.5652173913, "Exile_Item_DuctTape"}, // 3.48%
			{6195.65217391304, "FlareWhite_F"}, // 3.26%
			{6521.73913043478, "FlareRed_F"}, // 3.26%
			{6847.82608695652, "FlareGreen_F"}, // 3.26%
			{7173.91304347826, "FlareYellow_F"}, // 3.26%
			{7488.55835240275, "Exile_Melee_Axe"}, // 3.15%
			{7674.48512585812, "Exile_Item_ScrewDriver"}, // 1.86%
			{7860.4118993135, "Exile_Item_Pliers"}, // 1.86%
			{8046.33867276888, "Exile_Item_Handsaw"}, // 1.86%
			{8209.38215102975, "Exile_Item_Magazine04"}, // 1.63%
			{8372.42562929062, "Exile_Item_Magazine01"}, // 1.63%
			{8535.46910755149, "Exile_Item_Magazine02"}, // 1.63%
			{8698.51258581236, "Exile_Item_Magazine03"}, // 1.63%
			{8855.8352402746, "Exile_Item_JunkMetal"}, // 1.57%
			{8998.85583524028, "Exile_Melee_Shovel"}, // 1.43%
			{9141.87643020595, "Exile_Item_WaterCanisterEmpty"}, // 1.43%
			{9270.59496567506, "Exile_Item_LightBulb"}, // 1.29%
			{9385.0114416476, "Exile_Item_ExtensionCord"}, // 1.14%
			{9456.52173913044, "Exile_Melee_SledgeHammer"}, // 0.72%
			{9528.03203661327, "Exile_Item_Grinder"}, // 0.72%
			{9599.54233409611, "Exile_Item_MetalScrews"}, // 0.72%
			{9656.75057208238, "Exile_Item_Sand"}, // 0.57%
			{9713.95881006865, "Exile_Item_Foolbox"}, // 0.57%
			{9771.16704805492, "Exile_Item_MetalBoard"}, // 0.57%
			{9828.37528604119, "Exile_Item_CamoTentKit"}, // 0.57%
			{9871.28146453089, "Exile_Item_PortableGeneratorKit"}, // 0.43%
			{9914.18764302059, "Exile_Item_FloodLightKit"}, // 0.43%
			{9957.0938215103, "Exile_Item_Cement"}, // 0.43%
			{9985.69794050343, "Exile_Item_Knife"}, // 0.29%
			{10000, "Exile_Item_ThermalScannerPro"} // 0.14%
		};
	};

	/**
	  Result of 100 rounds:

	  SmokeShellBlue
	  Exile_Item_Can_Empty
	  Exile_Item_Vishpirin
	  optic_Arco_ghex_F
	  Exile_Item_PlasticBottleEmpty
	  arifle_MXC_khk_F
	  Exile_Item_Magazine03
	  Exile_Item_PlasticBottleEmpty
	  30Rnd_545x39_Mag_Green_F
	  V_PlateCarrierSpec_tna_F
	  V_TacChestrig_oli_F
	  Exile_Item_ToiletPaper
	  APERSMine_Range_Mag
	  optic_KHS_hex
	  B_Carryall_oli
	  optic_AMS
	  Exile_Item_PlasticBottleEmpty
	  30Rnd_556x45_Stanag
	  1Rnd_HE_Grenade_shell
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  20Rnd_650x39_Cased_Mag_F
	  Exile_Item_Magazine02
	  B_FieldPack_oucamo
	  bipod_01_F_snd
	  Exile_Item_PlasticBottleEmpty
	  Exile_Magazine_10Rnd_9x39
	  U_IG_Guerilla2_3
	  Exile_Item_PlasticBottleEmpty
	  V_RebreatherIA
	  Exile_Item_ZipTie
	  U_B_CombatUniform_mcam
	  Exile_Item_Magazine03
	  V_PlateCarrierIA2_dgtl
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  ItemCompass
	  U_B_CombatUniform_mcam_vest
	  Exile_Weapon_CZ550
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  20Rnd_650x39_Cased_Mag_F
	  Exile_Item_Can_Empty
	  Exile_Weapon_LeeEnfield
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  bipod_01_F_khk
	  Exile_Item_Heatpack
	  B_Carryall_ghex_F
	  H_Cap_tan_Syndikat_F
	  arifle_MX_SW_F
	  optic_SOS
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  arifle_MXM_F
	  U_B_T_Soldier_AR_F
	  U_I_FullGhillie_lsh
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  V_PlateCarrierIA1_dgtl
	  3Rnd_UGL_FlareWhite_F
	  B_Carryall_ghex_F
	  Exile_Item_Magazine01
	  Exile_Item_Magazine02
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine01
	  ItemGPS
	  Exile_Item_Magazine03
	  optic_AMS_snd
	  Exile_Item_Magazine02
	  Exile_Item_Can_Empty
	  U_B_GhillieSuit
	  U_O_GhillieSuit
	  150Rnd_93x64_Mag
	  V_Chestrig_khk
	  muzzle_snds_93mmg_tan
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine02
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  3Rnd_SmokeOrange_Grenade_shell
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  10Rnd_127x54_Mag
	  3Rnd_HE_Grenade_shell
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine04
	  3Rnd_SmokeRed_Grenade_shell
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  U_B_Wetsuit
	  muzzle_snds_H_khk_F
	  Exile_Item_Can_Empty
	*/
	class Military
	{
		count = 552;
		half = 9066.71085627853;
		halfIndex = 276;
		sum = 10000.0000000001;
		items[] = 
		{
			{1237.62376237624, "Exile_Item_Can_Empty"}, // 12.38%
			{2475.24752475248, "Exile_Item_ToiletPaper"}, // 12.38%
			{3712.87128712871, "Exile_Item_PlasticBottleEmpty"}, // 12.38%
			{4022.27722772277, "Exile_Item_Magazine01"}, // 3.09%
			{4331.68316831683, "Exile_Item_Magazine02"}, // 3.09%
			{4641.08910891089, "Exile_Item_Magazine03"}, // 3.09%
			{4950.49504950495, "Exile_Item_Magazine04"}, // 3.09%
			{5050, "1Rnd_HE_Grenade_shell"}, // 1.00%
			{5149.0099009901, "Exile_Item_ZipTie"}, // 0.99%
			{5235.10546706845, "ItemCompass"}, // 0.86%
			{5309.36289281102, "MiniGrenade"}, // 0.74%
			{5383.62031855359, "HandGrenade"}, // 0.74%
			{5433.12526904864, "APERSMine_Range_Mag"}, // 0.50%
			{5482.63021954369, "APERSTripMine_Wire_Mag"}, // 0.50%
			{5532.13517003874, "APERSBoundingMine_Range_Mag"}, // 0.50%
			{5581.14507102884, "3Rnd_HE_Grenade_shell"}, // 0.49%
			{5625.14947146889, "Exile_Item_Heatpack"}, // 0.44%
			{5668.19725450806, "Rangefinder"}, // 0.43%
			{5706.7011048931, "ItemMap"}, // 0.39%
			{5743.37143859313, "Exile_Item_Vishpirin"}, // 0.37%
			{5780.04177229317, "Exile_Item_Heatpack"}, // 0.37%
			{5813.0450726232, "ItemWatch"}, // 0.33%
			{5846.04837295324, "ItemRadio"}, // 0.33%
			{5876.51295787327, "U_IG_Guerilla1_1"}, // 0.30%
			{5906.9775427933, "U_IG_Guerilla2_1"}, // 0.30%
			{5937.44212771333, "U_IG_Guerilla2_3"}, // 0.30%
			{5967.90671263336, "U_IG_Guerilla2_2"}, // 0.30%
			{5997.60968293039, "IEDUrbanSmall_Remote_Mag"}, // 0.30%
			{6027.31265322742, "DemoCharge_Remote_Mag"}, // 0.30%
			{6057.01562352445, "IEDLandSmall_Remote_Mag"}, // 0.30%
			{6086.71859382148, "150Rnd_93x64_Mag"}, // 0.30%
			{6115.279142184, "U_IG_Guerilla3_2"}, // 0.29%
			{6143.83969054653, "U_IG_Guerilla3_1"}, // 0.29%
			{6171.63194345603, "10Rnd_338_Mag"}, // 0.28%
			{6199.42419636554, "10Rnd_93x64_DMR_05_Mag"}, // 0.28%
			{6224.67172111801, "UGL_FlareYellow_F"}, // 0.25%
			{6249.91924587049, "UGL_FlareRed_F"}, // 0.25%
			{6275.16677062296, "UGL_FlareGreen_F"}, // 0.25%
			{6300.41429537544, "UGL_FlareWhite_F"}, // 0.25%
			{6325.16677062296, "LMG_Mk200_F"}, // 0.25%
			{6349.91924587049, "arifle_MX_SW_Black_F"}, // 0.25%
			{6374.67172111801, "arifle_MX_SW_F"}, // 0.25%
			{6399.42419636554, "LMG_Zafir_F"}, // 0.25%
			{6424.17667161306, "Exile_Weapon_RPK"}, // 0.25%
			{6448.92914686059, "Exile_Weapon_PK"}, // 0.25%
			{6473.68162210811, "Exile_Weapon_PKP"}, // 0.25%
			{6498.43409735563, "LMG_03_F"}, // 0.25%
			{6522.75231865145, "10Rnd_127x54_Mag"}, // 0.24%
			{6544.75451887147, "Binocular"}, // 0.22%
			{6566.75671909149, "ItemGPS"}, // 0.22%
			{6587.97312644651, "SmokeShellBlue"}, // 0.21%
			{6609.18953380153, "SmokeShellOrange"}, // 0.21%
			{6630.40594115656, "SmokeShellYellow"}, // 0.21%
			{6651.62234851158, "SmokeShellGreen"}, // 0.21%
			{6672.8387558666, "SmokeShellRed"}, // 0.21%
			{6694.05516322162, "SmokeShell"}, // 0.21%
			{6715.27157057664, "SmokeShellPurple"}, // 0.21%
			{6736.06364978456, "20Rnd_650x39_Cased_Mag_F"}, // 0.21%
			{6755.86562998258, "srifle_EBR_F"}, // 0.20%
			{6775.6676101806, "srifle_DMR_01_F"}, // 0.20%
			{6794.77478405588, "20Rnd_762x51_Mag"}, // 0.19%
			{6813.71291948016, "B_Carryall_cbr"}, // 0.19%
			{6832.65105490445, "B_Carryall_ghex_F"}, // 0.19%
			{6851.46293609256, "20Rnd_762x51_Mag"}, // 0.19%
			{6869.79810294258, "Exile_Item_Bandage"}, // 0.18%
			{6887.73949439716, "B_Carryall_oli"}, // 0.18%
			{6905.68088585175, "B_Carryall_khk"}, // 0.18%
			{6922.51256902006, "10Rnd_762x54_Mag"}, // 0.17%
			{6939.01421918508, "muzzle_snds_338_black"}, // 0.17%
			{6955.5158693501, "V_RebreatherIA"}, // 0.17%
			{6972.01751951511, "V_RebreatherIR"}, // 0.17%
			{6988.51916968013, "V_RebreatherB"}, // 0.17%
			{7005.02081984514, "U_B_GhillieSuit"}, // 0.17%
			{7021.52247001016, "muzzle_snds_338_green"}, // 0.17%
			{7038.02412017518, "U_I_GhillieSuit"}, // 0.17%
			{7054.52577034019, "muzzle_snds_93mmg"}, // 0.17%
			{7071.02742050521, "muzzle_snds_93mmg_tan"}, // 0.17%
			{7087.52907067022, "muzzle_snds_B"}, // 0.17%
			{7104.03072083524, "U_O_GhillieSuit"}, // 0.17%
			{7120.53237100026, "muzzle_snds_338_sand"}, // 0.17%
			{7136.58803062027, "srifle_DMR_05_hex_F"}, // 0.16%
			{7152.64369024029, "srifle_DMR_05_blk_F"}, // 0.16%
			{7168.6993498603, "srifle_DMR_05_tan_F"}, // 0.16%
			{7184.25804858732, "srifle_GM6_F"}, // 0.16%
			{7199.81674731433, "srifle_LRR_F"}, // 0.16%
			{7215.37544604135, "srifle_LRR_tna_F"}, // 0.16%
			{7230.93414476837, "srifle_GM6_ghex_F"}, // 0.16%
			{7246.49284349538, "srifle_DMR_07_blk_F"}, // 0.16%
			{7262.0515422224, "srifle_DMR_07_ghex_F"}, // 0.16%
			{7277.61024094941, "srifle_DMR_07_hex_F"}, // 0.16%
			{7292.76481763157, "1Rnd_SmokeGreen_Grenade_shell"}, // 0.15%
			{7307.91939431373, "1Rnd_SmokeYellow_Grenade_shell"}, // 0.15%
			{7323.07397099589, "1Rnd_SmokeRed_Grenade_shell"}, // 0.15%
			{7338.22854767804, "1Rnd_SmokePurple_Grenade_shell"}, // 0.15%
			{7353.3831243602, "1Rnd_SmokeBlue_Grenade_shell"}, // 0.15%
			{7368.53770104236, "1Rnd_SmokeOrange_Grenade_shell"}, // 0.15%
			{7383.69227772452, "1Rnd_Smoke_Grenade_shell"}, // 0.15%
			{7398.64343727, "B_Carryall_ocamo"}, // 0.15%
			{7413.59459681549, "B_Carryall_oucamo"}, // 0.15%
			{7428.54575636097, "B_Carryall_mcamo"}, // 0.15%
			{7443.39724150949, "V_PlateCarrier2_rgr"}, // 0.15%
			{7458.248726658, "V_PlateCarrierIAGL_dgtl"}, // 0.15%
			{7473.10021180652, "V_PlateCarrier3_rgr"}, // 0.15%
			{7487.95169695504, "V_PlateCarrierGL_rgr"}, // 0.15%
			{7502.80318210355, "V_PlateCarrierIA1_dgtl"}, // 0.15%
			{7517.65466725207, "V_PlateCarrierIA2_dgtl"}, // 0.15%
			{7532.50615240058, "V_PlateCarrierSpec_rgr"}, // 0.15%
			{7547.3576375491, "V_PlateCarrier1_blk"}, // 0.15%
			{7562.20912269761, "V_PlateCarrier1_rgr"}, // 0.15%
			{7576.35339426762, "optic_AMS_snd"}, // 0.14%
			{7590.49766583764, "optic_KHS_tan"}, // 0.14%
			{7604.64193740765, "optic_KHS_old"}, // 0.14%
			{7618.78620897767, "optic_KHS_hex"}, // 0.14%
			{7632.93048054768, "optic_AMS_khk"}, // 0.14%
			{7647.0747521177, "optic_AMS"}, // 0.14%
			{7661.21902368771, "optic_KHS_blk"}, // 0.14%
			{7675.26772585522, "srifle_DMR_04_F"}, // 0.14%
			{7689.31642802274, "srifle_DMR_04_Tan_F"}, // 0.14%
			{7703.09171859527, "O_NVGoggles_ghex_F"}, // 0.14%
			{7716.86700916781, "NVGoggles_tna_F"}, // 0.14%
			{7730.64229974035, "O_NVGoggles_hex_F"}, // 0.14%
			{7744.41759031288, "NVGoggles"}, // 0.14%
			{7758.19288088542, "O_NVGoggles_urb_F"}, // 0.14%
			{7771.83199989936, "optic_DMS"}, // 0.14%
			{7784.96596635723, "optic_SOS"}, // 0.13%
			{7798.0999328151, "optic_SOS_khk_F"}, // 0.13%
			{7811.23389927297, "optic_LRPS"}, // 0.13%
			{7824.36786573084, "optic_LRPS_tna_F"}, // 0.13%
			{7837.50183218871, "optic_LRPS_ghex_F"}, // 0.13%
			{7849.54357690372, "srifle_DMR_02_sniper_F"}, // 0.12%
			{7861.58532161873, "srifle_DMR_02_F"}, // 0.12%
			{7873.62706633374, "srifle_DMR_02_camo_F"}, // 0.12%
			{7885.50825445256, "3Rnd_UGL_FlareGreen_F"}, // 0.12%
			{7897.38944257137, "3Rnd_UGL_FlareRed_F"}, // 0.12%
			{7909.27063069018, "3Rnd_UGL_FlareWhite_F"}, // 0.12%
			{7921.15181880899, "3Rnd_UGL_FlareYellow_F"}, // 0.12%
			{7932.56036707123, "B_FieldPack_ocamo"}, // 0.11%
			{7943.96891533346, "B_FieldPack_oucamo"}, // 0.11%
			{7955.3774635957, "B_FieldPack_cbr"}, // 0.11%
			{7966.78601185793, "B_FieldPack_blk"}, // 0.11%
			{7977.93282190317, "bipod_01_F_snd"}, // 0.11%
			{7989.07963194842, "bipod_01_F_blk"}, // 0.11%
			{8000.22644199366, "bipod_02_F_blk"}, // 0.11%
			{8011.3732520389, "bipod_02_F_tan"}, // 0.11%
			{8022.52006208414, "bipod_03_F_blk"}, // 0.11%
			{8033.66687212939, "bipod_01_F_khk"}, // 0.11%
			{8044.81368217463, "bipod_03_F_oli"}, // 0.11%
			{8055.30479751133, "bipod_02_F_hex"}, // 0.10%
			{8065.79591284803, "bipod_01_F_mtp"}, // 0.10%
			{8076.19195245199, "V_BandollierB_blk"}, // 0.10%
			{8086.58799205595, "V_BandollierB_oli"}, // 0.10%
			{8096.98403165991, "V_BandollierB_cbr"}, // 0.10%
			{8107.38007126387, "V_BandollierB_khk"}, // 0.10%
			{8117.77611086783, "V_HarnessO_brn"}, // 0.10%
			{8128.17215047179, "V_HarnessOGL_brn"}, // 0.10%
			{8138.56819007575, "V_HarnessO_gry"}, // 0.10%
			{8148.96422967971, "V_HarnessOGL_gry"}, // 0.10%
			{8159.36026928367, "V_HarnessOSpec_brn"}, // 0.10%
			{8169.75630888763, "V_HarnessOSpec_gry"}, // 0.10%
			{8180.15234849159, "V_BandollierB_rgr"}, // 0.10%
			{8190.0533385906, "5Rnd_127x108_Mag"}, // 0.10%
			{8199.95432868961, "7Rnd_408_Mag"}, // 0.10%
			{8209.85531878862, "SatchelCharge_Remote_Mag"}, // 0.10%
			{8219.45321735399, "muzzle_snds_B"}, // 0.10%
			{8228.9734001415, "U_I_C_Soldier_Para_1_F"}, // 0.10%
			{8238.49358292901, "U_I_C_Soldier_Para_2_F"}, // 0.10%
			{8248.01376571652, "U_I_C_Soldier_Para_3_F"}, // 0.10%
			{8257.53394850403, "U_I_C_Soldier_Para_4_F"}, // 0.10%
			{8267.05413129154, "U_I_C_Soldier_Para_5_F"}, // 0.10%
			{8276.57431407905, "U_I_C_Soldier_Camo_F"}, // 0.10%
			{8285.53817342794, "B_ViperHarness_oli_F"}, // 0.09%
			{8294.50203277684, "B_ViperHarness_blk_F"}, // 0.09%
			{8303.46589212574, "B_ViperHarness_ghex_F"}, // 0.09%
			{8312.42975147464, "B_ViperHarness_hex_F"}, // 0.09%
			{8321.39361082354, "B_ViperLightHarness_ghex_F"}, // 0.09%
			{8330.35747017243, "B_ViperLightHarness_hex_F"}, // 0.09%
			{8339.32132952133, "B_FieldPack_ghex_F"}, // 0.09%
			{8348.28518887023, "B_ViperLightHarness_blk_F"}, // 0.09%
			{8357.24904821913, "B_ViperHarness_khk_F"}, // 0.09%
			{8366.21290756803, "B_ViperLightHarness_oli_F"}, // 0.09%
			{8375.17676691692, "B_ViperHarness_base_F"}, // 0.09%
			{8384.14062626582, "B_ViperLightHarness_base_F"}, // 0.09%
			{8393.10448561472, "B_Bergen_blk"}, // 0.09%
			{8402.06834496362, "B_Bergen_rgr"}, // 0.09%
			{8411.03220431252, "B_Bergen_mcamo"}, // 0.09%
			{8419.99606366141, "B_Bergen_sgg"}, // 0.09%
			{8428.95992301031, "B_ViperLightHarness_khk_F"}, // 0.09%
			{8437.10218460489, "U_O_T_Officer_F"}, // 0.08%
			{8445.24444619947, "U_O_T_Soldier_F"}, // 0.08%
			{8453.38670779406, "U_B_CTRG_2"}, // 0.08%
			{8461.52896938864, "U_B_CTRG_3"}, // 0.08%
			{8469.67123098322, "U_B_CombatUniform_mcam"}, // 0.08%
			{8477.8134925778, "U_B_CombatUniform_mcam_tshirt"}, // 0.08%
			{8485.95575417238, "U_B_CombatUniform_mcam_vest"}, // 0.08%
			{8494.09801576696, "U_B_GEN_Commander_F"}, // 0.08%
			{8502.24027736154, "U_B_GEN_Soldier_F"}, // 0.08%
			{8510.38253895612, "U_B_CTRG_Soldier_urb_3_F"}, // 0.08%
			{8518.52480055071, "U_B_CTRG_Soldier_urb_2_F"}, // 0.08%
			{8526.66706214529, "U_B_CTRG_Soldier_urb_1_F"}, // 0.08%
			{8534.80932373987, "U_B_CTRG_Soldier_3_F"}, // 0.08%
			{8542.95158533445, "U_B_CTRG_Soldier_2_F"}, // 0.08%
			{8551.09384692903, "U_B_CTRG_Soldier_F"}, // 0.08%
			{8559.23610852361, "U_B_T_Soldier_SL_F"}, // 0.08%
			{8567.37837011819, "U_B_CombatUniform_mcam_worn"}, // 0.08%
			{8575.52063171277, "U_B_T_Soldier_AR_F"}, // 0.08%
			{8583.66289330736, "U_B_CTRG_1"}, // 0.08%
			{8591.58368538656, "5Rnd_127x108_APDS_Mag"}, // 0.08%
			{8599.19983161657, "U_IG_leader"}, // 0.08%
			{8606.62557419083, "V_PlateCarrierH_CTRG"}, // 0.07%
			{8614.05131676509, "V_PlateCarrierL_CTRG"}, // 0.07%
			{8621.47705933935, "V_Chestrig_oli"}, // 0.07%
			{8628.9028019136, "V_Chestrig_rgr"}, // 0.07%
			{8636.32854448786, "V_Chestrig_blk"}, // 0.07%
			{8643.75428706212, "V_Chestrig_khk"}, // 0.07%
			{8651.08835380213, "Exile_Item_InstaDoc"}, // 0.07%
			{8658.36849358081, "U_O_T_FullGhillie_tna_F"}, // 0.07%
			{8665.6486333595, "U_B_T_FullGhillie_tna_F"}, // 0.07%
			{8672.92877313818, "U_B_T_Soldier_F"}, // 0.07%
			{8680.20891291687, "U_B_T_Sniper_F"}, // 0.07%
			{8687.48905269555, "U_O_T_Sniper_F"}, // 0.07%
			{8694.56118848056, "V_BandollierB_ghex_F"}, // 0.07%
			{8701.63332426556, "V_HarnessOGL_ghex_F"}, // 0.07%
			{8708.70546005057, "V_HarnessO_ghex_F"}, // 0.07%
			{8715.77759583558, "V_PlateCarrierGL_tna_F"}, // 0.07%
			{8722.84973162058, "V_PlateCarrierSpec_tna_F"}, // 0.07%
			{8729.92186740559, "V_PlateCarrier1_tna_F"}, // 0.07%
			{8736.9940031906, "V_TacChestrig_oli_F"}, // 0.07%
			{8744.06613897561, "V_TacVest_gen_F"}, // 0.07%
			{8751.13827476061, "V_TacChestrig_grn_F"}, // 0.07%
			{8758.21041054562, "V_PlateCarrierSpec_rgr"}, // 0.07%
			{8765.28254633063, "V_PlateCarrierSpec_mtp"}, // 0.07%
			{8772.35468211563, "V_PlateCarrierSpec_blk"}, // 0.07%
			{8779.42681790064, "V_PlateCarrierIAGL_oli"}, // 0.07%
			{8786.49895368565, "V_PlateCarrierIAGL_dgtl"}, // 0.07%
			{8793.57108947066, "V_PlateCarrierGL_rgr"}, // 0.07%
			{8800.64322525566, "V_PlateCarrierGL_mtp"}, // 0.07%
			{8807.71536104067, "V_PlateCarrierGL_blk"}, // 0.07%
			{8814.78749682568, "V_TacChestrig_cbr_F"}, // 0.07%
			{8821.85963261068, "V_PlateCarrier1_rgr_noflag_F"}, // 0.07%
			{8828.93176839569, "V_PlateCarrier2_tna_F"}, // 0.07%
			{8836.0039041807, "V_PlateCarrier2_rgr_noflag_F"}, // 0.07%
			{8842.99283836823, "150Rnd_762x54_Box"}, // 0.07%
			{8849.98177255577, "100Rnd_65x39_caseless_mag"}, // 0.07%
			{8856.93564520056, "acc_flashlight"}, // 0.07%
			{8863.48391907557, "Exile_Weapon_LeeEnfield"}, // 0.07%
			{8870.03219295058, "Exile_Weapon_AK74"}, // 0.07%
			{8876.58046682558, "Exile_Weapon_AK74_GL"}, // 0.07%
			{8883.12874070059, "Exile_Weapon_AK107_GL"}, // 0.07%
			{8889.6770145756, "Exile_Weapon_AK107"}, // 0.07%
			{8896.2252884506, "Exile_Weapon_DMR"}, // 0.07%
			{8902.77356232561, "Exile_Weapon_AKS_Gold"}, // 0.07%
			{8909.32183620062, "Exile_Weapon_CZ550"}, // 0.07%
			{8915.87011007562, "Exile_Weapon_AK47"}, // 0.07%
			{8922.41838395063, "Exile_Weapon_SVDCamo"}, // 0.07%
			{8928.96665782564, "Exile_Weapon_VSSVintorez"}, // 0.07%
			{8935.51493170065, "arifle_Katiba_F"}, // 0.07%
			{8942.06320557565, "Exile_Weapon_SVD"}, // 0.07%
			{8948.57701485132, "U_I_pilotCoveralls"}, // 0.07%
			{8955.09082412698, "U_B_PilotCoveralls"}, // 0.07%
			{8961.60463340265, "U_O_PilotCoveralls"}, // 0.07%
			{8968.11844267831, "U_I_HeliPilotCoveralls"}, // 0.07%
			{8974.63225195397, "U_I_CombatUniform"}, // 0.07%
			{8981.14606122964, "U_I_CombatUniform_shortsleeve"}, // 0.07%
			{8987.6598705053, "U_I_CombatUniform_tshirt"}, // 0.07%
			{8994.17367978097, "U_B_HeliPilotCoveralls"}, // 0.07%
			{9000.23551045383, "3Rnd_SmokeYellow_Grenade_shell"}, // 0.06%
			{9006.29734112669, "3Rnd_SmokePurple_Grenade_shell"}, // 0.06%
			{9012.35917179956, "3Rnd_SmokeRed_Grenade_shell"}, // 0.06%
			{9018.42100247242, "3Rnd_SmokeOrange_Grenade_shell"}, // 0.06%
			{9024.48283314528, "3Rnd_SmokeGreen_Grenade_shell"}, // 0.06%
			{9030.54466381814, "3Rnd_SmokeBlue_Grenade_shell"}, // 0.06%
			{9036.60649449101, "3Rnd_Smoke_Grenade_shell"}, // 0.06%
			{9042.62736684851, "srifle_DMR_03_F"}, // 0.06%
			{9048.64823920602, "srifle_DMR_03_khaki_F"}, // 0.06%
			{9054.66911156352, "srifle_DMR_03_tan_F"}, // 0.06%
			{9060.68998392103, "srifle_DMR_03_woodland_F"}, // 0.06%
			{9066.71085627853, "srifle_DMR_06_camo_F"}, // 0.06%
			{9072.73172863604, "srifle_DMR_06_olive_F"}, // 0.06%
			{9078.71219245423, "B_Bergen_hex_F"}, // 0.06%
			{9084.69265627243, "B_Bergen_tna_F"}, // 0.06%
			{9090.67312009062, "B_Bergen_dgtl_F"}, // 0.06%
			{9096.65358390881, "B_Bergen_Base_F"}, // 0.06%
			{9102.63404772701, "B_Bergen_mcamo_F"}, // 0.06%
			{9108.45815954995, "Exile_Magazine_100Rnd_762x54_PK_Green"}, // 0.06%
			{9114.2822713729, "200Rnd_556x45_Box_Red_F"}, // 0.06%
			{9120.10638319585, "100Rnd_65x39_caseless_mag_Tracer"}, // 0.06%
			{9125.9304950188, "Exile_Magazine_75Rnd_545x39_RPK_Green"}, // 0.06%
			{9131.75460684174, "Exile_Magazine_45Rnd_545x39_RPK_Green"}, // 0.06%
			{9137.57871866469, "150Rnd_762x54_Box_Tracer"}, // 0.06%
			{9143.40283048764, "200Rnd_556x45_Box_Tracer_Red_F"}, // 0.06%
			{9149.22694231058, "200Rnd_556x45_Box_Tracer_F"}, // 0.06%
			{9155.05105413353, "200Rnd_556x45_Box_F"}, // 0.06%
			{9160.55160418854, "Exile_Item_MobilePhone"}, // 0.06%
			{9165.89386503333, "30Rnd_65x39_caseless_green"}, // 0.05%
			{9171.23612587811, "30Rnd_556x45_Stanag"}, // 0.05%
			{9176.5783867229, "30Rnd_556x45_Stanag_green"}, // 0.05%
			{9181.92064756769, "30Rnd_556x45_Stanag_red"}, // 0.05%
			{9187.1592666677, "arifle_TRG20_F"}, // 0.05%
			{9192.3978857677, "arifle_MXC_khk_F"}, // 0.05%
			{9197.63650486771, "arifle_MX_khk_F"}, // 0.05%
			{9202.87512396772, "arifle_MX_F"}, // 0.05%
			{9208.11374306772, "arifle_MXC_F"}, // 0.05%
			{9213.35236216773, "arifle_TRG21_F"}, // 0.05%
			{9218.59098126773, "arifle_Katiba_GL_F"}, // 0.05%
			{9223.64250682845, "muzzle_snds_B_snd_F"}, // 0.05%
			{9228.69403238917, "muzzle_snds_B_khk_F"}, // 0.05%
			{9233.66108427831, "muzzle_snds_H_MG_blk_F"}, // 0.05%
			{9238.62813616744, "optic_ERCO_snd_F"}, // 0.05%
			{9243.59518805658, "optic_Holosight_khk_F"}, // 0.05%
			{9248.56223994572, "muzzle_snds_65_TI_ghex_F"}, // 0.05%
			{9253.52929183485, "optic_DMS_ghex_F"}, // 0.05%
			{9258.49634372399, "muzzle_snds_65_TI_hex_F"}, // 0.05%
			{9263.46339561313, "optic_DMS"}, // 0.05%
			{9268.43044750226, "muzzle_snds_65_TI_blk_F"}, // 0.05%
			{9273.3974993914, "muzzle_snds_58_wdm_F"}, // 0.05%
			{9278.36455128053, "muzzle_snds_m_snd_F"}, // 0.05%
			{9283.33160316967, "muzzle_snds_H_MG_khk_F"}, // 0.05%
			{9288.29865505881, "optic_Arco"}, // 0.05%
			{9293.26570694794, "optic_Arco_blk_F"}, // 0.05%
			{9298.23275883708, "optic_Arco_ghex_F"}, // 0.05%
			{9303.19981072622, "optic_ERCO_khk_F"}, // 0.05%
			{9308.16686261535, "optic_Hamr"}, // 0.05%
			{9313.13391450449, "optic_Hamr_khk_F"}, // 0.05%
			{9318.10096639362, "optic_Holosight"}, // 0.05%
			{9323.06801828276, "muzzle_snds_m_khk_F"}, // 0.05%
			{9328.0350701719, "muzzle_snds_58_blk_F"}, // 0.05%
			{9333.00212206103, "muzzle_snds_H_snd_F"}, // 0.05%
			{9337.96917395017, "muzzle_snds_H_khk_F"}, // 0.05%
			{9342.9362258393, "muzzle_snds_H"}, // 0.05%
			{9347.90327772844, "muzzle_snds_M"}, // 0.05%
			{9352.87032961758, "optic_Holosight_blk_F"}, // 0.05%
			{9357.83738150671, "optic_MRCO"}, // 0.05%
			{9362.80443339585, "acc_pointer_IR"}, // 0.05%
			{9367.77148528499, "optic_ERCO_blk_F"}, // 0.05%
			{9372.72198033449, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.05%
			{9377.672475384, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.05%
			{9382.55783234074, "U_B_SpecopsUniform_sgg"}, // 0.05%
			{9387.4271717337, "H_Booniehat_khk"}, // 0.05%
			{9392.29651112665, "H_Booniehat_mcamo"}, // 0.05%
			{9397.16585051961, "Exile_Headgear_GasMask"}, // 0.05%
			{9402.03518991257, "H_Booniehat_dirty"}, // 0.05%
			{9406.90452930552, "H_Booniehat_dgtl"}, // 0.05%
			{9411.77386869848, "H_Booniehat_khk_hs"}, // 0.05%
			{9416.64320809143, "H_Booniehat_indp"}, // 0.05%
			{9421.51254748439, "H_Booniehat_tan"}, // 0.05%
			{9426.38188687734, "H_Booniehat_grn"}, // 0.05%
			{9431.21163814515, "H_MilCap_blue"}, // 0.05%
			{9436.04138941296, "H_MilCap_oucamo"}, // 0.05%
			{9440.87114068077, "H_MilCap_mcamo"}, // 0.05%
			{9445.70089194858, "H_MilCap_ocamo"}, // 0.05%
			{9450.53064321639, "Exile_Headgear_GasMask"}, // 0.05%
			{9455.3603944842, "H_MilCap_rucamo"}, // 0.05%
			{9460.19014575201, "H_MilCap_dgtl"}, // 0.05%
			{9464.77393746451, "arifle_Mk20_F"}, // 0.05%
			{9469.35772917701, "arifle_Mk20C_F"}, // 0.05%
			{9473.81317472157, "V_I_G_resistanceLeader_F"}, // 0.04%
			{9477.74213904657, "arifle_MXM_F"}, // 0.04%
			{9481.67110337157, "arifle_SDAR_F"}, // 0.04%
			{9485.58876132442, "20Rnd_556x45_UW_mag"}, // 0.04%
			{9489.39683443942, "U_I_G_resistanceLeader_F"}, // 0.04%
			{9493.04883898414, "H_Bandanna_khk_hs"}, // 0.04%
			{9496.70084352886, "H_Bandanna_khk"}, // 0.04%
			{9500.35284807357, "H_Watchcap_blk"}, // 0.04%
			{9504.00485261829, "H_Cap_khaki_specops_UK"}, // 0.04%
			{9507.656857163, "H_Cap_tan_specops_US"}, // 0.04%
			{9511.30886170772, "H_Cap_brn_SPECOPS"}, // 0.04%
			{9514.96086625244, "H_Watchcap_khk"}, // 0.04%
			{9518.61287079715, "H_BandMask_blk"}, // 0.04%
			{9522.26487534187, "H_Bandanna_mcamo"}, // 0.04%
			{9525.91687988658, "H_Bandanna_camo"}, // 0.04%
			{9529.5688844313, "H_Bandanna_sgg"}, // 0.04%
			{9533.22088897602, "H_Bandanna_cbr"}, // 0.04%
			{9536.87289352073, "H_Hat_camo"}, // 0.04%
			{9540.52489806545, "H_Bandanna_gry"}, // 0.04%
			{9544.1472115163, "H_HelmetB"}, // 0.04%
			{9547.76952496716, "H_HelmetB_paint"}, // 0.04%
			{9551.39183841802, "H_HelmetB_light"}, // 0.04%
			{9555.01415186887, "H_HelmetB_plain_blk"}, // 0.04%
			{9558.63646531973, "H_HelmetSpecB"}, // 0.04%
			{9562.25877877059, "H_HelmetSpecB_paint1"}, // 0.04%
			{9565.88109222144, "H_HelmetSpecB_paint2"}, // 0.04%
			{9569.5034056723, "H_HelmetSpecB_blk"}, // 0.04%
			{9573.12571912315, "H_HelmetIA"}, // 0.04%
			{9576.39985606066, "arifle_AKM_F"}, // 0.03%
			{9579.67399299816, "arifle_SPAR_03_khk_F"}, // 0.03%
			{9582.94812993566, "arifle_SPAR_01_GL_snd_F"}, // 0.03%
			{9586.22226687317, "arifle_SPAR_01_GL_khk_F"}, // 0.03%
			{9589.49640381067, "arifle_SPAR_01_GL_blk_F"}, // 0.03%
			{9592.77054074818, "arifle_SPAR_01_snd_F"}, // 0.03%
			{9596.04467768568, "arifle_SPAR_01_khk_F"}, // 0.03%
			{9599.31881462318, "arifle_SPAR_01_blk_F"}, // 0.03%
			{9602.59295156069, "arifle_CTARS_hex_F"}, // 0.03%
			{9605.86708849819, "arifle_CTARS_ghex_F"}, // 0.03%
			{9609.14122543569, "arifle_CTARS_blk_F"}, // 0.03%
			{9612.4153623732, "arifle_SPAR_02_blk_F"}, // 0.03%
			{9615.6894993107, "arifle_CTAR_GL_blk_F"}, // 0.03%
			{9618.9636362482, "arifle_CTAR_blk_F"}, // 0.03%
			{9622.23777318571, "arifle_ARX_hex_F"}, // 0.03%
			{9625.51191012321, "arifle_ARX_ghex_F"}, // 0.03%
			{9628.78604706071, "arifle_ARX_blk_F"}, // 0.03%
			{9632.06018399822, "arifle_AKS_F"}, // 0.03%
			{9635.33432093572, "arifle_AKM_FL_F"}, // 0.03%
			{9638.60845787322, "arifle_AK12_GL_F"}, // 0.03%
			{9641.88259481073, "arifle_AK12_F"}, // 0.03%
			{9645.15673174823, "arifle_SPAR_03_snd_F"}, // 0.03%
			{9648.43086868573, "arifle_CTAR_ghex_F"}, // 0.03%
			{9651.70500562324, "arifle_SPAR_02_khk_F"}, // 0.03%
			{9654.97914256074, "arifle_CTAR_hex_F"}, // 0.03%
			{9658.25327949825, "arifle_SPAR_03_blk_F"}, // 0.03%
			{9661.52741643575, "arifle_SPAR_02_snd_F"}, // 0.03%
			{9664.78432107358, "U_O_V_Soldier_Viper_hex_F"}, // 0.03%
			{9668.04122571141, "U_O_OfficerUniform_ocamo"}, // 0.03%
			{9671.29813034925, "U_I_OfficerUniform"}, // 0.03%
			{9674.55503498708, "U_O_Wetsuit"}, // 0.03%
			{9677.81193962491, "U_B_Wetsuit"}, // 0.03%
			{9681.06884426274, "U_O_CombatUniform_ocamo"}, // 0.03%
			{9684.32574890057, "U_O_CombatUniform_oucamo"}, // 0.03%
			{9687.58265353841, "U_O_SpecopsUniform_ocamo"}, // 0.03%
			{9690.83955817624, "U_O_SpecopsUniform_blk"}, // 0.03%
			{9694.09646281407, "U_O_V_Soldier_Viper_F"}, // 0.03%
			{9697.3533674519, "U_I_Wetsuit"}, // 0.03%
			{9700.55872395878, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.03%
			{9703.76408046565, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.03%
			{9706.96943697253, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.03%
			{9710.1747934794, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.03%
			{9713.38014998627, "30Rnd_65x39_caseless_mag"}, // 0.03%
			{9716.58550649315, "Exile_Magazine_10Rnd_9x39"}, // 0.03%
			{9719.79086300002, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.03%
			{9722.9962195069, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.03%
			{9726.20157601377, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.03%
			{9729.40693252065, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.03%
			{9732.61228902752, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.03%
			{9735.8176455344, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.03%
			{9739.02300204127, "Exile_Magazine_20Rnd_9x39"}, // 0.03%
			{9742.22835854815, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.03%
			{9745.43371505502, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.03%
			{9748.63907156189, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.03%
			{9751.84442806877, "30Rnd_545x39_Mag_Tracer_F"}, // 0.03%
			{9755.04978457564, "30Rnd_545x39_Mag_Green_F"}, // 0.03%
			{9758.25514108252, "30Rnd_545x39_Mag_F"}, // 0.03%
			{9761.46049758939, "30Rnd_762x39_AK47_M"}, // 0.03%
			{9764.66585409627, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.03%
			{9767.87121060314, "30Rnd_762x39_Mag_Tracer_F"}, // 0.03%
			{9771.07656711002, "30Rnd_580x42_Mag_F"}, // 0.03%
			{9774.28192361689, "30Rnd_762x39_Mag_Green_F"}, // 0.03%
			{9777.48728012377, "30Rnd_762x39_Mag_F"}, // 0.03%
			{9780.69263663064, "100Rnd_580x42_Mag_F"}, // 0.03%
			{9783.89799313751, "30Rnd_580x42_Mag_Tracer_F"}, // 0.03%
			{9787.10334964439, "150Rnd_556x45_Drum_Mag_F"}, // 0.03%
			{9790.30870615126, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.03%
			{9793.51406265814, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.03%
			{9796.71941916501, "20Rnd_762x51_Mag"}, // 0.03%
			{9799.92477567189, "Exile_Magazine_10Rnd_762x54"}, // 0.03%
			{9803.13013217876, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.03%
			{9806.33548868564, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.03%
			{9809.54084519251, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.03%
			{9812.74620169939, "Exile_Magazine_5Rnd_22LR"}, // 0.03%
			{9815.95155820626, "100Rnd_580x42_Mag_Tracer_F"}, // 0.03%
			{9818.92185523596, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.03%
			{9821.83391114743, "130Rnd_338_Mag"}, // 0.03%
			{9824.68311693132, "Exile_Magazine_10Rnd_303"}, // 0.03%
			{9827.30242648132, "arifle_TRG21_GL_F"}, // 0.03%
			{9829.92173603133, "arifle_Mk20_GL_F"}, // 0.03%
			{9832.54104558133, "arifle_MX_GL_khk_F"}, // 0.03%
			{9835.16035513133, "arifle_MX_GL_F"}, // 0.03%
			{9837.6438810759, "optic_NVS"}, // 0.02%
			{9840.07855077238, "H_FakeHeadgear_Syndikat_F"}, // 0.02%
			{9842.51322046886, "H_Watchcap_camo"}, // 0.02%
			{9844.94789016533, "H_Cap_grn_Syndikat_F"}, // 0.02%
			{9847.38255986181, "H_MilCap_gen_F"}, // 0.02%
			{9849.81722955829, "H_Cap_tan_Syndikat_F"}, // 0.02%
			{9852.25189925477, "H_Watchcap_sgg"}, // 0.02%
			{9854.68656895125, "H_TurbanO_blk"}, // 0.02%
			{9857.12123864773, "H_Shemag_tan"}, // 0.02%
			{9859.55590834421, "H_Shemag_olive"}, // 0.02%
			{9861.99057804068, "H_Shemag_olive_hs"}, // 0.02%
			{9864.42524773716, "H_ShemagOpen_khk"}, // 0.02%
			{9866.85991743364, "H_ShemagOpen_tan"}, // 0.02%
			{9869.29458713012, "H_MilCap_tna_F"}, // 0.02%
			{9871.7292568266, "H_Cap_blk_Syndikat_F"}, // 0.02%
			{9874.16392652308, "H_Shemag_khk"}, // 0.02%
			{9876.59859621956, "H_MilCap_ghex_F"}, // 0.02%
			{9879.03326591603, "H_Booniehat_tna_F"}, // 0.02%
			{9881.46793561251, "H_Cap_oli_Syndikat_F"}, // 0.02%
			{9883.88281124642, "H_HelmetB_light_grass"}, // 0.02%
			{9886.29768688032, "H_HelmetB_black"}, // 0.02%
			{9888.71256251423, "H_HelmetB_desert"}, // 0.02%
			{9891.12743814813, "H_HelmetB_light_desert"}, // 0.02%
			{9893.54231378204, "H_HelmetB_light_black"}, // 0.02%
			{9895.95718941595, "H_HelmetB_light_sand"}, // 0.02%
			{9898.37206504985, "H_HelmetB_snakeskin"}, // 0.02%
			{9900.78694068376, "H_HelmetB_grass"}, // 0.02%
			{9903.20181631766, "H_HelmetIA_camo"}, // 0.02%
			{9905.61669195157, "H_HelmetIA_net"}, // 0.02%
			{9908.03156758547, "H_HelmetB_sand"}, // 0.02%
			{9910.44644321938, "H_HelmetB_light_snakeskin"}, // 0.02%
			{9912.86131885328, "H_HelmetB_TI_tna_F"}, // 0.02%
			{9915.27619448719, "H_HelmetSpecO_ghex_F"}, // 0.02%
			{9917.69107012109, "H_HelmetCrew_O_ghex_F"}, // 0.02%
			{9920.105945755, "H_HelmetLeaderO_ghex_F"}, // 0.02%
			{9922.52082138891, "H_HelmetB_tna_F"}, // 0.02%
			{9924.93569702281, "H_Beret_gen_F"}, // 0.02%
			{9927.35057265672, "H_HelmetB_Light_tna_F"}, // 0.02%
			{9929.76544829062, "H_HelmetB_Enh_tna_F"}, // 0.02%
			{9932.18032392453, "H_Helmet_Skate"}, // 0.02%
			{9934.59519955843, "H_BandMask_khk"}, // 0.02%
			{9937.01007519234, "H_BandMask_reaper"}, // 0.02%
			{9939.42495082624, "H_BandMask_demon"}, // 0.02%
			{9941.40514884605, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"}, // 0.02%
			{9943.36963100855, "arifle_MXM_Black_F"}, // 0.02%
			{9945.33411317105, "arifle_MX_Black_F"}, // 0.02%
			{9947.29859533355, "arifle_MX_GL_Black_F"}, // 0.02%
			{9949.26307749606, "arifle_MXC_Black_F"}, // 0.02%
			{9951.22755965856, "arifle_MXM_khk_F"}, // 0.02%
			{9953.00831327349, "10Rnd_50BW_Mag_F"}, // 0.02%
			{9954.46434122923, "U_B_FullGhillie_sard"}, // 0.01%
			{9955.92036918496, "U_B_FullGhillie_lsh"}, // 0.01%
			{9957.3763971407, "U_B_FullGhillie_ard"}, // 0.01%
			{9958.83242509644, "U_O_FullGhillie_sard"}, // 0.01%
			{9960.28845305218, "U_O_FullGhillie_lsh"}, // 0.01%
			{9961.74448100791, "U_I_FullGhillie_ard"}, // 0.01%
			{9963.20050896365, "U_I_FullGhillie_lsh"}, // 0.01%
			{9964.65653691939, "U_I_FullGhillie_sard"}, // 0.01%
			{9966.11256487512, "U_O_FullGhillie_ard"}, // 0.01%
			{9967.32989972336, "H_Beret_ocamo"}, // 0.01%
			{9968.5472345716, "H_Beret_brn_SF"}, // 0.01%
			{9969.76456941984, "H_Beret_grn"}, // 0.01%
			{9970.98190426808, "H_Beret_red"}, // 0.01%
			{9972.19923911632, "H_Beret_blk"}, // 0.01%
			{9973.41657396456, "H_Beret_Colonel"}, // 0.01%
			{9974.6339088128, "H_Beret_02"}, // 0.01%
			{9975.85124366104, "H_Beret_grn_SF"}, // 0.01%
			{9977.05868147799, "H_PilotHelmetFighter_B"}, // 0.01%
			{9978.26611929494, "H_HelmetO_ghex_F"}, // 0.01%
			{9979.4735571119, "H_HelmetCrew_I"}, // 0.01%
			{9980.68099492885, "H_HelmetCrew_O"}, // 0.01%
			{9981.8884327458, "H_PilotHelmetHeli_B"}, // 0.01%
			{9983.09587056275, "H_PilotHelmetHeli_O"}, // 0.01%
			{9984.30330837971, "H_PilotHelmetHeli_I"}, // 0.01%
			{9985.51074619666, "H_HelmetB_camo"}, // 0.01%
			{9986.71818401361, "H_CrewHelmetHeli_B"}, // 0.01%
			{9987.92562183057, "H_PilotHelmetFighter_O"}, // 0.01%
			{9989.13305964752, "H_CrewHelmetHeli_O"}, // 0.01%
			{9990.34049746447, "H_HelmetCrew_B"}, // 0.01%
			{9991.54793528142, "H_HelmetO_oucamo"}, // 0.01%
			{9992.75537309838, "H_HelmetLeaderO_oucamo"}, // 0.01%
			{9993.96281091533, "H_HelmetSpecO_ocamo"}, // 0.01%
			{9995.17024873228, "H_HelmetSpecO_blk"}, // 0.01%
			{9996.37768654923, "H_HelmetO_ocamo"}, // 0.01%
			{9997.58512436619, "H_HelmetLeaderO_ocamo"}, // 0.01%
			{9998.79256218314, "H_CrewHelmetHeli_I"}, // 0.01%
			{10000.0000000001, "H_PilotHelmetFighter_I"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Can_Empty
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Magazine01
	  Exile_Item_Heatpack
	  Exile_Item_InstaDoc
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Magazine03
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Heatpack
	  Exile_Item_InstaDoc
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_Heatpack
	  Exile_Item_Magazine03
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_InstaDoc
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine04
	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Magazine02
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine04
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Magazine03
	  Exile_Item_Magazine01
	  Exile_Item_Vishpirin
	*/
	class Medical
	{
		count = 11;
		half = 8731.48148148148;
		halfIndex = 5;
		sum = 10000;
		items[] = 
		{
			{2592.59259259259, "Exile_Item_Vishpirin"}, // 25.93%
			{5185.18518518519, "Exile_Item_Heatpack"}, // 25.93%
			{6481.48148148148, "Exile_Item_Bandage"}, // 12.96%
			{7231.48148148148, "Exile_Item_Can_Empty"}, // 7.50%
			{7981.48148148148, "Exile_Item_ToiletPaper"}, // 7.50%
			{8731.48148148148, "Exile_Item_PlasticBottleEmpty"}, // 7.50%
			{9250, "Exile_Item_InstaDoc"}, // 5.19%
			{9437.5, "Exile_Item_Magazine01"}, // 1.88%
			{9625, "Exile_Item_Magazine02"}, // 1.88%
			{9812.5, "Exile_Item_Magazine03"}, // 1.88%
			{10000, "Exile_Item_Magazine04"} // 1.88%
		};
	};

	/**
	  Result of 100 rounds:

	  APERSTripMine_Wire_Mag
	  Exile_Item_ZipTie
	  B_Carryall_oucamo
	  H_Helmet_Skate
	  MiniGrenade
	  7Rnd_408_Mag
	  srifle_DMR_02_sniper_F
	  HandGrenade
	  U_I_FullGhillie_lsh
	  optic_AMS_khk
	  optic_AMS_snd
	  srifle_DMR_07_hex_F
	  B_Carryall_oli
	  DemoCharge_Remote_Mag
	  U_O_T_FullGhillie_tna_F
	  IEDUrbanSmall_Remote_Mag
	  srifle_GM6_ghex_F
	  5Rnd_127x108_Mag
	  Exile_Item_Heatpack
	  MiniGrenade
	  srifle_EBR_F
	  ItemMap
	  U_I_GhillieSuit
	  B_Bergen_tna_F
	  B_Bergen_tna_F
	  srifle_GM6_F
	  U_O_FullGhillie_lsh
	  Exile_Item_Heatpack
	  HandGrenade
	  U_O_T_FullGhillie_tna_F
	  B_Carryall_cbr
	  H_MilCap_ocamo
	  srifle_DMR_02_F
	  10Rnd_127x54_Mag
	  srifle_EBR_F
	  srifle_GM6_ghex_F
	  HandGrenade
	  srifle_LRR_F
	  B_Carryall_cbr
	  H_MilCap_ocamo
	  optic_SOS_khk_F
	  MiniGrenade
	  srifle_LRR_F
	  srifle_GM6_ghex_F
	  srifle_EBR_F
	  srifle_EBR_F
	  ItemMap
	  srifle_DMR_05_tan_F
	  optic_LRPS_ghex_F
	  srifle_DMR_05_tan_F
	  srifle_GM6_F
	  srifle_DMR_04_Tan_F
	  20Rnd_762x51_Mag
	  B_Carryall_khk
	  Exile_Item_Bandage
	  H_CrewHelmetHeli_O
	  srifle_DMR_03_woodland_F
	  20Rnd_650x39_Cased_Mag_F
	  srifle_DMR_05_blk_F
	  Exile_Item_ZipTie
	  H_HelmetB_TI_tna_F
	  Exile_Item_InstaDoc
	  H_HelmetCrew_O
	  srifle_GM6_F
	  srifle_DMR_04_Tan_F
	  Exile_Item_ZipTie
	  10Rnd_127x54_Mag
	  B_Bergen_dgtl_F
	  Exile_Item_Bandage
	  U_I_GhillieSuit
	  U_B_GhillieSuit
	  srifle_DMR_01_F
	  U_O_GhillieSuit
	  APERSBoundingMine_Range_Mag
	  srifle_DMR_02_sniper_F
	  IEDLandSmall_Remote_Mag
	  U_B_GhillieSuit
	  srifle_DMR_05_tan_F
	  U_O_T_Sniper_F
	  U_B_T_FullGhillie_tna_F
	  srifle_DMR_06_olive_F
	  optic_AMS
	  U_B_T_FullGhillie_tna_F
	  srifle_LRR_F
	  U_B_GhillieSuit
	  srifle_DMR_05_hex_F
	  srifle_DMR_01_F
	  H_HelmetB_light
	  srifle_EBR_F
	  srifle_DMR_05_tan_F
	  APERSBoundingMine_Range_Mag
	  B_Carryall_khk
	  srifle_DMR_05_tan_F
	  Exile_Item_Vishpirin
	  H_HelmetSpecB_paint1
	  Exile_Item_ZipTie
	  MiniGrenade
	  U_B_FullGhillie_lsh
	  H_HelmetB_Light_tna_F
	  srifle_DMR_01_F
	*/
	class Tourist
	{
		count = 169;
		half = 8667.89250984947;
		halfIndex = 84;
		sum = 9999.99999999999;
		items[] = 
		{
			{400, "Exile_Item_ZipTie"}, // 4.00%
			{666.666666666667, "srifle_DMR_01_F"}, // 2.67%
			{933.333333333333, "srifle_EBR_F"}, // 2.67%
			{1149.54954954955, "srifle_DMR_05_tan_F"}, // 2.16%
			{1365.76576576577, "srifle_DMR_05_blk_F"}, // 2.16%
			{1581.98198198198, "srifle_DMR_05_hex_F"}, // 2.16%
			{1791.50579150579, "srifle_DMR_07_ghex_F"}, // 2.10%
			{2001.0296010296, "srifle_DMR_07_blk_F"}, // 2.10%
			{2210.55341055341, "srifle_DMR_07_hex_F"}, // 2.10%
			{2420.07722007722, "srifle_LRR_tna_F"}, // 2.10%
			{2629.60102960103, "srifle_LRR_F"}, // 2.10%
			{2839.12483912484, "srifle_GM6_F"}, // 2.10%
			{3048.64864864865, "srifle_GM6_ghex_F"}, // 2.10%
			{3248.64864864865, "MiniGrenade"}, // 2.00%
			{3448.64864864865, "HandGrenade"}, // 2.00%
			{3637.83783783784, "srifle_DMR_04_Tan_F"}, // 1.89%
			{3827.02702702703, "srifle_DMR_04_F"}, // 1.89%
			{3993.69369369369, "U_O_GhillieSuit"}, // 1.67%
			{4160.36036036036, "U_I_GhillieSuit"}, // 1.67%
			{4327.02702702703, "U_B_GhillieSuit"}, // 1.67%
			{4489.18918918919, "srifle_DMR_02_sniper_F"}, // 1.62%
			{4651.35135135135, "srifle_DMR_02_F"}, // 1.62%
			{4813.51351351352, "srifle_DMR_02_camo_F"}, // 1.62%
			{4961.66166166166, "Exile_Item_Vishpirin"}, // 1.48%
			{5109.80980980981, "Exile_Item_Heatpack"}, // 1.48%
			{5237.3265883333, "B_Carryall_cbr"}, // 1.28%
			{5364.84336685679, "B_Carryall_ghex_F"}, // 1.28%
			{5485.64873598431, "B_Carryall_oli"}, // 1.21%
			{5606.45410511182, "B_Carryall_khk"}, // 1.21%
			{5707.12524605142, "B_Carryall_ocamo"}, // 1.01%
			{5807.79638699102, "B_Carryall_oucamo"}, // 1.01%
			{5908.46752793062, "B_Carryall_mcamo"}, // 1.01%
			{5997.35641681951, "Exile_Item_Heatpack"}, // 0.89%
			{6078.43749790059, "srifle_DMR_06_olive_F"}, // 0.81%
			{6159.51857898167, "srifle_DMR_03_F"}, // 0.81%
			{6240.59966006275, "srifle_DMR_03_khaki_F"}, // 0.81%
			{6321.68074114383, "srifle_DMR_03_tan_F"}, // 0.81%
			{6402.76182222491, "srifle_DMR_03_woodland_F"}, // 0.81%
			{6483.84290330599, "srifle_DMR_06_camo_F"}, // 0.81%
			{6563.84290330599, "APERSBoundingMine_Range_Mag"}, // 0.80%
			{6643.84290330599, "APERSTripMine_Wire_Mag"}, // 0.80%
			{6723.84290330599, "APERSMine_Range_Mag"}, // 0.80%
			{6801.62068108377, "ItemMap"}, // 0.78%
			{6875.69475515784, "Exile_Item_Bandage"}, // 0.74%
			{6949.22416692255, "U_O_T_FullGhillie_tna_F"}, // 0.74%
			{7022.75357868725, "U_O_T_Sniper_F"}, // 0.74%
			{7096.28299045196, "U_B_T_FullGhillie_tna_F"}, // 0.74%
			{7169.81240221667, "U_B_T_Soldier_F"}, // 0.74%
			{7243.34181398137, "U_B_T_Sniper_F"}, // 0.74%
			{7310.00848064804, "ItemWatch"}, // 0.67%
			{7376.67514731471, "ItemRadio"}, // 0.67%
			{7432.8154981919, "10Rnd_93x64_DMR_05_Mag"}, // 0.56%
			{7488.95584906909, "10Rnd_338_Mag"}, // 0.56%
			{7538.07865608664, "10Rnd_127x54_Mag"}, // 0.49%
			{7586.07865608664, "IEDLandSmall_Remote_Mag"}, // 0.48%
			{7634.07865608664, "DemoCharge_Remote_Mag"}, // 0.48%
			{7682.07865608664, "IEDUrbanSmall_Remote_Mag"}, // 0.48%
			{7726.52310053108, "ItemGPS"}, // 0.44%
			{7770.96754497553, "Binocular"}, // 0.44%
			{7812.96754497553, "20Rnd_650x39_Cased_Mag_F"}, // 0.42%
			{7853.23600135136, "B_Bergen_Base_F"}, // 0.40%
			{7893.5044577272, "B_Bergen_mcamo_F"}, // 0.40%
			{7933.77291410304, "B_Bergen_dgtl_F"}, // 0.40%
			{7974.04137047888, "B_Bergen_tna_F"}, // 0.40%
			{8014.30982685472, "B_Bergen_hex_F"}, // 0.40%
			{8052.90631808279, "20Rnd_762x51_Mag"}, // 0.39%
			{8090.90631808279, "20Rnd_762x51_Mag"}, // 0.38%
			{8124.90631808279, "10Rnd_762x54_Mag"}, // 0.34%
			{8158.23965141613, "muzzle_snds_338_green"}, // 0.33%
			{8191.57298474946, "muzzle_snds_338_sand"}, // 0.33%
			{8224.90631808279, "muzzle_snds_93mmg"}, // 0.33%
			{8258.23965141613, "muzzle_snds_93mmg_tan"}, // 0.33%
			{8291.57298474946, "muzzle_snds_B"}, // 0.33%
			{8324.90631808279, "muzzle_snds_338_black"}, // 0.33%
			{8357.42664328605, "H_MilCap_dgtl"}, // 0.33%
			{8389.9469684893, "H_MilCap_rucamo"}, // 0.33%
			{8422.46729369255, "H_MilCap_oucamo"}, // 0.33%
			{8454.9876188958, "H_MilCap_mcamo"}, // 0.33%
			{8487.50794409905, "H_MilCap_ocamo"}, // 0.33%
			{8520.0282693023, "Exile_Headgear_GasMask"}, // 0.33%
			{8552.54859450556, "H_MilCap_blue"}, // 0.33%
			{8582.17822413518, "Exile_Item_InstaDoc"}, // 0.30%
			{8610.74965270661, "optic_KHS_blk"}, // 0.29%
			{8639.32108127804, "optic_AMS"}, // 0.29%
			{8667.89250984947, "optic_KHS_hex"}, // 0.29%
			{8696.4639384209, "optic_KHS_old"}, // 0.29%
			{8725.03536699233, "optic_AMS_khk"}, // 0.29%
			{8753.60679556376, "optic_AMS_snd"}, // 0.29%
			{8782.17822413519, "optic_KHS_tan"}, // 0.29%
			{8809.72924454335, "optic_DMS"}, // 0.28%
			{8836.25985678825, "optic_LRPS_tna_F"}, // 0.27%
			{8862.79046903315, "optic_LRPS"}, // 0.27%
			{8889.32108127805, "optic_LRPS_ghex_F"}, // 0.27%
			{8915.85169352295, "optic_SOS_khk_F"}, // 0.27%
			{8942.38230576785, "optic_SOS"}, // 0.27%
			{8966.77254967028, "H_HelmetB_plain_blk"}, // 0.24%
			{8991.16279357272, "H_HelmetIA"}, // 0.24%
			{9015.55303747516, "H_HelmetSpecB_paint1"}, // 0.24%
			{9039.9432813776, "H_HelmetB_light"}, // 0.24%
			{9064.33352528004, "H_HelmetB_paint"}, // 0.24%
			{9088.72376918248, "H_HelmetSpecB_blk"}, // 0.24%
			{9113.11401308492, "H_HelmetB"}, // 0.24%
			{9137.50425698735, "H_HelmetSpecB"}, // 0.24%
			{9161.89450088979, "H_HelmetSpecB_paint2"}, // 0.24%
			{9181.89450088979, "5Rnd_127x108_Mag"}, // 0.20%
			{9201.89450088979, "7Rnd_408_Mag"}, // 0.20%
			{9221.28225599184, "muzzle_snds_B"}, // 0.19%
			{9237.54241859346, "H_HelmetB_desert"}, // 0.16%
			{9253.80258119509, "H_BandMask_khk"}, // 0.16%
			{9270.06274379671, "H_BandMask_reaper"}, // 0.16%
			{9286.32290639834, "H_BandMask_demon"}, // 0.16%
			{9302.58306899996, "H_Helmet_Skate"}, // 0.16%
			{9318.84323160159, "H_HelmetB_Enh_tna_F"}, // 0.16%
			{9335.10339420322, "H_HelmetB_Light_tna_F"}, // 0.16%
			{9351.36355680484, "H_Beret_gen_F"}, // 0.16%
			{9367.62371940647, "H_HelmetB_tna_F"}, // 0.16%
			{9383.88388200809, "H_HelmetSpecO_ghex_F"}, // 0.16%
			{9400.14404460972, "H_HelmetIA_net"}, // 0.16%
			{9416.40420721134, "H_HelmetIA_camo"}, // 0.16%
			{9432.66436981297, "H_HelmetB_grass"}, // 0.16%
			{9448.9245324146, "H_HelmetLeaderO_ghex_F"}, // 0.16%
			{9465.18469501622, "H_HelmetCrew_O_ghex_F"}, // 0.16%
			{9481.44485761785, "H_HelmetB_TI_tna_F"}, // 0.16%
			{9497.70502021947, "H_HelmetB_light_black"}, // 0.16%
			{9513.9651828211, "H_HelmetB_light_desert"}, // 0.16%
			{9530.22534542272, "H_HelmetB_light_snakeskin"}, // 0.16%
			{9546.48550802435, "H_HelmetB_light_grass"}, // 0.16%
			{9562.74567062598, "H_HelmetB_sand"}, // 0.16%
			{9579.0058332276, "H_HelmetB_black"}, // 0.16%
			{9595.26599582923, "H_HelmetB_snakeskin"}, // 0.16%
			{9611.52615843085, "H_HelmetB_light_sand"}, // 0.16%
			{9627.52615843085, "SatchelCharge_Remote_Mag"}, // 0.16%
			{9643.52615843085, "5Rnd_127x108_APDS_Mag"}, // 0.16%
			{9658.23204078379, "U_B_FullGhillie_sard"}, // 0.15%
			{9672.93792313673, "U_B_FullGhillie_ard"}, // 0.15%
			{9687.64380548968, "U_B_FullGhillie_lsh"}, // 0.15%
			{9702.34968784262, "U_O_FullGhillie_ard"}, // 0.15%
			{9717.05557019556, "U_O_FullGhillie_lsh"}, // 0.15%
			{9731.7614525485, "U_O_FullGhillie_sard"}, // 0.15%
			{9746.46733490144, "U_I_FullGhillie_ard"}, // 0.15%
			{9761.17321725438, "U_I_FullGhillie_lsh"}, // 0.15%
			{9775.87909960732, "U_I_FullGhillie_sard"}, // 0.15%
			{9786.99021071843, "Exile_Item_MobilePhone"}, // 0.11%
			{9797.19429235108, "muzzle_snds_B_snd_F"}, // 0.10%
			{9807.39837398374, "muzzle_snds_B_khk_F"}, // 0.10%
			{9817.39837398374, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.10%
			{9827.39837398374, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.10%
			{9835.52845528455, "H_PilotHelmetFighter_B"}, // 0.08%
			{9843.65853658536, "H_CrewHelmetHeli_B"}, // 0.08%
			{9851.78861788618, "H_CrewHelmetHeli_O"}, // 0.08%
			{9859.91869918699, "H_CrewHelmetHeli_I"}, // 0.08%
			{9868.0487804878, "H_HelmetO_oucamo"}, // 0.08%
			{9876.17886178861, "H_HelmetLeaderO_oucamo"}, // 0.08%
			{9884.30894308943, "H_HelmetSpecO_ocamo"}, // 0.08%
			{9892.43902439024, "H_HelmetSpecO_blk"}, // 0.08%
			{9900.56910569105, "H_HelmetO_ocamo"}, // 0.08%
			{9908.69918699187, "H_HelmetLeaderO_ocamo"}, // 0.08%
			{9916.82926829268, "H_PilotHelmetHeli_O"}, // 0.08%
			{9924.95934959349, "H_PilotHelmetFighter_O"}, // 0.08%
			{9933.0894308943, "H_PilotHelmetHeli_B"}, // 0.08%
			{9941.21951219512, "H_PilotHelmetHeli_I"}, // 0.08%
			{9949.34959349593, "H_PilotHelmetFighter_I"}, // 0.08%
			{9957.47967479674, "H_HelmetCrew_B"}, // 0.08%
			{9965.60975609756, "H_HelmetCrew_O"}, // 0.08%
			{9973.73983739837, "H_HelmetCrew_I"}, // 0.08%
			{9981.86991869918, "H_HelmetO_ghex_F"}, // 0.08%
			{9989.99999999999, "H_HelmetB_camo"}, // 0.08%
			{9995.99999999999, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.06%
			{9999.99999999999, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"} // 0.04%
		};
	};

	/**
	  Result of 100 rounds:

	  srifle_DMR_03_F
	  srifle_EBR_F
	  Exile_Item_Vishpirin
	  H_HelmetSpecB_paint2
	  srifle_DMR_07_blk_F
	  H_HelmetB
	  srifle_DMR_02_camo_F
	  srifle_GM6_ghex_F
	  U_B_FullGhillie_lsh
	  H_MilCap_oucamo
	  H_MilCap_oucamo
	  srifle_GM6_F
	  U_I_GhillieSuit
	  MMG_02_sand_F
	  B_Carryall_khk
	  MMG_02_sand_F
	  srifle_DMR_07_hex_F
	  optic_LRPS_ghex_F
	  MiniGrenade
	  srifle_GM6_ghex_F
	  Exile_Item_ZipTie
	  B_Carryall_oli
	  srifle_DMR_02_F
	  U_B_T_Soldier_F
	  U_B_T_Sniper_F
	  srifle_DMR_07_hex_F
	  5Rnd_127x108_APDS_Mag
	  Exile_Item_Heatpack
	  srifle_GM6_ghex_F
	  IEDLandSmall_Remote_Mag
	  MiniGrenade
	  20Rnd_762x51_Mag
	  APERSMine_Range_Mag
	  MMG_02_black_F
	  Exile_Item_ZipTie
	  srifle_DMR_07_hex_F
	  srifle_GM6_ghex_F
	  srifle_LRR_F
	  HandGrenade
	  20Rnd_762x51_Mag
	  optic_AMS_snd
	  srifle_DMR_07_blk_F
	  srifle_DMR_07_ghex_F
	  srifle_DMR_07_hex_F
	  Exile_Item_ZipTie
	  Exile_Item_ZipTie
	  B_Carryall_oli
	  srifle_DMR_05_hex_F
	  H_MilCap_rucamo
	  srifle_DMR_05_hex_F
	  srifle_DMR_07_hex_F
	  srifle_DMR_04_F
	  MMG_01_tan_F
	  U_O_GhillieSuit
	  B_Carryall_khk
	  Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag
	  srifle_DMR_03_tan_F
	  U_O_T_Sniper_F
	  srifle_DMR_05_tan_F
	  srifle_DMR_01_F
	  H_HelmetB_light_grass
	  muzzle_snds_93mmg_tan
	  H_HelmetCrew_I
	  srifle_DMR_07_hex_F
	  srifle_DMR_04_F
	  srifle_DMR_01_F
	  MMG_02_camo_F
	  U_B_T_Soldier_F
	  B_Carryall_khk
	  srifle_DMR_02_F
	  srifle_DMR_02_camo_F
	  srifle_EBR_F
	  srifle_DMR_02_F
	  srifle_DMR_03_F
	  srifle_DMR_02_camo_F
	  MMG_02_black_F
	  srifle_DMR_02_sniper_F
	  srifle_DMR_05_hex_F
	  IEDUrbanSmall_Remote_Mag
	  IEDUrbanSmall_Remote_Mag
	  B_Carryall_ghex_F
	  muzzle_snds_B
	  IEDUrbanSmall_Remote_Mag
	  srifle_LRR_F
	  srifle_DMR_02_sniper_F
	  srifle_DMR_05_blk_F
	  srifle_EBR_F
	  optic_AMS_khk
	  Exile_Item_ZipTie
	  Exile_Item_ZipTie
	  srifle_DMR_03_khaki_F
	  U_B_GhillieSuit
	  srifle_DMR_05_hex_F
	  APERSTripMine_Wire_Mag
	  optic_AMS_khk
	  srifle_EBR_F
	  srifle_GM6_ghex_F
	  H_BandMask_reaper
	  H_HelmetIA
	  Exile_Item_ZipTie
	*/
	class Radiation
	{
		count = 167;
		half = 8941.6128511025;
		halfIndex = 83;
		sum = 10000;
		items[] = 
		{
			{317.460317460317, "srifle_DMR_01_F"}, // 3.17%
			{634.920634920635, "srifle_EBR_F"}, // 3.17%
			{952.380952380952, "Exile_Item_ZipTie"}, // 3.17%
			{1209.78120978121, "srifle_DMR_05_hex_F"}, // 2.57%
			{1467.18146718147, "srifle_DMR_05_tan_F"}, // 2.57%
			{1724.58172458172, "srifle_DMR_05_blk_F"}, // 2.57%
			{1974.01483115769, "srifle_LRR_tna_F"}, // 2.49%
			{2223.44793773365, "srifle_GM6_F"}, // 2.49%
			{2472.88104430962, "srifle_LRR_F"}, // 2.49%
			{2722.31415088558, "srifle_DMR_07_ghex_F"}, // 2.49%
			{2971.74725746154, "srifle_DMR_07_hex_F"}, // 2.49%
			{3221.18036403751, "srifle_DMR_07_blk_F"}, // 2.49%
			{3470.61347061347, "srifle_GM6_ghex_F"}, // 2.49%
			{3695.8386958387, "srifle_DMR_04_F"}, // 2.25%
			{3921.06392106392, "srifle_DMR_04_Tan_F"}, // 2.25%
			{4114.11411411411, "srifle_DMR_02_F"}, // 1.93%
			{4307.16430716431, "srifle_DMR_02_sniper_F"}, // 1.93%
			{4500.2145002145, "srifle_DMR_02_camo_F"}, // 1.93%
			{4658.94465894466, "APERSMine_Range_Mag"}, // 1.59%
			{4817.67481767482, "APERSBoundingMine_Range_Mag"}, // 1.59%
			{4976.40497640498, "APERSTripMine_Wire_Mag"}, // 1.59%
			{5135.13513513514, "MiniGrenade"}, // 1.59%
			{5293.8652938653, "HandGrenade"}, // 1.59%
			{5426.14042614043, "U_I_GhillieSuit"}, // 1.32%
			{5558.41555841556, "U_B_GhillieSuit"}, // 1.32%
			{5690.69069069069, "U_O_GhillieSuit"}, // 1.32%
			{5808.26858604636, "Exile_Item_Vishpirin"}, // 1.18%
			{5925.84648140204, "Exile_Item_Heatpack"}, // 1.18%
			{6027.050273881, "B_Carryall_cbr"}, // 1.01%
			{6128.25406635996, "B_Carryall_ghex_F"}, // 1.01%
			{6224.77916288505, "srifle_DMR_06_camo_F"}, // 0.97%
			{6321.30425941015, "srifle_DMR_03_woodland_F"}, // 0.97%
			{6417.82935593525, "srifle_DMR_03_tan_F"}, // 0.97%
			{6514.35445246034, "srifle_DMR_03_khaki_F"}, // 0.97%
			{6610.87954898544, "srifle_DMR_03_F"}, // 0.97%
			{6707.40464551053, "srifle_DMR_06_olive_F"}, // 0.97%
			{6803.28192259587, "B_Carryall_oli"}, // 0.96%
			{6899.1591996812, "B_Carryall_khk"}, // 0.96%
			{6994.39729491929, "IEDLandSmall_Remote_Mag"}, // 0.95%
			{7089.63539015739, "IEDUrbanSmall_Remote_Mag"}, // 0.95%
			{7184.87348539548, "DemoCharge_Remote_Mag"}, // 0.95%
			{7264.77121629993, "B_Carryall_mcamo"}, // 0.80%
			{7344.66894720437, "B_Carryall_oucamo"}, // 0.80%
			{7424.56667810881, "B_Carryall_ocamo"}, // 0.80%
			{7497.82675136888, "MMG_02_camo_F"}, // 0.73%
			{7571.08682462896, "MMG_02_black_F"}, // 0.73%
			{7644.34689788903, "MMG_02_sand_F"}, // 0.73%
			{7703.13584556687, "Exile_Item_Bandage"}, // 0.59%
			{7761.4925215706, "U_O_T_FullGhillie_tna_F"}, // 0.58%
			{7819.84919757433, "U_O_T_Sniper_F"}, // 0.58%
			{7878.20587357807, "U_B_T_FullGhillie_tna_F"}, // 0.58%
			{7936.5625495818, "U_B_T_Soldier_F"}, // 0.58%
			{7994.91922558554, "U_B_T_Sniper_F"}, // 0.58%
			{8043.75927442559, "MMG_01_tan_F"}, // 0.49%
			{8092.59932326564, "MMG_01_hex_F"}, // 0.49%
			{8137.15515729515, "10Rnd_93x64_DMR_05_Mag"}, // 0.45%
			{8181.71099132467, "10Rnd_338_Mag"}, // 0.45%
			{8220.6973461005, "10Rnd_127x54_Mag"}, // 0.39%
			{8254.03067943383, "20Rnd_650x39_Cased_Mag_F"}, // 0.33%
			{8285.98977179561, "B_Bergen_hex_F"}, // 0.32%
			{8317.94886415739, "B_Bergen_tna_F"}, // 0.32%
			{8349.90795651916, "B_Bergen_mcamo_F"}, // 0.32%
			{8381.86704888094, "B_Bergen_Base_F"}, // 0.32%
			{8413.82614124271, "B_Bergen_dgtl_F"}, // 0.32%
			{8445.57217298875, "SatchelCharge_Remote_Mag"}, // 0.32%
			{8476.20430888404, "20Rnd_762x51_Mag"}, // 0.31%
			{8506.36303904277, "20Rnd_762x51_Mag"}, // 0.30%
			{8533.3471660269, "10Rnd_762x54_Mag"}, // 0.27%
			{8559.80219248192, "muzzle_snds_338_green"}, // 0.26%
			{8586.25721893695, "muzzle_snds_93mmg_tan"}, // 0.26%
			{8612.71224539198, "muzzle_snds_93mmg"}, // 0.26%
			{8639.16727184701, "muzzle_snds_B"}, // 0.26%
			{8665.62229830203, "muzzle_snds_338_sand"}, // 0.26%
			{8692.07732475706, "muzzle_snds_338_black"}, // 0.26%
			{8717.8871066644, "H_MilCap_blue"}, // 0.26%
			{8743.69688857175, "H_MilCap_oucamo"}, // 0.26%
			{8769.50667047909, "H_MilCap_mcamo"}, // 0.26%
			{8795.31645238643, "H_MilCap_ocamo"}, // 0.26%
			{8821.12623429377, "Exile_Headgear_GasMask"}, // 0.26%
			{8846.93601620112, "H_MilCap_dgtl"}, // 0.26%
			{8872.74579810846, "H_MilCap_rucamo"}, // 0.26%
			{8896.26137717959, "Exile_Item_InstaDoc"}, // 0.24%
			{8918.93711414104, "optic_AMS_snd"}, // 0.23%
			{8941.6128511025, "optic_KHS_blk"}, // 0.23%
			{8964.28858806395, "optic_KHS_hex"}, // 0.23%
			{8986.9643250254, "optic_KHS_old"}, // 0.23%
			{9009.64006198685, "optic_KHS_tan"}, // 0.23%
			{9032.3157989483, "optic_AMS_khk"}, // 0.23%
			{9054.99153590975, "optic_AMS"}, // 0.23%
			{9076.85742512258, "optic_DMS"}, // 0.22%
			{9097.91346658679, "optic_SOS"}, // 0.21%
			{9118.96950805099, "optic_SOS_khk_F"}, // 0.21%
			{9140.02554951519, "optic_LRPS"}, // 0.21%
			{9161.0815909794, "optic_LRPS_tna_F"}, // 0.21%
			{9182.1376324436, "optic_LRPS_ghex_F"}, // 0.21%
			{9201.49496887411, "H_HelmetB"}, // 0.19%
			{9220.85230530462, "H_HelmetB_paint"}, // 0.19%
			{9240.20964173512, "H_HelmetB_light"}, // 0.19%
			{9259.56697816563, "H_HelmetB_plain_blk"}, // 0.19%
			{9278.92431459614, "H_HelmetSpecB_blk"}, // 0.19%
			{9298.28165102664, "H_HelmetSpecB_paint2"}, // 0.19%
			{9317.63898745715, "H_HelmetSpecB_paint1"}, // 0.19%
			{9336.99632388766, "H_HelmetIA"}, // 0.19%
			{9356.35366031816, "H_HelmetSpecB"}, // 0.19%
			{9372.22667619118, "5Rnd_127x108_Mag"}, // 0.16%
			{9388.09969206419, "7Rnd_408_Mag"}, // 0.16%
			{9403.48679928804, "muzzle_snds_B"}, // 0.15%
			{9416.39169024171, "H_HelmetB_desert"}, // 0.13%
			{9429.29658119538, "H_HelmetB_snakeskin"}, // 0.13%
			{9442.20147214905, "H_HelmetB_grass"}, // 0.13%
			{9455.10636310272, "H_HelmetIA_camo"}, // 0.13%
			{9468.0112540564, "H_HelmetIA_net"}, // 0.13%
			{9480.91614501007, "H_HelmetB_light_grass"}, // 0.13%
			{9493.82103596374, "H_HelmetB_light_sand"}, // 0.13%
			{9506.72592691741, "H_HelmetLeaderO_ghex_F"}, // 0.13%
			{9519.63081787109, "H_HelmetSpecO_ghex_F"}, // 0.13%
			{9532.53570882476, "H_HelmetB_tna_F"}, // 0.13%
			{9545.44059977843, "H_Beret_gen_F"}, // 0.13%
			{9558.3454907321, "H_HelmetB_Light_tna_F"}, // 0.13%
			{9571.25038168578, "H_HelmetB_Enh_tna_F"}, // 0.13%
			{9584.15527263945, "H_Helmet_Skate"}, // 0.13%
			{9597.06016359312, "H_BandMask_demon"}, // 0.13%
			{9609.96505454679, "H_HelmetCrew_O_ghex_F"}, // 0.13%
			{9622.86994550046, "H_HelmetB_light_black"}, // 0.13%
			{9635.77483645414, "H_HelmetB_light_desert"}, // 0.13%
			{9648.67972740781, "H_HelmetB_light_snakeskin"}, // 0.13%
			{9661.58461836148, "H_HelmetB_sand"}, // 0.13%
			{9674.48950931515, "H_HelmetB_black"}, // 0.13%
			{9687.39440026883, "H_BandMask_reaper"}, // 0.13%
			{9700.2992912225, "H_BandMask_khk"}, // 0.13%
			{9713.20418217617, "H_HelmetB_TI_tna_F"}, // 0.13%
			{9725.90259487458, "5Rnd_127x108_APDS_Mag"}, // 0.13%
			{9737.57393007533, "U_B_FullGhillie_sard"}, // 0.12%
			{9749.24526527608, "U_I_FullGhillie_sard"}, // 0.12%
			{9760.91660047682, "U_B_FullGhillie_lsh"}, // 0.12%
			{9772.58793567757, "U_O_FullGhillie_ard"}, // 0.12%
			{9784.25927087832, "U_O_FullGhillie_lsh"}, // 0.12%
			{9795.93060607906, "U_O_FullGhillie_sard"}, // 0.12%
			{9807.60194127981, "U_I_FullGhillie_ard"}, // 0.12%
			{9819.27327648056, "U_I_FullGhillie_lsh"}, // 0.12%
			{9830.9446116813, "U_B_FullGhillie_ard"}, // 0.12%
			{9839.04308916753, "muzzle_snds_B_snd_F"}, // 0.08%
			{9847.14156665377, "muzzle_snds_B_khk_F"}, // 0.08%
			{9855.07807459027, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.08%
			{9863.01458252678, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.08%
			{9869.46702800362, "H_PilotHelmetHeli_O"}, // 0.06%
			{9875.91947348045, "H_HelmetSpecO_blk"}, // 0.06%
			{9882.37191895729, "H_CrewHelmetHeli_B"}, // 0.06%
			{9888.82436443412, "H_CrewHelmetHeli_O"}, // 0.06%
			{9895.27680991096, "H_CrewHelmetHeli_I"}, // 0.06%
			{9901.7292553878, "H_HelmetO_oucamo"}, // 0.06%
			{9908.18170086463, "H_HelmetLeaderO_oucamo"}, // 0.06%
			{9914.63414634147, "H_HelmetSpecO_ocamo"}, // 0.06%
			{9921.0865918183, "H_PilotHelmetHeli_B"}, // 0.06%
			{9927.53903729514, "H_HelmetB_camo"}, // 0.06%
			{9933.99148277198, "H_HelmetO_ocamo"}, // 0.06%
			{9940.44392824881, "H_HelmetO_ghex_F"}, // 0.06%
			{9946.89637372565, "H_PilotHelmetFighter_I"}, // 0.06%
			{9953.34881920249, "H_PilotHelmetFighter_O"}, // 0.06%
			{9959.80126467932, "H_PilotHelmetFighter_B"}, // 0.06%
			{9966.25371015616, "H_HelmetCrew_I"}, // 0.06%
			{9972.70615563299, "H_HelmetCrew_O"}, // 0.06%
			{9979.15860110983, "H_HelmetCrew_B"}, // 0.06%
			{9985.61104658667, "H_HelmetLeaderO_ocamo"}, // 0.06%
			{9992.0634920635, "H_PilotHelmetHeli_I"}, // 0.06%
			{9996.82539682541, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.05%
			{10000, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"} // 0.03%
		};
	};

};
