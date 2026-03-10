Route5_MapScripts::
# 2 "data/maps/Route5/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route5_CheckBoulderBlock
	.byte 0


Route5_CheckBoulderBlock::
# 6 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_CLEARED_QUIET_GROVE, Route5_CheckBoulderBlock_1
# 19 "data/maps/Route5/scripts.pory"
	setflag FLAG_TEMP_10
# 20 "data/maps/Route5/scripts.pory"
	setflag FLAG_TEMP_11
# 21 "data/maps/Route5/scripts.pory"
	setflag FLAG_TEMP_12
	return

Route5_CheckBoulderBlock_1:
# 7 "data/maps/Route5/scripts.pory"
	setmetatile 33, 17, METATILE_General_Grass, FALSE
# 8 "data/maps/Route5/scripts.pory"
	setmetatile 34, 17, METATILE_General_Grass, FALSE
# 9 "data/maps/Route5/scripts.pory"
	setmetatile 33, 18, METATILE_General_Grass, FALSE
# 10 "data/maps/Route5/scripts.pory"
	setmetatile 34, 18, METATILE_General_Grass, FALSE
# 11 "data/maps/Route5/scripts.pory"
	setmetatile 35, 18, METATILE_General_Grass, FALSE
# 12 "data/maps/Route5/scripts.pory"
	setmetatile 35, 16, METATILE_General_Grass, FALSE
# 13 "data/maps/Route5/scripts.pory"
	setmetatile 37, 17, METATILE_General_Grass, FALSE
# 14 "data/maps/Route5/scripts.pory"
	setmetatile 38, 17, METATILE_General_Grass, FALSE
# 15 "data/maps/Route5/scripts.pory"
	setmetatile 37, 18, METATILE_General_Grass, FALSE
# 16 "data/maps/Route5/scripts.pory"
	setmetatile 38, 18, METATILE_General_Grass, FALSE
# 17 "data/maps/Route5/scripts.pory"
	setmetatile 39, 17, METATILE_General_Grass, FALSE
	return


Route5_Sign::
# 26 "data/maps/Route5/scripts.pory"
	msgbox Route5_Sign_Text_0, MSGBOX_SIGN
	return


Route5_BoulderGuy::
# 30 "data/maps/Route5/scripts.pory"
	lockall
# 31 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_CLEARED_QUIET_GROVE, Route5_BoulderGuy_2
# 34 "data/maps/Route5/scripts.pory"
	msgbox Route5_BoulderGuy_Text_1, MSGBOX_NPC
Route5_BoulderGuy_1:
# 36 "data/maps/Route5/scripts.pory"
	releaseall
	return

Route5_BoulderGuy_2:
# 32 "data/maps/Route5/scripts.pory"
	msgbox Route5_BoulderGuy_Text_0, MSGBOX_NPC
	goto Route5_BoulderGuy_1


Route5_Picnicker::
# 40 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_ROUTE5_PICNICKER, Route5_Picnicker_Text_0, Route5_Picnicker_Text_1
# 45 "data/maps/Route5/scripts.pory"
	msgbox Route5_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route5_BlackBelt::
# 50 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_ROUTE5_BLACKBELT, Route5_BlackBelt_Text_0, Route5_BlackBelt_Text_1
# 55 "data/maps/Route5/scripts.pory"
	msgbox Route5_BlackBelt_Text_2, MSGBOX_AUTOCLOSE
	end


Route5_Expert::
# 60 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_ROUTE5_EXPERT, Route5_Expert_Text_0, Route5_Expert_Text_1
# 65 "data/maps/Route5/scripts.pory"
	msgbox Route5_Expert_Text_2, MSGBOX_AUTOCLOSE
	end


Route5_Sign_Text_0:
# 26 "data/maps/Route5/scripts.pory"
	.string "Soothing Sands Resort!\nKeep going straight!$"

Route5_BoulderGuy_Text_0:
# 32 "data/maps/Route5/scripts.pory"
	.string "We've cleared out the major rockslide\n"
	.string "as best as we can, but the rocks are\l"
	.string "pretty unstable here so they still fall\l"
	.string "onto the path occasionally.$"

Route5_BoulderGuy_Text_1:
# 34 "data/maps/Route5/scripts.pory"
	.string "Watch your step! There was a major\n"
	.string "rockslide earlier. We're trying to get it\l"
	.string "cleared out as soon as possible.$"

Route5_Picnicker_Text_0:
# 42 "data/maps/Route5/scripts.pory"
	.string "Where you find rocky terrain, you'll find\n"
	.string "me!$"

Route5_Picnicker_Text_1:
# 43 "data/maps/Route5/scripts.pory"
	.string "Camping on a rocky outcropping is\n"
	.string "always fun.$"

Route5_Picnicker_Text_2:
# 45 "data/maps/Route5/scripts.pory"
	.string "The terrain starts to get a little more\n"
	.string "hostile around here.$"

Route5_BlackBelt_Text_0:
# 52 "data/maps/Route5/scripts.pory"
	.string "PUNCHING ROCKS MAKES MY FISTS HARD.$"

Route5_BlackBelt_Text_1:
# 53 "data/maps/Route5/scripts.pory"
	.string "PUNCHING ROCKS MAKES MY BONES HURT.$"

Route5_BlackBelt_Text_2:
# 55 "data/maps/Route5/scripts.pory"
	.string "The pain in my fists distracts me from\n"
	.string "the pain of my existance.$"

Route5_Expert_Text_0:
# 62 "data/maps/Route5/scripts.pory"
	.string "There is a retreat up ahead, I hope\n"
	.string "you'll help me get warmed up for it.$"

Route5_Expert_Text_1:
# 63 "data/maps/Route5/scripts.pory"
	.string "I'll be sure to release all this tension\n"
	.string "there.$"

Route5_Expert_Text_2:
# 65 "data/maps/Route5/scripts.pory"
	.string "The retreat is nothing too fancy, but\n"
	.string "it's nice for old folks like me.$"
