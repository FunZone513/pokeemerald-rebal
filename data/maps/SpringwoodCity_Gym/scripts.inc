SpringwoodCity_Gym_MapScripts::
# 2 "data/maps/SpringwoodCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SpringwoodCity_Gym_Reset
	.byte 0


SpringwoodCity_Gym_Reset::
# 7 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 3, 15, METATILE_MauvilleGym_RaisedSwitch, FALSE
# 8 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_RaisedSwitch, FALSE
# 9 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 10, 7, METATILE_MauvilleGym_RaisedSwitch, FALSE
# 11 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 6, 5, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
# 12 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 7, 5, METATILE_MauvilleGym_GreenBeamH2_On, TRUE
# 13 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 6, 6, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 14 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 7, 6, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
	return


SpringwoodCity_Gym_CheckPlayerPos::
# 18 "data/maps/SpringwoodCity_Gym/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_A, VAR_TEMP_B
# 19 "data/maps/SpringwoodCity_Gym/scripts.pory"
	compare VAR_TEMP_A, 3
	goto_if_eq SpringwoodCity_Gym_CheckPlayerPos_10
SpringwoodCity_Gym_CheckPlayerPos_8:
# 21 "data/maps/SpringwoodCity_Gym/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_eq SpringwoodCity_Gym_CheckPlayerPos_7
SpringwoodCity_Gym_CheckPlayerPos_5:
# 23 "data/maps/SpringwoodCity_Gym/scripts.pory"
	compare VAR_TEMP_A, 10
	goto_if_eq SpringwoodCity_Gym_CheckPlayerPos_4
	return

SpringwoodCity_Gym_CheckPlayerPos_1:
# 20 "data/maps/SpringwoodCity_Gym/scripts.pory"
	call SpringwoodCity_Gym_PressSwitch1
	return

SpringwoodCity_Gym_CheckPlayerPos_2:
# 22 "data/maps/SpringwoodCity_Gym/scripts.pory"
	call SpringwoodCity_Gym_PressSwitch2
	return

SpringwoodCity_Gym_CheckPlayerPos_3:
# 24 "data/maps/SpringwoodCity_Gym/scripts.pory"
	call SpringwoodCity_Gym_PressSwitch3
	return

SpringwoodCity_Gym_CheckPlayerPos_4:
# 23 "data/maps/SpringwoodCity_Gym/scripts.pory"
	compare VAR_TEMP_B, 7
	goto_if_eq SpringwoodCity_Gym_CheckPlayerPos_3
	return

SpringwoodCity_Gym_CheckPlayerPos_7:
# 21 "data/maps/SpringwoodCity_Gym/scripts.pory"
	compare VAR_TEMP_B, 10
	goto_if_eq SpringwoodCity_Gym_CheckPlayerPos_2
	goto SpringwoodCity_Gym_CheckPlayerPos_5

SpringwoodCity_Gym_CheckPlayerPos_10:
# 19 "data/maps/SpringwoodCity_Gym/scripts.pory"
	compare VAR_TEMP_B, 15
	goto_if_eq SpringwoodCity_Gym_CheckPlayerPos_1
	goto SpringwoodCity_Gym_CheckPlayerPos_8


SpringwoodCity_Gym_PressSwitch1::
# 29 "data/maps/SpringwoodCity_Gym/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq SpringwoodCity_Gym_PressSwitch1_1
	return

SpringwoodCity_Gym_PressSwitch1_1:
# 30 "data/maps/SpringwoodCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 31 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setvar VAR_TEMP_1, TRUE
# 32 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 3, 15, METATILE_MauvilleGym_PressedSwitch, FALSE
# 33 "data/maps/SpringwoodCity_Gym/scripts.pory"
	call SpringwoodCity_Gym_CheckState
	return


SpringwoodCity_Gym_PressSwitch2::
# 38 "data/maps/SpringwoodCity_Gym/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq SpringwoodCity_Gym_PressSwitch2_1
	return

SpringwoodCity_Gym_PressSwitch2_1:
# 39 "data/maps/SpringwoodCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 40 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setvar VAR_TEMP_2, TRUE
# 41 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_PressedSwitch, FALSE
# 42 "data/maps/SpringwoodCity_Gym/scripts.pory"
	call SpringwoodCity_Gym_CheckState
	return


SpringwoodCity_Gym_PressSwitch3::
# 47 "data/maps/SpringwoodCity_Gym/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq SpringwoodCity_Gym_PressSwitch3_1
	return

SpringwoodCity_Gym_PressSwitch3_1:
# 48 "data/maps/SpringwoodCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 49 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setvar VAR_TEMP_3, TRUE
# 50 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 10, 7, METATILE_MauvilleGym_PressedSwitch, FALSE
# 51 "data/maps/SpringwoodCity_Gym/scripts.pory"
	call SpringwoodCity_Gym_CheckState
	return


SpringwoodCity_Gym_CheckState::
# 56 "data/maps/SpringwoodCity_Gym/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_ne SpringwoodCity_Gym_CheckState_4
SpringwoodCity_Gym_CheckState_1:
# 62 "data/maps/SpringwoodCity_Gym/scripts.pory"
	special DrawWholeMapView
	return

SpringwoodCity_Gym_CheckState_2:
# 57 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 6, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 58 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 7, 5, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 59 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 6, 6, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 60 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setmetatile 7, 6, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
	goto SpringwoodCity_Gym_CheckState_1

SpringwoodCity_Gym_CheckState_3:
# 56 "data/maps/SpringwoodCity_Gym/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_ne SpringwoodCity_Gym_CheckState_2
	goto SpringwoodCity_Gym_CheckState_1

SpringwoodCity_Gym_CheckState_4:
# 56 "data/maps/SpringwoodCity_Gym/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_ne SpringwoodCity_Gym_CheckState_3
	goto SpringwoodCity_Gym_CheckState_1


Springwood_Gym_Guide::
# 66 "data/maps/SpringwoodCity_Gym/scripts.pory"
	lockall
# 67 "data/maps/SpringwoodCity_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, Springwood_Gym_Guide_2
# 73 "data/maps/SpringwoodCity_Gym/scripts.pory"
	msgbox Springwood_Gym_Guide_Text_0, MSGBOX_NPC
Springwood_Gym_Guide_1:
# 75 "data/maps/SpringwoodCity_Gym/scripts.pory"
	releaseall
	return

Springwood_Gym_Guide_2:
# 68 "data/maps/SpringwoodCity_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_1, Springwood_Gym_Guide_6
Springwood_Gym_Guide_5:
# 71 "data/maps/SpringwoodCity_Gym/scripts.pory"
	msgbox Springwood_Gym_Guide_Text, MSGBOX_NPC
	goto Springwood_Gym_Guide_1

Springwood_Gym_Guide_6:
# 69 "data/maps/SpringwoodCity_Gym/scripts.pory"
	msgbox Springwood_Gym_Guide_Text_Intro
	goto Springwood_Gym_Guide_5


SpringwoodCity_Gym_Martin::
# 91 "data/maps/SpringwoodCity_Gym/scripts.pory"
	trainerbattle_single GYM_LEADER_MARTIN, SpringwoodCity_Gym_Martin_Text_Intro, SpringwoodCity_Gym_Martin_Text_Defeated, SpringwoodCity_Gym_Martin_Defeated, NO_MUSIC
# 98 "data/maps/SpringwoodCity_Gym/scripts.pory"
	msgbox SpringwoodCity_Gym_Martin_PostBattle, MSGBOX_NPC
# 99 "data/maps/SpringwoodCity_Gym/scripts.pory"
	releaseall
	return


SpringwoodCity_Gym_Martin_Defeated::
# 103 "data/maps/SpringwoodCity_Gym/scripts.pory"
	message SpringwoodCity_Gym_Martin_Defeated_Text_0
# 104 "data/maps/SpringwoodCity_Gym/scripts.pory"
	waitmessage
# 105 "data/maps/SpringwoodCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 106 "data/maps/SpringwoodCity_Gym/scripts.pory"
	msgbox SpringwoodCity_Gym_Martin_Badge, MSGBOX_DEFAULT
# 107 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 108 "data/maps/SpringwoodCity_Gym/scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 109 "data/maps/SpringwoodCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 110 "data/maps/SpringwoodCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 111 "data/maps/SpringwoodCity_Gym/scripts.pory"
	releaseall
	return


SpringwoodGym_Trainer1::
# 139 "data/maps/SpringwoodCity_Gym/scripts.pory"
	trainerbattle_single SPRINGWOOD_GYM_TRAINER1, SpringwoodGym_Trainer1_Text_0, SpringwoodGym_Trainer1_Text_1, SpringwoodCity_Gym_CheckPlayerPos
# 145 "data/maps/SpringwoodCity_Gym/scripts.pory"
	msgbox SpringwoodGym_Trainer1_Text_2, MSGBOX_AUTOCLOSE
	end


SpringwoodGym_Trainer2::
# 150 "data/maps/SpringwoodCity_Gym/scripts.pory"
	trainerbattle_single SPRINGWOOD_GYM_TRAINER2, SpringwoodGym_Trainer2_Text_0, SpringwoodGym_Trainer2_Text_1, SpringwoodCity_Gym_CheckPlayerPos
# 156 "data/maps/SpringwoodCity_Gym/scripts.pory"
	msgbox SpringwoodGym_Trainer2_Text_2, MSGBOX_AUTOCLOSE
	end


SpringwoodGym_Trainer3::
# 161 "data/maps/SpringwoodCity_Gym/scripts.pory"
	trainerbattle_single SPRINGWOOD_GYM_TRAINER3, SpringwoodGym_Trainer3_Text_0, SpringwoodGym_Trainer3_Text_1, SpringwoodCity_Gym_CheckPlayerPos
# 167 "data/maps/SpringwoodCity_Gym/scripts.pory"
	msgbox SpringwoodGym_Trainer3_Text_2, MSGBOX_AUTOCLOSE
	end


SpringwoodGym_Trainer4::
# 172 "data/maps/SpringwoodCity_Gym/scripts.pory"
	trainerbattle_single SPRINGWOOD_GYM_TRAINER4, SpringwoodGym_Trainer4_Text_0, SpringwoodGym_Trainer4_Text_1, SpringwoodCity_Gym_CheckPlayerPos
# 178 "data/maps/SpringwoodCity_Gym/scripts.pory"
	msgbox SpringwoodGym_Trainer4_Text_2, MSGBOX_AUTOCLOSE
	end


Springwood_Gym_Guide_Text_0:
# 73 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "Wow! You really showed your stuff!\n"
	.string "Defeating Martin is no easy task, but\l"
	.string "you definitely earned your Springwood\l"
	.string "Badge!$"

SpringwoodCity_Gym_Martin_Defeated_Text_0:
# 103 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "Recieved the Springwood Badge!$"

SpringwoodGym_Trainer1_Text_0:
# 141 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "Martin only lets us use Pokemon from\nnearby routes, let's see how your Pokemon\lcompare to ours.$"

SpringwoodGym_Trainer1_Text_1:
# 142 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "You've certainly picked the good ones...$"

SpringwoodGym_Trainer1_Text_2:
# 145 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "I just started here, so I haven't got\nthe skill of the other trainers yet.$"

SpringwoodGym_Trainer2_Text_0:
# 152 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "There's not very many elegant Pokemon\nto be found around here.$"

SpringwoodGym_Trainer2_Text_1:
# 153 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "At least theres a certain elegance to\nbe found in defeat.$"

SpringwoodGym_Trainer2_Text_2:
# 156 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "While your looks may not be elegant,\nyour battle skill certainly is.$"

SpringwoodGym_Trainer3_Text_0:
# 163 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "I TRAIN EXCLUSIVELY IN\nDRIPSTONE CAVE!$"

SpringwoodGym_Trainer3_Text_1:
# 164 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "I'D BETTER GET BACK ON THE GRIND!$"

SpringwoodGym_Trainer3_Text_2:
# 167 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "My therapist tells me I need to calm\ndown, but training Pokemon gets me HYPE!$"

SpringwoodGym_Trainer4_Text_0:
# 174 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "Bug types are great for having strong\nPokemon at low levels.$"

SpringwoodGym_Trainer4_Text_1:
# 175 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "...maybe they could do with a few more\nlevels...$"

SpringwoodGym_Trainer4_Text_2:
# 178 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "Maybe I can re-use this net to catch\nmyself a girlfriend...$"

Springwood_Gym_Guide_Text_Intro::
# 78 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "A new face!\nI'm the guide here at Springwood Gym.\p"
	.string "My job is to make sure the challengers\nknow what it is they are up against.\p"
	.string "Each Gym is assigned a guide to help\nout newcomers to the Gym Challenge.\p"
	.string "Also, make sure to check the\nRecommended Level on each Gym's statues.$"

Springwood_Gym_Guide_Text::
# 85 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "Here at the Springwood Gym,\nGym Leader Martin likes to use Pokemon\lthat he found nearby.\p"
	.string "He believes that after a bit of care,\nany Pokemon can become strong!$"

SpringwoodCity_Gym_Martin_Text_Intro::
# 114 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "Ah, you must be {PLAYER}.\nI heard that you helped with the rowdy\lPokemon on Route 2.\p"
	.string "I've been looking forward to meeting you,\nI hope you found some of the Pokemon\lnearby interesting like I have.\p"
	.string "I've trained my Pokemon as much as\nI could without going beyond what's\lexpected of the first Gym Leader.\p"
	.string "I hope you don't disappoint,\nI'm excited to see what you've found.$"

SpringwoodCity_Gym_Martin_Text_Defeated::
# 121 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "Outstanding.\p"
	.string "Even after all my training you still\nfound a way to best me at my own game.\p"
	.string "I wouldn't have it any other way,\nI hope you continue to make good\lprogress with your Pokemon.$"

SpringwoodCity_Gym_Martin_PostBattle::
# 127 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "Grass and Bug types, as well as\nPokemon that have an ability related to\lcutting are able to cut down trees.\p"
	.string "Make sure to keep an eye out for any\ncool Pokemon for our next battle!\p"
	.string "I'm excited to see just how much\nstronger your team can get!$"

SpringwoodCity_Gym_Martin_Badge::
# 133 "data/maps/SpringwoodCity_Gym/scripts.pory"
	.string "Having the Springwood Badge means\nthat your Pokemon are able to cut down\lsmall trees that may block your path.\p"
	.string "Grass and Bug types, as well as any\nPokemon that have an ability related to\lcutting are able to help you.$"
