NewstemTown_ProfLab_MapScripts::
# 2 "data/maps/NewstemTown_ProfLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewstemTown_ProfLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NewstemTown_ProfLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/NewstemTown_ProfLab/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, NewstemTown_ProfLab_Intro
	.2byte 0


NewstemTown_ProfLab_Intro::
# 8 "data/maps/NewstemTown_ProfLab/scripts.pory"
	lockall
# 9 "data/maps/NewstemTown_ProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewstemTown_ProfLab_Intro_Movement_0
# 10 "data/maps/NewstemTown_ProfLab/scripts.pory"
	waitmovement 0
# 11 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox NewstemTown_ProfLab_Text_Intro
# 12 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 13 "data/maps/NewstemTown_ProfLab/scripts.pory"
	releaseall
	return


NewstemTown_ProfLab_Professor::
# 17 "data/maps/NewstemTown_ProfLab/scripts.pory"
	lockall
# 18 "data/maps/NewstemTown_ProfLab/scripts.pory"
	applymovement 4, NewstemTown_ProfLab_Professor_Movement_0
# 19 "data/maps/NewstemTown_ProfLab/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 2
	goto_if_eq NewstemTown_ProfLab_Professor_2
# 21 "data/maps/NewstemTown_ProfLab/scripts.pory"
	goto_if_unset FLAG_BIRCH_AIDE_MET, NewstemTown_ProfLab_Professor_5
NewstemTown_ProfLab_Professor_4:
# 25 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox NewstemTown_ProfLab_Professor_Text_2, MSGBOX_NPC
NewstemTown_ProfLab_Professor_1:
# 27 "data/maps/NewstemTown_ProfLab/scripts.pory"
	releaseall
	return

NewstemTown_ProfLab_Professor_2:
# 20 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox NewstemTown_ProfLab_Professor_Text_0, MSGBOX_NPC
	goto NewstemTown_ProfLab_Professor_1

NewstemTown_ProfLab_Professor_3:
# 22 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox NewstemTown_ProfLab_Professor_Text_1, MSGBOX_NPC
# 23 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setflag FLAG_BIRCH_AIDE_MET
	goto NewstemTown_ProfLab_Professor_1

NewstemTown_ProfLab_Professor_5:
# 21 "data/maps/NewstemTown_ProfLab/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 3
	goto_if_eq NewstemTown_ProfLab_Professor_3
	goto NewstemTown_ProfLab_Professor_4


NewstemTown_ProfLab_Starter1::
# 31 "data/maps/NewstemTown_ProfLab/scripts.pory"
	lockall
# 32 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CROAGUNK
# 33 "data/maps/NewstemTown_ProfLab/scripts.pory"
	bufferstring STR_VAR_1, NewstemTown_ProfLab_Starter1_Text_0
# 34 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call StarterSelection
# 35 "data/maps/NewstemTown_ProfLab/scripts.pory"
	releaseall
	return


NewstemTown_ProfLab_Starter2::
# 39 "data/maps/NewstemTown_ProfLab/scripts.pory"
	lockall
# 40 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ROCKRUFF
# 41 "data/maps/NewstemTown_ProfLab/scripts.pory"
	bufferstring STR_VAR_1, NewstemTown_ProfLab_Starter2_Text_0
# 42 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call StarterSelection
# 43 "data/maps/NewstemTown_ProfLab/scripts.pory"
	releaseall
	return


NewstemTown_ProfLab_Starter3::
# 47 "data/maps/NewstemTown_ProfLab/scripts.pory"
	lockall
# 48 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SWABLU
# 49 "data/maps/NewstemTown_ProfLab/scripts.pory"
	bufferstring STR_VAR_1, NewstemTown_ProfLab_Starter3_Text_0
# 50 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call StarterSelection
# 51 "data/maps/NewstemTown_ProfLab/scripts.pory"
	releaseall
	return


StarterSelection::
# 55 "data/maps/NewstemTown_ProfLab/scripts.pory"
	showmonpic VAR_TEMP_0, 10, 3
# 56 "data/maps/NewstemTown_ProfLab/scripts.pory"
	playmoncry VAR_TEMP_0, CRY_MODE_NORMAL
# 57 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox StarterSelection_Text_0, MSGBOX_YESNO
# 59 "data/maps/NewstemTown_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StarterSelection_2
# 86 "data/maps/NewstemTown_ProfLab/scripts.pory"
	hidemonpic
StarterSelection_1:
# 88 "data/maps/NewstemTown_ProfLab/scripts.pory"
	waitmessage
# 89 "data/maps/NewstemTown_ProfLab/scripts.pory"
	releaseall
	return

StarterSelection_2:
# 60 "data/maps/NewstemTown_ProfLab/scripts.pory"
	givemon VAR_TEMP_0, 5, ITEM_NONE, ITEM_PREMIER_BALL
# 62 "data/maps/NewstemTown_ProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StarterSelection_5
	goto StarterSelection_1

StarterSelection_5:
# 63 "data/maps/NewstemTown_ProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 64 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox StarterSelection_Text_1
# 65 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call PickedStarter
# 66 "data/maps/NewstemTown_ProfLab/scripts.pory"
	waitfanfare
# 67 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call NicknamePartyMon
# 68 "data/maps/NewstemTown_ProfLab/scripts.pory"
	applymovement 4, NewstemTown_ProfLab_Professor_Movement_0
# 69 "data/maps/NewstemTown_ProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarterSelection_Movement_0
# 70 "data/maps/NewstemTown_ProfLab/scripts.pory"
	waitmovement 0
# 71 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox StarterSelection_Text_2, MSGBOX_NPC
# 72 "data/maps/NewstemTown_ProfLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 73 "data/maps/NewstemTown_ProfLab/scripts.pory"
	giveitem ITEM_POTION, 2
	goto StarterSelection_1


PickedStarter::
# 93 "data/maps/NewstemTown_ProfLab/scripts.pory"
	removeobject 1
# 94 "data/maps/NewstemTown_ProfLab/scripts.pory"
	removeobject 2
# 95 "data/maps/NewstemTown_ProfLab/scripts.pory"
	removeobject 3
# 96 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 97 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 98 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 99 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 100 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 101 "data/maps/NewstemTown_ProfLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 102 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 103 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
	return


NicknamePartyMon::
# 108 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 109 "data/maps/NewstemTown_ProfLab/scripts.pory"
	hidemonpic
# 110 "data/maps/NewstemTown_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_2
NicknamePartyMon_1:
	return

NicknamePartyMon_2:
# 111 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 112 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyMon_1


NicknameBoxMon::
# 118 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 119 "data/maps/NewstemTown_ProfLab/scripts.pory"
	hidemonpic
# 120 "data/maps/NewstemTown_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 123 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 121 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


# 9 "data/maps/NewstemTown_ProfLab/scripts.pory"
NewstemTown_ProfLab_Intro_Movement_0:
# 9 "data/maps/NewstemTown_ProfLab/scripts.pory"
	walk_up
# 9 "data/maps/NewstemTown_ProfLab/scripts.pory"
	walk_up
# 9 "data/maps/NewstemTown_ProfLab/scripts.pory"
	walk_up
# 9 "data/maps/NewstemTown_ProfLab/scripts.pory"
	walk_up
# 9 "data/maps/NewstemTown_ProfLab/scripts.pory"
	walk_up
# 9 "data/maps/NewstemTown_ProfLab/scripts.pory"
	walk_up
	step_end

# 18 "data/maps/NewstemTown_ProfLab/scripts.pory"
NewstemTown_ProfLab_Professor_Movement_0:
# 18 "data/maps/NewstemTown_ProfLab/scripts.pory"
	face_player
	step_end

# 69 "data/maps/NewstemTown_ProfLab/scripts.pory"
StarterSelection_Movement_0:
# 69 "data/maps/NewstemTown_ProfLab/scripts.pory"
	face_right
	step_end

NewstemTown_ProfLab_Professor_Text_0:
# 20 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "They're just there on the desk,\ngo ahead and take one.$"

NewstemTown_ProfLab_Professor_Text_1:
# 22 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "Have fun exploring the region!$"

NewstemTown_ProfLab_Professor_Text_2:
# 25 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "I'm glad to see you {PLAYER},\nbut I'm quite busy so I'll talk later.$"

NewstemTown_ProfLab_Starter1_Text_0:
# 33 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "CROAGUNK$"

NewstemTown_ProfLab_Starter2_Text_0:
# 41 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "ROCKRUFF$"

NewstemTown_ProfLab_Starter3_Text_0:
# 49 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "SWABLU$"

StarterSelection_Text_0:
# 57 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

StarterSelection_Text_1:
# 64 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "You recieved the {STR_VAR_1}!$"

StarterSelection_Text_2:
# 71 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "I also have some items to help you get\n"
	.string "started on your adventure.$"

NicknamePartyMon_Text_0:
# 108 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "Give it a nickname?$"

NewstemTown_ProfLab_Text_Intro::
# 126 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "Glad to see you, {PLAYER}.\p"
	.string "I've gotten my hands on a couple of\nPokemon.\p"
	.string "Feel free to pick one you like.$"
