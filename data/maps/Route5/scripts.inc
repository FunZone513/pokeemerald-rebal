Route5_MapScripts::
# 2 "data/maps/Route5/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route5_CheckBoulderBlock
	.byte 0


Route5_CheckBoulderBlock::
# 6 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_CLEARED_QUIET_GROVE, Route5_CheckBoulderBlock_1
# 26 "data/maps/Route5/scripts.pory"
	setflag FLAG_TEMP_10
# 27 "data/maps/Route5/scripts.pory"
	setflag FLAG_TEMP_11
# 28 "data/maps/Route5/scripts.pory"
	setflag FLAG_TEMP_12
# 30 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_CLEARED_ROUTE5, Route5_CheckBoulderBlock_7
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
# 16 "data/maps/Route5/scripts.pory"
	setmetatile 38, 18, METATILE_General_Grass, FALSE
# 17 "data/maps/Route5/scripts.pory"
	setmetatile 39, 17, METATILE_General_Grass, FALSE
# 19 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_CLEARED_ROUTE5, Route5_CheckBoulderBlock_4
# 22 "data/maps/Route5/scripts.pory"
	setmetatile 37, 18, METATILE_Rustboro_Route5_SturdyRock, TRUE
	return

Route5_CheckBoulderBlock_4:
# 20 "data/maps/Route5/scripts.pory"
	setmetatile 37, 18, METATILE_General_Grass, FALSE
	return

Route5_CheckBoulderBlock_7:
# 31 "data/maps/Route5/scripts.pory"
	setmetatile 37, 18, METATILE_General_Grass, FALSE
	return


Route5_SturdyRockBlocker::
# 37 "data/maps/Route5/scripts.pory"
	goto_if_unset FLAG_CLEARED_ROUTE5, Route5_SturdyRockBlocker_1
	return

Route5_SturdyRockBlocker_1:
# 38 "data/maps/Route5/scripts.pory"
	lockall
# 39 "data/maps/Route5/scripts.pory"
	msgbox Route5_SturdyRockBlocker_Text_0, MSGBOX_SIGN
# 40 "data/maps/Route5/scripts.pory"
	playse SE_PIN
# 41 "data/maps/Route5/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 42 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route5/scripts.pory"
	applymovement 3, Route5_SturdyRockBlocker_Movement_0
# 44 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route5_SturdyRockBlocker_Movement_1
# 46 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route5/scripts.pory"
	msgbox Route5_SturdyRock_Text
# 48 "data/maps/Route5/scripts.pory"
	closemessage
# 49 "data/maps/Route5/scripts.pory"
	applymovement 3, Route5_SturdyRockBlocker_Movement_2
# 50 "data/maps/Route5/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route5/scripts.pory"
	releaseall
	return


Route5_Sign::
# 63 "data/maps/Route5/scripts.pory"
	msgbox Route5_Sign_Text_0, MSGBOX_SIGN
	return


Route5_BoulderGuy::
# 67 "data/maps/Route5/scripts.pory"
	lockall
# 68 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_CLEARED_QUIET_GROVE, Route5_BoulderGuy_2
# 80 "data/maps/Route5/scripts.pory"
	msgbox Route5_BoulderGuy_Text_3, MSGBOX_NPC
Route5_BoulderGuy_1:
# 82 "data/maps/Route5/scripts.pory"
	releaseall
	return

Route5_BoulderGuy_2:
# 69 "data/maps/Route5/scripts.pory"
	applymovement 3, Route5_BoulderGuy_Movement_0
# 70 "data/maps/Route5/scripts.pory"
	msgbox Route5_BoulderGuy_Text_0
# 72 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_CLEARED_ROUTE5, Route5_BoulderGuy_6
# 75 "data/maps/Route5/scripts.pory"
	msgbox Route5_BoulderGuy_Text_2
Route5_BoulderGuy_5:
# 77 "data/maps/Route5/scripts.pory"
	closemessage
	goto Route5_BoulderGuy_1

Route5_BoulderGuy_6:
# 73 "data/maps/Route5/scripts.pory"
	msgbox Route5_BoulderGuy_Text_1
	goto Route5_BoulderGuy_5


Route5_Picnicker::
# 86 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_ROUTE5_PICNICKER, Route5_Picnicker_Text_0, Route5_Picnicker_Text_1
# 91 "data/maps/Route5/scripts.pory"
	msgbox Route5_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route5_BlackBelt::
# 96 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_ROUTE5_BLACKBELT, Route5_BlackBelt_Text_0, Route5_BlackBelt_Text_1
# 101 "data/maps/Route5/scripts.pory"
	msgbox Route5_BlackBelt_Text_2, MSGBOX_AUTOCLOSE
	end


Route5_Expert::
# 106 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_ROUTE5_EXPERT, Route5_Expert_Text_0, Route5_Expert_Text_1
# 111 "data/maps/Route5/scripts.pory"
	msgbox Route5_Expert_Text_2, MSGBOX_AUTOCLOSE
	end


# 43 "data/maps/Route5/scripts.pory"
Route5_SturdyRockBlocker_Movement_0:
# 43 "data/maps/Route5/scripts.pory"
	walk_down
# 43 "data/maps/Route5/scripts.pory"
	walk_right
# 43 "data/maps/Route5/scripts.pory"
	walk_right
# 43 "data/maps/Route5/scripts.pory"
	walk_right
	step_end

# 45 "data/maps/Route5/scripts.pory"
Route5_SturdyRockBlocker_Movement_1:
# 45 "data/maps/Route5/scripts.pory"
	face_left
	step_end

# 49 "data/maps/Route5/scripts.pory"
Route5_SturdyRockBlocker_Movement_2:
# 49 "data/maps/Route5/scripts.pory"
	walk_left
# 49 "data/maps/Route5/scripts.pory"
	walk_left
# 49 "data/maps/Route5/scripts.pory"
	walk_left
# 49 "data/maps/Route5/scripts.pory"
	walk_up
# 49 "data/maps/Route5/scripts.pory"
	face_right
	step_end

# 69 "data/maps/Route5/scripts.pory"
Route5_BoulderGuy_Movement_0:
# 69 "data/maps/Route5/scripts.pory"
	face_player
	step_end

Route5_SturdyRockBlocker_Text_0:
# 39 "data/maps/Route5/scripts.pory"
	.string "This rock seems sturdier than most...$"

Route5_Sign_Text_0:
# 63 "data/maps/Route5/scripts.pory"
	.string "Soothing Sands Resort!\nKeep going straight!$"

Route5_BoulderGuy_Text_0:
# 70 "data/maps/Route5/scripts.pory"
	.string "We've cleared out the major rockslide\n"
	.string "as best as we can, but the rocks are\l"
	.string "pretty unstable here so they still fall\l"
	.string "onto the path occasionally.$"

Route5_BoulderGuy_Text_1:
# 73 "data/maps/Route5/scripts.pory"
	.string "The rock guy came through and took off\n"
	.string "with the rock... Kind of a weird one if\l"
	.string "you ask me.$"

Route5_BoulderGuy_Text_2:
# 75 "data/maps/Route5/scripts.pory"
	.string "There's one rock left over that is\n"
	.string "proving to be especially problematic.$"

Route5_BoulderGuy_Text_3:
# 80 "data/maps/Route5/scripts.pory"
	.string "Watch your step! There was a major\n"
	.string "rockslide earlier. We're trying to get it\l"
	.string "cleared out as soon as possible.$"

Route5_Picnicker_Text_0:
# 88 "data/maps/Route5/scripts.pory"
	.string "Where you find rocky terrain, you'll find\n"
	.string "me!$"

Route5_Picnicker_Text_1:
# 89 "data/maps/Route5/scripts.pory"
	.string "Camping on a rocky outcropping is\n"
	.string "always fun.$"

Route5_Picnicker_Text_2:
# 91 "data/maps/Route5/scripts.pory"
	.string "The terrain starts to get a little more\n"
	.string "hostile around here.$"

Route5_BlackBelt_Text_0:
# 98 "data/maps/Route5/scripts.pory"
	.string "PUNCHING ROCKS MAKES MY FISTS HARD.$"

Route5_BlackBelt_Text_1:
# 99 "data/maps/Route5/scripts.pory"
	.string "PUNCHING ROCKS MAKES MY BONES HURT.$"

Route5_BlackBelt_Text_2:
# 101 "data/maps/Route5/scripts.pory"
	.string "The pain in my fists distracts me from\n"
	.string "the pain of my existance.$"

Route5_Expert_Text_0:
# 108 "data/maps/Route5/scripts.pory"
	.string "There is a retreat up ahead, I hope\n"
	.string "you'll help me get warmed up for it.$"

Route5_Expert_Text_1:
# 109 "data/maps/Route5/scripts.pory"
	.string "I'll be sure to release all this tension\n"
	.string "there.$"

Route5_Expert_Text_2:
# 111 "data/maps/Route5/scripts.pory"
	.string "The retreat is nothing too fancy, but\n"
	.string "it's nice for old folks like me.$"

Route5_SturdyRock_Text::
# 55 "data/maps/Route5/scripts.pory"
	.string "You're a traveller aren't you?\p"
	.string "This rock was left over from when\nwe cleared the debris.\p"
	.string "We haven't had much luck removing it,\nso we were kind of putting it off...\p"
	.string "I wonder if there's anyone at\nLibra Institute that might be able\lto lend us a hand...$"
