SpringWoods_MapScripts::
# 2 "data/maps/SpringWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SpringWoods_OnLoad
	.byte 0


SpringWoods_OnLoad::
# 6 "data/maps/SpringWoods/scripts.pory"
	compare VAR_EVELYNN_STATE, 3
	goto_if_ne SpringWoods_OnLoad_1
	return

SpringWoods_OnLoad_1:
# 7 "data/maps/SpringWoods/scripts.pory"
	setflag FLAG_TEMP_A
	return


SpringWoods_EvelynnL::
# 12 "data/maps/SpringWoods/scripts.pory"
	lock
# 13 "data/maps/SpringWoods/scripts.pory"
	hidefollower
# 14 "data/maps/SpringWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpringWoods_EvelynnL_Movement_0
# 15 "data/maps/SpringWoods/scripts.pory"
	waitmovement 0
# 16 "data/maps/SpringWoods/scripts.pory"
	goto SpringWoods_Evelynn
	return


SpringWoods_EvelynnL1::
# 20 "data/maps/SpringWoods/scripts.pory"
	lock
# 21 "data/maps/SpringWoods/scripts.pory"
	hidefollower
# 22 "data/maps/SpringWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpringWoods_EvelynnL1_Movement_0
# 23 "data/maps/SpringWoods/scripts.pory"
	waitmovement 0
# 24 "data/maps/SpringWoods/scripts.pory"
	goto SpringWoods_EvelynnL
	return


SpringWoods_EvelynnStairs::
# 28 "data/maps/SpringWoods/scripts.pory"
	lock
# 29 "data/maps/SpringWoods/scripts.pory"
	hidefollower
# 30 "data/maps/SpringWoods/scripts.pory"
	delay 16
# 31 "data/maps/SpringWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpringWoods_EvelynnStairs_Movement_0
# 32 "data/maps/SpringWoods/scripts.pory"
	waitmovement 0
# 33 "data/maps/SpringWoods/scripts.pory"
	goto SpringWoods_Evelynn
	return


SpringWoods_Evelynn::
# 37 "data/maps/SpringWoods/scripts.pory"
	msgbox SpringWoods_Evelynn_Text
# 38 "data/maps/SpringWoods/scripts.pory"
	applymovement 6, SpringWoods_Evelynn_Movement_0
# 39 "data/maps/SpringWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpringWoods_Evelynn_Movement_1
# 40 "data/maps/SpringWoods/scripts.pory"
	msgbox SpringWoods_Evelynn_Text2
# 41 "data/maps/SpringWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 42 "data/maps/SpringWoods/scripts.pory"
	msgbox SpringWoods_Evelynn_Text_0
# 43 "data/maps/SpringWoods/scripts.pory"
	trainerbattle_no_intro RIVAL_EVELYNN_1, SpringWoods_Evelynn_Text_1
# 44 "data/maps/SpringWoods/scripts.pory"
	fadedefaultbgm
# 45 "data/maps/SpringWoods/scripts.pory"
	delay 48
# 46 "data/maps/SpringWoods/scripts.pory"
	msgbox SpringWoods_Evelynn_Text3
# 47 "data/maps/SpringWoods/scripts.pory"
	applymovement 6, SpringWoods_Evelynn_Movement_2
# 48 "data/maps/SpringWoods/scripts.pory"
	waitmovement 0
# 49 "data/maps/SpringWoods/scripts.pory"
	removeobject 6
# 50 "data/maps/SpringWoods/scripts.pory"
	setvar VAR_EVELYNN_STATE, 4
# 51 "data/maps/SpringWoods/scripts.pory"
	release
	return


SpringWoods_BugCatcher::
# 74 "data/maps/SpringWoods/scripts.pory"
	trainerbattle_single TRAINER_SPRING_WOODS_BUG_CATCHER, SpringWoods_BugCatcher_Text_0, SpringWoods_BugCatcher_Text_1
# 79 "data/maps/SpringWoods/scripts.pory"
	msgbox SpringWoods_BugCatcher_Text_2, MSGBOX_AUTOCLOSE
	end


SpringWoods_Woman::
# 84 "data/maps/SpringWoods/scripts.pory"
	trainerbattle_single TRAINER_SPRING_WOODS_WOMAN, SpringWoods_Woman_Text_0, SpringWoods_Woman_Text_1
# 89 "data/maps/SpringWoods/scripts.pory"
	msgbox SpringWoods_Woman_Text_2, MSGBOX_AUTOCLOSE
	end


SpringWoods_Girl::
# 94 "data/maps/SpringWoods/scripts.pory"
	trainerbattle_single TRAINER_SPRING_WOODS_GIRL, SpringWoods_Girl_Text_0, SpringWoods_Girl_Text_1
# 99 "data/maps/SpringWoods/scripts.pory"
	msgbox SpringWoods_Girl_Text_2, MSGBOX_AUTOCLOSE
	end


SpringWoods_Picnicker::
# 104 "data/maps/SpringWoods/scripts.pory"
	trainerbattle_single TRAINER_SPRING_WOODS_PICNICKER, SpringWoods_Picnicker_Text_0, SpringWoods_Picnicker_Text_1
# 109 "data/maps/SpringWoods/scripts.pory"
	msgbox SpringWoods_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


# 14 "data/maps/SpringWoods/scripts.pory"
SpringWoods_EvelynnL_Movement_0:
# 14 "data/maps/SpringWoods/scripts.pory"
	walk_right
# 14 "data/maps/SpringWoods/scripts.pory"
	walk_right
# 14 "data/maps/SpringWoods/scripts.pory"
	walk_right
# 14 "data/maps/SpringWoods/scripts.pory"
	walk_right
# 14 "data/maps/SpringWoods/scripts.pory"
	walk_up
	step_end

# 22 "data/maps/SpringWoods/scripts.pory"
SpringWoods_EvelynnL1_Movement_0:
# 22 "data/maps/SpringWoods/scripts.pory"
	walk_up
	step_end

# 31 "data/maps/SpringWoods/scripts.pory"
SpringWoods_EvelynnStairs_Movement_0:
# 31 "data/maps/SpringWoods/scripts.pory"
	walk_left
# 31 "data/maps/SpringWoods/scripts.pory"
	walk_left
# 31 "data/maps/SpringWoods/scripts.pory"
	walk_up
# 31 "data/maps/SpringWoods/scripts.pory"
	walk_up
# 31 "data/maps/SpringWoods/scripts.pory"
	walk_up
	step_end

# 38 "data/maps/SpringWoods/scripts.pory"
SpringWoods_Evelynn_Movement_0:
# 38 "data/maps/SpringWoods/scripts.pory"
	face_right
	step_end

# 39 "data/maps/SpringWoods/scripts.pory"
SpringWoods_Evelynn_Movement_1:
# 39 "data/maps/SpringWoods/scripts.pory"
	face_left
	step_end

# 47 "data/maps/SpringWoods/scripts.pory"
SpringWoods_Evelynn_Movement_2:
# 47 "data/maps/SpringWoods/scripts.pory"
	walk_down
# 47 "data/maps/SpringWoods/scripts.pory"
	walk_left
# 47 "data/maps/SpringWoods/scripts.pory"
	walk_left
# 47 "data/maps/SpringWoods/scripts.pory"
	walk_left
# 47 "data/maps/SpringWoods/scripts.pory"
	walk_left
# 47 "data/maps/SpringWoods/scripts.pory"
	walk_left
# 47 "data/maps/SpringWoods/scripts.pory"
	walk_left
# 47 "data/maps/SpringWoods/scripts.pory"
	walk_left
	step_end

SpringWoods_Evelynn_Text_0:
# 42 "data/maps/SpringWoods/scripts.pory"
	.string "I hope you have what it takes.$"

SpringWoods_Evelynn_Text_1:
# 43 "data/maps/SpringWoods/scripts.pory"
	.string "Hah, you really are something.$"

SpringWoods_BugCatcher_Text_0:
# 76 "data/maps/SpringWoods/scripts.pory"
	.string "Spring Woods have a great vibe!$"

SpringWoods_BugCatcher_Text_1:
# 77 "data/maps/SpringWoods/scripts.pory"
	.string "I can't even be mad, I'm enjoying the\n"
	.string "vibes here.$"

SpringWoods_BugCatcher_Text_2:
# 79 "data/maps/SpringWoods/scripts.pory"
	.string "The air is nice and cool in here, it's a\n"
	.string "really nice vibe.$"

SpringWoods_Woman_Text_0:
# 86 "data/maps/SpringWoods/scripts.pory"
	.string "The Pokemon here are really cute.$"

SpringWoods_Woman_Text_1:
# 87 "data/maps/SpringWoods/scripts.pory"
	.string "Not everyone can appreciate my tastes.$"

SpringWoods_Woman_Text_2:
# 89 "data/maps/SpringWoods/scripts.pory"
	.string "Sometimes it's nice to just be in\n"
	.string "nature.$"

SpringWoods_Girl_Text_0:
# 96 "data/maps/SpringWoods/scripts.pory"
	.string "My Pokemon will be strong!$"

SpringWoods_Girl_Text_1:
# 97 "data/maps/SpringWoods/scripts.pory"
	.string "Strength is built up over time...$"

SpringWoods_Girl_Text_2:
# 99 "data/maps/SpringWoods/scripts.pory"
	.string "I feel like I spend more time battling\n"
	.string "the desire to eat ice-cream than I do\l"
	.string "battling wild Pokemon.$"

SpringWoods_Picnicker_Text_0:
# 106 "data/maps/SpringWoods/scripts.pory"
	.string "Did you know that Springwood City is\n"
	.string "named after the Spring Woods?$"

SpringWoods_Picnicker_Text_1:
# 107 "data/maps/SpringWoods/scripts.pory"
	.string "My fun fact didn't distract you from\n"
	.string "winning.$"

SpringWoods_Picnicker_Text_2:
# 109 "data/maps/SpringWoods/scripts.pory"
	.string "Spring Woods are named after the spring\n"
	.string "that provides the water for the woods\l"
	.string "to propsper.$"

SpringWoods_Evelynn_Text::
# 54 "data/maps/SpringWoods/scripts.pory"
	.string "...\p"
	.string "This forest is a beautiful place.\p"
	.string "The warm water that flows out of the\nspring that is its namesake carries\labundant minerals to enrich the soil.\p"
	.string "It's a perfect harmony of nature.$"

SpringWoods_Evelynn_Text2::
# 61 "data/maps/SpringWoods/scripts.pory"
	.string "Yet, there are groups of people that\nwish to stop this type of harmony.\p"
	.string "I'm not sure where they came from,\nand I certainly don't understand why\lthey feel the need to do it.\p"
	.string "That's why I'm trying to find a way\nto stop them.\p"
	.string "I'm always looking for allies,\nbut I need to know if you have what\lit takes for me to trust you.$"

SpringWoods_Evelynn_Text3::
# 68 "data/maps/SpringWoods/scripts.pory"
	.string "I can't say I trust you yet,\nbut I can say you have some backbone.\p"
	.string "I'll keep an eye out for you from now on,\nhopefully next time we meet we won't\lbe on opposing sides.$"
