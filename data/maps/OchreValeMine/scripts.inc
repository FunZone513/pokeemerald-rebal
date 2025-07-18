OchreValeMine_MapScripts::
# 2 "data/maps/OchreValeMine/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OchreValeMine_OnTransition
	.byte 0


OchreValeMine_OnTransition::
# 6 "data/maps/OchreValeMine/scripts.pory"
	setflashlevel 2
# 7 "data/maps/OchreValeMine/scripts.pory"
	goto_if_unset FLAG_CLEARED_OCHRE_VALE_MINE, OchreValeMine_OnTransition_1
	return

OchreValeMine_OnTransition_1:
# 8 "data/maps/OchreValeMine/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


OchreValeMine_MagmaEncounter::
# 13 "data/maps/OchreValeMine/scripts.pory"
	lockall
# 14 "data/maps/OchreValeMine/scripts.pory"
	setvar VAR_TEMP_1, 0
# 15 "data/maps/OchreValeMine/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OchreValeMine_MagmaEncounter_Movement_0
# 16 "data/maps/OchreValeMine/scripts.pory"
	special SpawnCameraObject
# 17 "data/maps/OchreValeMine/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OchreValeMine_MagmaEncounter_Movement_1
# 18 "data/maps/OchreValeMine/scripts.pory"
	waitmovement 0
# 19 "data/maps/OchreValeMine/scripts.pory"
	msgbox OchreValeMine_MagmaEncounter_Text_0
# 20 "data/maps/OchreValeMine/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OchreValeMine_MagmaEncounter_Movement_1
# 21 "data/maps/OchreValeMine/scripts.pory"
	waitmovement 0
# 22 "data/maps/OchreValeMine/scripts.pory"
	msgbox OchreValeMine_MagmaEncounter_Text_1
# 23 "data/maps/OchreValeMine/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OchreValeMine_MagmaEncounter_Movement_2
# 24 "data/maps/OchreValeMine/scripts.pory"
	waitmovement 0
# 25 "data/maps/OchreValeMine/scripts.pory"
	msgbox OchreValeMine_MagmaEncounter_Text_2
# 26 "data/maps/OchreValeMine/scripts.pory"
	applymovement 22, OchreValeMine_MagmaEncounter_Movement_3
# 27 "data/maps/OchreValeMine/scripts.pory"
	applymovement 23, OchreValeMine_MagmaEncounter_Movement_3
# 28 "data/maps/OchreValeMine/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OchreValeMine_MagmaEncounter_Movement_3
# 29 "data/maps/OchreValeMine/scripts.pory"
	waitmovement 0
# 30 "data/maps/OchreValeMine/scripts.pory"
	delay 48
# 31 "data/maps/OchreValeMine/scripts.pory"
	playse SE_PIN
# 32 "data/maps/OchreValeMine/scripts.pory"
	applymovement 24, Common_Movement_ExclamationMark
# 33 "data/maps/OchreValeMine/scripts.pory"
	waitmovement 0
# 34 "data/maps/OchreValeMine/scripts.pory"
	applymovement 24, Common_Movement_Delay48
# 35 "data/maps/OchreValeMine/scripts.pory"
	waitmovement 0
# 36 "data/maps/OchreValeMine/scripts.pory"
	msgbox OchreValeMine_MagmaEncounter_Text_3
# 37 "data/maps/OchreValeMine/scripts.pory"
	waitse
# 38 "data/maps/OchreValeMine/scripts.pory"
	playse SE_PIN
# 39 "data/maps/OchreValeMine/scripts.pory"
	delay 8
# 40 "data/maps/OchreValeMine/scripts.pory"
	waitse
# 41 "data/maps/OchreValeMine/scripts.pory"
	playse SE_PIN
# 42 "data/maps/OchreValeMine/scripts.pory"
	applymovement 22, Common_Movement_ExclamationMark
# 43 "data/maps/OchreValeMine/scripts.pory"
	applymovement 23, Common_Movement_ExclamationMark
# 44 "data/maps/OchreValeMine/scripts.pory"
	waitmovement 0
# 45 "data/maps/OchreValeMine/scripts.pory"
	applymovement 22, OchreValeMine_MagmaEncounter_Movement_4
# 46 "data/maps/OchreValeMine/scripts.pory"
	applymovement 23, OchreValeMine_MagmaEncounter_Movement_4
# 47 "data/maps/OchreValeMine/scripts.pory"
	waitmovement 0
# 48 "data/maps/OchreValeMine/scripts.pory"
	delay 48
# 49 "data/maps/OchreValeMine/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OchreValeMine_MagmaEncounter_Movement_1
# 50 "data/maps/OchreValeMine/scripts.pory"
	msgbox OchreValeMine_MagmaEncounter_Text_4
# 51 "data/maps/OchreValeMine/scripts.pory"
	trainerbattle_two_trainers TRAINER_OCHRE_VALE_MINE_MAGMA_GRUNT2, OchreValeMine_MagmaEncounter_Text_5, TRAINER_OCHRE_VALE_MINE_MAGMA_GRUNT1, OchreValeMine_MagmaEncounter_Text_6
# 52 "data/maps/OchreValeMine/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OchreValeMine_MagmaEncounter_Movement_2
# 53 "data/maps/OchreValeMine/scripts.pory"
	waitmovement 0
# 54 "data/maps/OchreValeMine/scripts.pory"
	special RemoveCameraObject
# 55 "data/maps/OchreValeMine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 56 "data/maps/OchreValeMine/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OchreValeMine_MagmaEncounter_2
OchreValeMine_MagmaEncounter_1:
# 75 "data/maps/OchreValeMine/scripts.pory"
	releaseall
	return

OchreValeMine_MagmaEncounter_2:
# 57 "data/maps/OchreValeMine/scripts.pory"
	msgbox OchreValeMine_MagmaEncounter_Text_7
# 58 "data/maps/OchreValeMine/scripts.pory"
	setvar VAR_ROUTE4_WATER_STONE_STATE, 6
# 59 "data/maps/OchreValeMine/scripts.pory"
	fadescreen FADE_TO_BLACK
# 60 "data/maps/OchreValeMine/scripts.pory"
	removeobject 22
# 61 "data/maps/OchreValeMine/scripts.pory"
	removeobject 23
# 62 "data/maps/OchreValeMine/scripts.pory"
	playse SE_FLEE
# 63 "data/maps/OchreValeMine/scripts.pory"
	delay 60
# 64 "data/maps/OchreValeMine/scripts.pory"
	special DrawWholeMapView
# 65 "data/maps/OchreValeMine/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 66 "data/maps/OchreValeMine/scripts.pory"
	delay 16
# 67 "data/maps/OchreValeMine/scripts.pory"
	applymovement 24, OchreValeMine_MagmaEncounter_Movement_5
# 68 "data/maps/OchreValeMine/scripts.pory"
	waitmovement 0
# 69 "data/maps/OchreValeMine/scripts.pory"
	msgbox OchreValeMine_MagmaEncounter_EndText
# 70 "data/maps/OchreValeMine/scripts.pory"
	delay 16
# 71 "data/maps/OchreValeMine/scripts.pory"
	applymovement 24, OchreValeMine_MagmaEncounter_Movement_3
# 72 "data/maps/OchreValeMine/scripts.pory"
	waitmovement 0
# 73 "data/maps/OchreValeMine/scripts.pory"
	setvar VAR_TEMP_2, 0
	goto OchreValeMine_MagmaEncounter_1


OchreValeMine_ScientistGuy::
# 85 "data/maps/OchreValeMine/scripts.pory"
	lockall
# 86 "data/maps/OchreValeMine/scripts.pory"
	msgbox OchreValeMine_ScientistGuy_Text_0, MSGBOX_NPC
# 87 "data/maps/OchreValeMine/scripts.pory"
	releaseall
	return


OchreValeMine_MagmaEncounterClear::
# 91 "data/maps/OchreValeMine/scripts.pory"
	goto_if_unset FLAG_CLEARED_OCHRE_VALE_MINE, OchreValeMine_MagmaEncounterClear_2
OchreValeMine_MagmaEncounterClear_1:
# 94 "data/maps/OchreValeMine/scripts.pory"
	setvar VAR_TEMP_2, 0
	return

OchreValeMine_MagmaEncounterClear_2:
# 92 "data/maps/OchreValeMine/scripts.pory"
	setflag FLAG_CLEARED_OCHRE_VALE_MINE
	goto OchreValeMine_MagmaEncounterClear_1


OchreValeMine_BlackBelt::
# 98 "data/maps/OchreValeMine/scripts.pory"
	trainerbattle_single TRAINER_OCHRE_VALE_MINE_BLACK_BELT, OchreValeMine_BlackBelt_Text_0, OchreValeMine_BlackBelt_Text_1
# 103 "data/maps/OchreValeMine/scripts.pory"
	msgbox OchreValeMine_BlackBelt_Text_2, MSGBOX_AUTOCLOSE
	end


OchreValeMine_BattleGirl::
# 108 "data/maps/OchreValeMine/scripts.pory"
	trainerbattle_single TRAINER_OCHRE_VALE_MINE_BATTLE_GIRL, OchreValeMine_BattleGirl_Text_0, OchreValeMine_BattleGirl_Text_1
# 113 "data/maps/OchreValeMine/scripts.pory"
	msgbox OchreValeMine_BattleGirl_Text_2, MSGBOX_AUTOCLOSE
	end


OchreValeMine_Picnicker::
# 118 "data/maps/OchreValeMine/scripts.pory"
	trainerbattle_single TRAINER_OCHRE_VALE_MINE_PICNICKER, OchreValeMine_Picnicker_Text_0, OchreValeMine_Picnicker_Text_1
# 123 "data/maps/OchreValeMine/scripts.pory"
	msgbox OchreValeMine_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


OchreValeMine_Hiker::
# 128 "data/maps/OchreValeMine/scripts.pory"
	trainerbattle_single TRAINER_OCHRE_VALE_MINE_HIKER, OchreValeMine_Hiker_Text_0, OchreValeMine_Hiker_Text_1
# 133 "data/maps/OchreValeMine/scripts.pory"
	msgbox OchreValeMine_Hiker_Text_2, MSGBOX_AUTOCLOSE
	end


OchreValeMine_GemstoneRed::
# 138 "data/maps/OchreValeMine/scripts.pory"
	lockall
# 139 "data/maps/OchreValeMine/scripts.pory"
	msgbox OchreValeMine_GemstoneRed_Text_0, MSGBOX_SIGN
# 140 "data/maps/OchreValeMine/scripts.pory"
	releaseall
	return


OchreValeMine_GemstoneBlue::
# 144 "data/maps/OchreValeMine/scripts.pory"
	lockall
# 145 "data/maps/OchreValeMine/scripts.pory"
	msgbox OchreValeMine_GemstoneBlue_Text_0, MSGBOX_SIGN
# 146 "data/maps/OchreValeMine/scripts.pory"
	releaseall
	return


# 15 "data/maps/OchreValeMine/scripts.pory"
OchreValeMine_MagmaEncounter_Movement_0:
# 15 "data/maps/OchreValeMine/scripts.pory"
	face_right
	step_end

# 17 "data/maps/OchreValeMine/scripts.pory"
OchreValeMine_MagmaEncounter_Movement_1:
# 17 "data/maps/OchreValeMine/scripts.pory"
	walk_right
# 17 "data/maps/OchreValeMine/scripts.pory"
	walk_right
	step_end

# 23 "data/maps/OchreValeMine/scripts.pory"
OchreValeMine_MagmaEncounter_Movement_2:
# 23 "data/maps/OchreValeMine/scripts.pory"
	walk_left
# 23 "data/maps/OchreValeMine/scripts.pory"
	walk_left
	step_end

# 26 "data/maps/OchreValeMine/scripts.pory"
OchreValeMine_MagmaEncounter_Movement_3:
# 26 "data/maps/OchreValeMine/scripts.pory"
	walk_right
	step_end

# 45 "data/maps/OchreValeMine/scripts.pory"
OchreValeMine_MagmaEncounter_Movement_4:
# 45 "data/maps/OchreValeMine/scripts.pory"
	face_left
	step_end

# 67 "data/maps/OchreValeMine/scripts.pory"
OchreValeMine_MagmaEncounter_Movement_5:
# 67 "data/maps/OchreValeMine/scripts.pory"
	walk_left
	step_end

OchreValeMine_MagmaEncounter_Text_0:
# 19 "data/maps/OchreValeMine/scripts.pory"
	.string "We told you to stop looking into it!$"

OchreValeMine_MagmaEncounter_Text_1:
# 22 "data/maps/OchreValeMine/scripts.pory"
	.string "Theres something weird about it\n"
	.string "though! We have to figure out what the\l"
	.string "readings mean, don't you understand?!$"

OchreValeMine_MagmaEncounter_Text_2:
# 25 "data/maps/OchreValeMine/scripts.pory"
	.string "It's not our job to understand, our job\n"
	.string "is just to stop people like you from\l"
	.string "doing what you're doing.$"

OchreValeMine_MagmaEncounter_Text_3:
# 36 "data/maps/OchreValeMine/scripts.pory"
	.string "Hey! You over there! Can you please\n"
	.string "help me out here?$"

OchreValeMine_MagmaEncounter_Text_4:
# 50 "data/maps/OchreValeMine/scripts.pory"
	.string "Who are you to try and get in our way?\n"
	.string "We're just here to stop them from doing\l"
	.string "something foolish!$"

OchreValeMine_MagmaEncounter_Text_5:
# 51 "data/maps/OchreValeMine/scripts.pory"
	.string "You don't understand what you're doing\n"
	.string "here!$"

OchreValeMine_MagmaEncounter_Text_6:
# 51 "data/maps/OchreValeMine/scripts.pory"
	.string "Look at the bigger picture!$"

OchreValeMine_MagmaEncounter_Text_7:
# 57 "data/maps/OchreValeMine/scripts.pory"
	.string "We'll retreat for now, but we'll keep an\n"
	.string "eye on you.$"

OchreValeMine_ScientistGuy_Text_0:
# 86 "data/maps/OchreValeMine/scripts.pory"
	.string "I'm going to finish collecting the\n"
	.string "samples I need then I'll report back to\l"
	.string "the Lab. Feel free to go on ahead.$"

OchreValeMine_BlackBelt_Text_0:
# 100 "data/maps/OchreValeMine/scripts.pory"
	.string "THIS IS A GREAT PLACE TO TEST THE\n"
	.string "POWER OF MY FISTS!$"

OchreValeMine_BlackBelt_Text_1:
# 101 "data/maps/OchreValeMine/scripts.pory"
	.string "I NEED TO PUNCH MORE ROCKS!$"

OchreValeMine_BlackBelt_Text_2:
# 103 "data/maps/OchreValeMine/scripts.pory"
	.string "Destroying rocks here benefits both\n"
	.string "myself and the miners as it helps quarry\l"
	.string "for materials.$"

OchreValeMine_BattleGirl_Text_0:
# 110 "data/maps/OchreValeMine/scripts.pory"
	.string "I heard this was a great place to train,\n"
	.string "but I'm scared of the dark...$"

OchreValeMine_BattleGirl_Text_1:
# 111 "data/maps/OchreValeMine/scripts.pory"
	.string "Can you please point me to the\n"
	.string "entrance?$"

OchreValeMine_BattleGirl_Text_2:
# 113 "data/maps/OchreValeMine/scripts.pory"
	.string "I knew I shouldn't have come here, I\n"
	.string "thought training in the dark would help\l"
	.string "me get over my fears, but the noises of\l"
	.string "rocks breaking is just making it worse.$"

OchreValeMine_Picnicker_Text_0:
# 120 "data/maps/OchreValeMine/scripts.pory"
	.string "Isn't it weird that its spelled 'Picnic'?$"

OchreValeMine_Picnicker_Text_1:
# 121 "data/maps/OchreValeMine/scripts.pory"
	.string "'Picknick'? No?$"

OchreValeMine_Picnicker_Text_2:
# 123 "data/maps/OchreValeMine/scripts.pory"
	.string "Picnic, Picnicker, Picknic, Picknicker,\n"
	.string "Picknick, Picknicer... I don't even know\l"
	.string "anymore...$"

OchreValeMine_Hiker_Text_0:
# 130 "data/maps/OchreValeMine/scripts.pory"
	.string "The view of the cave would be great\n"
	.string "with a light.$"

OchreValeMine_Hiker_Text_1:
# 131 "data/maps/OchreValeMine/scripts.pory"
	.string "Have flashlights been invented?$"

OchreValeMine_Hiker_Text_2:
# 133 "data/maps/OchreValeMine/scripts.pory"
	.string "I wish I could just light up the entire\n"
	.string "cave somehow, but I don't think it's\l"
	.string "possible.$"

OchreValeMine_GemstoneRed_Text_0:
# 139 "data/maps/OchreValeMine/scripts.pory"
	.string "There appears to be a strange red\n"
	.string "crystal hidden amongst the rocks.$"

OchreValeMine_GemstoneBlue_Text_0:
# 145 "data/maps/OchreValeMine/scripts.pory"
	.string "There appears to be a strange blue\n"
	.string "crystal hidden amongst the rocks.$"

OchreValeMine_MagmaEncounter_EndText::
# 78 "data/maps/OchreValeMine/scripts.pory"
	.string "Thank you for your assistance,\nI'm not sure why they were so riled up.\p"
	.string "They never used to be this bad before,\nsomething must've happened for them to\lgo off the rails like this.\p"
	.string "They should stop interfering with our\nresearch now, so we can finally get\lthe materials sent to the lab.$"
