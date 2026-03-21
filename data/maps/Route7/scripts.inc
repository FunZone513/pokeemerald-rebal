Route7_MapScripts::
# 2 "data/maps/Route7/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route7_OnLoad
	.byte 0


Route7_OnLoad::
# 6 "data/maps/Route7/scripts.pory"
	goto_if_unset FLAG_SEEN_ROUTE7_MAGMA_GRUNTS, Route7_OnLoad_1
	return

Route7_OnLoad_1:
# 7 "data/maps/Route7/scripts.pory"
	setvar VAR_TEMP_A, 1
	return


Route7_BridgeTrigger::
# 12 "data/maps/Route7/scripts.pory"
	lock
# 13 "data/maps/Route7/scripts.pory"
	setvar VAR_TEMP_A, 0
# 14 "data/maps/Route7/scripts.pory"
	setflag FLAG_SEEN_ROUTE7_MAGMA_GRUNTS
# 15 "data/maps/Route7/scripts.pory"
	playse SE_PIN
# 17 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 18 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 19 "data/maps/Route7/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, NULL, VAR_TEMP_1
# 20 "data/maps/Route7/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq Route7_BridgeTrigger_2
Route7_BridgeTrigger_1:
# 21 "data/maps/Route7/scripts.pory"
	applymovement 13, Route7_BridgeTrigger_Movement_0
# 22 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 23 "data/maps/Route7/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq Route7_BridgeTrigger_5
# 25 "data/maps/Route7/scripts.pory"
	applymovement 13, Route7_BridgeTrigger_Movement_2
Route7_BridgeTrigger_4:
# 26 "data/maps/Route7/scripts.pory"
	applymovement 10, Route7_BridgeTrigger_Movement_3
# 27 "data/maps/Route7/scripts.pory"
	applymovement 11, Route7_BridgeTrigger_Movement_3
# 28 "data/maps/Route7/scripts.pory"
	delay 32
# 29 "data/maps/Route7/scripts.pory"
	playse SE_PIN
# 30 "data/maps/Route7/scripts.pory"
	msgbox Route7_BridgeTrigger_Text_0, MSGBOX_DEFAULT
# 31 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route7/scripts.pory"
	msgbox Route7_BridgeTrigger_Text_1, MSGBOX_DEFAULT
# 33 "data/maps/Route7/scripts.pory"
	closemessage
# 34 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_BridgeTrigger_Movement_4
# 35 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route7/scripts.pory"
	playse SE_LEDGE
# 37 "data/maps/Route7/scripts.pory"
	applymovement 13, Route7_BridgeTrigger_Movement_5
# 38 "data/maps/Route7/scripts.pory"
	waitse
# 39 "data/maps/Route7/scripts.pory"
	playse SE_LEDGE
# 40 "data/maps/Route7/scripts.pory"
	waitmovement 13
# 41 "data/maps/Route7/scripts.pory"
	waitse
# 42 "data/maps/Route7/scripts.pory"
	playmoncry SPECIES_NIDORAN_M, CRY_MODE_WEAK
# 43 "data/maps/Route7/scripts.pory"
	delay 48
# 44 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_BridgeTrigger_Movement_6
# 45 "data/maps/Route7/scripts.pory"
	msgbox Route7_BridgeTrigger_Text_2, MSGBOX_DEFAULT
# 46 "data/maps/Route7/scripts.pory"
	waitmoncry
# 47 "data/maps/Route7/scripts.pory"
	closemessage
# 48 "data/maps/Route7/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq Route7_BridgeTrigger_9
Route7_BridgeTrigger_8:
# 49 "data/maps/Route7/scripts.pory"
	playse SE_PIN
# 50 "data/maps/Route7/scripts.pory"
	applymovement 10, Route7_BridgeTrigger_Movement_7
# 51 "data/maps/Route7/scripts.pory"
	applymovement 11, Route7_BridgeTrigger_Movement_7
# 52 "data/maps/Route7/scripts.pory"
	applymovement 12, Route7_BridgeTrigger_Movement_8
# 53 "data/maps/Route7/scripts.pory"
	waitmovement 11
# 54 "data/maps/Route7/scripts.pory"
	applymovement 10, Route7_BridgeTrigger_Movement_9
# 55 "data/maps/Route7/scripts.pory"
	applymovement 11, Route7_BridgeTrigger_Movement_9
# 56 "data/maps/Route7/scripts.pory"
	waitmovement 11
# 57 "data/maps/Route7/scripts.pory"
	applymovement 10, Route7_BridgeTrigger_Movement_10
# 58 "data/maps/Route7/scripts.pory"
	applymovement 11, Route7_BridgeTrigger_Movement_10
# 59 "data/maps/Route7/scripts.pory"
	playmoncry SPECIES_NIDOQUEEN, CRY_MODE_ENCOUNTER
# 60 "data/maps/Route7/scripts.pory"
	waitmovement 12
# 61 "data/maps/Route7/scripts.pory"
	applymovement 12, Route7_BridgeTrigger_Movement_11
# 62 "data/maps/Route7/scripts.pory"
	waitmovement 11
# 63 "data/maps/Route7/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 64 "data/maps/Route7/scripts.pory"
	msgbox Route7_BridgeTrigger_Text_3
# 65 "data/maps/Route7/scripts.pory"
	closemessage
# 66 "data/maps/Route7/scripts.pory"
	call Route7_MultiBattle
# 69 "data/maps/Route7/scripts.pory"
	applymovement 12, Route7_BridgeTrigger_Movement_12
# 70 "data/maps/Route7/scripts.pory"
	applymovement 10, Route7_BridgeTrigger_Movement_13
# 71 "data/maps/Route7/scripts.pory"
	applymovement 11, Route7_BridgeTrigger_Movement_13
# 72 "data/maps/Route7/scripts.pory"
	waitmovement 11
# 73 "data/maps/Route7/scripts.pory"
	applymovement 10, Route7_BridgeTrigger_Movement_14
# 74 "data/maps/Route7/scripts.pory"
	applymovement 11, Route7_BridgeTrigger_Movement_15
# 75 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route7/scripts.pory"
	msgbox Route7_BridgeTrigger_Text_4, MSGBOX_DEFAULT
# 77 "data/maps/Route7/scripts.pory"
	closemessage
# 78 "data/maps/Route7/scripts.pory"
	delay 48
# 79 "data/maps/Route7/scripts.pory"
	playse SE_LEDGE
# 80 "data/maps/Route7/scripts.pory"
	applymovement 10, Route7_BridgeTrigger_Movement_16
# 81 "data/maps/Route7/scripts.pory"
	applymovement 11, Route7_BridgeTrigger_Movement_17
# 82 "data/maps/Route7/scripts.pory"
	waitmovement 10
# 83 "data/maps/Route7/scripts.pory"
	playse SE_M_DIVE
# 84 "data/maps/Route7/scripts.pory"
	dofieldeffectsplash 31, 4, 1
# 85 "data/maps/Route7/scripts.pory"
	waitmovement 11
# 86 "data/maps/Route7/scripts.pory"
	playse SE_M_DIVE
# 87 "data/maps/Route7/scripts.pory"
	dofieldeffectsplash 31, 8, 1
# 88 "data/maps/Route7/scripts.pory"
	removeobject 10
# 89 "data/maps/Route7/scripts.pory"
	removeobject 11
# 90 "data/maps/Route7/scripts.pory"
	applymovement 12, Route7_BridgeTrigger_Movement_18
# 91 "data/maps/Route7/scripts.pory"
	playmoncry SPECIES_NIDOQUEEN, CRY_MODE_NORMAL
# 92 "data/maps/Route7/scripts.pory"
	delay 32
# 93 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_BridgeTrigger_Movement_19
# 94 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route7/scripts.pory"
	playse SE_LEDGE
# 96 "data/maps/Route7/scripts.pory"
	applymovement 13, Route7_BridgeTrigger_Movement_20
# 97 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 98 "data/maps/Route7/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, NULL, VAR_TEMP_1
# 99 "data/maps/Route7/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq Route7_BridgeTrigger_12
# 101 "data/maps/Route7/scripts.pory"
	applymovement 13, Route7_BridgeTrigger_Movement_22
Route7_BridgeTrigger_11:
# 102 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_BridgeTrigger_Movement_6
# 104 "data/maps/Route7/scripts.pory"
	playmoncry SPECIES_NIDORAN_M, CRY_MODE_NORMAL
# 105 "data/maps/Route7/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq Route7_BridgeTrigger_16
# 107 "data/maps/Route7/scripts.pory"
	applymovement 12, Route7_BridgeTrigger_Movement_24
Route7_BridgeTrigger_15:
# 108 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 109 "data/maps/Route7/scripts.pory"
	waitmoncry
# 110 "data/maps/Route7/scripts.pory"
	delay 80
# 111 "data/maps/Route7/scripts.pory"
	applymovement 12, Route7_BridgeTrigger_Movement_25
# 112 "data/maps/Route7/scripts.pory"
	applymovement 13, Route7_BridgeTrigger_Movement_19
# 113 "data/maps/Route7/scripts.pory"
	playmoncry SPECIES_NIDOQUEEN, CRY_MODE_NORMAL
# 114 "data/maps/Route7/scripts.pory"
	waitmovement 12
# 115 "data/maps/Route7/scripts.pory"
	waitmoncry
# 116 "data/maps/Route7/scripts.pory"
	delay 80
# 117 "data/maps/Route7/scripts.pory"
	applymovement 12, Route7_BridgeTrigger_Movement_26
# 118 "data/maps/Route7/scripts.pory"
	applymovement 13, Route7_BridgeTrigger_Movement_27
# 119 "data/maps/Route7/scripts.pory"
	waitmovement 13
# 120 "data/maps/Route7/scripts.pory"
	playse SE_LEDGE
# 121 "data/maps/Route7/scripts.pory"
	applymovement 13, Route7_BridgeTrigger_Movement_28
# 122 "data/maps/Route7/scripts.pory"
	waitse
# 123 "data/maps/Route7/scripts.pory"
	playse SE_LEDGE
# 124 "data/maps/Route7/scripts.pory"
	waitmovement 13
# 125 "data/maps/Route7/scripts.pory"
	waitse
# 126 "data/maps/Route7/scripts.pory"
	applymovement 13, Route7_BridgeTrigger_Movement_29
# 127 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 128 "data/maps/Route7/scripts.pory"
	removeobject 12
# 129 "data/maps/Route7/scripts.pory"
	removeobject 13
# 130 "data/maps/Route7/scripts.pory"
	special DrawWholeMapView
# 131 "data/maps/Route7/scripts.pory"
	release
	return

Route7_BridgeTrigger_2:
# 20 "data/maps/Route7/scripts.pory"
	setobjectxy 13, 23, 5
	goto Route7_BridgeTrigger_1

Route7_BridgeTrigger_5:
# 24 "data/maps/Route7/scripts.pory"
	applymovement 13, Route7_BridgeTrigger_Movement_1
	goto Route7_BridgeTrigger_4

Route7_BridgeTrigger_9:
# 48 "data/maps/Route7/scripts.pory"
	setobjectxy 12, 23, 6
	goto Route7_BridgeTrigger_8

Route7_BridgeTrigger_12:
# 100 "data/maps/Route7/scripts.pory"
	applymovement 13, Route7_BridgeTrigger_Movement_21
	goto Route7_BridgeTrigger_11

Route7_BridgeTrigger_16:
# 106 "data/maps/Route7/scripts.pory"
	applymovement 12, Route7_BridgeTrigger_Movement_23
	goto Route7_BridgeTrigger_15


Route7_MultiBattle::
# 135 "data/maps/Route7/scripts.pory"
	special SavePlayerParty
# 136 "data/maps/Route7/scripts.pory"
	fadescreen FADE_TO_BLACK
# 137 "data/maps/Route7/scripts.pory"
	special ChooseHalfPartyForBattle
# 138 "data/maps/Route7/scripts.pory"
	waitstate
# 139 "data/maps/Route7/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route7_MultiBattle_2
Route7_MultiBattle_1:
# 145 "data/maps/Route7/scripts.pory"
	multi_2_vs_2 TRAINER_ROUTE7_MAGMA_GRUNT1, Route7_MultiBattle_Text_1, TRAINER_ROUTE7_MAGMA_GRUNT2, Route7_MultiBattle_Text_2, PARTNER_ROUTE7_NIDOQUEEN
# 152 "data/maps/Route7/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Route7_MultiBattle_5
Route7_MultiBattle_4:
	return

Route7_MultiBattle_2:
# 140 "data/maps/Route7/scripts.pory"
	special LoadPlayerParty
# 141 "data/maps/Route7/scripts.pory"
	msgbox Route7_MultiBattle_Text_0, MSGBOX_DEFAULT
# 142 "data/maps/Route7/scripts.pory"
	closemessage
# 143 "data/maps/Route7/scripts.pory"
	goto Route7_MultiBattle
	goto Route7_MultiBattle_1

Route7_MultiBattle_5:
# 153 "data/maps/Route7/scripts.pory"
	fadescreen FADE_TO_BLACK
# 154 "data/maps/Route7/scripts.pory"
	special SetCB2WhiteOut
# 155 "data/maps/Route7/scripts.pory"
	waitstate
	goto Route7_MultiBattle_4


Route7_Picnicker::
# 161 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_ROUTE7_PICNICKER, Route7_Picnicker_Text_0, Route7_Picnicker_Text_1
# 166 "data/maps/Route7/scripts.pory"
	msgbox Route7_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route7_SchoolKid::
# 171 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_ROUTE7_SCHOOL_KID, Route7_SchoolKid_Text_0, Route7_SchoolKid_Text_1
# 176 "data/maps/Route7/scripts.pory"
	msgbox Route7_SchoolKid_Text_2, MSGBOX_AUTOCLOSE
	end


Route7_Hiker::
# 181 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_ROUTE7_HIKER, Route7_Hiker_Text_0, Route7_Hiker_Text_1
# 186 "data/maps/Route7/scripts.pory"
	msgbox Route7_Hiker_Text_2, MSGBOX_AUTOCLOSE
	end


Route7_LittleBoy::
# 191 "data/maps/Route7/scripts.pory"
	lockall
# 192 "data/maps/Route7/scripts.pory"
	msgbox Route7_LittleBoy_Text_0, MSGBOX_NPC
# 193 "data/maps/Route7/scripts.pory"
	releaseall
	return


Route7_LittleGirl::
# 197 "data/maps/Route7/scripts.pory"
	lockall
# 198 "data/maps/Route7/scripts.pory"
	msgbox Route7_LittleGirl_Text_0, MSGBOX_NPC
# 199 "data/maps/Route7/scripts.pory"
	releaseall
	return


# 21 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_0:
# 21 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 21 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 21 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 21 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 21 "data/maps/Route7/scripts.pory"
	walk_fast_right
	step_end

# 24 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_1:
# 24 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 24 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 24 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 24 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 24 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 24 "data/maps/Route7/scripts.pory"
	walk_down
# 24 "data/maps/Route7/scripts.pory"
	face_left
	step_end

# 25 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_2:
# 25 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 25 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 25 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 25 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 25 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 25 "data/maps/Route7/scripts.pory"
	walk_up
# 25 "data/maps/Route7/scripts.pory"
	face_left
	step_end

# 26 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_3:
# 26 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 26 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 26 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 26 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 26 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 26 "data/maps/Route7/scripts.pory"
	emote_exclamation_mark
# 26 "data/maps/Route7/scripts.pory"
	walk_right
# 26 "data/maps/Route7/scripts.pory"
	walk_right
	step_end

# 34 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_4:
# 34 "data/maps/Route7/scripts.pory"
	face_right
# 34 "data/maps/Route7/scripts.pory"
	delay_16
	step_end

# 37 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_5:
# 37 "data/maps/Route7/scripts.pory"
	jump_in_place_left
# 37 "data/maps/Route7/scripts.pory"
	jump_in_place_left
	step_end

# 44 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_6:
# 44 "data/maps/Route7/scripts.pory"
	face_left
	step_end

# 50 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_7:
# 50 "data/maps/Route7/scripts.pory"
	emote_exclamation_mark
# 50 "data/maps/Route7/scripts.pory"
	face_left
	step_end

# 52 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_8:
# 52 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 52 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 52 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 52 "data/maps/Route7/scripts.pory"
	walk_fast_right
# 52 "data/maps/Route7/scripts.pory"
	walk_faster_right
	step_end

# 54 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_9:
# 54 "data/maps/Route7/scripts.pory"
	lock_facing_direction
# 54 "data/maps/Route7/scripts.pory"
	walk_slow_right
# 54 "data/maps/Route7/scripts.pory"
	unlock_facing_direction
	step_end

# 57 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_10:
# 57 "data/maps/Route7/scripts.pory"
	face_right
# 57 "data/maps/Route7/scripts.pory"
	delay_16
# 57 "data/maps/Route7/scripts.pory"
	delay_16
# 57 "data/maps/Route7/scripts.pory"
	face_left
# 57 "data/maps/Route7/scripts.pory"
	delay_16
# 57 "data/maps/Route7/scripts.pory"
	delay_16
# 57 "data/maps/Route7/scripts.pory"
	face_right
	step_end

# 61 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_11:
# 61 "data/maps/Route7/scripts.pory"
	walk_slow_right
# 61 "data/maps/Route7/scripts.pory"
	delay_16
# 61 "data/maps/Route7/scripts.pory"
	delay_16
# 61 "data/maps/Route7/scripts.pory"
	walk_slow_right
	step_end

# 69 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_12:
# 69 "data/maps/Route7/scripts.pory"
	walk_in_place_slow_right
	step_end

# 70 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_13:
# 70 "data/maps/Route7/scripts.pory"
	face_left
# 70 "data/maps/Route7/scripts.pory"
	delay_16
# 70 "data/maps/Route7/scripts.pory"
	delay_16
# 70 "data/maps/Route7/scripts.pory"
	delay_16
	step_end

# 73 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_14:
# 73 "data/maps/Route7/scripts.pory"
	face_down
# 73 "data/maps/Route7/scripts.pory"
	delay_16
# 73 "data/maps/Route7/scripts.pory"
	delay_16
# 73 "data/maps/Route7/scripts.pory"
	delay_16
# 73 "data/maps/Route7/scripts.pory"
	face_right
	step_end

# 74 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_15:
# 74 "data/maps/Route7/scripts.pory"
	face_up
# 74 "data/maps/Route7/scripts.pory"
	delay_16
# 74 "data/maps/Route7/scripts.pory"
	delay_16
# 74 "data/maps/Route7/scripts.pory"
	delay_16
# 74 "data/maps/Route7/scripts.pory"
	face_right
	step_end

# 80 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_16:
# 80 "data/maps/Route7/scripts.pory"
	jump_up
# 80 "data/maps/Route7/scripts.pory"
	set_invisible
	step_end

# 81 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_17:
# 81 "data/maps/Route7/scripts.pory"
	delay_16
# 81 "data/maps/Route7/scripts.pory"
	delay_16
# 81 "data/maps/Route7/scripts.pory"
	delay_16
# 81 "data/maps/Route7/scripts.pory"
	face_down
# 81 "data/maps/Route7/scripts.pory"
	delay_16
# 81 "data/maps/Route7/scripts.pory"
	delay_16
# 81 "data/maps/Route7/scripts.pory"
	delay_16
# 81 "data/maps/Route7/scripts.pory"
	delay_16
# 81 "data/maps/Route7/scripts.pory"
	walk_faster_up
# 81 "data/maps/Route7/scripts.pory"
	jump_up
# 81 "data/maps/Route7/scripts.pory"
	set_invisible
	step_end

# 90 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_18:
# 90 "data/maps/Route7/scripts.pory"
	walk_slow_right
	step_end

# 93 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_19:
# 93 "data/maps/Route7/scripts.pory"
	face_right
	step_end

# 96 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_20:
# 96 "data/maps/Route7/scripts.pory"
	jump_in_place_left
	step_end

# 100 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_21:
# 100 "data/maps/Route7/scripts.pory"
	walk_up
# 100 "data/maps/Route7/scripts.pory"
	walk_left
# 100 "data/maps/Route7/scripts.pory"
	walk_left
# 100 "data/maps/Route7/scripts.pory"
	face_down
	step_end

# 101 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_22:
# 101 "data/maps/Route7/scripts.pory"
	walk_down
# 101 "data/maps/Route7/scripts.pory"
	walk_left
# 101 "data/maps/Route7/scripts.pory"
	walk_left
# 101 "data/maps/Route7/scripts.pory"
	face_up
	step_end

# 106 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_23:
# 106 "data/maps/Route7/scripts.pory"
	face_up
	step_end

# 107 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_24:
# 107 "data/maps/Route7/scripts.pory"
	face_down
	step_end

# 111 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_25:
# 111 "data/maps/Route7/scripts.pory"
	walk_in_place_right
# 111 "data/maps/Route7/scripts.pory"
	walk_in_place_right
	step_end

# 117 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_26:
# 117 "data/maps/Route7/scripts.pory"
	walk_left
# 117 "data/maps/Route7/scripts.pory"
	walk_left
# 117 "data/maps/Route7/scripts.pory"
	walk_left
# 117 "data/maps/Route7/scripts.pory"
	walk_left
# 117 "data/maps/Route7/scripts.pory"
	walk_left
# 117 "data/maps/Route7/scripts.pory"
	walk_left
# 117 "data/maps/Route7/scripts.pory"
	walk_left
# 117 "data/maps/Route7/scripts.pory"
	walk_left
	step_end

# 118 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_27:
# 118 "data/maps/Route7/scripts.pory"
	walk_left
# 118 "data/maps/Route7/scripts.pory"
	walk_left
# 118 "data/maps/Route7/scripts.pory"
	walk_left
# 118 "data/maps/Route7/scripts.pory"
	walk_left
# 118 "data/maps/Route7/scripts.pory"
	delay_16
# 118 "data/maps/Route7/scripts.pory"
	face_right
# 118 "data/maps/Route7/scripts.pory"
	delay_16
# 118 "data/maps/Route7/scripts.pory"
	delay_16
	step_end

# 121 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_28:
# 121 "data/maps/Route7/scripts.pory"
	jump_in_place_right
# 121 "data/maps/Route7/scripts.pory"
	jump_in_place_right
	step_end

# 126 "data/maps/Route7/scripts.pory"
Route7_BridgeTrigger_Movement_29:
# 126 "data/maps/Route7/scripts.pory"
	walk_fast_left
# 126 "data/maps/Route7/scripts.pory"
	walk_fast_left
# 126 "data/maps/Route7/scripts.pory"
	walk_fast_left
# 126 "data/maps/Route7/scripts.pory"
	walk_fast_left
	step_end

Route7_BridgeTrigger_Text_0:
# 30 "data/maps/Route7/scripts.pory"
	.string "HEY YOU!$"

Route7_BridgeTrigger_Text_1:
# 32 "data/maps/Route7/scripts.pory"
	.string "You'd better hand over that Pokemon if\nyou know what's good for you!$"

Route7_BridgeTrigger_Text_2:
# 45 "data/maps/Route7/scripts.pory"
	.string "Hurry it up!\nWe don't have time for your hero act!$"

Route7_BridgeTrigger_Text_3:
# 64 "data/maps/Route7/scripts.pory"
	.string "Get out of our way!$"

Route7_BridgeTrigger_Text_4:
# 76 "data/maps/Route7/scripts.pory"
	.string "This isn't the last you've heard of us!$"

Route7_MultiBattle_Text_0:
# 141 "data/maps/Route7/scripts.pory"
	.string "You should probably help!$"

Route7_MultiBattle_Text_1:
# 147 "data/maps/Route7/scripts.pory"
	.string "Damn it!$"

Route7_MultiBattle_Text_2:
# 149 "data/maps/Route7/scripts.pory"
	.string "Curse you!$"

Route7_Picnicker_Text_0:
# 163 "data/maps/Route7/scripts.pory"
	.string "This spot is great for camping, the\n"
	.string "water is really fresh!$"

Route7_Picnicker_Text_1:
# 164 "data/maps/Route7/scripts.pory"
	.string "I need to go cool off in the river.$"

Route7_Picnicker_Text_2:
# 166 "data/maps/Route7/scripts.pory"
	.string "This river is fed by ice melting up on\n"
	.string "the mountain.$"

Route7_SchoolKid_Text_0:
# 173 "data/maps/Route7/scripts.pory"
	.string "I'm trying to find something cool to\n"
	.string "show off to my friends at school.$"

Route7_SchoolKid_Text_1:
# 174 "data/maps/Route7/scripts.pory"
	.string "Woah your Pokemon are cool!$"

Route7_SchoolKid_Text_2:
# 176 "data/maps/Route7/scripts.pory"
	.string "I made a bet that I could find a cool\n"
	.string "Pokemon, but I haven't found one yet.$"

Route7_Hiker_Text_0:
# 183 "data/maps/Route7/scripts.pory"
	.string "Walking to the river counts as a hike!$"

Route7_Hiker_Text_1:
# 184 "data/maps/Route7/scripts.pory"
	.string "Oh my knees just aren't what they used\n"
	.string "to be...$"

Route7_Hiker_Text_2:
# 186 "data/maps/Route7/scripts.pory"
	.string "I can't hike up the mountains anymore,\n"
	.string "so I keep active by walking to the river\l"
	.string "when I can.$"

Route7_LittleBoy_Text_0:
# 192 "data/maps/Route7/scripts.pory"
	.string "I like to swim, but the lake is too deep,\n"
	.string "so I swim in the shallows like this.$"

Route7_LittleGirl_Text_0:
# 198 "data/maps/Route7/scripts.pory"
	.string "How is he doing that?$"
