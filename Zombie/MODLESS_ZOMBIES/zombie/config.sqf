/*
EXILE-Z Modless Project v1.5B - Edit for EXILE by CaptionJack and co-admins of RelentlessServers.com
Thanks to Corvobrok for the basic framework for Proximity triggers
*/
waitUntil {!isNull player};
//Edit zombielimit and ztriggerrange to be lower if FPS is high
 
zombielimit=9;		//zombies max spawn amount 
zombiedamage=10;	//Damage of a zombie for a punch Default 10% HP on each hit, *Edited By DEV*
zombierun =0; 		//Leave on 0 it's not working in 1.50 patch correctly
respawntime =180;	//time for respawn killed zombies
ztrigger ="HouseL";  //Object type that triggers zombies when player in range use HouseL for A2 maps if no spawns
ztriggerrange =120; //trigger range from object 

//Headless Client Settings - not currently supported 
ZOMusehclient = false; //set to true if using HC
ZOMhclientname = "HC"; //Name of headless Client
 
//Zombies loots adds one random item and vest per zombie from this list
zvest = ["V_TacVest_blk_POLICE","V_Rangemaster_belt","V_BandollierB_khk","V_Press_F"];
zloot = ["Exile_Item_Matches","Exile_Item_Surstromming","Exile_Item_PlasticBottleFreshWater","Exile_Item_ChristmasTinner","Chemlight_red","Exile_Item_DsNuts","Exile_Item_Noodles","Exile_Item_Cheathas","Exile_Item_InstantCoffee","Exile_Item_Beer","Exile_Item_DuctTape","Exile_Item_CanOpener","Exile_Item_Bandage","Exile_Item_ZipTie","Exile_Item_WoodPlank","Exile_Item_WoodLog","Exile_Item_SeedAstics","Exile_Item_MetalPole","Exile_Item_MetalWire","Exile_Item_MetalBoard","Exile_Item_Moobar","Exile_Item_MountainDupe","Exile_Item_Rope","Exile_Item_PowerDrink","Exile_Item_Raisins","Exile_Item_SausageGravy","Exile_Item_Vishpirin","Exile_Item_FuelCanisterFull","Exile_Item_EMRE"]; //loot in vest 
 

/* XXXXXXXXXXXXXXXXXXXXX  DON'T EDIT BELOW!  XXXXXXXXXXXXXXXXXXXXXXXXX */ 
SideZMB = createCenter civilian;
groupZMB = createGroup civilian;
sleep 0.1;
fncZcontact = compile preprocessFile "zombie\fnc_Zcontact.sqf";
fncZproximity = compile preprocessFile "zombie\fnc_ZProximity.sqf";
zarray=[];
[]call fncZproximity;
/* XXXXXXXXXXXXXXXXXXXXX  DON'T EDIT XXXXXXXXXXXXXXXXXXXXXXXXX */
