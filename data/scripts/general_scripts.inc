Generic_UPDATE_LEVELCAP::
# 3 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 15
# 5 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Generic_UPDATE_LEVELCAP_2
Generic_UPDATE_LEVELCAP_1:
# 9 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Generic_UPDATE_LEVELCAP_5
Generic_UPDATE_LEVELCAP_4:
	return

Generic_UPDATE_LEVELCAP_2:
# 6 "data/scripts/general_scripts.pory"
	addvar VAR_CURRENT_LEVEL_CAP, 7
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_5:
# 10 "data/scripts/general_scripts.pory"
	addvar VAR_CURRENT_LEVEL_CAP, 78
	goto Generic_UPDATE_LEVELCAP_4


Generic_GYM_LEVEL_GUIDE::
# 17 "data/scripts/general_scripts.pory"
	lockall
# 18 "data/scripts/general_scripts.pory"
	compare VAR_CURRENT_LEVEL_CAP, 100
	goto_if_ne Generic_GYM_LEVEL_GUIDE_2
# 22 "data/scripts/general_scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 23 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_LEVEL_CAP
# 24 "data/scripts/general_scripts.pory"
	msgbox Generic_GYM_LEVEL_GUIDE_Text_0, MSGBOX_SIGN
# 25 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
Generic_GYM_LEVEL_GUIDE_1:
# 27 "data/scripts/general_scripts.pory"
	releaseall
	return

Generic_GYM_LEVEL_GUIDE_2:
# 19 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_LEVEL_CAP
# 20 "data/scripts/general_scripts.pory"
	msgbox Generic_GYM_LEVEL_GUIDE_Text_0, MSGBOX_SIGN
	goto Generic_GYM_LEVEL_GUIDE_1


Generic_POKEMON_INTERACT::
# 32 "data/scripts/general_scripts.pory"
	lockall
# 33 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
# 34 "data/scripts/general_scripts.pory"
	waitmovement 0
# 35 "data/scripts/general_scripts.pory"
	callnative GetInteractedPokemon
# 36 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Generic_POKEMON_INTERACT_2
Generic_POKEMON_INTERACT_1:
# 37 "data/scripts/general_scripts.pory"
	playmoncry VAR_0x8004, CRY_MODE_NORMAL
# 39 "data/scripts/general_scripts.pory"
	random 5
# 40 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 41 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMON_INTERACT_6
# 42 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMON_INTERACT_7
# 43 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMON_INTERACT_8
# 44 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMON_INTERACT_9
# 45 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMON_INTERACT_10
# 46 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_0
Generic_POKEMON_INTERACT_4:
# 49 "data/scripts/general_scripts.pory"
	waitmessage
# 50 "data/scripts/general_scripts.pory"
	waitmoncry
# 51 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 52 "data/scripts/general_scripts.pory"
	releaseall
	return

Generic_POKEMON_INTERACT_2:
# 36 "data/scripts/general_scripts.pory"
	setseenmon VAR_0x8004
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_6:
# 41 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_0
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_7:
# 42 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_0
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_8:
# 43 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_1
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_9:
# 44 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_2
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_10:
# 45 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_3
	goto Generic_POKEMON_INTERACT_4


ThicketBrushInteract::
# 57 "data/scripts/general_scripts.pory"
	lockall
# 58 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_ClearTile
# 61 "data/scripts/general_scripts.pory"
	random 10
# 62 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_lt ThicketBrushInteract_2
# 73 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ge ThicketBrushInteract_9
ThicketBrushInteract_7:
# 76 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ThicketBrushInteract_6
ThicketBrushInteract_5:
# 85 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_GetPokemon
# 86 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
# 87 "data/scripts/general_scripts.pory"
	call ThicketBrush_WildEncounter
ThicketBrushInteract_1:
# 89 "data/scripts/general_scripts.pory"
	release
	return

ThicketBrushInteract_2:
# 63 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_GetItem
	checkitemspace VAR_TEMP_0
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ThicketBrushInteract_13
	goto ThicketBrushInteract_1

ThicketBrushInteract_3:
# 74 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_Nothing
	goto ThicketBrushInteract_1

ThicketBrushInteract_4:
# 77 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_GetPokemon
# 78 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
# 79 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_GetPokemon
# 80 "data/scripts/general_scripts.pory"
	createmon 1, 1, VAR_TEMP_0, VAR_TEMP_1
# 81 "data/scripts/general_scripts.pory"
	setwilddoubleflag
# 82 "data/scripts/general_scripts.pory"
	call ThicketBrush_WildEncounter
	goto ThicketBrushInteract_1

ThicketBrushInteract_6:
# 76 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt ThicketBrushInteract_4
	goto ThicketBrushInteract_5

ThicketBrushInteract_9:
# 73 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt ThicketBrushInteract_3
	goto ThicketBrushInteract_7

ThicketBrushInteract_13:
# 65 "data/scripts/general_scripts.pory"
	additem VAR_TEMP_0
# 66 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 67 "data/scripts/general_scripts.pory"
	message ThicketBrushInteract_Text_0
# 68 "data/scripts/general_scripts.pory"
	waitmessage
# 69 "data/scripts/general_scripts.pory"
	waitfanfare
# 70 "data/scripts/general_scripts.pory"
	waitbuttonpress
	goto ThicketBrushInteract_1


ThicketBrushInteract_Nothing::
# 93 "data/scripts/general_scripts.pory"
	msgbox ThicketBrushInteract_Nothing_Text_0, MSGBOX_SIGN
	return


ThicketBrush_WildEncounter::
# 98 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 99 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 100 "data/scripts/general_scripts.pory"
	waitmovement 0
# 101 "data/scripts/general_scripts.pory"
	message ThicketBrush_WildEncounter_Text_0
# 102 "data/scripts/general_scripts.pory"
	waitmessage
# 103 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 104 "data/scripts/general_scripts.pory"
	dowildbattle
	return


ThicketBrushInteract_GetPokemon::
# 108 "data/scripts/general_scripts.pory"
	random 100
# 109 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_lt ThicketBrushInteract_GetPokemon_2
# 114 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ThicketBrushInteract_GetPokemon_14
ThicketBrushInteract_GetPokemon_12:
# 119 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_ge ThicketBrushInteract_GetPokemon_11
ThicketBrushInteract_GetPokemon_9:
# 124 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_ge ThicketBrushInteract_GetPokemon_8
ThicketBrushInteract_GetPokemon_7:
# 129 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_ge ThicketBrushInteract_GetPokemon_6
ThicketBrushInteract_GetPokemon_1:
	return

ThicketBrushInteract_GetPokemon_2:
# 110 "data/scripts/general_scripts.pory"
	random 10
# 111 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 112 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 113 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_LARVESTA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_3:
# 115 "data/scripts/general_scripts.pory"
	random 10
# 116 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 117 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 118 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SPINARAK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_4:
# 120 "data/scripts/general_scripts.pory"
	random 10
# 121 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 122 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 123 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_JOLTIK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_5:
# 125 "data/scripts/general_scripts.pory"
	random 4
# 126 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 127 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 128 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ARIADOS
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_6:
# 130 "data/scripts/general_scripts.pory"
	random 4
# 131 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 132 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 133 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_GALVANTULA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_8:
# 124 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_lt ThicketBrushInteract_GetPokemon_5
	goto ThicketBrushInteract_GetPokemon_7

ThicketBrushInteract_GetPokemon_11:
# 119 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt ThicketBrushInteract_GetPokemon_4
	goto ThicketBrushInteract_GetPokemon_9

ThicketBrushInteract_GetPokemon_14:
# 114 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_lt ThicketBrushInteract_GetPokemon_3
	goto ThicketBrushInteract_GetPokemon_12


ThicketBrushInteract_GetItem::
# 139 "data/scripts/general_scripts.pory"
	random 10
# 140 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 141 "data/scripts/general_scripts.pory"
	case 1, ThicketBrushInteract_GetItem_3
# 142 "data/scripts/general_scripts.pory"
	case 2, ThicketBrushInteract_GetItem_4
# 143 "data/scripts/general_scripts.pory"
	case 3, ThicketBrushInteract_GetItem_5
# 144 "data/scripts/general_scripts.pory"
	case 4, ThicketBrushInteract_GetItem_6
# 145 "data/scripts/general_scripts.pory"
	case 5, ThicketBrushInteract_GetItem_7
# 146 "data/scripts/general_scripts.pory"
	case 6, ThicketBrushInteract_GetItem_8
# 147 "data/scripts/general_scripts.pory"
	case 7, ThicketBrushInteract_GetItem_9
# 148 "data/scripts/general_scripts.pory"
	case 8, ThicketBrushInteract_GetItem_10
# 149 "data/scripts/general_scripts.pory"
	case 9, ThicketBrushInteract_GetItem_11
# 150 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_RARE_CANDY
ThicketBrushInteract_GetItem_1:
	return

ThicketBrushInteract_GetItem_3:
# 141 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_4:
# 142 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BALM_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_5:
# 143 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_6:
# 144 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_7:
# 145 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_8:
# 146 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_9:
# 147 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_10:
# 148 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_11:
# 149 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1


ThicketBrushInteract_ClearTile::
# 156 "data/scripts/general_scripts.pory"
	playse SE_FU_ZAKU
# 157 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_C
# 158 "data/scripts/general_scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_A, VAR_TEMP_B
# 159 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_C
# 160 "data/scripts/general_scripts.pory"
	case DIR_NORTH, ThicketBrushInteract_ClearTile_3
# 163 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, ThicketBrushInteract_ClearTile_4
# 166 "data/scripts/general_scripts.pory"
	case DIR_EAST, ThicketBrushInteract_ClearTile_5
# 169 "data/scripts/general_scripts.pory"
	case DIR_WEST, ThicketBrushInteract_ClearTile_6
ThicketBrushInteract_ClearTile_1:
# 173 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_A, VAR_TEMP_B, METATILE_SecretBaseShrub_Debris, FALSE
# 174 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 175 "data/scripts/general_scripts.pory"
	waitse
	return

ThicketBrushInteract_ClearTile_3:
# 161 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_4:
# 164 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_5:
# 167 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_6:
# 170 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1


# 33 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_0:
# 33 "data/scripts/general_scripts.pory"
	face_player
	step_end

Generic_GYM_LEVEL_GUIDE_Text_0:
# 20 "data/scripts/general_scripts.pory"
	.string "Current Level Cap:\n{STR_VAR_1}$"

Generic_POKEMON_INTERACT_Text_0:
# 41 "data/scripts/general_scripts.pory"
	.string "?$"

Generic_POKEMON_INTERACT_Text_1:
# 43 "data/scripts/general_scripts.pory"
	.string "!$"

Generic_POKEMON_INTERACT_Text_2:
# 44 "data/scripts/general_scripts.pory"
	.string "...$"

Generic_POKEMON_INTERACT_Text_3:
# 45 "data/scripts/general_scripts.pory"
	.string "!?$"

ThicketBrushInteract_Text_0:
# 67 "data/scripts/general_scripts.pory"
	.string "You found an item!$"

ThicketBrushInteract_Nothing_Text_0:
# 93 "data/scripts/general_scripts.pory"
	.string "You didn't find anything...$"

ThicketBrush_WildEncounter_Text_0:
# 101 "data/scripts/general_scripts.pory"
	.string "You were attacked!$"
