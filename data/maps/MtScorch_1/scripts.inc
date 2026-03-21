MtScorch_1_MapScripts::
# 2 "data/maps/MtScorch_1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MtScorch_1_OnLoad
# 3 "data/maps/MtScorch_1/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtScorch_1_OnResume
	.byte 0


MtScorch_1_OnLoad::
# 7 "data/maps/MtScorch_1/scripts.pory"
	goto_if_unset FLAG_SEEN_MT_SCORCH_1_MAGMA_GRUNTS, MtScorch_1_OnLoad_1
	return

MtScorch_1_OnLoad_1:
# 8 "data/maps/MtScorch_1/scripts.pory"
	setvar VAR_TEMP_A, 1
	return


MtScorch_1_OnResume::
# 13 "data/maps/MtScorch_1/scripts.pory"
	setstepcallback STEP_CB_ASH
	return


MtScorch_1_MagmaEvent::
# 17 "data/maps/MtScorch_1/scripts.pory"
	lockall
# 18 "data/maps/MtScorch_1/scripts.pory"
	playse SE_PIN
# 19 "data/maps/MtScorch_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 20 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 0
# 21 "data/maps/MtScorch_1/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, NULL
# 22 "data/maps/MtScorch_1/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq MtScorch_1_MagmaEvent_2
MtScorch_1_MagmaEvent_1:
# 26 "data/maps/MtScorch_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtScorch_1_MagmaEvent_Movement_1
# 27 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 0
# 28 "data/maps/MtScorch_1/scripts.pory"
	special SpawnCameraObject
# 29 "data/maps/MtScorch_1/scripts.pory"
	delay 16
# 30 "data/maps/MtScorch_1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtScorch_1_MagmaEvent_Movement_2
# 31 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 0
# 32 "data/maps/MtScorch_1/scripts.pory"
	msgbox MtScorch_1_MagmaEvent_Text_0
# 33 "data/maps/MtScorch_1/scripts.pory"
	applymovement 12, MtScorch_1_MagmaEvent_Movement_3
# 34 "data/maps/MtScorch_1/scripts.pory"
	msgbox MtScorch_1_MagmaEvent_Text_1
# 35 "data/maps/MtScorch_1/scripts.pory"
	applymovement 11, MtScorch_1_MagmaEvent_Movement_4
# 36 "data/maps/MtScorch_1/scripts.pory"
	msgbox MtScorch_1_MagmaEvent_Text_2
# 37 "data/maps/MtScorch_1/scripts.pory"
	msgbox MtScorch_1_MagmaEvent_Text_3
# 38 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 0
# 39 "data/maps/MtScorch_1/scripts.pory"
	msgbox MtScorch_1_MagmaEvent_Text_4
# 40 "data/maps/MtScorch_1/scripts.pory"
	applymovement 12, MtScorch_1_MagmaEvent_Movement_5
# 41 "data/maps/MtScorch_1/scripts.pory"
	msgbox MtScorch_1_MagmaEvent_Text_5
# 42 "data/maps/MtScorch_1/scripts.pory"
	applymovement 11, MtScorch_1_MagmaEvent_Movement_5
# 43 "data/maps/MtScorch_1/scripts.pory"
	playse SE_LEDGE
# 44 "data/maps/MtScorch_1/scripts.pory"
	applymovement 13, MtScorch_1_MagmaEvent_Movement_6
# 45 "data/maps/MtScorch_1/scripts.pory"
	waitse
# 46 "data/maps/MtScorch_1/scripts.pory"
	playse SE_LEDGE
# 47 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 13
# 48 "data/maps/MtScorch_1/scripts.pory"
	playmoncry SPECIES_ONIX, CRY_MODE_NORMAL
# 49 "data/maps/MtScorch_1/scripts.pory"
	waitmoncry
# 50 "data/maps/MtScorch_1/scripts.pory"
	delay 60
# 51 "data/maps/MtScorch_1/scripts.pory"
	applymovement 11, MtScorch_1_MagmaEvent_Movement_4
# 52 "data/maps/MtScorch_1/scripts.pory"
	applymovement 12, MtScorch_1_MagmaEvent_Movement_3
# 53 "data/maps/MtScorch_1/scripts.pory"
	msgbox MtScorch_1_MagmaEvent_Text_6
# 54 "data/maps/MtScorch_1/scripts.pory"
	msgbox MtScorch_1_MagmaEvent_Text_7
# 55 "data/maps/MtScorch_1/scripts.pory"
	closemessage
# 56 "data/maps/MtScorch_1/scripts.pory"
	delay 70
# 57 "data/maps/MtScorch_1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtScorch_1_MagmaEvent_Movement_7
# 58 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 0
# 59 "data/maps/MtScorch_1/scripts.pory"
	delay 20
# 60 "data/maps/MtScorch_1/scripts.pory"
	applymovement 11, MtScorch_1_MagmaEvent_Movement_8
# 61 "data/maps/MtScorch_1/scripts.pory"
	applymovement 12, MtScorch_1_MagmaEvent_Movement_8
# 62 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 0
# 63 "data/maps/MtScorch_1/scripts.pory"
	delay 48
# 64 "data/maps/MtScorch_1/scripts.pory"
	msgbox MtScorch_1_MagmaEvent_Text_8
# 65 "data/maps/MtScorch_1/scripts.pory"
	closemessage
# 66 "data/maps/MtScorch_1/scripts.pory"
	delay 60
# 67 "data/maps/MtScorch_1/scripts.pory"
	message MtScorch_1_MagmaEvent_Text_9
# 68 "data/maps/MtScorch_1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtScorch_1_MagmaEvent_Movement_9
# 69 "data/maps/MtScorch_1/scripts.pory"
	waitmessage
# 70 "data/maps/MtScorch_1/scripts.pory"
	waitbuttonpress
# 71 "data/maps/MtScorch_1/scripts.pory"
	applymovement 11, MtScorch_1_MagmaEvent_Movement_4
# 72 "data/maps/MtScorch_1/scripts.pory"
	applymovement 12, MtScorch_1_MagmaEvent_Movement_3
# 73 "data/maps/MtScorch_1/scripts.pory"
	msgbox MtScorch_1_MagmaEvent_Text_10
# 74 "data/maps/MtScorch_1/scripts.pory"
	msgbox MtScorch_1_MagmaEvent_Text_11
# 75 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 0
# 76 "data/maps/MtScorch_1/scripts.pory"
	applymovement 11, MtScorch_1_MagmaEvent_Movement_8
# 77 "data/maps/MtScorch_1/scripts.pory"
	applymovement 12, MtScorch_1_MagmaEvent_Movement_8
# 78 "data/maps/MtScorch_1/scripts.pory"
	msgbox MtScorch_1_MagmaEvent_Text_12
# 79 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 0
# 80 "data/maps/MtScorch_1/scripts.pory"
	message MtScorch_1_MagmaEvent_Text_13
# 81 "data/maps/MtScorch_1/scripts.pory"
	applymovement 11, MtScorch_1_MagmaEvent_Movement_2
# 82 "data/maps/MtScorch_1/scripts.pory"
	applymovement 12, MtScorch_1_MagmaEvent_Movement_10
# 83 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 11
# 84 "data/maps/MtScorch_1/scripts.pory"
	applymovement 11, MtScorch_1_MagmaEvent_Movement_11
# 85 "data/maps/MtScorch_1/scripts.pory"
	playse SE_EXIT
# 86 "data/maps/MtScorch_1/scripts.pory"
	waitse
# 87 "data/maps/MtScorch_1/scripts.pory"
	closemessage
# 88 "data/maps/MtScorch_1/scripts.pory"
	applymovement 12, MtScorch_1_MagmaEvent_Movement_12
# 89 "data/maps/MtScorch_1/scripts.pory"
	delay 100
# 90 "data/maps/MtScorch_1/scripts.pory"
	message MtScorch_1_MagmaEvent_Text_14
# 91 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 12
# 92 "data/maps/MtScorch_1/scripts.pory"
	applymovement 12, MtScorch_1_MagmaEvent_Movement_11
# 93 "data/maps/MtScorch_1/scripts.pory"
	playse SE_EXIT
# 94 "data/maps/MtScorch_1/scripts.pory"
	waitse
# 95 "data/maps/MtScorch_1/scripts.pory"
	closemessage
# 96 "data/maps/MtScorch_1/scripts.pory"
	applymovement 13, MtScorch_1_MagmaEvent_Movement_13
# 97 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 0
# 98 "data/maps/MtScorch_1/scripts.pory"
	playse SE_LEDGE
# 99 "data/maps/MtScorch_1/scripts.pory"
	applymovement 13, MtScorch_1_MagmaEvent_Movement_14
# 100 "data/maps/MtScorch_1/scripts.pory"
	waitse
# 101 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 0
# 102 "data/maps/MtScorch_1/scripts.pory"
	applymovement 13, MtScorch_1_MagmaEvent_Movement_9
# 103 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 13
# 104 "data/maps/MtScorch_1/scripts.pory"
	applymovement 13, MtScorch_1_MagmaEvent_Movement_15
# 105 "data/maps/MtScorch_1/scripts.pory"
	setvar VAR_0x8004, 1
# 106 "data/maps/MtScorch_1/scripts.pory"
	setvar VAR_0x8005, 3
# 107 "data/maps/MtScorch_1/scripts.pory"
	setvar VAR_0x8006, 4
# 108 "data/maps/MtScorch_1/scripts.pory"
	setvar VAR_0x8007, 1
# 109 "data/maps/MtScorch_1/scripts.pory"
	setvar VAR_0x8008, 0
# 110 "data/maps/MtScorch_1/scripts.pory"
	special ShakeCamera
# 111 "data/maps/MtScorch_1/scripts.pory"
	waitstate
# 112 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 13
# 113 "data/maps/MtScorch_1/scripts.pory"
	applymovement 13, MtScorch_1_MagmaEvent_Movement_16
# 114 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 13
# 115 "data/maps/MtScorch_1/scripts.pory"
	waitse
# 116 "data/maps/MtScorch_1/scripts.pory"
	applymovement 13, MtScorch_1_MagmaEvent_Movement_11
# 117 "data/maps/MtScorch_1/scripts.pory"
	playse SE_EXIT
# 118 "data/maps/MtScorch_1/scripts.pory"
	waitse
# 119 "data/maps/MtScorch_1/scripts.pory"
	delay 16
# 120 "data/maps/MtScorch_1/scripts.pory"
	playse SE_FALL
# 121 "data/maps/MtScorch_1/scripts.pory"
	delay 48
# 122 "data/maps/MtScorch_1/scripts.pory"
	setobjectxy 14, 12, 6
# 123 "data/maps/MtScorch_1/scripts.pory"
	applymovement 14, MtScorch_1_MagmaEvent_Movement_17
# 124 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 14
# 125 "data/maps/MtScorch_1/scripts.pory"
	waitse
# 126 "data/maps/MtScorch_1/scripts.pory"
	playse SE_M_STRENGTH
# 127 "data/maps/MtScorch_1/scripts.pory"
	applymovement 14, MtScorch_1_MagmaEvent_Movement_18
# 128 "data/maps/MtScorch_1/scripts.pory"
	waitse
# 129 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 0
# 130 "data/maps/MtScorch_1/scripts.pory"
	playse SE_M_STRENGTH
# 131 "data/maps/MtScorch_1/scripts.pory"
	setfieldeffectargument 0, 12
# 132 "data/maps/MtScorch_1/scripts.pory"
	setfieldeffectargument 1, 10
# 133 "data/maps/MtScorch_1/scripts.pory"
	setfieldeffectargument 2, 1
# 134 "data/maps/MtScorch_1/scripts.pory"
	dofieldeffect FLDEFF_DUST
# 135 "data/maps/MtScorch_1/scripts.pory"
	applymovement 14, MtScorch_1_MagmaEvent_Movement_19
# 136 "data/maps/MtScorch_1/scripts.pory"
	waitse
# 137 "data/maps/MtScorch_1/scripts.pory"
	playse SE_M_STRENGTH
# 138 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 0
# 139 "data/maps/MtScorch_1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtScorch_1_MagmaEvent_Movement_20
# 140 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 0
# 141 "data/maps/MtScorch_1/scripts.pory"
	special RemoveCameraObject
# 142 "data/maps/MtScorch_1/scripts.pory"
	setflag FLAG_SEEN_MT_SCORCH_1_MAGMA_GRUNTS
# 143 "data/maps/MtScorch_1/scripts.pory"
	special DrawWholeMapView
# 144 "data/maps/MtScorch_1/scripts.pory"
	setobjectxyperm 14, 12, 11
# 145 "data/maps/MtScorch_1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 146 "data/maps/MtScorch_1/scripts.pory"
	releaseall
	return

MtScorch_1_MagmaEvent_2:
# 23 "data/maps/MtScorch_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtScorch_1_MagmaEvent_Movement_0
# 24 "data/maps/MtScorch_1/scripts.pory"
	waitmovement 0
	goto MtScorch_1_MagmaEvent_1


MtScorch_1_Sign_Checkpoint::
# 150 "data/maps/MtScorch_1/scripts.pory"
	msgbox MtScorch_1_Sign_Checkpoint_Text_0, MSGBOX_SIGN
	return


MtScorch_1_Picnicker::
# 154 "data/maps/MtScorch_1/scripts.pory"
	trainerbattle_single TRAINER_MT_SCORCH_OUTER_PICNICKER, MtScorch_1_Picnicker_Text_0, MtScorch_1_Picnicker_Text_1
# 159 "data/maps/MtScorch_1/scripts.pory"
	msgbox MtScorch_1_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


MtScorch_1_Hiker::
# 164 "data/maps/MtScorch_1/scripts.pory"
	trainerbattle_single TRAINER_MT_SCORCH_OUTER_HIKER, MtScorch_1_Hiker_Text_0, MtScorch_1_Hiker_Text_1
# 169 "data/maps/MtScorch_1/scripts.pory"
	msgbox MtScorch_1_Hiker_Text_2, MSGBOX_AUTOCLOSE
	end


MtScorch_1_Kindler::
# 174 "data/maps/MtScorch_1/scripts.pory"
	trainerbattle_single TRAINER_MT_SCORCH_OUTER_KINDLER, MtScorch_1_Kindler_Text_0, MtScorch_1_Kindler_Text_1
# 179 "data/maps/MtScorch_1/scripts.pory"
	msgbox MtScorch_1_Kindler_Text_2, MSGBOX_AUTOCLOSE
	end


# 23 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_0:
# 23 "data/maps/MtScorch_1/scripts.pory"
	walk_left
	step_end

# 26 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_1:
# 26 "data/maps/MtScorch_1/scripts.pory"
	walk_up
	step_end

# 30 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_2:
# 30 "data/maps/MtScorch_1/scripts.pory"
	walk_up
# 30 "data/maps/MtScorch_1/scripts.pory"
	walk_up
# 30 "data/maps/MtScorch_1/scripts.pory"
	walk_up
	step_end

# 33 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_3:
# 33 "data/maps/MtScorch_1/scripts.pory"
	face_left
	step_end

# 35 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_4:
# 35 "data/maps/MtScorch_1/scripts.pory"
	face_right
	step_end

# 40 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_5:
# 40 "data/maps/MtScorch_1/scripts.pory"
	face_up
	step_end

# 44 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_6:
# 44 "data/maps/MtScorch_1/scripts.pory"
	jump_in_place_left
# 44 "data/maps/MtScorch_1/scripts.pory"
	jump_in_place_left
	step_end

# 57 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_7:
# 57 "data/maps/MtScorch_1/scripts.pory"
	walk_slow_down
# 57 "data/maps/MtScorch_1/scripts.pory"
	walk_slow_down
# 57 "data/maps/MtScorch_1/scripts.pory"
	walk_slow_down
	step_end

# 60 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_8:
# 60 "data/maps/MtScorch_1/scripts.pory"
	face_down
	step_end

# 68 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_9:
# 68 "data/maps/MtScorch_1/scripts.pory"
	walk_faster_up
# 68 "data/maps/MtScorch_1/scripts.pory"
	walk_faster_up
	step_end

# 82 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_10:
# 82 "data/maps/MtScorch_1/scripts.pory"
	face_left
# 82 "data/maps/MtScorch_1/scripts.pory"
	delay_16
# 82 "data/maps/MtScorch_1/scripts.pory"
	face_up
	step_end

# 84 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_11:
# 84 "data/maps/MtScorch_1/scripts.pory"
	set_invisible
	step_end

# 88 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_12:
# 88 "data/maps/MtScorch_1/scripts.pory"
	delay_16
# 88 "data/maps/MtScorch_1/scripts.pory"
	delay_16
# 88 "data/maps/MtScorch_1/scripts.pory"
	delay_16
# 88 "data/maps/MtScorch_1/scripts.pory"
	face_down
# 88 "data/maps/MtScorch_1/scripts.pory"
	delay_16
# 88 "data/maps/MtScorch_1/scripts.pory"
	delay_16
# 88 "data/maps/MtScorch_1/scripts.pory"
	delay_16
# 88 "data/maps/MtScorch_1/scripts.pory"
	delay_16
# 88 "data/maps/MtScorch_1/scripts.pory"
	walk_fast_left
# 88 "data/maps/MtScorch_1/scripts.pory"
	walk_fast_up
# 88 "data/maps/MtScorch_1/scripts.pory"
	walk_fast_up
# 88 "data/maps/MtScorch_1/scripts.pory"
	walk_up
	step_end

# 96 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_13:
# 96 "data/maps/MtScorch_1/scripts.pory"
	delay_16
# 96 "data/maps/MtScorch_1/scripts.pory"
	delay_16
# 96 "data/maps/MtScorch_1/scripts.pory"
	walk_left
# 96 "data/maps/MtScorch_1/scripts.pory"
	face_down
# 96 "data/maps/MtScorch_1/scripts.pory"
	delay_16
# 96 "data/maps/MtScorch_1/scripts.pory"
	delay_16
	step_end

# 99 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_14:
# 99 "data/maps/MtScorch_1/scripts.pory"
	jump_in_place_down
	step_end

# 104 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_15:
# 104 "data/maps/MtScorch_1/scripts.pory"
	lock_facing_direction
# 104 "data/maps/MtScorch_1/scripts.pory"
	jump_down
# 104 "data/maps/MtScorch_1/scripts.pory"
	unlock_facing_direction
# 104 "data/maps/MtScorch_1/scripts.pory"
	delay_16
# 104 "data/maps/MtScorch_1/scripts.pory"
	delay_16
	step_end

# 113 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_16:
# 113 "data/maps/MtScorch_1/scripts.pory"
	walk_faster_left
# 113 "data/maps/MtScorch_1/scripts.pory"
	walk_up
	step_end

# 123 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_17:
# 123 "data/maps/MtScorch_1/scripts.pory"
	walk_fast_down
# 123 "data/maps/MtScorch_1/scripts.pory"
	walk_fast_down
# 123 "data/maps/MtScorch_1/scripts.pory"
	walk_fast_down
	step_end

# 127 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_18:
# 127 "data/maps/MtScorch_1/scripts.pory"
	jump_down
	step_end

# 135 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_19:
# 135 "data/maps/MtScorch_1/scripts.pory"
	walk_slow_down
	step_end

# 139 "data/maps/MtScorch_1/scripts.pory"
MtScorch_1_MagmaEvent_Movement_20:
# 139 "data/maps/MtScorch_1/scripts.pory"
	walk_down
# 139 "data/maps/MtScorch_1/scripts.pory"
	walk_down
	step_end

MtScorch_1_MagmaEvent_Text_0:
# 32 "data/maps/MtScorch_1/scripts.pory"
	.string "Do you think we're stuck back here\nbecause we keep screwing up?$"

MtScorch_1_MagmaEvent_Text_1:
# 34 "data/maps/MtScorch_1/scripts.pory"
	.string "Hey, that's negative talk!\nIt's not like we're screwing up!$"

MtScorch_1_MagmaEvent_Text_2:
# 36 "data/maps/MtScorch_1/scripts.pory"
	.string "I know, I know...$"

MtScorch_1_MagmaEvent_Text_3:
# 37 "data/maps/MtScorch_1/scripts.pory"
	.string "But the higher-ups certainly don't see\nit that way.$"

MtScorch_1_MagmaEvent_Text_4:
# 39 "data/maps/MtScorch_1/scripts.pory"
	.string "It's alright, we won't be stuck in a\nrut forever.$"

MtScorch_1_MagmaEvent_Text_5:
# 41 "data/maps/MtScorch_1/scripts.pory"
	.string "Isn't that right Onix?$"

MtScorch_1_MagmaEvent_Text_6:
# 53 "data/maps/MtScorch_1/scripts.pory"
	.string "Yeah, you're right.$"

MtScorch_1_MagmaEvent_Text_7:
# 54 "data/maps/MtScorch_1/scripts.pory"
	.string "There's no way that kid will keep\nmessing with just us.$"

MtScorch_1_MagmaEvent_Text_8:
# 64 "data/maps/MtScorch_1/scripts.pory"
	.string "...$"

MtScorch_1_MagmaEvent_Text_9:
# 67 "data/maps/MtScorch_1/scripts.pory"
	.string "OH COME ON!$"

MtScorch_1_MagmaEvent_Text_10:
# 73 "data/maps/MtScorch_1/scripts.pory"
	.string "You just had to jinx it didn't you!$"

MtScorch_1_MagmaEvent_Text_11:
# 74 "data/maps/MtScorch_1/scripts.pory"
	.string "Wha- Me?\nYou're blaming me for this?!$"

MtScorch_1_MagmaEvent_Text_12:
# 78 "data/maps/MtScorch_1/scripts.pory"
	.string "Are you following us or something?\nWhy won't you bother someone else!$"

MtScorch_1_MagmaEvent_Text_13:
# 80 "data/maps/MtScorch_1/scripts.pory"
	.string "I'm not having any of this right now.$"

MtScorch_1_MagmaEvent_Text_14:
# 90 "data/maps/MtScorch_1/scripts.pory"
	.string "ONIX, DO SOMETHING!$"

MtScorch_1_Sign_Checkpoint_Text_0:
# 150 "data/maps/MtScorch_1/scripts.pory"
	.string "Checkpoint$"

MtScorch_1_Picnicker_Text_0:
# 156 "data/maps/MtScorch_1/scripts.pory"
	.string "It always smells like a campfire here.$"

MtScorch_1_Picnicker_Text_1:
# 157 "data/maps/MtScorch_1/scripts.pory"
	.string "I'll take my camping gear and head back\n"
	.string "down...$"

MtScorch_1_Picnicker_Text_2:
# 159 "data/maps/MtScorch_1/scripts.pory"
	.string "Not all of Mt Scorch is accessible, its\n"
	.string "too difficult to move around the\l"
	.string "cliffside in some spots.$"

MtScorch_1_Hiker_Text_0:
# 166 "data/maps/MtScorch_1/scripts.pory"
	.string "Put a mountain in front of me and I'll\n"
	.string "climb it!$"

MtScorch_1_Hiker_Text_1:
# 167 "data/maps/MtScorch_1/scripts.pory"
	.string "Oh ho!$"

MtScorch_1_Hiker_Text_2:
# 169 "data/maps/MtScorch_1/scripts.pory"
	.string "We hikers take any and all mountains as\n"
	.string "a challenge!$"

MtScorch_1_Kindler_Text_0:
# 176 "data/maps/MtScorch_1/scripts.pory"
	.string "Hey, watch this!$"

MtScorch_1_Kindler_Text_1:
# 177 "data/maps/MtScorch_1/scripts.pory"
	.string "Oh, that's not supposed to happen.$"

MtScorch_1_Kindler_Text_2:
# 179 "data/maps/MtScorch_1/scripts.pory"
	.string "After all that practice, we fumbled the\n"
	.string "trick...$"
