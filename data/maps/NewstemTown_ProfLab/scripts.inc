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
# 27 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox NewstemTown_ProfLab_Professor_Text_2, MSGBOX_NPC
NewstemTown_ProfLab_Professor_1:
# 29 "data/maps/NewstemTown_ProfLab/scripts.pory"
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
	giveitem ITEM_POKE_BALL, 5
# 24 "data/maps/NewstemTown_ProfLab/scripts.pory"
	giveitem ITEM_POTION, 1
# 25 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setflag FLAG_BIRCH_AIDE_MET
	goto NewstemTown_ProfLab_Professor_1

NewstemTown_ProfLab_Professor_5:
# 21 "data/maps/NewstemTown_ProfLab/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 3
	goto_if_eq NewstemTown_ProfLab_Professor_3
	goto NewstemTown_ProfLab_Professor_4


NewstemTown_ProfLab_Starter1::
# 33 "data/maps/NewstemTown_ProfLab/scripts.pory"
	lockall
# 34 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CROAGUNK
# 35 "data/maps/NewstemTown_ProfLab/scripts.pory"
	bufferstring STR_VAR_1, NewstemTown_ProfLab_Starter1_Text_0
# 36 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call StarterSelection
# 37 "data/maps/NewstemTown_ProfLab/scripts.pory"
	releaseall
	return


NewstemTown_ProfLab_Starter2::
# 41 "data/maps/NewstemTown_ProfLab/scripts.pory"
	lockall
# 42 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ROCKRUFF
# 43 "data/maps/NewstemTown_ProfLab/scripts.pory"
	bufferstring STR_VAR_1, NewstemTown_ProfLab_Starter2_Text_0
# 44 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call StarterSelection
# 45 "data/maps/NewstemTown_ProfLab/scripts.pory"
	releaseall
	return


NewstemTown_ProfLab_Starter3::
# 49 "data/maps/NewstemTown_ProfLab/scripts.pory"
	lockall
# 50 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SWABLU
# 51 "data/maps/NewstemTown_ProfLab/scripts.pory"
	bufferstring STR_VAR_1, NewstemTown_ProfLab_Starter3_Text_0
# 52 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call StarterSelection
# 53 "data/maps/NewstemTown_ProfLab/scripts.pory"
	releaseall
	return


StarterSelection::
# 57 "data/maps/NewstemTown_ProfLab/scripts.pory"
	showmonpic VAR_TEMP_0, 10, 3
# 58 "data/maps/NewstemTown_ProfLab/scripts.pory"
	playmoncry VAR_TEMP_0, CRY_MODE_NORMAL
# 59 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox StarterSelection_Text_0, MSGBOX_YESNO
# 61 "data/maps/NewstemTown_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StarterSelection_2
# 82 "data/maps/NewstemTown_ProfLab/scripts.pory"
	hidemonpic
StarterSelection_1:
# 84 "data/maps/NewstemTown_ProfLab/scripts.pory"
	waitmessage
# 85 "data/maps/NewstemTown_ProfLab/scripts.pory"
	applymovement 4, StarterSelection_Movement_0
# 86 "data/maps/NewstemTown_ProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarterSelection_Movement_1
# 87 "data/maps/NewstemTown_ProfLab/scripts.pory"
	waitmovement 0
# 88 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox StarterSelection_Text_2, MSGBOX_NPC
# 89 "data/maps/NewstemTown_ProfLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 90 "data/maps/NewstemTown_ProfLab/scripts.pory"
	giveitem ITEM_POTION, 2
# 91 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox StarterSelection_Text_3, MSGBOX_NPC
# 92 "data/maps/NewstemTown_ProfLab/scripts.pory"
	applymovement 4, StarterSelection_Movement_2
# 93 "data/maps/NewstemTown_ProfLab/scripts.pory"
	waitmovement 0
# 94 "data/maps/NewstemTown_ProfLab/scripts.pory"
	releaseall
	return

StarterSelection_2:
# 62 "data/maps/NewstemTown_ProfLab/scripts.pory"
	givemon VAR_TEMP_0, 5, ITEM_NONE, ITEM_PREMIER_BALL
# 64 "data/maps/NewstemTown_ProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq StarterSelection_5
	goto StarterSelection_1

StarterSelection_5:
# 65 "data/maps/NewstemTown_ProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 66 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox StarterSelection_Text_1
# 67 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call PickedStarter
# 68 "data/maps/NewstemTown_ProfLab/scripts.pory"
	waitfanfare
# 69 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call NicknamePartyMon
	goto StarterSelection_1


PickedStarter::
# 98 "data/maps/NewstemTown_ProfLab/scripts.pory"
	removeobject 1
# 99 "data/maps/NewstemTown_ProfLab/scripts.pory"
	removeobject 2
# 100 "data/maps/NewstemTown_ProfLab/scripts.pory"
	removeobject 3
# 101 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 102 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 103 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 104 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 105 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 106 "data/maps/NewstemTown_ProfLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 107 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 108 "data/maps/NewstemTown_ProfLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
	return


NicknamePartyMon::
# 113 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 114 "data/maps/NewstemTown_ProfLab/scripts.pory"
	hidemonpic
# 115 "data/maps/NewstemTown_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_2
NicknamePartyMon_1:
	return

NicknamePartyMon_2:
# 116 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 117 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyMon_1


NicknameBoxMon::
# 123 "data/maps/NewstemTown_ProfLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 124 "data/maps/NewstemTown_ProfLab/scripts.pory"
	hidemonpic
# 125 "data/maps/NewstemTown_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 128 "data/maps/NewstemTown_ProfLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 126 "data/maps/NewstemTown_ProfLab/scripts.pory"
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

# 85 "data/maps/NewstemTown_ProfLab/scripts.pory"
StarterSelection_Movement_0:
# 85 "data/maps/NewstemTown_ProfLab/scripts.pory"
	face_left
	step_end

# 86 "data/maps/NewstemTown_ProfLab/scripts.pory"
StarterSelection_Movement_1:
# 86 "data/maps/NewstemTown_ProfLab/scripts.pory"
	face_right
	step_end

# 92 "data/maps/NewstemTown_ProfLab/scripts.pory"
StarterSelection_Movement_2:
# 92 "data/maps/NewstemTown_ProfLab/scripts.pory"
	face_down
	step_end

NewstemTown_ProfLab_Professor_Text_0:
# 20 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "They're just there on the desk,\ngo ahead and take one.$"

NewstemTown_ProfLab_Professor_Text_1:
# 22 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "Oh right, while you're here, I have some\n"
	.string "items to help you get started.$"

NewstemTown_ProfLab_Professor_Text_2:
# 27 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "I'm glad to see you {PLAYER},\nbut I'm quite busy so I'll talk later.$"

NewstemTown_ProfLab_Starter1_Text_0:
# 35 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "CROAGUNK$"

NewstemTown_ProfLab_Starter2_Text_0:
# 43 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "ROCKRUFF$"

NewstemTown_ProfLab_Starter3_Text_0:
# 51 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "SWABLU$"

StarterSelection_Text_0:
# 59 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

StarterSelection_Text_1:
# 66 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "You recieved the {STR_VAR_1}!$"

StarterSelection_Text_2:
# 88 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "I also have some items to help you get\n"
	.string "started on your adventure.$"

StarterSelection_Text_3:
# 91 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "Have fun out there!$"

NicknamePartyMon_Text_0:
# 113 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "Give it a nickname?$"

NewstemTown_ProfLab_Text_Intro::
# 131 "data/maps/NewstemTown_ProfLab/scripts.pory"
	.string "Glad to see you, {PLAYER}.\p"
	.string "I've gotten my hands on a couple of\nPokemon.\p"
	.string "Feel free to pick one you like.$"
