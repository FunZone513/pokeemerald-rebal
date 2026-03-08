Route2_MapScripts::
# 2 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_StoryCheck
	.byte 0


Route2_StoryCheck::
# 6 "data/maps/Route2/scripts.pory"
	compare VAR_EVELYNN_STATE, 0
	goto_if_gt Route2_StoryCheck_1
	return

Route2_StoryCheck_1:
# 7 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_A
	return


Route2_Trigger_CamperL::
# 12 "data/maps/Route2/scripts.pory"
	call Route2_MoveCamper
	return


Route2_Trigger_CamperR::
# 16 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_0, 2
# 17 "data/maps/Route2/scripts.pory"
	call Route2_MoveCamper
	return


Route2_MoveCamper::
# 21 "data/maps/Route2/scripts.pory"
	lockall
# 22 "data/maps/Route2/scripts.pory"
	applymovement 1, Route2_MoveCamper_Movement_0
# 23 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 24 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route2/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 26 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route2/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 28 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route2/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_MoveCamper_2
# 35 "data/maps/Route2/scripts.pory"
	applymovement 1, Route2_MoveCamper_Movement_2
Route2_MoveCamper_1:
# 40 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route2/scripts.pory"
	msgbox Route2_Camper_Warning_Text, MSGBOX_NPC
# 42 "data/maps/Route2/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_MoveCamper_6
# 48 "data/maps/Route2/scripts.pory"
	applymovement 1, Route2_MoveCamper_Movement_4
Route2_MoveCamper_5:
# 53 "data/maps/Route2/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 4
# 54 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route2/scripts.pory"
	applymovement 1, Route2_MoveCamper_Movement_0
# 56 "data/maps/Route2/scripts.pory"
	releaseall
	return

Route2_MoveCamper_2:
# 30 "data/maps/Route2/scripts.pory"
	applymovement 1, Route2_MoveCamper_Movement_1
	goto Route2_MoveCamper_1

Route2_MoveCamper_6:
# 43 "data/maps/Route2/scripts.pory"
	applymovement 1, Route2_MoveCamper_Movement_3
	goto Route2_MoveCamper_5


Route2_Camper::
# 72 "data/maps/Route2/scripts.pory"
	msgbox Route2_Camper_Text_0, MSGBOX_NPC
	return


Route2_Miniboss::
# 76 "data/maps/Route2/scripts.pory"
	lockall
# 77 "data/maps/Route2/scripts.pory"
	applymovement 2, Route2_Miniboss_Movement_0
# 78 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_PARASECT, CRY_MODE_ENCOUNTER
# 80 "data/maps/Route2/scripts.pory"
	setseenmon SPECIES_PARASECT
# 81 "data/maps/Route2/scripts.pory"
	msgbox Route2_Miniboss_Text_0
# 82 "data/maps/Route2/scripts.pory"
	waitmoncry
# 83 "data/maps/Route2/scripts.pory"
	msgbox Route2_Miniboss_Text_1, MSGBOX_YESNO
# 84 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route2_Miniboss_2
# 87 "data/maps/Route2/scripts.pory"
	msgbox Route2_Miniboss_Text_3
# 88 "data/maps/Route2/scripts.pory"
	call Route2_Miniboss_Battle
Route2_Miniboss_1:
# 90 "data/maps/Route2/scripts.pory"
	releaseall
	return

Route2_Miniboss_2:
# 85 "data/maps/Route2/scripts.pory"
	msgbox Route2_Miniboss_Text_2
	goto Route2_Miniboss_1


Route2_Miniboss_Battle::
# 94 "data/maps/Route2/scripts.pory"
	setwildbattle SPECIES_PARASECT, 30, ITEM_OCCA_BERRY
# 95 "data/maps/Route2/scripts.pory"
	setflag FLAG_ACTIVE_BOSS_BATTLE
# 96 "data/maps/Route2/scripts.pory"
	dowildbattle
# 97 "data/maps/Route2/scripts.pory"
	clearflag FLAG_ACTIVE_BOSS_BATTLE
# 98 "data/maps/Route2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 99 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route2_Miniboss_Battle_2
Route2_Miniboss_Battle_1:
# 104 "data/maps/Route2/scripts.pory"
	releaseall
	return

Route2_Miniboss_Battle_2:
# 100 "data/maps/Route2/scripts.pory"
	setflag FLAG_HIDE_ROUTE2_MINIBOSS
# 101 "data/maps/Route2/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 102 "data/maps/Route2/scripts.pory"
	removeobject 2
	goto Route2_Miniboss_Battle_1


Route2_BlackBelt::
# 108 "data/maps/Route2/scripts.pory"
	msgbox Route2_BlackBelt_Text_0, MSGBOX_NPC
	return


Route2_Evelynn::
# 112 "data/maps/Route2/scripts.pory"
	lock
# 113 "data/maps/Route2/scripts.pory"
	msgbox Route2_Evelynn_Text_0
# 114 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 115 "data/maps/Route2/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 116 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 117 "data/maps/Route2/scripts.pory"
	applymovement 6, Route2_MoveCamper_Movement_0
# 118 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 119 "data/maps/Route2/scripts.pory"
	applymovement 6, Common_Movement_Delay48
# 120 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 121 "data/maps/Route2/scripts.pory"
	msgbox Route2_Evelynn_Text_1
# 122 "data/maps/Route2/scripts.pory"
	applymovement 6, Route2_Evelynn_Movement_0
# 123 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route2/scripts.pory"
	removeobject 6
# 125 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_A
# 126 "data/maps/Route2/scripts.pory"
	setvar VAR_EVELYNN_STATE, 1
# 127 "data/maps/Route2/scripts.pory"
	release
	return


# 22 "data/maps/Route2/scripts.pory"
Route2_MoveCamper_Movement_0:
# 22 "data/maps/Route2/scripts.pory"
	face_down
	step_end

# 30 "data/maps/Route2/scripts.pory"
Route2_MoveCamper_Movement_1:
# 31 "data/maps/Route2/scripts.pory"
	walk_right
# 31 "data/maps/Route2/scripts.pory"
	walk_right
# 32 "data/maps/Route2/scripts.pory"
	walk_down
# 32 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 35 "data/maps/Route2/scripts.pory"
Route2_MoveCamper_Movement_2:
# 36 "data/maps/Route2/scripts.pory"
	walk_right
# 37 "data/maps/Route2/scripts.pory"
	walk_down
# 37 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 43 "data/maps/Route2/scripts.pory"
Route2_MoveCamper_Movement_3:
# 44 "data/maps/Route2/scripts.pory"
	walk_up
# 44 "data/maps/Route2/scripts.pory"
	walk_up
# 45 "data/maps/Route2/scripts.pory"
	walk_left
# 45 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 48 "data/maps/Route2/scripts.pory"
Route2_MoveCamper_Movement_4:
# 49 "data/maps/Route2/scripts.pory"
	walk_up
# 49 "data/maps/Route2/scripts.pory"
	walk_up
# 50 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 77 "data/maps/Route2/scripts.pory"
Route2_Miniboss_Movement_0:
# 77 "data/maps/Route2/scripts.pory"
	face_player
	step_end

# 122 "data/maps/Route2/scripts.pory"
Route2_Evelynn_Movement_0:
# 122 "data/maps/Route2/scripts.pory"
	walk_up
# 122 "data/maps/Route2/scripts.pory"
	walk_up
# 122 "data/maps/Route2/scripts.pory"
	walk_up
# 122 "data/maps/Route2/scripts.pory"
	walk_up
# 122 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Camper_Text_0:
# 72 "data/maps/Route2/scripts.pory"
	.string "I hope you can get the Gym Leader to\ncome soon, I'd like to go back home.$"

Route2_Miniboss_Text_0:
# 81 "data/maps/Route2/scripts.pory"
	.string "The Pokemon seems agitated!\nIt might attack if provoked!$"

Route2_Miniboss_Text_1:
# 83 "data/maps/Route2/scripts.pory"
	.string "Will you leave it alone?$"

Route2_Miniboss_Text_2:
# 85 "data/maps/Route2/scripts.pory"
	.string "Probably for the best.$"

Route2_Miniboss_Text_3:
# 87 "data/maps/Route2/scripts.pory"
	.string "The Pokemon attacked!$"

Route2_BlackBelt_Text_0:
# 108 "data/maps/Route2/scripts.pory"
	.string "I WISH I KNEW HOW TO SWIM!$"

Route2_Evelynn_Text_0:
# 113 "data/maps/Route2/scripts.pory"
	.string "You poor thing,\nwhat did those idiots do to you?$"

Route2_Evelynn_Text_1:
# 121 "data/maps/Route2/scripts.pory"
	.string "Can I help you?\p...\pOh wait,\nI don't care.$"

Route2_Camper_Warning_Text::
# 59 "data/maps/Route2/scripts.pory"
	.string "Hey there, I see you've just come from\nNewstem Town.\p"
	.string "I'm here to warn travellers about an\naggressive Pokemon just up ahead.\p"
	.string "I'm not sure why it's so upset,\nbut I would recommend avoiding it.\p"
	.string "Gym Leader Martin is supposed to be\ncoming to help calm it down,\l"
	.string "but I haven't heard from him in a bit.\p"
	.string "Say, could you go and\nfind out where he is?\p"
	.string "It would be really helpful,\nas I'm stuck here making sure it\l"
	.string "doesn't hurt anyone.\p"
	.string "Best of luck!$"
