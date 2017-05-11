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
	class CUP_C_UAZ_Open_TK_CIV                            { quality = 1; price = 3000; };
	class CUP_C_UAZ_Unarmed_TK_CIV                        { quality = 1; price = 3500; };
    class CUP_O_UAZ_AGS30_CHDKZ                            { quality = 1; price = 4000; };
    class CUP_O_UAZ_AGS30_RU                            { quality = 1; price = 4000; };
    class CUP_O_UAZ_AGS30_TKA                            { quality = 1; price = 4000; };
    class CUP_O_UAZ_MG_CHDKZ                            { quality = 1; price = 3500; };
    class CUP_O_UAZ_MG_RU                                { quality = 1; price = 3500; };
    class CUP_O_UAZ_MG_TKA                                { quality = 1; price = 3500; };
    class CUP_O_UAZ_Open_CHDKZ                            { quality = 1; price = 4000; };
    class CUP_O_UAZ_Open_RU                                { quality = 1; price = 4000; };
    class CUP_O_UAZ_Open_TKA                            { quality = 1; price = 8000; };
    class CUP_O_UAZ_SPG9_CHDKZ                            { quality = 1; price = 8000; };
    class CUP_O_UAZ_SPG9_RU                                { quality = 1; price = 8000; };
    class CUP_O_UAZ_SPG9_TKA                            { quality = 1; price = 8000; };
    class CUP_O_UAZ_Unarmed_CHDKZ                        { quality = 1; price = 3500; };
    class CUP_O_UAZ_Unarmed_RU                            { quality = 1; price = 3500; };
    class CUP_O_UAZ_Unarmed_TKA                            { quality = 1; price = 3500; };
    class CUP_B_UAZ_AGS30_ACR                            { quality = 1; price = 5500; };
    class CUP_B_UAZ_AGS30_CDF                            { quality = 1; price = 5500; };
    class CUP_B_UAZ_MG_ACR                                { quality = 1; price = 3500; };
    class CUP_B_UAZ_MG_CDF                                { quality = 1; price = 3500; };
    class CUP_B_UAZ_Open_ACR                            { quality = 1; price = 4000; };
    class CUP_B_UAZ_Open_CDF                            { quality = 1; price = 4000; };
    class CUP_B_UAZ_SPG9_ACR                            { quality = 1; price = 8000; };
    class CUP_B_UAZ_SPG9_CDF                            { quality = 1; price = 8000; };
    class CUP_B_UAZ_Unarmed_ACR                            { quality = 1; price = 3500; };
    class CUP_B_UAZ_Unarmed_CDF                            { quality = 1; price = 3500; };
    class CUP_I_UAZ_AGS30_UN                            { quality = 1; price = 5500; };
    class CUP_I_UAZ_MG_UN                                { quality = 1; price = 3500; };
    class CUP_I_UAZ_Open_UN                                { quality = 1; price = 4000; };
    class CUP_I_UAZ_SPG9_UN                                { quality = 1; price = 8000; };
    class CUP_I_UAZ_Unarmed_UN                            { quality = 1; price = 3500; };
    class CUP_B_Ural_CDF                                { quality = 1; price = 12000; };
    class CUP_B_Ural_Empty_CDF                            { quality = 1; price = 12000; };
    class CUP_B_Ural_Open_CDF                            { quality = 1; price = 10000; };
    class CUP_B_Ural_Reammo_CDF                            { quality = 1; price = 15000; };
    class CUP_B_Ural_Refuel_CDF                            { quality = 1; price = 13000; };
    class CUP_B_Ural_Repair_CDF                            { quality = 1; price = 14000; };
    class CUP_B_Ural_ZU23_CDF                            { quality = 1; price = 25000; };
    class CUP_O_Ural_CHDKZ                                { quality = 1; price = 12000; };
    class CUP_O_Ural_Empty_CHDKZ                        { quality = 1; price = 12000; };
    class CUP_O_Ural_Empty_RU                            { quality = 1; price = 12000; };
    class CUP_O_Ural_Empty_SLA                            { quality = 1; price = 12000; };
    class CUP_O_Ural_Empty_TKA                            { quality = 1; price = 12000; };
    class CUP_O_Ural_Open_CHDKZ                            { quality = 1; price = 1000; };
    class CUP_O_Ural_Open_RU                            { quality = 1; price = 10000; };
    class CUP_O_Ural_Open_SLA                            { quality = 1; price = 10000; };
    class CUP_O_Ural_Open_TKA                            { quality = 1; price = 10000; };
    class CUP_O_Ural_RU                                    { quality = 1; price = 12000; };
    class CUP_O_Ural_Reammo_CHDKZ                        { quality = 1; price = 15000; };
    class CUP_O_Ural_Reammo_RU                            { quality = 1; price = 15000; };
    class CUP_O_Ural_Reammo_SLA                            { quality = 1; price = 15000; };
    class CUP_O_Ural_Reammo_TKA                            { quality = 1; price = 15000; };
    class CUP_O_Ural_Refuel_CHDKZ                        { quality = 1; price = 13000; };
    class CUP_O_Ural_Refuel_RU                            { quality = 1; price = 13000; };
    class CUP_O_Ural_Refuel_SLA                            { quality = 1; price = 13000; };
    class CUP_O_Ural_Refuel_TKA                            { quality = 1; price = 13000; };
    class CUP_O_Ural_Repair_CHDKZ                        { quality = 1; price = 14000; };
    class CUP_O_Ural_Repair_RU                            { quality = 1; price = 14000; };
    class CUP_O_Ural_Repair_SLA                            { quality = 1; price = 14000; };
    class CUP_O_Ural_Repair_TKA                            { quality = 1; price = 14000; };
    class CUP_O_Ural_SLA                                { quality = 1; price = 12000; };
    class CUP_O_Ural_TKA                                { quality = 1; price = 12000; };
    class CUP_O_Ural_ZU23_CHDKZ                            { quality = 1; price = 10; };
    class CUP_O_Ural_ZU23_RU                            { quality = 1; price = 25000; };
    class CUP_O_Ural_ZU23_SLA                            { quality = 1; price = 25000; };
    class CUP_O_Ural_ZU23_TKA                            { quality = 1; price = 25000; };
    class CUP_O_Ural_ZU23_TKM                            { quality = 1; price = 25000; };
    class CUP_C_Ural_Civ_01                                { quality = 1; price = 12000; };
    class CUP_C_Ural_Civ_02                                { quality = 1; price = 12000; };
    class CUP_C_Ural_Civ_03                                { quality = 1; price = 12000; };
    class CUP_C_Ural_Open_Civ_01                        { quality = 1; price = 10000; };
    class CUP_C_Ural_Open_Civ_02                        { quality = 1; price = 10000; };
    class CUP_C_Ural_Open_Civ_03                        { quality = 1; price = 10000; };
    class CUP_I_Ural_Empty_UN                            { quality = 1; price = 12000; };
    class CUP_I_Ural_Reammo_UN                            { quality = 1; price = 15000; };
    class CUP_I_Ural_Repair_UN                            { quality = 1; price = 14000; };
    class CUP_I_Ural_UN                                    { quality = 1; price = 12000; };
    class CUP_I_Ural_ZU23_NAPA                            { quality = 1; price = 25000; };
    class CUP_I_Ural_ZU23_TK_Gue                        { quality = 1; price = 25000; };
    class CUP_C_Datsun                                    { quality = 1; price = 3000; };
    class CUP_C_Datsun_4seat                            { quality = 1; price = 3000; };
    class CUP_C_Datsun_Covered                            { quality = 1; price = 3000; };
    class CUP_C_Datsun_Plain                            { quality = 1; price = 3000; };
    class CUP_C_Datsun_Tubeframe                        { quality = 1; price = 3000; };
    class CUP_I_Datsun_PK                                { quality = 1; price = 3000; };
    class CUP_I_Datsun_PK_Random                        { quality = 1; price = 3500; };
    class CUP_I_Datsun_PK_TK                            { quality = 1; price = 3500; };
    class CUP_I_Datsun_PK_TK_Random                        { quality = 1; price = 3000; };
    class CUP_O_Datsun_PK                                { quality = 1; price = 3000; };
    class CUP_O_Datsun_PK_Random                        { quality = 1; price = 3000; };
    class CUP_C_LR_Transport_CTK                        { quality = 1; price = 8000; };
    class CUP_B_M1030                                    { quality = 1; price = 500; };
    class CUP_BAF_Jackal2_GMG_D                            { quality = 1; price = 35000; };
    class CUP_BAF_Jackal2_GMG_W                            { quality = 1; price = 35000; };
    class CUP_BAF_Jackal2_L2A1_D                        { quality = 1; price = 30000; };
    class CUP_BAF_Jackal2_L2A1_W                        { quality = 1; price = 30000; };
    class CUP_B_Dingo_Des                                { quality = 1; price = 40000; };
    class CUP_B_Dingo_GL_Des                            { quality = 1; price = 45000; };
    class CUP_B_Dingo_GL_Wdl                            { quality = 1; price = 45000; };
    class CUP_B_Dingo_Wdl                                { quality = 1; price = 40000; };
    class CUP_B_HMMWV_AGS_GPK_ACR                        { quality = 1; price = 26000; };
    class CUP_B_HMMWV_Ambulance_ACR                        { quality = 1; price = 26000; };
    class CUP_B_HMMWV_Ambulance_USA                        { quality = 1; price = 26000; };
    class CUP_B_HMMWV_Ambulance_USMC                    { quality = 1; price = 26000; };
    class CUP_B_HMMWV_Avenger_USA                        { quality = 1; price = 60000; };
    class CUP_B_HMMWV_Avenger_USMC                        { quality = 1; price = 60000; };
    class CUP_B_HMMWV_Crows_M2_USA                        { quality = 1; price = 27000; };
    class CUP_B_HMMWV_Crows_MK19_USA                    { quality = 1; price = 27000; };
    class CUP_B_HMMWV_DSHKM_GPK_ACR                        { quality = 1; price = 28000; };
    class CUP_B_HMMWV_M1114_USMC                        { quality = 1; price = 28000; };
    class CUP_B_HMMWV_M2_GPK_ACR                        { quality = 1; price = 28000; };
    class CUP_B_HMMWV_M2_GPK_USA                        { quality = 1; price = 28000; };
    class CUP_B_HMMWV_M2_USA                            { quality = 1; price = 28000; };
    class CUP_B_HMMWV_M2_USMC                            { quality = 1; price = 28000; };
    class CUP_B_HMMWV_MK19_USA                            { quality = 1; price = 24000; };
    class CUP_B_HMMWV_MK19_USMC                            { quality = 1; price = 24000; };
    class CUP_B_HMMWV_SOV_USA                            { quality = 1; price = 23000; };
    class CUP_B_HMMWV_TOW_USA                            { quality = 1; price = 35000; };
    class CUP_B_HMMWV_TOW_USMC                            { quality = 1; price = 35000; };
    class CUP_B_HMMWV_Terminal_USA                        { quality = 1; price = 23000; };
    class CUP_B_HMMWV_Transport_USA                        { quality = 1; price = 23000; };
    class CUP_B_HMMWV_Unarmed_USA                        { quality = 1; price = 23000; };
    class CUP_B_HMMWV_Unarmed_USMC                        { quality = 1; price = 23000; };
    class CUP_B_LR_Ambulance_CZ_D                        { quality = 1; price = 3000; };
    class CUP_B_LR_Ambulance_CZ_W                        { quality = 1; price = 3000; };
    class CUP_B_LR_Ambulance_GB_D                        { quality = 1; price = 3000; };
    class CUP_B_LR_Ambulance_GB_W                        { quality = 1; price = 3000; };
    class CUP_B_LR_MG_CZ_W                                { quality = 1; price = 10000; };
    class CUP_B_LR_MG_GB_W                                { quality = 1; price = 10000; };
    class CUP_B_LR_Special_CZ_W                            { quality = 1; price = 12000; };
    class CUP_B_LR_Special_Des_CZ_D                        { quality = 1; price = 12000; };
    class CUP_B_LR_Transport_CZ_D                        { quality = 1; price = 8000; };
    class CUP_B_LR_Transport_CZ_W                        { quality = 1; price = 8000; };
    class CUP_B_LR_Transport_GB_D                        { quality = 1; price = 8000; };
    class CUP_B_LR_Transport_GB_W                        { quality = 1; price = 8000; };
    class CUP_O_LR_Ambulance_TKA                        { quality = 1; price = 3000; };
    class CUP_O_LR_MG_TKA                                { quality = 1; price = 10000; };
    class CUP_O_LR_MG_TKM                                { quality = 1; price = 10000; };
    class CUP_O_LR_SPG9_TKA                                { quality = 1; price = 15000; };
    class CUP_O_LR_SPG9_TKM                                { quality = 1; price = 15000; };
    class CUP_O_LR_Transport_TKA                        { quality = 1; price = 8000; };
    class CUP_O_LR_Transport_TKM                        { quality = 1; price = 8000; };
    class CUP_I_BRDM2_ATGM_NAPA                            { quality = 1; price = 40000; };
    class CUP_I_BRDM2_ATGM_TK_Gue                        { quality = 1; price = 40000; };
    class CUP_I_BRDM2_HQ_NAPA                            { quality = 1; price = 35000; };
    class CUP_I_BRDM2_HQ_TK_Gue                            { quality = 1; price = 37000; };
    class CUP_I_BRDM2_HQ_UN                                { quality = 1; price = 37000; };
    class CUP_I_BRDM2_NAPA                                { quality = 1; price = 30000; };
    class CUP_I_BRDM2_TK_Gue                            { quality = 1; price = 30000; };
    class CUP_I_BRDM2_UN                                { quality = 1; price = 30000; };
    class CUP_O_BRDM2_ATGM_CHDKZ                        { quality = 1; price = 38000; };
    class CUP_O_BRDM2_ATGM_SLA                            { quality = 1; price = 38000; };
    class CUP_O_BRDM2_ATGM_TKA                            { quality = 1; price = 38000; };
    class CUP_O_BRDM2_CHDKZ                                { quality = 1; price = 28000; };
    class CUP_O_BRDM2_HQ_CHDKZ                            { quality = 1; price = 28000; };
    class CUP_O_BRDM2_HQ_SLA                            { quality = 1; price = 28000; };
    class CUP_O_BRDM2_HQ_TKA                            { quality = 1; price = 28000; };
    class CUP_O_BRDM2_SLA                                { quality = 1; price = 28000; };
    class CUP_O_BRDM2_TKA                                { quality = 1; price = 28000; };
    class CUP_B_BRDM2_ATGM_CDF                            { quality = 1; price = 38000; };
    class CUP_B_BRDM2_CDF                                { quality = 1; price = 28000; };
    class CUP_B_BRDM2_HQ_CDF                            { quality = 1; price = 28000; };
    class CUP_B_LAV25M240_USMC                            { quality = 1; price = 37000; };
    class CUP_B_LAV25_HQ_USMC                            { quality = 1; price = 37000; };
    class CUP_B_LAV25_USMC                                { quality = 1; price = 37000; };
    class CUP_B_BM21_CDF                                { quality = 1; price = 40000; };
    class CUP_O_BM21_CHDKZ                                { quality = 1; price = 40000; };
    class CUP_O_BM21_RU                                    { quality = 1; price = 40000; };
    class CUP_O_BM21_SLA                                { quality = 1; price = 40000; };
    class CUP_O_BM21_TKA                                { quality = 1; price = 40000; };
    class CUP_O_BTR60_TK                                { quality = 1; price = 35000; };
    class CUP_O_BTR90_HQ_RU                                { quality = 1; price = 35000; };
    class CUP_O_BTR90_RU                                { quality = 1; price = 39000; };
    class CUP_B_M1126_ICV_M2_Desert                        { quality = 1; price = 33000; };
    class CUP_B_M1126_ICV_M2_Desert_Slat                { quality = 1; price = 33000; };
    class CUP_B_M1126_ICV_M2_Woodland                    { quality = 1; price = 33000; };
    class CUP_B_M1126_ICV_M2_Woodland_Slat                { quality = 1; price = 33000; };
    class CUP_B_M1126_ICV_Mk19_Desert                    { quality = 1; price = 33000; };
    class CUP_B_M1126_ICV_Mk19_Desert_Slat                { quality = 1; price = 33000; };
    class CUP_B_M1126_ICV_Mk19_Woodland                    { quality = 1; price = 33000; };
    class CUP_B_M1126_ICV_Mk19_Woodland_Slat            { quality = 1; price = 33000; };
    class CUP_B_M1128_MGS_Desert                        { quality = 1; price = 45000; };
    class CUP_B_M1128_MGS_Desert_Slat                    { quality = 1; price = 45000; };
    class CUP_B_M1128_MGS_Woodland                        { quality = 1; price = 45000; };
    class CUP_B_M1128_MGS_Woodland_Slat                    { quality = 1; price = 45000; };
    class CUP_B_M1129_MC_MK19_Desert                    { quality = 1; price = 70000; };
    class CUP_B_M1129_MC_MK19_Desert_Slat                { quality = 1; price = 70000; };
    class CUP_B_M1129_MC_MK19_Woodland                    { quality = 1; price = 70000; };
    class CUP_B_M1129_MC_MK19_Woodland_Slat                { quality = 1; price = 70000; };
    class CUP_B_M1130_CV_M2_Desert                        { quality = 1; price = 33000; };
    class CUP_B_M1130_CV_M2_Desert_Slat                    { quality = 1; price = 33000; };
    class CUP_B_M1130_CV_M2_Woodland                    { quality = 1; price = 33000; };
    class CUP_B_M1130_CV_M2_Woodland_Slat                { quality = 1; price = 33000; };
    class CUP_B_M1133_MEV_Desert                        { quality = 1; price = 31000; };
    class CUP_B_M1133_MEV_Desert_Slat                    { quality = 1; price = 31000; };
    class CUP_B_M1133_MEV_Woodland                        { quality = 1; price = 31000; };
    class CUP_B_M1133_MEV_Woodland_Slat                    { quality = 1; price = 31000; };
    class CUP_B_M1135_ATGMV_Desert                        { quality = 1; price = 80000; };
    class CUP_B_M1135_ATGMV_Desert_Slat                    { quality = 1; price = 80000; };
    class CUP_B_M1135_ATGMV_Woodland                    { quality = 1; price = 80000; };
    class CUP_B_M1135_ATGMV_Woodland_Slat                { quality = 1; price = 80000; };
    class CUP_B_TowingTractor_USMC                        { quality = 1; price = 10000; };
    class CUP_I_LR_Transport_RACS                        { quality = 1; price = 10000; };
    class CUP_I_LR_MG_RACS                                { quality = 1; price = 10000; };
    class CUP_I_LR_Ambulance_RACS                        { quality = 1; price = 10000; };
    class CUP_C_Octavia_CIV                                { quality = 1; price = 5200; };
    class CUP_C_Skoda_Red_Civ                            { quality = 1; price = 5600; };
    class CUP_C_Skoda_White_Civ                            { quality = 1; price = 5600; };
    class CUP_C_Skoda_Blue_Civ                            { quality = 1; price = 5600; };
    class CUP_C_Skoda_Green_Civ                            { quality = 1; price = 5600; };
    class CUP_C_Golf4_red_Civ                            { quality = 1; price = 5800; };
    class CUP_C_Golf4_black_Civ                            { quality = 1; price = 5800; };
    class CUP_C_Golf4_yellow_Civ                        { quality = 1; price = 5800; };
    class CUP_C_Golf4_blue_Civ                            { quality = 1; price = 5800; };
    class CUP_C_Golf4_white_Civ                            { quality = 1; price = 5800; };
    class CUP_C_Golf4_green_Civ                            { quality = 1; price = 5800; };
    class CUP_C_Golf4_random_Civ                        { quality = 1; price = 5800; };
    class CUP_C_Golf4_whiteblood_Civ                    { quality = 1; price = 5800; };
    class CUP_C_Golf4_camo_Civ                            { quality = 1; price = 5800; };
    class CUP_C_Golf4_camodigital_Civ                    { quality = 1; price = 5800; };
    class CUP_C_Golf4_camodark_Civ                        { quality = 1; price = 5800; };
    class CUP_C_Golf4_reptile_Civ                        { quality = 1; price = 5800; };
    class CUP_C_Golf4_kitty_Civ                            { quality = 1; price = 5800; };
    class CUP_B_AAV_USMC                                { quality = 1; price = 40000; };
    class CUP_B_M113_Med_USA                            { quality = 1; price = 40000; };
    class CUP_B_M113_USA                                { quality = 1; price = 40000; };
    class CUP_I_M113_Med_RACS                            { quality = 1; price = 40000; };
    class CUP_I_M113_Med_UN                                { quality = 1; price = 40000; };
    class CUP_I_M113_RACS                                { quality = 1; price = 40000; };
    class CUP_I_M113_UN                                    { quality = 1; price = 40000; };
    class CUP_O_M113_Med_TKA                            { quality = 1; price = 40000; };
    class CUP_O_M113_TKA                                { quality = 1; price = 40000; };
    class CUP_B_M163_USA                                { quality = 1; price = 47000; };
    class CUP_B_M1A1_DES_USMC                            { quality = 1; price = 55000; };
    class CUP_B_M1A1_DES_US_Army                        { quality = 1; price = 55000; };
    class CUP_B_M1A1_Woodland_USMC                        { quality = 1; price = 55000; };
    class CUP_B_M1A1_Woodland_US_Army                    { quality = 1; price = 55000; };
    class CUP_B_M1A2_TUSK_MG_DES_USMC                    { quality = 1; price = 57000; };
    class CUP_B_M1A2_TUSK_MG_DES_US_Army                { quality = 1; price = 57000; };
    class CUP_B_M1A2_TUSK_MG_USMC                        { quality = 1; price = 57000; };
    class CUP_B_M1A2_TUSK_MG_US_Army                    { quality = 1; price = 57000; };
    class CUP_B_M270_DPICM_USA                            { quality = 1; price = 100000; };
    class CUP_B_M270_DPICM_USMC                            { quality = 1; price = 100000; };
    class CUP_B_M270_HE_USA                                { quality = 1; price = 100000; };
    class CUP_B_M270_HE_USMC                            { quality = 1; price = 100000; };
    class CUP_B_M2Bradley_USA_D                            { quality = 1; price = 120000; };
    class CUP_B_M2Bradley_USA_W                            { quality = 1; price = 120000; };
    class CUP_B_M2A3Bradley_USA_D                        { quality = 1; price = 120000; };
    class CUP_B_M2A3Bradley_USA_W                        { quality = 1; price = 120000; };
    class CUP_I_T55_TK_GUE                                { quality = 1; price = 80000; };
    class CUP_O_T55_TK                                    { quality = 1; price = 80000; };
    class CUP_O_T72_CHDKZ                                { quality = 1; price = 90000; };
    class CUP_O_T72_RU                                    { quality = 1; price = 90000; };
    class CUP_O_T72_SLA                                    { quality = 1; price = 90000; };
    class CUP_O_T72_TKA                                    { quality = 1; price = 90000; };
    class CUP_B_T72_CDF                                    { quality = 1; price = 90000; };
    class CUP_I_T72_NAPA                                { quality = 1; price = 90000; };
    class CUP_I_T72_RACS                                { quality = 1; price = 90000; };
    class CUP_B_ZSU23_CDF                                { quality = 1; price = 120000; };
    class CUP_O_ZSU23_ChDKZ                                { quality = 1; price = 120000; };
    class CUP_O_ZSU23_SLA                                { quality = 1; price = 120000; };
    class CUP_O_ZSU23_TK                                { quality = 1; price = 120000; };
    class CUP_T34_BASE                                    { quality = 1; price = 40000; };
    class CUP_I_T34_NAPA                                { quality = 1; price = 40000; };
    class CUP_I_T34_TK_GUE                                { quality = 1; price = 40000; };
    class CUP_O_T34_TKA                                    { quality = 1; price = 40000; };
    class CUP_B_AH1Z                                    { quality = 1; price = 90000; };
    // class CUP_B_AH1Z_14RndHydrax                        { quality = 1; price = 100000; };
    class CUP_B_AH1Z_7RndHydra                            { quality = 1; price = 100000; };
    class CUP_B_AH1Z_AT                                    { quality = 1; price = 120000; };
    class CUP_B_AH1Z_Escort                                { quality = 1; price = 105000; };
    class CUP_B_AH1Z_NOAA                                { quality = 1; price = 87000; };
    class CUP_B_AH1Z_NoWeapons                            { quality = 1; price = 80000; };
    class CUP_B_AH1_AT_BAF                                { quality = 1; price = 100000; };
    class CUP_B_AH1_BAF                                    { quality = 1; price = 87000; };
    class CUP_B_AH1_ES_BAF                                { quality = 1; price = 110000; };
    class CUP_B_AH1_MR_BAF                                { quality = 1; price = 110000; };
    class CUP_B_AH1_NO_BAF                                { quality = 1; price = 130000; };
    class CUP_B_AH64D_AT_USA                            { quality = 1; price = 140000; };
    class CUP_B_AH64D_ES_USA                            { quality = 1; price = 140000; };
    class CUP_B_AH64D_MR_USA                            { quality = 1; price = 140000; };
    class CUP_B_AH64D_NO_USA                            { quality = 1; price = 140000; };
    class CUP_B_AH64D_USA                                { quality = 1; price = 130000; };
    class CUP_B_AW159_Armed_BAF                            { quality = 1; price = 90000; };
    class CUP_B_AW159_Unarmed_BAF                        { quality = 1; price = 90000; };
    class CUP_B_CH47F_GB                                { quality = 1; price = 50000; };
    class CUP_B_CH47F_USA                                { quality = 1; price = 50000; };
    class CUP_B_CH53E_USMC                                { quality = 1; price = 55000; };
    class CUP_B_MH60S_FFV_USMC                            { quality = 1; price = 45000; };
    class CUP_B_MH60S_USMC                                { quality = 1; price = 45000; };
    class CUP_B_UH1Y_GUNSHIP_USMC                        { quality = 1; price = 60000; };
    class CUP_B_UH1Y_MEV_USMC                            { quality = 1; price = 40000; };
    class CUP_B_UH1Y_UNA_USMC                            { quality = 1; price = 45000; };
    class CUP_B_UH60L_FFV_US                            { quality = 1; price = 45000; };
    class CUP_B_UH60L_US                                { quality = 1; price = 45000; };
    class CUP_B_UH60L_Unarmed_FFV_MEV_US                { quality = 1; price = 42500; };
    class CUP_B_UH60L_Unarmed_FFV_US                    { quality = 1; price = 42500; };
    class CUP_B_UH60L_Unarmed_US                        { quality = 1; price = 42500; };
    class CUP_I_UH60L_FFV_RACS                            { quality = 1; price = 42500; };
    class CUP_I_UH60L_RACS                                { quality = 1; price = 42500; };
    class CUP_I_UH60L_Unarmed_FFV_MEV_Racs                { quality = 1; price = 42500; };
    class CUP_I_UH60L_Unarmed_FFV_Racs                    { quality = 1; price = 42500; };
    class CUP_I_UH60L_Unarmed_RACS                        { quality = 1; price = 42500; };
    class CUP_B_UH60M_FFV_US                            { quality = 1; price = 43750; };
    class CUP_B_UH60M_US                                { quality = 1; price = 43750; };
    class CUP_B_UH60M_Unarmed_FFV_MEV_US                { quality = 1; price = 43750; };
    class CUP_B_UH60M_Unarmed_FFV_US                    { quality = 1; price = 43750; };
    class CUP_B_UH60M_Unarmed_US                        { quality = 1; price = 43750; };
    class CUP_O_Mi8_CHDKZ                                { quality = 1; price = 30000; };
    class CUP_O_Mi8_RU                                    { quality = 1; price = 45000; };
    class CUP_O_Mi8_SLA_1                                { quality = 1; price = 30000; };
    class CUP_O_Mi8_SLA_2                                { quality = 1; price = 45000; };
    class CUP_O_Mi8_medevac_CHDKZ                        { quality = 1; price = 30000; };
    class CUP_O_Mi8_medevac_RU                            { quality = 1; price = 45000; };
    class CUP_B_Mi171Sh_ACR                                { quality = 1; price = 60000; };
    class CUP_B_Mi171Sh_Unarmed_ACR                        { quality = 1; price = 30000; };
    class CUP_B_Mi17_CDF                                { quality = 1; price = 30000; };
    class CUP_B_Mi17_medevac_CDF                        { quality = 1; price = 30000; };
    class CUP_I_Mi17_UN                                    { quality = 1; price = 30000; };
    class CUP_O_Mi17_TK                                    { quality = 1; price = 30000; };
    class CUP_C_Mi17_Civilian_RU                        { quality = 1; price = 25000; };
    class CUP_B_Mi24_D_CDF                                { quality = 1; price = 80000; };
    class CUP_I_Mi24_D_ION                                { quality = 1; price = 80000; };
    class CUP_I_Mi24_D_UN                                { quality = 1; price = 30000; };
    class CUP_O_Mi24_D_TK                                { quality = 1; price = 60000; };
    class CUP_O_Mi24_P_RU                                { quality = 1; price = 65000; };
    class CUP_O_Mi24_V_RU                                { quality = 1; price = 55000; };
    class CUP_B_Mi35_CZ                                    { quality = 1; price = 70000; };
    class CUP_I_M163_RACS                                { quality = 1; price = 35000; };
    class CUP_O_UH1H_TKA                                { quality = 1; price = 20000; };
    class CUP_I_UH1H_TK_GUE                                { quality = 1; price = 20000; };
    class CUP_B_UH1D_GER_KSK                            { quality = 1; price = 20000; };
    class CUP_B_UH1D_GER_KSK_DES                        { quality = 1; price = 20000; };
    class CUP_B_Merlin_HC3_GB                            { quality = 1; price = 35000; };
    class CUP_B_Merlin_HC3A_GB                            { quality = 1; price = 35000; };
    class CUP_B_AW159_Unarmed_GB                        { quality = 1; price = 80000; };
    class CUP_B_AW159_Hellfire_GB                        { quality = 1; price = 100000; };
    class CUP_B_AW159_Cannon_GB                            { quality = 1; price = 90000; };
    class CUP_B_SA330_Puma_HC1_BAF                        { quality = 1; price = 28000; };
    class CUP_B_SA330_Puma_HC2_BAF                        { quality = 1; price = 28000; };
    class CUP_I_SA330_Puma_HC1_RACS                        { quality = 1; price = 28000; };
    class CUP_I_SA330_Puma_HC2_RACS                        { quality = 1; price = 28000; };
    class CUP_O_KA50_SLA                                { quality = 1; price = 75000; };
    class CUP_O_KA50_AA_SLA                                { quality = 1; price = 78000; };
    class CUP_O_KA50_RU                                    { quality = 1; price = 75000; };
    class CUP_O_KA50_AA_RU                                { quality = 1; price = 78000; };
    class CUP_C_C47_CIV                                    { quality = 1; price = 150000; };
    class CUP_C_DC3_CIV                                    { quality = 1; price = 150000; };
    class CUP_B_MV22_USMC                                { quality = 1; price = 80000; };
    class CUP_B_A10_AT_USA                                { quality = 1; price = 200000; };
    class CUP_B_A10_CAS_USA                                { quality = 1; price = 200000; };
    class CUP_B_Su25_CDF                                { quality = 1; price = 200000; };
    class CUP_O_Su25_RU_1                                { quality = 1; price = 200000; };
    class CUP_O_Su25_RU_2                                { quality = 1; price = 200000; };
    class CUP_O_Su25_RU_3                                { quality = 1; price = 200000; };
    class CUP_O_Su25_SLA                                { quality = 1; price = 200000; };
    class CUP_O_Su25_TKA                                { quality = 1; price = 200000; };
    class CUP_B_C130J_USMC                                { quality = 1; price = 150000; };
    class CUP_B_C130J_Cargo_USMC                        { quality = 1; price = 150000; };
    class CUP_B_C130J_GB                                { quality = 1; price = 150000; };
    class CUP_B_C130J_Cargo_GB                            { quality = 1; price = 150000; };
    class CUP_I_C130J_AAF                                { quality = 1; price = 150000; };
    class CUP_I_C130J_Cargo_AAF                            { quality = 1; price = 150000; };
    class CUP_I_C130J_RACS                                { quality = 1; price = 150000; };
    class CUP_I_C130J_Cargo_RACS                        { quality = 1; price = 150000; };
    class CUP_O_C130J_TKA                                { quality = 1; price = 150000; };
    class CUP_O_C130J_Cargo_TKA                            { quality = 1; price = 150000; };
    class CUP_B_F35B_AA_USMC                            { quality = 1; price = 200000; };
    class CUP_B_F35B_CAS_USMC                            { quality = 1; price = 200000; };
    class CUP_B_F35B_LGB_USMC                            { quality = 1; price = 200000; };
    class CUP_B_F35B_AA_BAF                                { quality = 1; price = 200000; };
    class CUP_B_F35B_CAS_BAF                            { quality = 1; price = 200000; };
    class CUP_B_F35B_LGB_BAF                            { quality = 1; price = 200000; };
    class CUP_B_AV8B_CAP_USMC                            { quality = 1; price = 250000; };
    class CUP_B_AV8B_MK82_USMC                            { quality = 1; price = 250000; };
    class CUP_B_AV8B_GBU12_USMC                            { quality = 1; price = 250000; };
    class CUP_B_AV8B_AGM_USMC                            { quality = 1; price = 250000; };
    class CUP_I_AV8B_CAP_AAF                            { quality = 1; price = 250000; };
    class CUP_I_AV8B_MK82_AAF                            { quality = 1; price = 250000; };
    class CUP_I_AV8B_GBU12_AAF                            { quality = 1; price = 250000; };
    class CUP_I_AV8B_AGM_AAF                            { quality = 1; price = 250000; };
    class CUP_B_GR9_CAP_GB                                { quality = 1; price = 250000; };
    class CUP_B_GR9_MK82_GB                                { quality = 1; price = 250000; };
    class CUP_B_GR9_GBU12_GB                            { quality = 1; price = 250000; };
    class CUP_B_GR9_AGM_GB                                { quality = 1; price = 250000; };
    class CUP_O_SU34_LGB_RU                                { quality = 1; price = 250000; };
    class CUP_O_SU34_LGB_SLA                            { quality = 1; price = 250000; };
    class CUP_O_SU34_AGM_RU                                { quality = 1; price = 250000; };
    class CUP_O_SU34_AGM_SLA                            { quality = 1; price = 250000; };
    class CUP_I_SU34_LGB_AAF                            { quality = 1; price = 250000; };
    class CUP_I_SU34_AGM_AAF                            { quality = 1; price = 250000; };
    class CUP_B_SU34_LGB_CDF                            { quality = 1; price = 250000; };
    class CUP_B_SU34_AGM_CDF                            { quality = 1; price = 250000; };
	class CUP_C_Fishing_Boat_Chernarus                    { quality = 1; price = 10; };
    class CUP_B_RHIB2Turret_USMC                        { quality = 1; price = 10; };
    class CUP_B_RHIB_USMC                                { quality = 1; price = 10; };
    class CUP_B_RHIB2Turret_RACS                        { quality = 1; price = 10; };
    class CUP_B_RHIB_RACS                                { quality = 1; price = 10; };
    class CUP_B_Seafox_USMC                                { quality = 1; price = 10; };
    class CUP_B_Seafox_USV_USMC                            { quality = 1; price = 10; };
    class CUP_B_Zodiac_USMC                                { quality = 1; price = 10; };
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

	class hlc_rifle_g3sg1	 { quality = 1; price = 550; };
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

		//Ammo
	class hlc_30rnd_556x45_EPR { quality = 1; price = 30; };
	class hlc_30rnd_556x45_SOST { quality = 1; price = 30; };
	class hlc_30rnd_556x45_SPR { quality = 1; price = 30; };

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
	class hlc_30rnd_68x43_Tracer { quality = 1; price = 30; };
	class hlc_30rnd_68x43_IRDIM { quality = 1; price = 30; };
	
	
	//TFARRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
	class TFAR_rt1523g { quality = 1; price = 50; };
	class TFAR_rt1523g_big { quality = 1; price = 50; };
	class TFAR_rt1523g_black { quality = 1; price = 50; };
	class TFAR_rt1523g_fabric { quality = 1; price = 50; };
	class TFAR_rt1523g_green { quality = 1; price = 50; };
	class TFAR_rt1523g_rhs { quality = 1; price = 50; };
	class TFAR_rt1523g_sage { quality = 1; price = 50; };
	class TFAR_mr3000 { quality = 1; price = 50; };
	class TFAR_mr3000_multicam { quality = 1; price = 50; };
	class TFAR_mr3000_rh { quality = 1; price = 50; };
	
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
	spawnInterval = 30;

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
	maximumPositionCoverage = 30;

 	/**
 	 * Limit the number of loot positions per building. If the 
 	 * above percentage value exceeds this value, it will be capped.
 	 *
 	 * Example: Coverage is 50%. Building has 60 loot positions defined.
 	 * This results in 30 loot positions and that is too much. So we
 	 * cap this at 10
 	 */
	maximumNumberOfLootSpotsPerBuilding = 3;

	/**
	 * Exile spawns a random number of items per loot spot. This 
	 * is the upper cap for that. So 3 means it could spawn 1, 2 
	 * or 3.
	 */
	maximumNumberOfItemsPerLootSpot = 2;

	/**
	 * Radius in meter to spawn loot AROUND each player.
	 * Do NOT touch this value if you dont know what you do.
	 * The higher the number, the higher the drop rates, the
	 * easier your server will lag.
	 *
	 * 50m  = Minimum
	 * 200m = Maximum
	 */
	spawnRadius = 60;

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
	
	maxDeposit = 10000;
};

class CfgPlayer 
{
	// In minutes ammount of time it takes to go from 100 - 0 if stationary
	hungerDecay = 90;
	thirstDecay = 60;

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
	maximumNumberOfTerritoriesPerPlayer = 2;

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
			"CUP_arifle_XM8_Carbine_FG"
			
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
			"Exile_Car_MB4WDOpen"
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
			"CUP_C_UAZ_Open_TK_CIV",
            "CUP_C_UAZ_Unarmed_TK_CIV",
            "CUP_O_UAZ_AGS30_CHDKZ",
            "CUP_O_UAZ_AGS30_RU",
            "CUP_O_UAZ_AGS30_TKA",
            "CUP_O_UAZ_MG_CHDKZ",
            "CUP_O_UAZ_MG_RU",
            "CUP_O_UAZ_MG_TKA",
            "CUP_O_UAZ_Open_CHDKZ",
            "CUP_O_UAZ_Open_RU",
            "CUP_O_UAZ_Open_TKA",
            "CUP_O_UAZ_SPG9_CHDKZ",
            "CUP_O_UAZ_SPG9_RU",
            "CUP_O_UAZ_SPG9_TKA",
            "CUP_O_UAZ_Unarmed_CHDKZ",
            "CUP_O_UAZ_Unarmed_RU",
            "CUP_O_UAZ_Unarmed_TKA",
            "CUP_B_UAZ_AGS30_ACR",
            "CUP_B_UAZ_AGS30_CDF",
            "CUP_B_UAZ_MG_ACR",
            "CUP_B_UAZ_MG_CDF",
            "CUP_B_UAZ_Open_ACR",
            "CUP_B_UAZ_Open_CDF",
            "CUP_B_UAZ_SPG9_ACR",
            "CUP_B_UAZ_SPG9_CDF",
            "CUP_B_UAZ_Unarmed_ACR",
            "CUP_B_UAZ_Unarmed_CDF",
            "CUP_I_UAZ_AGS30_UN",
            "CUP_I_UAZ_MG_UN",
            "CUP_I_UAZ_Open_UN",
            "CUP_I_UAZ_SPG9_UN",
            "CUP_I_UAZ_Unarmed_UN",
            "CUP_B_Ural_CDF",
            "CUP_B_Ural_Empty_CDF",
            "CUP_B_Ural_Open_CDF",
            "CUP_B_Ural_Reammo_CDF",
            "CUP_B_Ural_Refuel_CDF",
            "CUP_B_Ural_Repair_CDF",
            "CUP_B_Ural_ZU23_CDF",
            "CUP_O_Ural_CHDKZ",
            "CUP_O_Ural_Empty_CHDKZ",
            "CUP_O_Ural_Empty_RU",
            "CUP_O_Ural_Empty_SLA",
            "CUP_O_Ural_Empty_TKA",
            "CUP_O_Ural_Open_CHDKZ",
            "CUP_O_Ural_Open_RU",
            "CUP_O_Ural_Open_SLA",
            "CUP_O_Ural_Open_TKA",
            "CUP_O_Ural_RU",
            "CUP_O_Ural_Reammo_CHDKZ",
            "CUP_O_Ural_Reammo_RU",
            "CUP_O_Ural_Reammo_SLA",
            "CUP_O_Ural_Reammo_TKA",
            "CUP_O_Ural_Refuel_CHDKZ",
            "CUP_O_Ural_Refuel_RU",
            "CUP_O_Ural_Refuel_SLA",
            "CUP_O_Ural_Refuel_TKA",
            "CUP_O_Ural_Repair_CHDKZ",
            "CUP_O_Ural_Repair_RU",
            "CUP_O_Ural_Repair_SLA",
            "CUP_O_Ural_Repair_TKA",
            "CUP_O_Ural_SLA",
            "CUP_O_Ural_TKA",
            "CUP_O_Ural_ZU23_CHDKZ",
            "CUP_O_Ural_ZU23_RU",
            "CUP_O_Ural_ZU23_SLA",
            "CUP_O_Ural_ZU23_TKA",
            "CUP_O_Ural_ZU23_TKM",
            "CUP_C_Ural_Civ_01",
            "CUP_C_Ural_Civ_02",
            "CUP_C_Ural_Civ_03",
            "CUP_C_Ural_Open_Civ_01",
            "CUP_C_Ural_Open_Civ_02",
            "CUP_C_Ural_Open_Civ_03",
            "CUP_I_Ural_Empty_UN",
            "CUP_I_Ural_Reammo_UN",
            "CUP_I_Ural_Repair_UN",
            "CUP_I_Ural_UN",
            "CUP_I_Ural_ZU23_NAPA",
            "CUP_I_Ural_ZU23_TK_Gue",
            "CUP_C_Datsun",
            "CUP_C_Datsun_4seat",
            "CUP_C_Datsun_Covered",
            "CUP_C_Datsun_Plain",
            "CUP_C_Datsun_Tubeframe",
            "CUP_I_Datsun_PK",
            "CUP_I_Datsun_PK_Random",
            "CUP_I_Datsun_PK_TK",
            "CUP_I_Datsun_PK_TK_Random",
            "CUP_O_Datsun_PK",
            "CUP_O_Datsun_PK_Random",
            "CUP_C_LR_Transport_CTK",
            "CUP_B_M1030",
            "CUP_BAF_Jackal2_GMG_D",
            "CUP_BAF_Jackal2_GMG_W",
            "CUP_BAF_Jackal2_L2A1_D",
            "CUP_BAF_Jackal2_L2A1_W",
            "CUP_B_Dingo_Des",
            "CUP_B_Dingo_GL_Des",
            "CUP_B_Dingo_GL_Wdl",
            "CUP_B_Dingo_Wdl",
            "CUP_B_HMMWV_AGS_GPK_ACR",
            "CUP_B_HMMWV_Ambulance_ACR",
            "CUP_B_HMMWV_Ambulance_USA",
            "CUP_B_HMMWV_Ambulance_USMC",
            "CUP_B_HMMWV_Avenger_USA",
            "CUP_B_HMMWV_Avenger_USMC",
            "CUP_B_HMMWV_Crows_M2_USA",
            "CUP_B_HMMWV_Crows_MK19_USA",
            "CUP_B_HMMWV_DSHKM_GPK_ACR",
            "CUP_B_HMMWV_M1114_USMC",
            "CUP_B_HMMWV_M2_GPK_ACR",
            "CUP_B_HMMWV_M2_GPK_USA",
            "CUP_B_HMMWV_M2_USA",
            "CUP_B_HMMWV_M2_USMC",
            "CUP_B_HMMWV_MK19_USA",
            "CUP_B_HMMWV_MK19_USMC",
            "CUP_B_HMMWV_SOV_USA",
            "CUP_B_HMMWV_TOW_USA",
            "CUP_B_HMMWV_TOW_USMC",
            "CUP_B_HMMWV_Terminal_USA",
            "CUP_B_HMMWV_Transport_USA",
            "CUP_B_HMMWV_Unarmed_USA",
            "CUP_B_HMMWV_Unarmed_USMC",
            "CUP_B_LR_Ambulance_CZ_D",
            "CUP_B_LR_Ambulance_CZ_W",
            "CUP_B_LR_Ambulance_GB_D",
            "CUP_B_LR_Ambulance_GB_W",
            "CUP_B_LR_MG_CZ_W",
            "CUP_B_LR_MG_GB_W",
            "CUP_B_LR_Special_CZ_W",
            "CUP_B_LR_Special_Des_CZ_D",
            "CUP_B_LR_Transport_CZ_D",
            "CUP_B_LR_Transport_CZ_W",
            "CUP_B_LR_Transport_GB_D",
            "CUP_B_LR_Transport_GB_W",
            "CUP_O_LR_Ambulance_TKA",
            "CUP_O_LR_MG_TKA",
            "CUP_O_LR_MG_TKM",
            "CUP_O_LR_SPG9_TKA",
            "CUP_O_LR_SPG9_TKM",
            "CUP_O_LR_Transport_TKA",
            "CUP_O_LR_Transport_TKM",
            "CUP_I_LR_Transport_RACS",
            "CUP_I_LR_MG_RACS",
            "CUP_I_LR_Ambulance_RACS",            
            "CUP_I_BRDM2_ATGM_NAPA",
            "CUP_I_BRDM2_ATGM_TK_Gue",
            "CUP_I_BRDM2_HQ_NAPA",
            "CUP_I_BRDM2_HQ_TK_Gue",
            "CUP_I_BRDM2_HQ_UN",
            "CUP_I_BRDM2_NAPA",
            "CUP_I_BRDM2_TK_Gue",
            "CUP_I_BRDM2_UN",
            "CUP_O_BRDM2_ATGM_CHDKZ",
            "CUP_O_BRDM2_ATGM_SLA",
            "CUP_O_BRDM2_ATGM_TKA",
            "CUP_O_BRDM2_CHDKZ",
            "CUP_O_BRDM2_HQ_CHDKZ",
            "CUP_O_BRDM2_HQ_SLA",
            "CUP_O_BRDM2_HQ_TKA",
            "CUP_O_BRDM2_SLA",
            "CUP_O_BRDM2_TKA",
            "CUP_B_BRDM2_ATGM_CDF",
            "CUP_B_BRDM2_CDF",
            "CUP_B_BRDM2_HQ_CDF",
            "CUP_B_LAV25M240_USMC",
            "CUP_B_LAV25_HQ_USMC",
            "CUP_B_LAV25_USMC",
            "CUP_B_BM21_CDF",
            "CUP_O_BM21_CHDKZ",
            "CUP_O_BM21_RU",
            "CUP_O_BM21_SLA",
            "CUP_O_BM21_TKA",
            "CUP_O_BTR60_TK",
            "CUP_O_BTR90_HQ_RU",
            "CUP_O_BTR90_RU",
            "CUP_C_Octavia_CIV",
            "CUP_C_Skoda_Red_Civ",
            "CUP_C_Skoda_White_Civ",
            "CUP_C_Skoda_Blue_Civ",
            "CUP_C_Skoda_Green_Civ",
            "CUP_C_Golf4_red_Civ",
            "CUP_C_Golf4_black_Civ",
            "CUP_C_Golf4_yellow_Civ",
            "CUP_C_Golf4_blue_Civ",
            "CUP_C_Golf4_white_Civ",
            "CUP_C_Golf4_green_Civ",
            "CUP_C_Golf4_random_Civ",
            "CUP_C_Golf4_whiteblood_Civ",
            "CUP_C_Golf4_camo_Civ",
            "CUP_C_Golf4_camodigital_Civ",
            "CUP_C_Golf4_camodark_Civ",
            "CUP_C_Golf4_reptile_Civ",
            "CUP_C_Golf4_kitty_Civ",
            "CUP_B_M1126_ICV_M2_Desert",
            "CUP_B_M1126_ICV_M2_Desert_Slat",
            "CUP_B_M1126_ICV_M2_Woodland",
            "CUP_B_M1126_ICV_M2_Woodland_Slat",
            "CUP_B_M1126_ICV_Mk19_Desert",
            "CUP_B_M1126_ICV_Mk19_Desert_Slat",
            "CUP_B_M1126_ICV_Mk19_Woodland",
            "CUP_B_M1126_ICV_Mk19_Woodland_Slat",
            "CUP_B_M1128_MGS_Desert",
            "CUP_B_M1128_MGS_Desert_Slat",
            "CUP_B_M1128_MGS_Woodland",
            "CUP_B_M1128_MGS_Woodland_Slat",
            "CUP_B_M1129_MC_MK19_Desert",
            "CUP_B_M1129_MC_MK19_Desert_Slat",
            "CUP_B_M1129_MC_MK19_Woodland",
            "CUP_B_M1129_MC_MK19_Woodland_Slat",
            "CUP_B_M1130_CV_M2_Desert",
            "CUP_B_M1130_CV_M2_Desert_Slat",
            "CUP_B_M1130_CV_M2_Woodland",
            "CUP_B_M1130_CV_M2_Woodland_Slat",
            "CUP_B_M1133_MEV_Desert",
            "CUP_B_M1133_MEV_Desert_Slat",
            "CUP_B_M1133_MEV_Woodland",
            "CUP_B_M1133_MEV_Woodland_Slat",
            "CUP_B_M1135_ATGMV_Desert",
            "CUP_B_M1135_ATGMV_Desert_Slat",
            "CUP_B_M1135_ATGMV_Woodland",
            "CUP_B_M1135_ATGMV_Woodland_Slat",
            "CUP_B_TowingTractor_USMC",
			"CUP_B_AAV_USMC",
            "CUP_B_M113_Med_USA",
            "CUP_B_M113_USA",
            "CUP_I_M113_Med_RACS",
            "CUP_I_M113_Med_UN",
            "CUP_I_M113_RACS",
            "CUP_I_M113_UN",
            "CUP_O_M113_Med_TKA",
            "CUP_O_M113_TKA",
            "CUP_B_M163_USA",
            "CUP_I_M163_RACS",
            "CUP_B_M1A1_DES_USMC",
            "CUP_B_M1A1_DES_US_Army",
            "CUP_B_M1A1_Woodland_USMC",
            "CUP_B_M1A1_Woodland_US_Army",
            "CUP_B_M1A2_TUSK_MG_DES_USMC",
            "CUP_B_M1A2_TUSK_MG_DES_US_Army",
            "CUP_B_M1A2_TUSK_MG_USMC",
            "CUP_B_M1A2_TUSK_MG_US_Army",
            "CUP_B_M270_DPICM_USA",
            "CUP_B_M270_DPICM_USMC",
            "CUP_B_M270_HE_USA",
            "CUP_B_M270_HE_USMC",
            "CUP_B_M2Bradley_USA_D",
            "CUP_B_M2Bradley_USA_W",
            "CUP_B_M2A3Bradley_USA_D",
            "CUP_B_M2A3Bradley_USA_W",
            "CUP_I_T55_TK_GUE",
            "CUP_O_T55_TK",
            "CUP_O_T72_CHDKZ",
            "CUP_O_T72_RU",
            "CUP_O_T72_SLA",
            "CUP_O_T72_TKA",
            "CUP_B_T72_CDF",
            "CUP_I_T72_NAPA",
            "CUP_I_T72_RACS",
            "CUP_B_ZSU23_CDF",
            "CUP_O_ZSU23_ChDKZ",
            "CUP_O_ZSU23_SLA",
            "CUP_O_ZSU23_TK",
            "CUP_T34_BASE",
            "CUP_I_T34_NAPA",
            "CUP_I_T34_TK_GUE",
            "CUP_O_T34_TKA"
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
			"CUP_B_AH1Z",
            // "CUP_B_AH1Z_14RndHydrax",
            "CUP_B_AH1Z_7RndHydra",
            "CUP_B_AH1Z_AT",
            "CUP_B_AH1Z_Escort",
            "CUP_B_AH1Z_NOAA",
            "CUP_B_AH1Z_NoWeapons",
            "CUP_B_AH1_AT_BAF",
            "CUP_B_AH1_BAF",
            "CUP_B_AH1_ES_BAF",
            "CUP_B_AH1_MR_BAF",
            "CUP_B_AH1_NO_BAF",
            "CUP_B_AH64D_AT_USA",
            "CUP_B_AH64D_ES_USA",
            "CUP_B_AH64D_MR_USA",
            "CUP_B_AH64D_NO_USA",
            "CUP_B_AH64D_USA",
            "CUP_B_AW159_Armed_BAF",
            "CUP_B_AW159_Unarmed_BAF",
            "CUP_B_CH47F_GB",
            "CUP_B_CH47F_USA",
            "CUP_B_CH53E_USMC",
            "CUP_B_MH60S_FFV_USMC",
            "CUP_B_MH60S_USMC",
            "CUP_B_UH1Y_GUNSHIP_USMC",
            "CUP_B_UH1Y_MEV_USMC",
            "CUP_B_UH1Y_UNA_USMC",
            "CUP_B_UH60L_FFV_US",
            "CUP_B_UH60L_US",
            "CUP_B_UH60L_Unarmed_FFV_MEV_US",
            "CUP_B_UH60L_Unarmed_FFV_US",
            "CUP_B_UH60L_Unarmed_US",
            "CUP_I_UH60L_FFV_RACS",
            "CUP_I_UH60L_RACS",
            "CUP_I_UH60L_Unarmed_FFV_MEV_Racs",
            "CUP_I_UH60L_Unarmed_FFV_Racs",
            "CUP_I_UH60L_Unarmed_RACS",
            "CUP_B_UH60M_FFV_US",
            "CUP_B_UH60M_US",
            "CUP_B_UH60M_Unarmed_FFV_MEV_US",
            "CUP_B_UH60M_Unarmed_FFV_US",
            "CUP_B_UH60M_Unarmed_US",
            "CUP_O_Mi8_CHDKZ",
            "CUP_O_Mi8_RU",
            "CUP_O_Mi8_SLA_1",
            "CUP_O_Mi8_SLA_2",
            "CUP_O_Mi8_medevac_CHDKZ",
            "CUP_O_Mi8_medevac_RU",
            "CUP_B_Mi171Sh_ACR",
            "CUP_B_Mi171Sh_Unarmed_ACR",
            "CUP_B_Mi17_CDF",
            "CUP_B_Mi17_medevac_CDF",
            "CUP_I_Mi17_UN",
            "CUP_O_Mi17_TK",
            "CUP_C_Mi17_Civilian_RU",
            "CUP_B_Mi24_D_CDF",
            "CUP_I_Mi24_D_ION",
            "CUP_I_Mi24_D_UN",
            "CUP_O_Mi24_D_TK",
            "CUP_O_Mi24_P_RU",
            "CUP_O_Mi24_V_RU",
            "CUP_B_Mi35_CZ",
            "CUP_O_UH1H_TKA",
            "CUP_I_UH1H_TK_GUE",
            "CUP_B_UH1D_GER_KSK",
            "CUP_B_UH1D_GER_KSK_DES",
            "CUP_B_Merlin_HC3_GB",
            "CUP_B_Merlin_HC3A_GB",
            "CUP_B_AW159_Unarmed_GB",
            "CUP_B_AW159_Hellfire_GB",
            "CUP_B_AW159_Cannon_GB",
            "CUP_B_SA330_Puma_HC1_BAF",
            "CUP_B_SA330_Puma_HC2_BAF",
            "CUP_I_SA330_Puma_HC1_RACS",
            "CUP_I_SA330_Puma_HC2_RACS",
            "CUP_O_KA50_SLA",
            "CUP_O_KA50_AA_SLA",
            "CUP_O_KA50_RU",
            "CUP_O_KA50_AA_RU"
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
			"CUP_C_C47_CIV",
            "CUP_C_DC3_CIV",
            "CUP_B_MV22_USMC",
            "CUP_B_A10_AT_USA",
            "CUP_B_A10_CAS_USA",
            "CUP_B_Su25_CDF",
            "CUP_O_Su25_RU_1",
            "CUP_O_Su25_RU_2",
            "CUP_O_Su25_RU_3",
            "CUP_O_Su25_SLA",
            "CUP_O_Su25_TKA",
            "CUP_B_C130J_USMC",
            "CUP_B_C130J_Cargo_USMC",
            "CUP_B_C130J_GB",
            "CUP_B_C130J_Cargo_GB",
            "CUP_I_C130J_AAF",
            "CUP_I_C130J_Cargo_AAF",
            "CUP_I_C130J_RACS",
            "CUP_I_C130J_Cargo_RACS",
            "CUP_O_C130J_TKA",
            "CUP_O_C130J_Cargo_TKA",
            "CUP_B_F35B_AA_USMC",
            "CUP_B_F35B_CAS_USMC",
            "CUP_B_F35B_LGB_USMC",
            "CUP_B_F35B_AA_BAF",
            "CUP_B_F35B_CAS_BAF",
            "CUP_B_F35B_LGB_BAF",
            "CUP_B_AV8B_CAP_USMC",
            "CUP_B_AV8B_MK82_USMC",
            "CUP_B_AV8B_GBU12_USMC",
            "CUP_B_AV8B_AGM_USMC",
            "CUP_I_AV8B_CAP_AAF",
            "CUP_I_AV8B_MK82_AAF",
            "CUP_I_AV8B_GBU12_AAF",
            "CUP_I_AV8B_AGM_AAF",
            "CUP_B_GR9_CAP_GB",
            "CUP_B_GR9_MK82_GB",
            "CUP_B_GR9_GBU12_GB",
            "CUP_B_GR9_AGM_GB",
            "CUP_O_SU34_LGB_RU",
            "CUP_O_SU34_LGB_SLA",
            "CUP_O_SU34_AGM_RU",
            "CUP_O_SU34_AGM_SLA",
            "CUP_I_SU34_LGB_AAF",
            "CUP_I_SU34_AGM_AAF",
            "CUP_B_SU34_LGB_CDF",
            "CUP_B_SU34_AGM_CDF"
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
		Level2 = 5000;
		Level3 = 10000;
		Level4 = 15000;
		Level5 = 20000;
		Level6 = 25000;
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