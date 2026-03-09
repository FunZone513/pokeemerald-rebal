Generic_DefaultSettings::
# 3 "data/scripts/general_scripts.pory"
	setflag FLAG_SYS_B_DASH
# 4 "data/scripts/general_scripts.pory"
	setflag FLAG_SHARED_EXP
# 5 "data/scripts/general_scripts.pory"
	setflag FLAG_USE_NEW_TYPE_CHART
# 6 "data/scripts/general_scripts.pory"
	setvar VAR_STARTED_GAME, 1
# 7 "data/scripts/general_scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 8 "data/scripts/general_scripts.pory"
	call Generic_IncreaseExpGain
# 11 "data/scripts/general_scripts.pory"
	setvar VAR_WILD_BATTLE_CHANCE, 15
# 13 "data/scripts/general_scripts.pory"
	releaseall
	return


Generic_IncreaseExpGain::
# 18 "data/scripts/general_scripts.pory"
	setvar VAR_INCREASE_EXP_GAIN, 150
	return


Generic_UPDATE_LEVELCAP::
# 26 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 15
# 28 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Generic_UPDATE_LEVELCAP_2
Generic_UPDATE_LEVELCAP_1:
# 32 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Generic_UPDATE_LEVELCAP_5
Generic_UPDATE_LEVELCAP_4:
	return

Generic_UPDATE_LEVELCAP_2:
# 29 "data/scripts/general_scripts.pory"
	addvar VAR_CURRENT_LEVEL_CAP, 7
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_5:
# 33 "data/scripts/general_scripts.pory"
	addvar VAR_CURRENT_LEVEL_CAP, 78
	goto Generic_UPDATE_LEVELCAP_4


Generic_GYM_LEVEL_GUIDE::
# 40 "data/scripts/general_scripts.pory"
	lockall
# 41 "data/scripts/general_scripts.pory"
	compare VAR_CURRENT_LEVEL_CAP, 100
	goto_if_ne Generic_GYM_LEVEL_GUIDE_2
# 45 "data/scripts/general_scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 46 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_LEVEL_CAP
# 47 "data/scripts/general_scripts.pory"
	msgbox Generic_GYM_LEVEL_GUIDE_Text_0, MSGBOX_SIGN
# 48 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
Generic_GYM_LEVEL_GUIDE_1:
# 50 "data/scripts/general_scripts.pory"
	releaseall
	return

Generic_GYM_LEVEL_GUIDE_2:
# 42 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_LEVEL_CAP
# 43 "data/scripts/general_scripts.pory"
	msgbox Generic_GYM_LEVEL_GUIDE_Text_0, MSGBOX_SIGN
	goto Generic_GYM_LEVEL_GUIDE_1


Generic_POKEMON_INTERACT::
# 55 "data/scripts/general_scripts.pory"
	lockall
# 56 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
# 57 "data/scripts/general_scripts.pory"
	waitmovement 0
# 58 "data/scripts/general_scripts.pory"
	callnative GetInteractedPokemon
# 59 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Generic_POKEMON_INTERACT_2
Generic_POKEMON_INTERACT_1:
# 60 "data/scripts/general_scripts.pory"
	playmoncry VAR_0x8004, CRY_MODE_NORMAL
# 62 "data/scripts/general_scripts.pory"
	random 5
# 63 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 64 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMON_INTERACT_6
# 65 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMON_INTERACT_7
# 66 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMON_INTERACT_8
# 67 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMON_INTERACT_9
# 68 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMON_INTERACT_10
# 69 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_0
Generic_POKEMON_INTERACT_4:
# 72 "data/scripts/general_scripts.pory"
	waitmessage
# 73 "data/scripts/general_scripts.pory"
	waitmoncry
# 74 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 75 "data/scripts/general_scripts.pory"
	releaseall
	return

Generic_POKEMON_INTERACT_2:
# 59 "data/scripts/general_scripts.pory"
	setseenmon VAR_0x8004
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_6:
# 64 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_0
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_7:
# 65 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_0
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_8:
# 66 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_1
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_9:
# 67 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_2
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_10:
# 68 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_3
	goto Generic_POKEMON_INTERACT_4


ThicketBrushInteract::
# 80 "data/scripts/general_scripts.pory"
	lockall
# 81 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_ClearTile
# 84 "data/scripts/general_scripts.pory"
	random 10
# 85 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_lt ThicketBrushInteract_2
# 96 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ge ThicketBrushInteract_9
ThicketBrushInteract_7:
# 99 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ThicketBrushInteract_6
ThicketBrushInteract_5:
# 108 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_GetPokemon
# 109 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
# 110 "data/scripts/general_scripts.pory"
	call ThicketBrush_WildEncounter
ThicketBrushInteract_1:
# 112 "data/scripts/general_scripts.pory"
	release
	return

ThicketBrushInteract_2:
# 86 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_GetItem
	checkitemspace VAR_TEMP_0
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ThicketBrushInteract_13
	goto ThicketBrushInteract_1

ThicketBrushInteract_3:
# 97 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_Nothing
	goto ThicketBrushInteract_1

ThicketBrushInteract_4:
# 100 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_GetPokemon
# 101 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
# 102 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_GetPokemon
# 103 "data/scripts/general_scripts.pory"
	createmon 1, 1, VAR_TEMP_0, VAR_TEMP_1
# 104 "data/scripts/general_scripts.pory"
	setwilddoubleflag
# 105 "data/scripts/general_scripts.pory"
	call ThicketBrush_WildEncounter
	goto ThicketBrushInteract_1

ThicketBrushInteract_6:
# 99 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt ThicketBrushInteract_4
	goto ThicketBrushInteract_5

ThicketBrushInteract_9:
# 96 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt ThicketBrushInteract_3
	goto ThicketBrushInteract_7

ThicketBrushInteract_13:
# 88 "data/scripts/general_scripts.pory"
	additem VAR_TEMP_0
# 89 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 90 "data/scripts/general_scripts.pory"
	message ThicketBrushInteract_Text_0
# 91 "data/scripts/general_scripts.pory"
	waitmessage
# 92 "data/scripts/general_scripts.pory"
	waitfanfare
# 93 "data/scripts/general_scripts.pory"
	waitbuttonpress
	goto ThicketBrushInteract_1


ThicketBrushInteract_Nothing::
# 116 "data/scripts/general_scripts.pory"
	msgbox ThicketBrushInteract_Nothing_Text_0, MSGBOX_SIGN
	return


ThicketBrush_WildEncounter::
# 121 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 122 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 123 "data/scripts/general_scripts.pory"
	waitmovement 0
# 124 "data/scripts/general_scripts.pory"
	message ThicketBrush_WildEncounter_Text_0
# 125 "data/scripts/general_scripts.pory"
	waitmessage
# 126 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 127 "data/scripts/general_scripts.pory"
	dowildbattle
	return


ThicketBrushInteract_GetPokemon::
# 131 "data/scripts/general_scripts.pory"
	random 100
# 132 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_lt ThicketBrushInteract_GetPokemon_2
# 137 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ThicketBrushInteract_GetPokemon_14
ThicketBrushInteract_GetPokemon_12:
# 142 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_ge ThicketBrushInteract_GetPokemon_11
ThicketBrushInteract_GetPokemon_9:
# 147 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_ge ThicketBrushInteract_GetPokemon_8
ThicketBrushInteract_GetPokemon_7:
# 152 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_ge ThicketBrushInteract_GetPokemon_6
ThicketBrushInteract_GetPokemon_1:
	return

ThicketBrushInteract_GetPokemon_2:
# 133 "data/scripts/general_scripts.pory"
	random 10
# 134 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 135 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 136 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_LARVESTA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_3:
# 138 "data/scripts/general_scripts.pory"
	random 10
# 139 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 140 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 141 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SPINARAK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_4:
# 143 "data/scripts/general_scripts.pory"
	random 10
# 144 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 145 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 146 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_JOLTIK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_5:
# 148 "data/scripts/general_scripts.pory"
	random 4
# 149 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 150 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 151 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ARIADOS
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_6:
# 153 "data/scripts/general_scripts.pory"
	random 4
# 154 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 155 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 156 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_GALVANTULA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_8:
# 147 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_lt ThicketBrushInteract_GetPokemon_5
	goto ThicketBrushInteract_GetPokemon_7

ThicketBrushInteract_GetPokemon_11:
# 142 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt ThicketBrushInteract_GetPokemon_4
	goto ThicketBrushInteract_GetPokemon_9

ThicketBrushInteract_GetPokemon_14:
# 137 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_lt ThicketBrushInteract_GetPokemon_3
	goto ThicketBrushInteract_GetPokemon_12


ThicketBrushInteract_GetItem::
# 162 "data/scripts/general_scripts.pory"
	random 10
# 163 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 164 "data/scripts/general_scripts.pory"
	case 1, ThicketBrushInteract_GetItem_3
# 165 "data/scripts/general_scripts.pory"
	case 2, ThicketBrushInteract_GetItem_4
# 166 "data/scripts/general_scripts.pory"
	case 3, ThicketBrushInteract_GetItem_5
# 167 "data/scripts/general_scripts.pory"
	case 4, ThicketBrushInteract_GetItem_6
# 168 "data/scripts/general_scripts.pory"
	case 5, ThicketBrushInteract_GetItem_7
# 169 "data/scripts/general_scripts.pory"
	case 6, ThicketBrushInteract_GetItem_8
# 170 "data/scripts/general_scripts.pory"
	case 7, ThicketBrushInteract_GetItem_9
# 171 "data/scripts/general_scripts.pory"
	case 8, ThicketBrushInteract_GetItem_10
# 172 "data/scripts/general_scripts.pory"
	case 9, ThicketBrushInteract_GetItem_11
# 173 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_RARE_CANDY
ThicketBrushInteract_GetItem_1:
	return

ThicketBrushInteract_GetItem_3:
# 164 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_4:
# 165 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BALM_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_5:
# 166 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_6:
# 167 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_7:
# 168 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_8:
# 169 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_9:
# 170 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_10:
# 171 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_11:
# 172 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1


ThicketBrushInteract_ClearTile::
# 179 "data/scripts/general_scripts.pory"
	playse SE_FU_ZAKU
# 180 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_C
# 181 "data/scripts/general_scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_A, VAR_TEMP_B
# 182 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_C
# 183 "data/scripts/general_scripts.pory"
	case DIR_NORTH, ThicketBrushInteract_ClearTile_3
# 186 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, ThicketBrushInteract_ClearTile_4
# 189 "data/scripts/general_scripts.pory"
	case DIR_EAST, ThicketBrushInteract_ClearTile_5
# 192 "data/scripts/general_scripts.pory"
	case DIR_WEST, ThicketBrushInteract_ClearTile_6
ThicketBrushInteract_ClearTile_1:
# 196 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_A, VAR_TEMP_B, METATILE_SecretBaseShrub_Debris, FALSE
# 197 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 198 "data/scripts/general_scripts.pory"
	waitse
	return

ThicketBrushInteract_ClearTile_3:
# 184 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_4:
# 187 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_5:
# 190 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_6:
# 193 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1


# 56 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_0:
# 56 "data/scripts/general_scripts.pory"
	face_player
	step_end

Generic_GYM_LEVEL_GUIDE_Text_0:
# 43 "data/scripts/general_scripts.pory"
	.string "Current Level Cap:\n{STR_VAR_1}$"

Generic_POKEMON_INTERACT_Text_0:
# 64 "data/scripts/general_scripts.pory"
	.string "?$"

Generic_POKEMON_INTERACT_Text_1:
# 66 "data/scripts/general_scripts.pory"
	.string "!$"

Generic_POKEMON_INTERACT_Text_2:
# 67 "data/scripts/general_scripts.pory"
	.string "...$"

Generic_POKEMON_INTERACT_Text_3:
# 68 "data/scripts/general_scripts.pory"
	.string "!?$"

ThicketBrushInteract_Text_0:
# 90 "data/scripts/general_scripts.pory"
	.string "You found an item!$"

ThicketBrushInteract_Nothing_Text_0:
# 116 "data/scripts/general_scripts.pory"
	.string "You didn't find anything...$"

ThicketBrush_WildEncounter_Text_0:
# 124 "data/scripts/general_scripts.pory"
	.string "You were attacked!$"
