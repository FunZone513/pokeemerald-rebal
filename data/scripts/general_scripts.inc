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
	setvar VAR_INCREASE_EXP_GAIN, 100
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


Generic_GetBadgeCount::
# 79 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 0
# 80 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Generic_GetBadgeCount_2
Generic_GetBadgeCount_1:
# 81 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Generic_GetBadgeCount_5
Generic_GetBadgeCount_4:
# 82 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Generic_GetBadgeCount_8
Generic_GetBadgeCount_7:
# 83 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Generic_GetBadgeCount_11
Generic_GetBadgeCount_10:
# 84 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Generic_GetBadgeCount_14
Generic_GetBadgeCount_13:
# 85 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Generic_GetBadgeCount_17
Generic_GetBadgeCount_16:
# 86 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Generic_GetBadgeCount_20
Generic_GetBadgeCount_19:
# 87 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Generic_GetBadgeCount_22
	return

Generic_GetBadgeCount_2:
# 80 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_1

Generic_GetBadgeCount_5:
# 81 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_4

Generic_GetBadgeCount_8:
# 82 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_7

Generic_GetBadgeCount_11:
# 83 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_10

Generic_GetBadgeCount_14:
# 84 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_13

Generic_GetBadgeCount_17:
# 85 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_16

Generic_GetBadgeCount_20:
# 86 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_19

Generic_GetBadgeCount_22:
# 87 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	return


Generic_POKEMART::
# 92 "data/scripts/general_scripts.pory"
	lock
# 93 "data/scripts/general_scripts.pory"
	faceplayer
# 94 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_Text_0
# 95 "data/scripts/general_scripts.pory"
	waitmessage
# 96 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 97 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 98 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_3
# 99 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_3
# 103 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_4
# 104 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_4
# 108 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_5
# 109 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_5
# 113 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_6
# 114 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_6
# 118 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_7
Generic_POKEMART_7:
# 120 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_5
Generic_POKEMART_1:
# 122 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 123 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_3:
# 100 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_1
	goto Generic_POKEMART_1

Generic_POKEMART_4:
# 105 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_2
	goto Generic_POKEMART_1

Generic_POKEMART_5:
# 110 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_3
	goto Generic_POKEMART_1

Generic_POKEMART_6:
# 115 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_4
	goto Generic_POKEMART_1


	.align 2
# 126 "data/scripts/general_scripts.pory"
GenericPokeMart_1:
# 127 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 128 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 129 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 130 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 131 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 132 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 135 "data/scripts/general_scripts.pory"
GenericPokeMart_2:
# 136 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 137 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 138 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 139 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 140 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 141 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 142 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 143 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 144 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 147 "data/scripts/general_scripts.pory"
GenericPokeMart_3:
# 148 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 149 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 150 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 151 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 152 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 153 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 154 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 155 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 156 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 157 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 158 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 159 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 160 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 161 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 162 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 163 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 164 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 167 "data/scripts/general_scripts.pory"
GenericPokeMart_4:
# 168 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 169 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 170 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 171 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 172 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 173 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 174 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 175 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 176 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 177 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 178 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 179 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 180 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 181 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 182 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 183 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 184 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 185 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 186 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 187 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 188 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 189 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 192 "data/scripts/general_scripts.pory"
GenericPokeMart_5:
# 193 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 194 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 195 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 196 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 197 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 198 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 199 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 200 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 201 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 202 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 203 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 204 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 205 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 206 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 207 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 208 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 209 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 210 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

ThicketBrushInteract::
# 216 "data/scripts/general_scripts.pory"
	lockall
# 217 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_ClearTile
# 220 "data/scripts/general_scripts.pory"
	random 10
# 221 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_lt ThicketBrushInteract_2
# 232 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ge ThicketBrushInteract_9
ThicketBrushInteract_7:
# 235 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ThicketBrushInteract_6
ThicketBrushInteract_5:
# 244 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_GetPokemon
# 245 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
# 246 "data/scripts/general_scripts.pory"
	call ThicketBrush_WildEncounter
ThicketBrushInteract_1:
# 248 "data/scripts/general_scripts.pory"
	release
	return

ThicketBrushInteract_2:
# 222 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_GetItem
	checkitemspace VAR_TEMP_0
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ThicketBrushInteract_13
	goto ThicketBrushInteract_1

ThicketBrushInteract_3:
# 233 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_Nothing
	goto ThicketBrushInteract_1

ThicketBrushInteract_4:
# 236 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_GetPokemon
# 237 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
# 238 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_GetPokemon
# 239 "data/scripts/general_scripts.pory"
	createmon 1, 1, VAR_TEMP_0, VAR_TEMP_1
# 240 "data/scripts/general_scripts.pory"
	setwilddoubleflag
# 241 "data/scripts/general_scripts.pory"
	call ThicketBrush_WildEncounter
	goto ThicketBrushInteract_1

ThicketBrushInteract_6:
# 235 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt ThicketBrushInteract_4
	goto ThicketBrushInteract_5

ThicketBrushInteract_9:
# 232 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt ThicketBrushInteract_3
	goto ThicketBrushInteract_7

ThicketBrushInteract_13:
# 224 "data/scripts/general_scripts.pory"
	additem VAR_TEMP_0
# 225 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 226 "data/scripts/general_scripts.pory"
	message ThicketBrushInteract_Text_0
# 227 "data/scripts/general_scripts.pory"
	waitmessage
# 228 "data/scripts/general_scripts.pory"
	waitfanfare
# 229 "data/scripts/general_scripts.pory"
	waitbuttonpress
	goto ThicketBrushInteract_1


ThicketBrushInteract_Nothing::
# 252 "data/scripts/general_scripts.pory"
	msgbox ThicketBrushInteract_Nothing_Text_0, MSGBOX_SIGN
	return


ThicketBrush_WildEncounter::
# 257 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 258 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 259 "data/scripts/general_scripts.pory"
	waitmovement 0
# 260 "data/scripts/general_scripts.pory"
	message ThicketBrush_WildEncounter_Text_0
# 261 "data/scripts/general_scripts.pory"
	waitmessage
# 262 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 263 "data/scripts/general_scripts.pory"
	dowildbattle
	return


ThicketBrushInteract_GetPokemon::
# 267 "data/scripts/general_scripts.pory"
	random 100
# 268 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_lt ThicketBrushInteract_GetPokemon_2
# 273 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ThicketBrushInteract_GetPokemon_14
ThicketBrushInteract_GetPokemon_12:
# 278 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_ge ThicketBrushInteract_GetPokemon_11
ThicketBrushInteract_GetPokemon_9:
# 283 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_ge ThicketBrushInteract_GetPokemon_8
ThicketBrushInteract_GetPokemon_7:
# 288 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_ge ThicketBrushInteract_GetPokemon_6
ThicketBrushInteract_GetPokemon_1:
	return

ThicketBrushInteract_GetPokemon_2:
# 269 "data/scripts/general_scripts.pory"
	random 10
# 270 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 271 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 272 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_LARVESTA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_3:
# 274 "data/scripts/general_scripts.pory"
	random 10
# 275 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 276 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 277 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SPINARAK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_4:
# 279 "data/scripts/general_scripts.pory"
	random 10
# 280 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 281 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 282 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_JOLTIK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_5:
# 284 "data/scripts/general_scripts.pory"
	random 4
# 285 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 286 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 287 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ARIADOS
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_6:
# 289 "data/scripts/general_scripts.pory"
	random 4
# 290 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 291 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 292 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_GALVANTULA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_8:
# 283 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_lt ThicketBrushInteract_GetPokemon_5
	goto ThicketBrushInteract_GetPokemon_7

ThicketBrushInteract_GetPokemon_11:
# 278 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt ThicketBrushInteract_GetPokemon_4
	goto ThicketBrushInteract_GetPokemon_9

ThicketBrushInteract_GetPokemon_14:
# 273 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_lt ThicketBrushInteract_GetPokemon_3
	goto ThicketBrushInteract_GetPokemon_12


ThicketBrushInteract_GetItem::
# 298 "data/scripts/general_scripts.pory"
	random 10
# 299 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 300 "data/scripts/general_scripts.pory"
	case 1, ThicketBrushInteract_GetItem_3
# 301 "data/scripts/general_scripts.pory"
	case 2, ThicketBrushInteract_GetItem_4
# 302 "data/scripts/general_scripts.pory"
	case 3, ThicketBrushInteract_GetItem_5
# 303 "data/scripts/general_scripts.pory"
	case 4, ThicketBrushInteract_GetItem_6
# 304 "data/scripts/general_scripts.pory"
	case 5, ThicketBrushInteract_GetItem_7
# 305 "data/scripts/general_scripts.pory"
	case 6, ThicketBrushInteract_GetItem_8
# 306 "data/scripts/general_scripts.pory"
	case 7, ThicketBrushInteract_GetItem_9
# 307 "data/scripts/general_scripts.pory"
	case 8, ThicketBrushInteract_GetItem_10
# 308 "data/scripts/general_scripts.pory"
	case 9, ThicketBrushInteract_GetItem_11
# 309 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_RARE_CANDY
ThicketBrushInteract_GetItem_1:
	return

ThicketBrushInteract_GetItem_3:
# 300 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_4:
# 301 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BALM_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_5:
# 302 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_6:
# 303 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_7:
# 304 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_8:
# 305 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_9:
# 306 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_10:
# 307 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_11:
# 308 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1


ThicketBrushInteract_ClearTile::
# 315 "data/scripts/general_scripts.pory"
	playse SE_FU_ZAKU
# 316 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_C
# 317 "data/scripts/general_scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_A, VAR_TEMP_B
# 318 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_C
# 319 "data/scripts/general_scripts.pory"
	case DIR_NORTH, ThicketBrushInteract_ClearTile_3
# 322 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, ThicketBrushInteract_ClearTile_4
# 325 "data/scripts/general_scripts.pory"
	case DIR_EAST, ThicketBrushInteract_ClearTile_5
# 328 "data/scripts/general_scripts.pory"
	case DIR_WEST, ThicketBrushInteract_ClearTile_6
ThicketBrushInteract_ClearTile_1:
# 332 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_A, VAR_TEMP_B, METATILE_SecretBaseShrub_Debris, FALSE
# 333 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 334 "data/scripts/general_scripts.pory"
	waitse
	return

ThicketBrushInteract_ClearTile_3:
# 320 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_4:
# 323 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_5:
# 326 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_6:
# 329 "data/scripts/general_scripts.pory"
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

Generic_POKEMART_Text_0:
# 94 "data/scripts/general_scripts.pory"
	.string "Welcome!\pHow may I serve you?$"

Generic_POKEMART_Text_1:
# 122 "data/scripts/general_scripts.pory"
	.string "Please come again!$"

ThicketBrushInteract_Text_0:
# 226 "data/scripts/general_scripts.pory"
	.string "You found an item!$"

ThicketBrushInteract_Nothing_Text_0:
# 252 "data/scripts/general_scripts.pory"
	.string "You didn't find anything...$"

ThicketBrush_WildEncounter_Text_0:
# 260 "data/scripts/general_scripts.pory"
	.string "You were attacked!$"
