Route6_MapScripts::
# 2 "data/maps/Route6/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route6_OnLoad
	.byte 0


Route6_OnLoad::
# 6 "data/maps/Route6/scripts.pory"
	goto_if_unset FLAG_CLEARED_ROUTE6, Route6_OnLoad_1
	return

Route6_OnLoad_1:
# 7 "data/maps/Route6/scripts.pory"
	setflag FLAG_TEMP_A
# 9 "data/maps/Route6/scripts.pory"
	setmetatile 29, 53, METATILE_General_CalmWater, TRUE
# 10 "data/maps/Route6/scripts.pory"
	setmetatile 30, 53, METATILE_General_CalmWater, TRUE
# 11 "data/maps/Route6/scripts.pory"
	setmetatile 31, 53, METATILE_General_CalmWater, TRUE
# 12 "data/maps/Route6/scripts.pory"
	setmetatile 32, 53, METATILE_General_CalmWater, TRUE
# 13 "data/maps/Route6/scripts.pory"
	setmetatile 29, 54, METATILE_General_CalmWater, TRUE
# 14 "data/maps/Route6/scripts.pory"
	setmetatile 30, 54, METATILE_Fortree_BridgeTopOcean, TRUE
# 15 "data/maps/Route6/scripts.pory"
	setmetatile 31, 54, METATILE_General_CalmWater, TRUE
# 16 "data/maps/Route6/scripts.pory"
	setmetatile 32, 54, METATILE_Fortree_BridgeTopOcean, TRUE
# 17 "data/maps/Route6/scripts.pory"
	setmetatile 29, 55, METATILE_General_CalmWater, TRUE
# 18 "data/maps/Route6/scripts.pory"
	setmetatile 30, 55, METATILE_Fortree_BridgeBottomOcean, TRUE
# 19 "data/maps/Route6/scripts.pory"
	setmetatile 31, 55, METATILE_General_CalmWater, TRUE
# 20 "data/maps/Route6/scripts.pory"
	setmetatile 32, 55, METATILE_Fortree_BridgeBottomOcean, TRUE
# 21 "data/maps/Route6/scripts.pory"
	setmetatile 29, 56, METATILE_Fortree_BridgeTopOcean, TRUE
# 22 "data/maps/Route6/scripts.pory"
	setmetatile 29, 57, METATILE_Fortree_BridgeBottomOcean, TRUE
	return


Route6_AquaGrunt::
# 27 "data/maps/Route6/scripts.pory"
	msgbox Route6_AquaGrunt_Text_0, MSGBOX_NPC
	return


Route6_AquaGrunt2::
# 31 "data/maps/Route6/scripts.pory"
	msgbox Route6_AquaGrunt2_Text_0, MSGBOX_NPC
	return


Route6_MagmaGrunt::
# 35 "data/maps/Route6/scripts.pory"
	msgbox Route6_MagmaGrunt_Text_0, MSGBOX_NPC
	return


Route6_MagmaGrunt2::
# 39 "data/maps/Route6/scripts.pory"
	msgbox Route6_MagmaGrunt2_Text, MSGBOX_NPC
	return


Route6_Camper::
# 48 "data/maps/Route6/scripts.pory"
	msgbox Route6_Camper_Text_0, MSGBOX_NPC
	return


Route6_Lass::
# 52 "data/maps/Route6/scripts.pory"
	msgbox Route6_Lass_Text_0, MSGBOX_NPC
	return


Route6_Hiker::
# 56 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_HIKER, Route6_Hiker_Text_0, Route6_Hiker_Text_1
# 61 "data/maps/Route6/scripts.pory"
	msgbox Route6_Hiker_Text_2, MSGBOX_AUTOCLOSE
	end


Route6_Picnicker::
# 66 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_PICNICKER, Route6_Picnicker_Text_0, Route6_Picnicker_Text_0
# 71 "data/maps/Route6/scripts.pory"
	msgbox Route6_Picnicker_Text_0, MSGBOX_AUTOCLOSE
	end


Route6_BugCatcher::
# 76 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_BUG_CATCHER, Route6_Picnicker_Text_0, Route6_Picnicker_Text_0
# 81 "data/maps/Route6/scripts.pory"
	msgbox Route6_Picnicker_Text_0, MSGBOX_AUTOCLOSE
	end


Route6_Psychic::
# 86 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_PSYCHIC, Route6_Picnicker_Text_0, Route6_Picnicker_Text_0
# 91 "data/maps/Route6/scripts.pory"
	msgbox Route6_Picnicker_Text_0, MSGBOX_AUTOCLOSE
	end


Route6_BugManiac::
# 96 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_BUG_MANIAC, Route6_Picnicker_Text_0, Route6_Picnicker_Text_0
# 101 "data/maps/Route6/scripts.pory"
	msgbox Route6_Picnicker_Text_0, MSGBOX_AUTOCLOSE
	end


Route6_NinjaBoy::
# 106 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_NINJA_BOY, Route6_Picnicker_Text_0, Route6_Picnicker_Text_0
# 111 "data/maps/Route6/scripts.pory"
	msgbox Route6_Picnicker_Text_0, MSGBOX_AUTOCLOSE
	end


Route6_BirdKeeper::
# 116 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_BIRD_KEEPER, Route6_Picnicker_Text_0, Route6_Picnicker_Text_0
# 121 "data/maps/Route6/scripts.pory"
	msgbox Route6_Picnicker_Text_0, MSGBOX_AUTOCLOSE
	end


Route6_Beauty::
# 126 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_BEAUTY, Route6_Picnicker_Text_0, Route6_Picnicker_Text_0
# 131 "data/maps/Route6/scripts.pory"
	msgbox Route6_Picnicker_Text_0, MSGBOX_AUTOCLOSE
	end


Route6_AquaGrunt_Text_0:
# 27 "data/maps/Route6/scripts.pory"
	.string "I can't believe this...$"

Route6_AquaGrunt2_Text_0:
# 31 "data/maps/Route6/scripts.pory"
	.string "Oh hey...\nyou wanted to get through here?\pYeah... I'm sorry.\nI'm not sure how this happened.$"

Route6_MagmaGrunt_Text_0:
# 35 "data/maps/Route6/scripts.pory"
	.string "These idiots broke the bridge!$"

Route6_Camper_Text_0:
# 48 "data/maps/Route6/scripts.pory"
	.string "We found this guy wandering around on\n"
	.string "the path. It's dangerous for him to\l"
	.string "leave the route area so we're keeping\l"
	.string "an eye on him.$"

Route6_Lass_Text_0:
# 52 "data/maps/Route6/scripts.pory"
	.string "I don't want to tell him that the\n"
	.string "Pancham keeps coming out because I\l"
	.string "give him food sometimes...$"

Route6_Hiker_Text_0:
# 58 "data/maps/Route6/scripts.pory"
	.string "Are you also out here for a hike?$"

Route6_Hiker_Text_1:
# 59 "data/maps/Route6/scripts.pory"
	.string "Well that could've gone better.$"

Route6_Hiker_Text_2:
# 61 "data/maps/Route6/scripts.pory"
	.string "Dyecress Town is just up ahead, the air\n"
	.string "there is really nice.$"

Route6_Picnicker_Text_0:
# 68 "data/maps/Route6/scripts.pory"
	.string "$"

Route6_MagmaGrunt2_Text::
# 42 "data/maps/Route6/scripts.pory"
	.string "I'm not really sure what we're\nsupposed to do now,\lI'd ask Maxie for help but...\p"
	.string "I think I heard he was off to somewhere\non Route 10. Not sure why though.$"
