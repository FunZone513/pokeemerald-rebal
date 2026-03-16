PortEdaph_Gym_MapScripts::
# 2 "data/maps/PortEdaph_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PortEdaph_Gym_CheckStairState
	.byte 0


PortEdaph_Gym_CheckStairState::
# 6 "data/maps/PortEdaph_Gym/scripts.pory"
	checktrainerflag GYM_LEADER_LIFRADE
	goto_if 1, PortEdaph_Gym_CheckStairState_2
# 13 "data/maps/PortEdaph_Gym/scripts.pory"
	checktrainerflag TRAINER_PORT_EDAPH_GYM_CAMPER
	goto_if 1, PortEdaph_Gym_CheckStairState_6
PortEdaph_Gym_CheckStairState_5:
# 17 "data/maps/PortEdaph_Gym/scripts.pory"
	checktrainerflag TRAINER_PORT_EDAPH_GYM_SWIMMER
	goto_if 1, PortEdaph_Gym_CheckStairState_9
PortEdaph_Gym_CheckStairState_8:
# 21 "data/maps/PortEdaph_Gym/scripts.pory"
	checktrainerflag TRAINER_PORT_EDAPH_GYM_WOMAN
	goto_if 1, PortEdaph_Gym_CheckStairState_12
PortEdaph_Gym_CheckStairState_11:
# 25 "data/maps/PortEdaph_Gym/scripts.pory"
	checktrainerflag TRAINER_PORT_EDAPH_GYM_BLACKBELT
	goto_if 1, PortEdaph_Gym_CheckStairState_14
PortEdaph_Gym_CheckStairState_1:
# 30 "data/maps/PortEdaph_Gym/scripts.pory"
	special DrawWholeMapView
	return

PortEdaph_Gym_CheckStairState_2:
# 7 "data/maps/PortEdaph_Gym/scripts.pory"
	setmetatile 15, 16, METATILE_General_Staircase, FALSE
# 8 "data/maps/PortEdaph_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_General_Staircase, FALSE
# 9 "data/maps/PortEdaph_Gym/scripts.pory"
	setmetatile 14, 10, METATILE_General_Staircase, FALSE
# 10 "data/maps/PortEdaph_Gym/scripts.pory"
	setmetatile 18, 6, METATILE_General_Staircase, FALSE
	goto PortEdaph_Gym_CheckStairState_1

PortEdaph_Gym_CheckStairState_6:
# 14 "data/maps/PortEdaph_Gym/scripts.pory"
	setmetatile 15, 16, METATILE_General_Staircase, FALSE
	goto PortEdaph_Gym_CheckStairState_5

PortEdaph_Gym_CheckStairState_9:
# 18 "data/maps/PortEdaph_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_General_Staircase, FALSE
	goto PortEdaph_Gym_CheckStairState_8

PortEdaph_Gym_CheckStairState_12:
# 22 "data/maps/PortEdaph_Gym/scripts.pory"
	setmetatile 14, 10, METATILE_General_Staircase, FALSE
	goto PortEdaph_Gym_CheckStairState_11

PortEdaph_Gym_CheckStairState_14:
# 26 "data/maps/PortEdaph_Gym/scripts.pory"
	setmetatile 18, 6, METATILE_General_Staircase, FALSE
	goto PortEdaph_Gym_CheckStairState_1


PortEdaph_Gym_Hidden1_Found::
# 34 "data/maps/PortEdaph_Gym/scripts.pory"
	checktrainerflag TRAINER_PORT_EDAPH_GYM_CAMPER
	goto_if 0, PortEdaph_Gym_Hidden1_Found_1
# 50 "data/maps/PortEdaph_Gym/scripts.pory"
	msgbox PortEdaph_Gym_Hidden1_Found_Text_2, MSGBOX_NPC
	return

PortEdaph_Gym_Hidden1_Found_1:
# 35 "data/maps/PortEdaph_Gym/scripts.pory"
	playse SE_DING_DONG
# 36 "data/maps/PortEdaph_Gym/scripts.pory"
	waitse
# 37 "data/maps/PortEdaph_Gym/scripts.pory"
	setobjectxy 4, 6, 16
# 38 "data/maps/PortEdaph_Gym/scripts.pory"
	applymovement 4, PortEdaph_Gym_Hidden1_Found_Movement_0
# 39 "data/maps/PortEdaph_Gym/scripts.pory"
	playse SE_LEDGE
# 40 "data/maps/PortEdaph_Gym/scripts.pory"
	waitse
# 41 "data/maps/PortEdaph_Gym/scripts.pory"
	waitmovement 0
# 42 "data/maps/PortEdaph_Gym/scripts.pory"
	msgbox PortEdaph_Gym_Hidden1_Found_Text_0
# 43 "data/maps/PortEdaph_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_PORT_EDAPH_GYM_CAMPER, PortEdaph_Gym_Hidden1_Found_Text_1
# 44 "data/maps/PortEdaph_Gym/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 45 "data/maps/PortEdaph_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PortEdaph_Gym_Hidden1_Found_4
	return

PortEdaph_Gym_Hidden1_Found_4:
# 46 "data/maps/PortEdaph_Gym/scripts.pory"
	playse SE_UNLOCK
# 47 "data/maps/PortEdaph_Gym/scripts.pory"
	call PortEdaph_Gym_CheckStairState
	return


PortEdaph_Gym_Hidden2_Found::
# 55 "data/maps/PortEdaph_Gym/scripts.pory"
	checktrainerflag TRAINER_PORT_EDAPH_GYM_SWIMMER
	goto_if 0, PortEdaph_Gym_Hidden2_Found_1
# 71 "data/maps/PortEdaph_Gym/scripts.pory"
	msgbox PortEdaph_Gym_Hidden2_Found_Text_2, MSGBOX_NPC
	return

PortEdaph_Gym_Hidden2_Found_1:
# 56 "data/maps/PortEdaph_Gym/scripts.pory"
	playse SE_DING_DONG
# 57 "data/maps/PortEdaph_Gym/scripts.pory"
	waitse
# 58 "data/maps/PortEdaph_Gym/scripts.pory"
	setobjectxy 5, 8, 13
# 59 "data/maps/PortEdaph_Gym/scripts.pory"
	applymovement 5, PortEdaph_Gym_Hidden1_Found_Movement_0
# 60 "data/maps/PortEdaph_Gym/scripts.pory"
	playse SE_LEDGE
# 61 "data/maps/PortEdaph_Gym/scripts.pory"
	waitse
# 62 "data/maps/PortEdaph_Gym/scripts.pory"
	waitmovement 0
# 63 "data/maps/PortEdaph_Gym/scripts.pory"
	msgbox PortEdaph_Gym_Hidden2_Found_Text_0
# 64 "data/maps/PortEdaph_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_PORT_EDAPH_GYM_SWIMMER, PortEdaph_Gym_Hidden2_Found_Text_1
# 65 "data/maps/PortEdaph_Gym/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 66 "data/maps/PortEdaph_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PortEdaph_Gym_Hidden2_Found_4
	return

PortEdaph_Gym_Hidden2_Found_4:
# 67 "data/maps/PortEdaph_Gym/scripts.pory"
	playse SE_UNLOCK
# 68 "data/maps/PortEdaph_Gym/scripts.pory"
	call PortEdaph_Gym_CheckStairState
	return


PortEdaph_Gym_Hidden3_Found::
# 76 "data/maps/PortEdaph_Gym/scripts.pory"
	checktrainerflag TRAINER_PORT_EDAPH_GYM_WOMAN
	goto_if 0, PortEdaph_Gym_Hidden3_Found_1
# 96 "data/maps/PortEdaph_Gym/scripts.pory"
	msgbox PortEdaph_Gym_Hidden3_Found_Text_2, MSGBOX_NPC
	return

PortEdaph_Gym_Hidden3_Found_1:
# 77 "data/maps/PortEdaph_Gym/scripts.pory"
	playse SE_DING_DONG
# 78 "data/maps/PortEdaph_Gym/scripts.pory"
	waitse
# 79 "data/maps/PortEdaph_Gym/scripts.pory"
	setobjectxy 6, 7, 4
# 80 "data/maps/PortEdaph_Gym/scripts.pory"
	applymovement 6, PortEdaph_Gym_Hidden3_Found_Movement_0
# 81 "data/maps/PortEdaph_Gym/scripts.pory"
	playse SE_LEDGE
# 82 "data/maps/PortEdaph_Gym/scripts.pory"
	waitse
# 83 "data/maps/PortEdaph_Gym/scripts.pory"
	waitmovement 0
# 84 "data/maps/PortEdaph_Gym/scripts.pory"
	applymovement 6, PortEdaph_Gym_Hidden3_Found_Movement_1
# 85 "data/maps/PortEdaph_Gym/scripts.pory"
	playse SE_LEDGE
# 86 "data/maps/PortEdaph_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PortEdaph_Gym_Hidden3_Found_Movement_2
# 87 "data/maps/PortEdaph_Gym/scripts.pory"
	waitmovement 0
# 88 "data/maps/PortEdaph_Gym/scripts.pory"
	msgbox PortEdaph_Gym_Hidden3_Found_Text_0
# 89 "data/maps/PortEdaph_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_PORT_EDAPH_GYM_WOMAN, PortEdaph_Gym_Hidden3_Found_Text_1
# 90 "data/maps/PortEdaph_Gym/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 91 "data/maps/PortEdaph_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PortEdaph_Gym_Hidden3_Found_4
	return

PortEdaph_Gym_Hidden3_Found_4:
# 92 "data/maps/PortEdaph_Gym/scripts.pory"
	playse SE_UNLOCK
# 93 "data/maps/PortEdaph_Gym/scripts.pory"
	call PortEdaph_Gym_CheckStairState
	return


PortEdaph_Gym_Hidden4_Found::
# 101 "data/maps/PortEdaph_Gym/scripts.pory"
	checktrainerflag TRAINER_PORT_EDAPH_GYM_BLACKBELT
	goto_if 0, PortEdaph_Gym_Hidden4_Found_1
# 121 "data/maps/PortEdaph_Gym/scripts.pory"
	msgbox PortEdaph_Gym_Hidden4_Found_Text_2, MSGBOX_NPC
	return

PortEdaph_Gym_Hidden4_Found_1:
# 102 "data/maps/PortEdaph_Gym/scripts.pory"
	playse SE_DING_DONG
# 103 "data/maps/PortEdaph_Gym/scripts.pory"
	waitse
# 104 "data/maps/PortEdaph_Gym/scripts.pory"
	setobjectxy 7, 16, 6
# 105 "data/maps/PortEdaph_Gym/scripts.pory"
	applymovement 7, PortEdaph_Gym_Hidden3_Found_Movement_0
# 106 "data/maps/PortEdaph_Gym/scripts.pory"
	playse SE_LEDGE
# 107 "data/maps/PortEdaph_Gym/scripts.pory"
	waitse
# 108 "data/maps/PortEdaph_Gym/scripts.pory"
	waitmovement 0
# 109 "data/maps/PortEdaph_Gym/scripts.pory"
	applymovement 7, PortEdaph_Gym_Hidden3_Found_Movement_1
# 110 "data/maps/PortEdaph_Gym/scripts.pory"
	playse SE_LEDGE
# 111 "data/maps/PortEdaph_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PortEdaph_Gym_Hidden3_Found_Movement_2
# 112 "data/maps/PortEdaph_Gym/scripts.pory"
	waitmovement 0
# 113 "data/maps/PortEdaph_Gym/scripts.pory"
	msgbox PortEdaph_Gym_Hidden4_Found_Text_0
# 114 "data/maps/PortEdaph_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_PORT_EDAPH_GYM_BLACKBELT, PortEdaph_Gym_Hidden4_Found_Text_1
# 115 "data/maps/PortEdaph_Gym/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 116 "data/maps/PortEdaph_Gym/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PortEdaph_Gym_Hidden4_Found_4
	return

PortEdaph_Gym_Hidden4_Found_4:
# 117 "data/maps/PortEdaph_Gym/scripts.pory"
	playse SE_UNLOCK
# 118 "data/maps/PortEdaph_Gym/scripts.pory"
	call PortEdaph_Gym_CheckStairState
	return


PortEdaph_Gym_Lifrade::
# 126 "data/maps/PortEdaph_Gym/scripts.pory"
	trainerbattle_single GYM_LEADER_LIFRADE, PortEdaph_Gym_Lifrade_Text_Intro, PortEdaph_Gym_Lifrade_Text_Defeated, PortEdaph_Gym_Lifrade_Defeated, NO_MUSIC
# 133 "data/maps/PortEdaph_Gym/scripts.pory"
	msgbox PortEdaph_Gym_Lifrade_Text_PostBattle, MSGBOX_NPC
# 134 "data/maps/PortEdaph_Gym/scripts.pory"
	releaseall
	return


PortEdaph_Gym_Lifrade_Defeated::
# 138 "data/maps/PortEdaph_Gym/scripts.pory"
	message PortEdaph_Gym_Lifrade_Defeated_Text_0
# 139 "data/maps/PortEdaph_Gym/scripts.pory"
	waitmessage
# 140 "data/maps/PortEdaph_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 141 "data/maps/PortEdaph_Gym/scripts.pory"
	msgbox PortEdaph_Gym_Lifrade_Text_Badge, MSGBOX_DEFAULT
# 142 "data/maps/PortEdaph_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 143 "data/maps/PortEdaph_Gym/scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 144 "data/maps/PortEdaph_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 145 "data/maps/PortEdaph_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 146 "data/maps/PortEdaph_Gym/scripts.pory"
	releaseall
	return


PortEdaph_Gym_Guide::
# 174 "data/maps/PortEdaph_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, PortEdaph_Gym_Guide_1
# 187 "data/maps/PortEdaph_Gym/scripts.pory"
	msgbox PortEdaph_Gym_Guide_Text_2, MSGBOX_NPC
	return

PortEdaph_Gym_Guide_1:
# 175 "data/maps/PortEdaph_Gym/scripts.pory"
	lock
# 176 "data/maps/PortEdaph_Gym/scripts.pory"
	faceplayer
# 177 "data/maps/PortEdaph_Gym/scripts.pory"
	msgbox PortEdaph_Gym_Guide_Text
# 178 "data/maps/PortEdaph_Gym/scripts.pory"
	applymovement 8, PortEdaph_Gym_Guide_Movement_0
# 179 "data/maps/PortEdaph_Gym/scripts.pory"
	waitmovement 0
# 180 "data/maps/PortEdaph_Gym/scripts.pory"
	msgbox PortEdaph_Gym_Guide_Text_0
# 181 "data/maps/PortEdaph_Gym/scripts.pory"
	applymovement 8, PortEdaph_Gym_Guide_Movement_1
# 182 "data/maps/PortEdaph_Gym/scripts.pory"
	waitmovement 0
# 183 "data/maps/PortEdaph_Gym/scripts.pory"
	msgbox PortEdaph_Gym_Guide_Text_1
# 184 "data/maps/PortEdaph_Gym/scripts.pory"
	closemessage
# 185 "data/maps/PortEdaph_Gym/scripts.pory"
	release
	return


# 38 "data/maps/PortEdaph_Gym/scripts.pory"
PortEdaph_Gym_Hidden1_Found_Movement_0:
# 38 "data/maps/PortEdaph_Gym/scripts.pory"
	reveal_trainer
# 38 "data/maps/PortEdaph_Gym/scripts.pory"
	face_player
	step_end

# 80 "data/maps/PortEdaph_Gym/scripts.pory"
PortEdaph_Gym_Hidden3_Found_Movement_0:
# 80 "data/maps/PortEdaph_Gym/scripts.pory"
	reveal_trainer
	step_end

# 84 "data/maps/PortEdaph_Gym/scripts.pory"
PortEdaph_Gym_Hidden3_Found_Movement_1:
# 84 "data/maps/PortEdaph_Gym/scripts.pory"
	jump_down
# 84 "data/maps/PortEdaph_Gym/scripts.pory"
	face_player
	step_end

# 86 "data/maps/PortEdaph_Gym/scripts.pory"
PortEdaph_Gym_Hidden3_Found_Movement_2:
# 86 "data/maps/PortEdaph_Gym/scripts.pory"
	face_up
# 86 "data/maps/PortEdaph_Gym/scripts.pory"
	lock_facing_direction
# 86 "data/maps/PortEdaph_Gym/scripts.pory"
	walk_down
# 86 "data/maps/PortEdaph_Gym/scripts.pory"
	unlock_facing_direction
# 86 "data/maps/PortEdaph_Gym/scripts.pory"
	face_up
	step_end

# 178 "data/maps/PortEdaph_Gym/scripts.pory"
PortEdaph_Gym_Guide_Movement_0:
# 178 "data/maps/PortEdaph_Gym/scripts.pory"
	face_up
	step_end

# 181 "data/maps/PortEdaph_Gym/scripts.pory"
PortEdaph_Gym_Guide_Movement_1:
# 181 "data/maps/PortEdaph_Gym/scripts.pory"
	face_player
	step_end

PortEdaph_Gym_Hidden1_Found_Text_0:
# 42 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "Correct! The grass was weird!$"

PortEdaph_Gym_Hidden1_Found_Text_1:
# 43 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "Go ahead onto the next level!$"

PortEdaph_Gym_Hidden1_Found_Text_2:
# 50 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "Watch your step!$"

PortEdaph_Gym_Hidden2_Found_Text_0:
# 63 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "Correct! This wasn't real water!$"

PortEdaph_Gym_Hidden2_Found_Text_1:
# 64 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "Have fun with the next one!$"

PortEdaph_Gym_Hidden2_Found_Text_2:
# 71 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "Think outside the box!$"

PortEdaph_Gym_Hidden3_Found_Text_0:
# 88 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "...yeah, the flowers were backwards.$"

PortEdaph_Gym_Hidden3_Found_Text_1:
# 89 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "...good luck with the rest.$"

PortEdaph_Gym_Hidden3_Found_Text_2:
# 96 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "Oh... I'm not good at hints... maybe look\n"
	.string "for a dark spot?$"

PortEdaph_Gym_Hidden4_Found_Text_0:
# 113 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "I WAS IN THE ROCKS!$"

PortEdaph_Gym_Hidden4_Found_Text_1:
# 114 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "BET YOU DIDN'T SEE THAT COMING!$"

PortEdaph_Gym_Hidden4_Found_Text_2:
# 121 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "I don't have a hint to give since up\n"
	.string "next is the Gym Leader, but I can say\l"
	.string "it'll be a double battle.$"

PortEdaph_Gym_Lifrade_Defeated_Text_0:
# 138 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "Recieved the Edaph Badge!$"

PortEdaph_Gym_Guide_Text_0:
# 180 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "The stairs look like this while locked,\nso they're not part of the puzzle!$"

PortEdaph_Gym_Guide_Text_1:
# 183 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "Port Edaph is a volcanic farming town,\nso you'll likely be facing a lot of\lGrass and Fire types!$"

PortEdaph_Gym_Guide_Text_2:
# 187 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "Using Strength requires a Ground,\n"
	.string "Fighting, or Psychic type Pokemon, or\l"
	.string "one with the ability Huge Power or Sheer\l"
	.string "Force.$"

PortEdaph_Gym_Lifrade_Text_Intro::
# 149 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "Welcome to the top of my homemade\nmountain!\p"
	.string "Since Port Edaph is situated right\nat the base of the volcano, terrain\llike this is our backyard.\p"
	.string "It also takes a discerning eye to be\nable to spot issues with our berry\ltrees early, so I hope you enjoyed\lour thematic little puzzle.\p"
	.string "But you're not here for me to ramble,\nyou're here for us to rumble!\p"
	.string "Let's get this party started!$"

PortEdaph_Gym_Lifrade_Text_Defeated::
# 157 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "What a great battle!\p"
	.string "Like a hardy sapling, you've grown\nagainst yet another adversity!\p"
	.string "I wonder how far your branches will\nend up reaching?$"

PortEdaph_Gym_Lifrade_Text_Badge::
# 163 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "The Edaph Badge is a testiment to how\nfar you've come, having it will allow you\lto push boulders around with your grit!\p"
	.string "Ground, Fighting, and Psychic type\nPokemon all help with moving boulders,\lso make sure you have one!$"

PortEdaph_Gym_Lifrade_Text_PostBattle::
# 169 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "What's your favourite flavour of berry?\p$"

PortEdaph_Gym_Guide_Text::
# 191 "data/maps/PortEdaph_Gym/scripts.pory"
	.string "Hello!\p"
	.string "The Gym here at Port Edaph is a\nculmination of the resident's hard work\land an expression of their culture.\p"
	.string "Since caring for plants is crucial for\nthe well being of the town, the Gym\lhas been designed to reflect that!\p"
	.string "Each level you climb up the indoor\nmountain will require you to spot a\lsmall detail that is wrong!\p"
	.string "Once you find the oddity, the stairs to\nthe next area will unlock!$"
