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
# 14 "data/maps/Route6/scripts.pory"
	setmetatile 29, 54, METATILE_General_CalmWater, TRUE
# 15 "data/maps/Route6/scripts.pory"
	setmetatile 30, 54, METATILE_Fortree_BridgeTopOcean, TRUE
# 16 "data/maps/Route6/scripts.pory"
	setmetatile 31, 54, METATILE_Fortree_BridgeTopOcean, TRUE
# 17 "data/maps/Route6/scripts.pory"
	setmetatile 32, 54, METATILE_General_CalmWater, TRUE
# 19 "data/maps/Route6/scripts.pory"
	setmetatile 29, 55, METATILE_General_CalmWater, TRUE
# 20 "data/maps/Route6/scripts.pory"
	setmetatile 30, 55, METATILE_Fortree_BridgeBottomOcean, TRUE
# 21 "data/maps/Route6/scripts.pory"
	setmetatile 31, 55, METATILE_Fortree_BridgeBottomOcean, TRUE
# 22 "data/maps/Route6/scripts.pory"
	setmetatile 32, 55, METATILE_General_CalmWater, TRUE
# 24 "data/maps/Route6/scripts.pory"
	setmetatile 29, 56, METATILE_Fortree_BridgeTopOcean, TRUE
# 25 "data/maps/Route6/scripts.pory"
	setmetatile 29, 57, METATILE_Fortree_BridgeBottomOcean, TRUE
	return


Route6_AquaGrunt::
# 30 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_AQUA_GRUNT, Route6_AquaGrunt_Text_0, Route6_AquaGrunt_Text_1
# 35 "data/maps/Route6/scripts.pory"
	msgbox Route6_AquaGrunt_Text_2, MSGBOX_AUTOCLOSE
	end


Route6_AquaGrunt1::
# 40 "data/maps/Route6/scripts.pory"
	msgbox Route6_AquaGrunt1_Text_0, MSGBOX_NPC
	return


Route6_AquaGrunt2::
# 44 "data/maps/Route6/scripts.pory"
	msgbox Route6_AquaGrunt2_Text_0, MSGBOX_NPC
	return


Route6_MagmaGrunt::
# 48 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_MAGMA_GRUNT, Route6_MagmaGrunt_Text_0, Route6_MagmaGrunt_Text_1
# 53 "data/maps/Route6/scripts.pory"
	msgbox Route6_MagmaGrunt_Text_2, MSGBOX_AUTOCLOSE
	end


Route6_MagmaGrunt1::
# 58 "data/maps/Route6/scripts.pory"
	msgbox Route6_MagmaGrunt1_Text_0, MSGBOX_NPC
	return


Route6_MagmaGrunt2::
# 62 "data/maps/Route6/scripts.pory"
	msgbox Route6_MagmaGrunt2_Text, MSGBOX_NPC
	return


Route6_Camper::
# 71 "data/maps/Route6/scripts.pory"
	msgbox Route6_Camper_Text_0, MSGBOX_NPC
	return


Route6_Lass::
# 75 "data/maps/Route6/scripts.pory"
	msgbox Route6_Lass_Text_0, MSGBOX_NPC
	return


Route6_Hiker::
# 79 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_HIKER, Route6_Hiker_Text_0, Route6_Hiker_Text_1
# 84 "data/maps/Route6/scripts.pory"
	msgbox Route6_Hiker_Text_2, MSGBOX_AUTOCLOSE
	end


Route6_Picnicker::
# 89 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_PICNICKER, Route6_Picnicker_Text_0, Route6_Picnicker_Text_1
# 94 "data/maps/Route6/scripts.pory"
	msgbox Route6_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route6_BugCatcher::
# 99 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_BUG_CATCHER, Route6_BugCatcher_Text_0, Route6_BugCatcher_Text_1
# 104 "data/maps/Route6/scripts.pory"
	msgbox Route6_BugCatcher_Text_2, MSGBOX_AUTOCLOSE
	end


Route6_Psychic::
# 109 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_PSYCHIC, Route6_Psychic_Text_0, Route6_Psychic_Text_1
# 114 "data/maps/Route6/scripts.pory"
	msgbox Route6_Psychic_Text_2, MSGBOX_AUTOCLOSE
	end


Route6_BugManiac::
# 119 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_BUG_MANIAC, Route6_BugManiac_Text_0, Route6_BugManiac_Text_1
# 124 "data/maps/Route6/scripts.pory"
	msgbox Route6_BugManiac_Text_2, MSGBOX_AUTOCLOSE
	end


Route6_NinjaBoy::
# 129 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_NINJA_BOY, Route6_NinjaBoy_Text_0, Route6_NinjaBoy_Text_1
# 134 "data/maps/Route6/scripts.pory"
	msgbox Route6_NinjaBoy_Text_2, MSGBOX_AUTOCLOSE
	end


Route6_BirdKeeper::
# 139 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_BIRD_KEEPER, Route6_BirdKeeper_Text_0, Route6_BirdKeeper_Text_1
# 144 "data/maps/Route6/scripts.pory"
	msgbox Route6_BirdKeeper_Text_2, MSGBOX_AUTOCLOSE
	end


Route6_Beauty::
# 149 "data/maps/Route6/scripts.pory"
	trainerbattle_single TRAINER_ROUTE6_BEAUTY, Route6_Beauty_Text_0, Route6_Beauty_Text_1
# 154 "data/maps/Route6/scripts.pory"
	msgbox Route6_Beauty_Text_2, MSGBOX_AUTOCLOSE
	end


Route6_AquaGrunt_Text_0:
# 32 "data/maps/Route6/scripts.pory"
	.string "Hey! We're doin' stuff here!$"

Route6_AquaGrunt_Text_1:
# 33 "data/maps/Route6/scripts.pory"
	.string "Doesn't rain make Water types\n"
	.string "stronger?$"

Route6_AquaGrunt_Text_2:
# 35 "data/maps/Route6/scripts.pory"
	.string "What are we doin? None of your\n"
	.string "business!$"

Route6_AquaGrunt1_Text_0:
# 40 "data/maps/Route6/scripts.pory"
	.string "I can't believe this...$"

Route6_AquaGrunt2_Text_0:
# 44 "data/maps/Route6/scripts.pory"
	.string "Oh hey...\nyou wanted to get through here?\pYeah... I'm sorry.\nI'm not sure how this happened.$"

Route6_MagmaGrunt_Text_0:
# 50 "data/maps/Route6/scripts.pory"
	.string "You're not one of them Aqua guys are\n"
	.string "ya?$"

Route6_MagmaGrunt_Text_1:
# 51 "data/maps/Route6/scripts.pory"
	.string "Curse this blasted rain!$"

Route6_MagmaGrunt_Text_2:
# 53 "data/maps/Route6/scripts.pory"
	.string "Who's idea was it to make the Magma\n"
	.string "guys go to a raining place...$"

Route6_MagmaGrunt1_Text_0:
# 58 "data/maps/Route6/scripts.pory"
	.string "These idiots broke the bridge!$"

Route6_Camper_Text_0:
# 71 "data/maps/Route6/scripts.pory"
	.string "We found this guy wandering around on\n"
	.string "the path. It's dangerous for him to\l"
	.string "leave the route area so we're keeping\l"
	.string "an eye on him.$"

Route6_Lass_Text_0:
# 75 "data/maps/Route6/scripts.pory"
	.string "I don't want to tell him that the\n"
	.string "Pancham keeps coming out because I\l"
	.string "give him food sometimes...$"

Route6_Hiker_Text_0:
# 81 "data/maps/Route6/scripts.pory"
	.string "Are you also out here for a hike?$"

Route6_Hiker_Text_1:
# 82 "data/maps/Route6/scripts.pory"
	.string "Well that could've gone better.$"

Route6_Hiker_Text_2:
# 84 "data/maps/Route6/scripts.pory"
	.string "Dyecress Town is just up ahead, the air\n"
	.string "there is really nice.$"

Route6_Picnicker_Text_0:
# 91 "data/maps/Route6/scripts.pory"
	.string "It's great weather for a picnic huh?$"

Route6_Picnicker_Text_1:
# 92 "data/maps/Route6/scripts.pory"
	.string "I was joking, this weather sucks.$"

Route6_Picnicker_Text_2:
# 94 "data/maps/Route6/scripts.pory"
	.string "The rain makes my sandwiches soggy...$"

Route6_BugCatcher_Text_0:
# 101 "data/maps/Route6/scripts.pory"
	.string "Hoo Hoo Hee Hee$"

Route6_BugCatcher_Text_1:
# 102 "data/maps/Route6/scripts.pory"
	.string "Hoo... Hee...$"

Route6_BugCatcher_Text_2:
# 104 "data/maps/Route6/scripts.pory"
	.string "I'm trying to find some cool bugs in the\n"
	.string "long grass.$"

Route6_Psychic_Text_0:
# 111 "data/maps/Route6/scripts.pory"
	.string "Thought you could sneak past me did\n"
	.string "you?$"

Route6_Psychic_Text_1:
# 112 "data/maps/Route6/scripts.pory"
	.string "Maybe I should've just let you pass...$"

Route6_Psychic_Text_2:
# 114 "data/maps/Route6/scripts.pory"
	.string "That large bush looks kind of\n"
	.string "interesting.$"

Route6_BugManiac_Text_0:
# 121 "data/maps/Route6/scripts.pory"
	.string "THE TIME OF BUG IS UPON US!$"

Route6_BugManiac_Text_1:
# 122 "data/maps/Route6/scripts.pory"
	.string "Man this game must be bugged...$"

Route6_BugManiac_Text_2:
# 124 "data/maps/Route6/scripts.pory"
	.string "I heard there's a cool spot to catch\n"
	.string "some rare bugs around here.$"

Route6_NinjaBoy_Text_0:
# 131 "data/maps/Route6/scripts.pory"
	.string "Surprise!$"

Route6_NinjaBoy_Text_1:
# 132 "data/maps/Route6/scripts.pory"
	.string "I'm surprised!$"

Route6_NinjaBoy_Text_2:
# 134 "data/maps/Route6/scripts.pory"
	.string "I thought if I jumped out at you then I\n"
	.string "would get an advantage.$"

Route6_BirdKeeper_Text_0:
# 141 "data/maps/Route6/scripts.pory"
	.string "I like birds.$"

Route6_BirdKeeper_Text_1:
# 142 "data/maps/Route6/scripts.pory"
	.string "Hey that didn't count, I was being\n"
	.string "tickled by the feathers!$"

Route6_BirdKeeper_Text_2:
# 144 "data/maps/Route6/scripts.pory"
	.string "I could really go for some chicken\n"
	.string "nuggets right about now.$"

Route6_Beauty_Text_0:
# 151 "data/maps/Route6/scripts.pory"
	.string "I'm available.$"

Route6_Beauty_Text_1:
# 152 "data/maps/Route6/scripts.pory"
	.string "You're pretty strong, are you busy\n"
	.string "later?$"

Route6_Beauty_Text_2:
# 154 "data/maps/Route6/scripts.pory"
	.string "It's so hard to find someone decent\n"
	.string "nowadays.$"

Route6_MagmaGrunt2_Text::
# 65 "data/maps/Route6/scripts.pory"
	.string "I'm not really sure what we're\nsupposed to do now,\lI'd ask Maxie for help but...\p"
	.string "I think I heard he was off to somewhere\non Route 10. Not sure why though.$"
