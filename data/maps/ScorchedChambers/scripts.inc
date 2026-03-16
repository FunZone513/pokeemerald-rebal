ScorchedChambers_MapScripts::
# 2 "data/maps/ScorchedChambers/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ScorchedChambers_OnTransition
	.byte 0


ScorchedChambers_OnTransition::
# 6 "data/maps/ScorchedChambers/scripts.pory"
	goto_if_unset FLAG_CLEARED_SCORCHED_CHAMBERS, ScorchedChambers_OnTransition_1
# 16 "data/maps/ScorchedChambers/scripts.pory"
	setflag FLAG_TEMP_B
	return

ScorchedChambers_OnTransition_1:
# 7 "data/maps/ScorchedChambers/scripts.pory"
	setflag FLAG_TEMP_A
# 8 "data/maps/ScorchedChambers/scripts.pory"
	goto_if_set FLAG_SCORCHED_CHAMBERS_BRIDGE_SEEN, ScorchedChambers_OnTransition_5
# 10 "data/maps/ScorchedChambers/scripts.pory"
	setvar VAR_TEMP_A, 1
ScorchedChambers_OnTransition_4:
# 13 "data/maps/ScorchedChambers/scripts.pory"
	checktrainerflag TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT5
	goto_if 1, ScorchedChambers_OnTransition_8
# 13 "data/maps/ScorchedChambers/scripts.pory"
	checktrainerflag TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT6
	goto_if 1, ScorchedChambers_OnTransition_8
# 15 "data/maps/ScorchedChambers/scripts.pory"
	setvar VAR_TEMP_B, 1
	return

ScorchedChambers_OnTransition_5:
# 9 "data/maps/ScorchedChambers/scripts.pory"
	setvar VAR_TEMP_A, 2
	goto ScorchedChambers_OnTransition_4

ScorchedChambers_OnTransition_8:
# 14 "data/maps/ScorchedChambers/scripts.pory"
	setflag FLAG_TEMP_B
	return


ScorchedChambers_Hiker::
# 20 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_HIKER, ScorchedChambers_Hiker_Text_0, ScorchedChambers_Hiker_Text_1
# 25 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_Hiker_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_Picnicker::
# 30 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_PICNICKER, ScorchedChambers_Picnicker_Text_0, ScorchedChambers_Picnicker_Text_1
# 35 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_Guitarist::
# 40 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_GUITARIST, ScorchedChambers_Guitarist_Text_0, ScorchedChambers_Guitarist_Text_1
# 45 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_Guitarist_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_BugCatcher::
# 50 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_BUG_CATCHER, ScorchedChambers_BugCatcher_Text_0, ScorchedChambers_BugCatcher_Text_1
# 55 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_BugCatcher_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_Fisherman::
# 60 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_FISHERMAN, ScorchedChambers_Fisherman_Text_0, ScorchedChambers_Fisherman_Text_1
# 65 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_Fisherman_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_BlackBelt::
# 70 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_BLACKBELT, ScorchedChambers_BlackBelt_Text_0, ScorchedChambers_BlackBelt_Text_1
# 75 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_BlackBelt_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_BattleGirl::
# 80 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_BATTLEGIRL, ScorchedChambers_BattleGirl_Text_0, ScorchedChambers_BattleGirl_Text_1
# 85 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_BattleGirl_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_ExpertF::
# 90 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_EXPERTF, ScorchedChambers_ExpertF_Text_0, ScorchedChambers_ExpertF_Text_1
# 95 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_ExpertF_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_ExpertM::
# 100 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_EXPERTM, ScorchedChambers_ExpertM_Text_0, ScorchedChambers_ExpertM_Text_1
# 105 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_ExpertM_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_Camper::
# 110 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_Camper_Text_0, MSGBOX_NPC
	return


ScorchedChambers_MagmaGrunt1::
# 114 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT1, ScorchedChambers_MagmaGrunt1_Text_0, ScorchedChambers_MagmaGrunt1_Text_1
# 119 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaGrunt1_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_MagmaGrunt2::
# 123 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT2, ScorchedChambers_MagmaGrunt2_Text_0, ScorchedChambers_MagmaGrunt2_Text_1
# 128 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaGrunt2_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_MagmaGrunt3::
# 132 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT3, ScorchedChambers_MagmaGrunt3_Text_0, ScorchedChambers_MagmaGrunt3_Text_1
# 137 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaGrunt3_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_MagmaGrunt4::
# 141 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_single TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT4, ScorchedChambers_MagmaGrunt4_Text_0, ScorchedChambers_MagmaGrunt4_Text_1
# 146 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaGrunt4_Text_2, MSGBOX_AUTOCLOSE
	end


ScorchedChambers_MagmaCouple::
# 151 "data/maps/ScorchedChambers/scripts.pory"
	lockall
# 152 "data/maps/ScorchedChambers/scripts.pory"
	playse SE_PIN
# 153 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 22, Common_Movement_ExclamationMark
# 154 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 22
# 155 "data/maps/ScorchedChambers/scripts.pory"
	delay 16
# 157 "data/maps/ScorchedChambers/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 158 "data/maps/ScorchedChambers/scripts.pory"
	switch VAR_TEMP_2
# 159 "data/maps/ScorchedChambers/scripts.pory"
	case 28, ScorchedChambers_MagmaCouple_3
# 160 "data/maps/ScorchedChambers/scripts.pory"
	case 29, ScorchedChambers_MagmaCouple_4
# 161 "data/maps/ScorchedChambers/scripts.pory"
	case 30, ScorchedChambers_MagmaCouple_5
# 162 "data/maps/ScorchedChambers/scripts.pory"
	case 31, ScorchedChambers_MagmaCouple_6
# 163 "data/maps/ScorchedChambers/scripts.pory"
	case 32, ScorchedChambers_MagmaCouple_7
ScorchedChambers_MagmaCouple_1:
# 165 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 167 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_MagmaCouple_Movement_5
# 168 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 169 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaCouple_Text1
# 170 "data/maps/ScorchedChambers/scripts.pory"
	closemessage
# 171 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 21, ScorchedChambers_MagmaCouple_Movement_6
# 172 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 173 "data/maps/ScorchedChambers/scripts.pory"
	playse SE_PIN
# 174 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 175 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 176 "data/maps/ScorchedChambers/scripts.pory"
	delay 16
# 177 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 21, ScorchedChambers_MagmaCouple_Movement_7
# 178 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 180 "data/maps/ScorchedChambers/scripts.pory"
	switch VAR_TEMP_2
# 181 "data/maps/ScorchedChambers/scripts.pory"
	case 28, ScorchedChambers_MagmaCouple_10
# 182 "data/maps/ScorchedChambers/scripts.pory"
	case 29, ScorchedChambers_MagmaCouple_11
# 183 "data/maps/ScorchedChambers/scripts.pory"
	case 30, ScorchedChambers_MagmaCouple_12
# 184 "data/maps/ScorchedChambers/scripts.pory"
	case 31, ScorchedChambers_MagmaCouple_13
# 185 "data/maps/ScorchedChambers/scripts.pory"
	case 32, ScorchedChambers_MagmaCouple_14
ScorchedChambers_MagmaCouple_8:
# 187 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 189 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 21, ScorchedChambers_MagmaCouple_Movement_6
# 190 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 191 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_MagmaCouple_Movement_9
# 192 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaCouple_Text2
# 193 "data/maps/ScorchedChambers/scripts.pory"
	closemessage
# 194 "data/maps/ScorchedChambers/scripts.pory"
	trainerbattle_two_trainers TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT5, ScorchedChambers_MagmaCouple_Text_0, TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT6, ScorchedChambers_MagmaCouple_Text_1
# 200 "data/maps/ScorchedChambers/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 201 "data/maps/ScorchedChambers/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ScorchedChambers_MagmaCouple_16
ScorchedChambers_MagmaCouple_15:
# 213 "data/maps/ScorchedChambers/scripts.pory"
	releaseall
	return

ScorchedChambers_MagmaCouple_3:
# 159 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 22, ScorchedChambers_MagmaCouple_Movement_0
	goto ScorchedChambers_MagmaCouple_1

ScorchedChambers_MagmaCouple_4:
# 160 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 22, ScorchedChambers_MagmaCouple_Movement_1
	goto ScorchedChambers_MagmaCouple_1

ScorchedChambers_MagmaCouple_5:
# 161 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 22, ScorchedChambers_MagmaCouple_Movement_2
	goto ScorchedChambers_MagmaCouple_1

ScorchedChambers_MagmaCouple_6:
# 162 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 22, ScorchedChambers_MagmaCouple_Movement_3
	goto ScorchedChambers_MagmaCouple_1

ScorchedChambers_MagmaCouple_7:
# 163 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 22, ScorchedChambers_MagmaCouple_Movement_4
	goto ScorchedChambers_MagmaCouple_1

ScorchedChambers_MagmaCouple_10:
# 181 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 21, ScorchedChambers_MagmaCouple_Movement_1
	goto ScorchedChambers_MagmaCouple_8

ScorchedChambers_MagmaCouple_11:
# 182 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 21, ScorchedChambers_MagmaCouple_Movement_2
	goto ScorchedChambers_MagmaCouple_8

ScorchedChambers_MagmaCouple_12:
# 183 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 21, ScorchedChambers_MagmaCouple_Movement_3
	goto ScorchedChambers_MagmaCouple_8

ScorchedChambers_MagmaCouple_13:
	goto ScorchedChambers_MagmaCouple_8

ScorchedChambers_MagmaCouple_14:
# 185 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 21, ScorchedChambers_MagmaCouple_Movement_8
	goto ScorchedChambers_MagmaCouple_8

ScorchedChambers_MagmaCouple_16:
# 202 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaCouple_Text_2
# 203 "data/maps/ScorchedChambers/scripts.pory"
	closemessage
# 204 "data/maps/ScorchedChambers/scripts.pory"
	fadescreen FADE_TO_BLACK
# 205 "data/maps/ScorchedChambers/scripts.pory"
	removeobject 22
# 206 "data/maps/ScorchedChambers/scripts.pory"
	removeobject 21
# 207 "data/maps/ScorchedChambers/scripts.pory"
	playse SE_FLEE
# 208 "data/maps/ScorchedChambers/scripts.pory"
	delay 60
# 209 "data/maps/ScorchedChambers/scripts.pory"
	special DrawWholeMapView
# 210 "data/maps/ScorchedChambers/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 211 "data/maps/ScorchedChambers/scripts.pory"
	setvar VAR_TEMP_B, 0
	goto ScorchedChambers_MagmaCouple_15


ScorchedChambers_AlertEvelynn::
# 235 "data/maps/ScorchedChambers/scripts.pory"
	lockall
# 236 "data/maps/ScorchedChambers/scripts.pory"
	setvar VAR_TEMP_A, 2
# 237 "data/maps/ScorchedChambers/scripts.pory"
	playse SE_PIN
# 238 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 24, Common_Movement_ExclamationMark
# 239 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 240 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 24, ScorchedChambers_MagmaCouple_Movement_5
# 241 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 242 "data/maps/ScorchedChambers/scripts.pory"
	message ScorchedChambers_AlertEvelynn_Text_0
# 243 "data/maps/ScorchedChambers/scripts.pory"
	waitmessage
# 244 "data/maps/ScorchedChambers/scripts.pory"
	delay 24
# 245 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_AlertEvelynn_Movement_0
# 246 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 247 "data/maps/ScorchedChambers/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 248 "data/maps/ScorchedChambers/scripts.pory"
	compare VAR_TEMP_2, 49
	goto_if_eq ScorchedChambers_AlertEvelynn_2
# 250 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_MagmaCouple_Movement_4
ScorchedChambers_AlertEvelynn_1:
# 251 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 252 "data/maps/ScorchedChambers/scripts.pory"
	closemessage
# 253 "data/maps/ScorchedChambers/scripts.pory"
	special SpawnCameraObject
# 254 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ScorchedChambers_MagmaCouple_Movement_3
# 255 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 256 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_AlertEvelynn_Text_1
# 257 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 24, ScorchedChambers_AlertEvelynn_Movement_1
# 258 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 259 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_AlertEvelynn_Text_2
# 260 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 24, ScorchedChambers_AlertEvelynn_Movement_2
# 261 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 262 "data/maps/ScorchedChambers/scripts.pory"
	closemessage
# 263 "data/maps/ScorchedChambers/scripts.pory"
	delay 16
# 264 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ScorchedChambers_MagmaCouple_Movement_8
# 265 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 266 "data/maps/ScorchedChambers/scripts.pory"
	special RemoveCameraObject
# 267 "data/maps/ScorchedChambers/scripts.pory"
	delay 32
# 268 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_MagmaCouple_Movement_9
# 269 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 270 "data/maps/ScorchedChambers/scripts.pory"
	delay 32
# 271 "data/maps/ScorchedChambers/scripts.pory"
	setobjectxy 24, 39, 52
# 272 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 24, ScorchedChambers_AlertEvelynn_Movement_3
# 273 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 274 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_EvelynnText
# 275 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 24, ScorchedChambers_AlertEvelynn_Movement_4
# 276 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 277 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_MagmaCouple_Movement_5
# 278 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 24, ScorchedChambers_AlertEvelynn_Movement_5
# 279 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 280 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_MagmaCouple_Movement_6
# 281 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 24, ScorchedChambers_AlertEvelynn_Movement_6
# 282 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 283 "data/maps/ScorchedChambers/scripts.pory"
	setobjectxyperm 24, 0, 59
# 284 "data/maps/ScorchedChambers/scripts.pory"
	hideobjectat 24, MAP_SCORCHED_CHAMBERS
# 285 "data/maps/ScorchedChambers/scripts.pory"
	releaseall
	return

ScorchedChambers_AlertEvelynn_2:
# 249 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_MagmaCouple_Movement_3
	goto ScorchedChambers_AlertEvelynn_1


ScorchedChambers_MagmaBridge::
# 289 "data/maps/ScorchedChambers/scripts.pory"
	lock
# 290 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_MagmaCouple_Movement_3
# 291 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 292 "data/maps/ScorchedChambers/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 293 "data/maps/ScorchedChambers/scripts.pory"
	compare VAR_TEMP_1, 20
	goto_if_eq ScorchedChambers_MagmaBridge_2
ScorchedChambers_MagmaBridge_1:
# 297 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_MagmaCouple_Movement_2
# 298 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 299 "data/maps/ScorchedChambers/scripts.pory"
	goto_if_set FLAG_SCORCHED_CHAMBERS_BRIDGE_SEEN, ScorchedChambers_MagmaBridge_5
ScorchedChambers_MagmaBridge_4:
# 306 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_MagmaCouple_Movement_6
# 307 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_MagmaCouple_Movement_9
# 308 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 309 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_EvelynnText2
# 310 "data/maps/ScorchedChambers/scripts.pory"
	playse SE_USE_ITEM
# 311 "data/maps/ScorchedChambers/scripts.pory"
	waitse
# 312 "data/maps/ScorchedChambers/scripts.pory"
	special HealPlayerParty
# 313 "data/maps/ScorchedChambers/scripts.pory"
	delay 10
# 314 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_MagmaCouple_Movement_4
# 315 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_MagmaCouple_Movement_4
# 316 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 317 "data/maps/ScorchedChambers/scripts.pory"
	special SpawnCameraObject
# 318 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ScorchedChambers_MagmaCouple_Movement_3
# 319 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 320 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaBridge_Text_0
# 321 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_MagmaCouple_Movement_3
# 322 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_MagmaCouple_Movement_3
# 323 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 324 "data/maps/ScorchedChambers/scripts.pory"
	special RemoveCameraObject
# 325 "data/maps/ScorchedChambers/scripts.pory"
	goto ScorchedChambers_MagmaMultiBattle
	return

ScorchedChambers_MagmaBridge_2:
# 294 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_MagmaBridge_Movement_0
# 295 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
	goto ScorchedChambers_MagmaBridge_1

ScorchedChambers_MagmaBridge_5:
# 300 "data/maps/ScorchedChambers/scripts.pory"
	special HealPlayerParty
# 301 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_MagmaCouple_Movement_3
# 302 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_MagmaCouple_Movement_3
# 303 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 304 "data/maps/ScorchedChambers/scripts.pory"
	goto ScorchedChambers_MagmaMultiBattle
	goto ScorchedChambers_MagmaBridge_4


ScorchedChambers_MagmaMultiBattle::
# 329 "data/maps/ScorchedChambers/scripts.pory"
	setflag FLAG_SCORCHED_CHAMBERS_BRIDGE_SEEN
# 330 "data/maps/ScorchedChambers/scripts.pory"
	special SavePlayerParty
# 331 "data/maps/ScorchedChambers/scripts.pory"
	fadescreen FADE_TO_BLACK
# 332 "data/maps/ScorchedChambers/scripts.pory"
	special ChooseHalfPartyForBattle
# 333 "data/maps/ScorchedChambers/scripts.pory"
	waitstate
# 334 "data/maps/ScorchedChambers/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ScorchedChambers_MagmaMultiBattle_2
ScorchedChambers_MagmaMultiBattle_1:
# 343 "data/maps/ScorchedChambers/scripts.pory"
	multi_2_vs_2 TRAINER_SCORCHED_CHAMBERS_MAGMA_ADMIN, ScorchedChambers_MagmaMultiBattle_Text_1, TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT7, ScorchedChambers_MagmaMultiBattle_Text_2, PARTNER_SCORCHED_CHAMBERS_EVELYNN
# 350 "data/maps/ScorchedChambers/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne ScorchedChambers_MagmaMultiBattle_5
ScorchedChambers_MagmaMultiBattle_4:
# 355 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 25, ScorchedChambers_MagmaMultiBattle_Movement_0
# 356 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 26, ScorchedChambers_MagmaMultiBattle_Movement_0
# 357 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_MagmaMultiBattle_Movement_1
# 358 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_MagmaMultiBattle_Movement_1
# 359 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 360 "data/maps/ScorchedChambers/scripts.pory"
	delay 20
# 361 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 18, ScorchedChambers_MagmaCouple_Movement_5
# 362 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 363 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_3
# 364 "data/maps/ScorchedChambers/scripts.pory"
	closemessage
# 365 "data/maps/ScorchedChambers/scripts.pory"
	playse SE_PIN
# 366 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 25, Common_Movement_ExclamationMark
# 367 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 26, Common_Movement_ExclamationMark
# 368 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 369 "data/maps/ScorchedChambers/scripts.pory"
	delay 16
# 370 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 25, ScorchedChambers_MagmaCouple_Movement_4
# 371 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 26, ScorchedChambers_MagmaCouple_Movement_4
# 372 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 373 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_4
# 374 "data/maps/ScorchedChambers/scripts.pory"
	closemessage
# 375 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 25, ScorchedChambers_MagmaMultiBattle_Movement_2
# 376 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 26, ScorchedChambers_MagmaMultiBattle_Movement_2
# 377 "data/maps/ScorchedChambers/scripts.pory"
	delay 48
# 378 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_MagmaCouple_Movement_3
# 379 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 26
# 380 "data/maps/ScorchedChambers/scripts.pory"
	setobjectxyperm 25, 0, 59
# 381 "data/maps/ScorchedChambers/scripts.pory"
	setobjectxyperm 26, 0, 59
# 382 "data/maps/ScorchedChambers/scripts.pory"
	hideobjectat 25, MAP_SCORCHED_CHAMBERS
# 383 "data/maps/ScorchedChambers/scripts.pory"
	hideobjectat 26, MAP_SCORCHED_CHAMBERS
# 384 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_5
# 385 "data/maps/ScorchedChambers/scripts.pory"
	closemessage
# 386 "data/maps/ScorchedChambers/scripts.pory"
	delay 20
# 387 "data/maps/ScorchedChambers/scripts.pory"
	special SpawnCameraObject
# 388 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 18, ScorchedChambers_MagmaCouple_Movement_4
# 389 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ScorchedChambers_MagmaCouple_Movement_0
# 390 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 391 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_6
# 392 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_MagmaCouple_Movement_3
# 393 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_7
# 394 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_8
# 395 "data/maps/ScorchedChambers/scripts.pory"
	closemessage
# 396 "data/maps/ScorchedChambers/scripts.pory"
	delay 80
# 397 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_9
# 398 "data/maps/ScorchedChambers/scripts.pory"
	closemessage
# 399 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 18, ScorchedChambers_MagmaCouple_Movement_5
# 400 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ScorchedChambers_MagmaMultiBattle_Movement_3
# 401 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 402 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MaxieText
# 403 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_MagmaMultiBattle_Movement_4
# 404 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_10
# 405 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 18, ScorchedChambers_MagmaCouple_Movement_4
# 406 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 407 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_11
# 408 "data/maps/ScorchedChambers/scripts.pory"
	closemessage
# 409 "data/maps/ScorchedChambers/scripts.pory"
	delay 120
# 410 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 18, ScorchedChambers_MagmaCouple_Movement_5
# 411 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 412 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_12
# 413 "data/maps/ScorchedChambers/scripts.pory"
	closemessage
# 414 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 18, ScorchedChambers_MagmaCouple_Movement_8
# 415 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 416 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_13
# 417 "data/maps/ScorchedChambers/scripts.pory"
	closemessage
# 418 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 18, ScorchedChambers_MagmaMultiBattle_Movement_5
# 419 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 420 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_14
# 421 "data/maps/ScorchedChambers/scripts.pory"
	closemessage
# 422 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 18, ScorchedChambers_MagmaMultiBattle_Movement_6
# 423 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 424 "data/maps/ScorchedChambers/scripts.pory"
	removeobject 18
# 425 "data/maps/ScorchedChambers/scripts.pory"
	delay 60
# 426 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_MagmaCouple_Movement_6
# 427 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_MagmaCouple_Movement_9
# 428 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ScorchedChambers_MagmaMultiBattle_Movement_7
# 429 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 430 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_15
# 431 "data/maps/ScorchedChambers/scripts.pory"
	closemessage
# 432 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_MagmaMultiBattle_Movement_8
# 433 "data/maps/ScorchedChambers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedChambers_MagmaCouple_Movement_5
# 434 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 27
# 435 "data/maps/ScorchedChambers/scripts.pory"
	setobjectxyperm 27, 0, 59
# 436 "data/maps/ScorchedChambers/scripts.pory"
	hideobjectat 27, MAP_SCORCHED_CHAMBERS
# 437 "data/maps/ScorchedChambers/scripts.pory"
	special RemoveCameraObject
# 438 "data/maps/ScorchedChambers/scripts.pory"
	setflag FLAG_CLEARED_SCORCHED_CHAMBERS
# 439 "data/maps/ScorchedChambers/scripts.pory"
	setvar VAR_TEMP_A, 0
# 440 "data/maps/ScorchedChambers/scripts.pory"
	releaseall
	return

ScorchedChambers_MagmaMultiBattle_2:
# 335 "data/maps/ScorchedChambers/scripts.pory"
	special LoadPlayerParty
# 336 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_MagmaCouple_Movement_9
# 337 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 338 "data/maps/ScorchedChambers/scripts.pory"
	msgbox ScorchedChambers_MagmaMultiBattle_Text_0
# 339 "data/maps/ScorchedChambers/scripts.pory"
	applymovement 27, ScorchedChambers_MagmaCouple_Movement_4
# 340 "data/maps/ScorchedChambers/scripts.pory"
	waitmovement 0
# 341 "data/maps/ScorchedChambers/scripts.pory"
	goto ScorchedChambers_MagmaMultiBattle
	goto ScorchedChambers_MagmaMultiBattle_1

ScorchedChambers_MagmaMultiBattle_5:
# 351 "data/maps/ScorchedChambers/scripts.pory"
	fadescreen FADE_TO_BLACK
# 352 "data/maps/ScorchedChambers/scripts.pory"
	special SetCB2WhiteOut
# 353 "data/maps/ScorchedChambers/scripts.pory"
	waitstate
	goto ScorchedChambers_MagmaMultiBattle_4


# 159 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaCouple_Movement_0:
# 159 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
# 159 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
# 159 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
# 159 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
	step_end

# 160 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaCouple_Movement_1:
# 160 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
# 160 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
# 160 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
	step_end

# 161 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaCouple_Movement_2:
# 161 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
# 161 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
	step_end

# 162 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaCouple_Movement_3:
# 162 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
	step_end

# 163 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaCouple_Movement_4:
# 163 "data/maps/ScorchedChambers/scripts.pory"
	face_up
	step_end

# 167 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaCouple_Movement_5:
# 167 "data/maps/ScorchedChambers/scripts.pory"
	face_down
	step_end

# 171 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaCouple_Movement_6:
# 171 "data/maps/ScorchedChambers/scripts.pory"
	face_left
	step_end

# 177 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaCouple_Movement_7:
# 177 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 177 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 177 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 177 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 177 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
	step_end

# 185 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaCouple_Movement_8:
# 185 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
	step_end

# 191 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaCouple_Movement_9:
# 191 "data/maps/ScorchedChambers/scripts.pory"
	face_right
	step_end

# 245 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_AlertEvelynn_Movement_0:
# 245 "data/maps/ScorchedChambers/scripts.pory"
	walk_right
	step_end

# 257 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_AlertEvelynn_Movement_1:
# 257 "data/maps/ScorchedChambers/scripts.pory"
	face_left
# 257 "data/maps/ScorchedChambers/scripts.pory"
	delay_16
# 257 "data/maps/ScorchedChambers/scripts.pory"
	delay_16
# 257 "data/maps/ScorchedChambers/scripts.pory"
	delay_16
# 257 "data/maps/ScorchedChambers/scripts.pory"
	delay_16
# 257 "data/maps/ScorchedChambers/scripts.pory"
	face_right
# 257 "data/maps/ScorchedChambers/scripts.pory"
	delay_16
# 257 "data/maps/ScorchedChambers/scripts.pory"
	delay_16
# 257 "data/maps/ScorchedChambers/scripts.pory"
	delay_16
# 257 "data/maps/ScorchedChambers/scripts.pory"
	delay_16
# 257 "data/maps/ScorchedChambers/scripts.pory"
	face_down
	step_end

# 260 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_AlertEvelynn_Movement_2:
# 260 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_up
# 260 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_up
# 260 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_up
# 260 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_up
	step_end

# 272 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_AlertEvelynn_Movement_3:
# 272 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 272 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
# 272 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
# 272 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
# 272 "data/maps/ScorchedChambers/scripts.pory"
	walk_up
# 272 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 272 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 272 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 272 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 272 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 272 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 272 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
	step_end

# 275 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_AlertEvelynn_Movement_4:
# 275 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
# 275 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
	step_end

# 278 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_AlertEvelynn_Movement_5:
# 278 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
	step_end

# 281 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_AlertEvelynn_Movement_6:
# 281 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 281 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 281 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 281 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 281 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 281 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 281 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
	step_end

# 294 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaBridge_Movement_0:
# 294 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
	step_end

# 355 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaMultiBattle_Movement_0:
# 355 "data/maps/ScorchedChambers/scripts.pory"
	lock_facing_direction
# 355 "data/maps/ScorchedChambers/scripts.pory"
	walk_slow_up
# 355 "data/maps/ScorchedChambers/scripts.pory"
	walk_slow_up
# 355 "data/maps/ScorchedChambers/scripts.pory"
	unlock_facing_direction
	step_end

# 357 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaMultiBattle_Movement_1:
# 357 "data/maps/ScorchedChambers/scripts.pory"
	walk_slow_up
# 357 "data/maps/ScorchedChambers/scripts.pory"
	walk_slow_up
	step_end

# 375 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaMultiBattle_Movement_2:
# 375 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 375 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 375 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 375 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 375 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 375 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 375 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 375 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 375 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
# 375 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_left
	step_end

# 400 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaMultiBattle_Movement_3:
# 400 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_down
# 400 "data/maps/ScorchedChambers/scripts.pory"
	walk_fast_down
	step_end

# 403 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaMultiBattle_Movement_4:
# 403 "data/maps/ScorchedChambers/scripts.pory"
	lock_facing_direction
# 403 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
# 403 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
# 403 "data/maps/ScorchedChambers/scripts.pory"
	unlock_facing_direction
	step_end

# 418 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaMultiBattle_Movement_5:
# 418 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 418 "data/maps/ScorchedChambers/scripts.pory"
	delay_16
# 418 "data/maps/ScorchedChambers/scripts.pory"
	delay_16
# 418 "data/maps/ScorchedChambers/scripts.pory"
	face_down
	step_end

# 422 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaMultiBattle_Movement_6:
# 422 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 422 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 422 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 422 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 422 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 422 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 422 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
# 422 "data/maps/ScorchedChambers/scripts.pory"
	walk_left
	step_end

# 428 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaMultiBattle_Movement_7:
# 428 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
# 428 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
	step_end

# 432 "data/maps/ScorchedChambers/scripts.pory"
ScorchedChambers_MagmaMultiBattle_Movement_8:
# 432 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
# 432 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
# 432 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
# 432 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
# 432 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
# 432 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
# 432 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
# 432 "data/maps/ScorchedChambers/scripts.pory"
	walk_down
	step_end

ScorchedChambers_Hiker_Text_0:
# 22 "data/maps/ScorchedChambers/scripts.pory"
	.string "I like caves, but boy this one is hard to\n"
	.string "be in.$"

ScorchedChambers_Hiker_Text_1:
# 23 "data/maps/ScorchedChambers/scripts.pory"
	.string "I think I need to get fresh air...$"

ScorchedChambers_Hiker_Text_2:
# 25 "data/maps/ScorchedChambers/scripts.pory"
	.string "The heat in here is something else...$"

ScorchedChambers_Picnicker_Text_0:
# 32 "data/maps/ScorchedChambers/scripts.pory"
	.string "I regret coming in here with such thick\n"
	.string "clothing.$"

ScorchedChambers_Picnicker_Text_1:
# 33 "data/maps/ScorchedChambers/scripts.pory"
	.string "I think my Pokemon have heatstroke...$"

ScorchedChambers_Picnicker_Text_2:
# 35 "data/maps/ScorchedChambers/scripts.pory"
	.string "I wish I could stick my head into a\n"
	.string "fridge right now.$"

ScorchedChambers_Guitarist_Text_0:
# 42 "data/maps/ScorchedChambers/scripts.pory"
	.string "We find our greatest tunes in the face\n"
	.string "of adversity.$"

ScorchedChambers_Guitarist_Text_1:
# 43 "data/maps/ScorchedChambers/scripts.pory"
	.string "That's not very rock of you...$"

ScorchedChambers_Guitarist_Text_2:
# 45 "data/maps/ScorchedChambers/scripts.pory"
	.string "My sweat is making it hard to play the\n"
	.string "notes I want.$"

ScorchedChambers_BugCatcher_Text_0:
# 52 "data/maps/ScorchedChambers/scripts.pory"
	.string "I think I came to the wrong place.$"

ScorchedChambers_BugCatcher_Text_1:
# 53 "data/maps/ScorchedChambers/scripts.pory"
	.string "Bugs and lava, not a great mix.$"

ScorchedChambers_BugCatcher_Text_2:
# 55 "data/maps/ScorchedChambers/scripts.pory"
	.string "I thought training here would be a good\n"
	.string "test for my bugs...$"

ScorchedChambers_Fisherman_Text_0:
# 62 "data/maps/ScorchedChambers/scripts.pory"
	.string "I don't seem to be catching very much,\n"
	.string "not sure why.$"

ScorchedChambers_Fisherman_Text_1:
# 63 "data/maps/ScorchedChambers/scripts.pory"
	.string "Well.$"

ScorchedChambers_Fisherman_Text_2:
# 65 "data/maps/ScorchedChambers/scripts.pory"
	.string "What? Lava?$"

ScorchedChambers_BlackBelt_Text_0:
# 72 "data/maps/ScorchedChambers/scripts.pory"
	.string "SUFFERING BUILDS CHARACTER!$"

ScorchedChambers_BlackBelt_Text_1:
# 73 "data/maps/ScorchedChambers/scripts.pory"
	.string "I GOT SWEAT IN MY EYES AHHHHH!!!$"

ScorchedChambers_BlackBelt_Text_2:
# 75 "data/maps/ScorchedChambers/scripts.pory"
	.string "I think the intense heat might be\n"
	.string "impacting my mental faculties.$"

ScorchedChambers_BattleGirl_Text_0:
# 82 "data/maps/ScorchedChambers/scripts.pory"
	.string "What is that guy yelling about?$"

ScorchedChambers_BattleGirl_Text_1:
# 83 "data/maps/ScorchedChambers/scripts.pory"
	.string "...is he okay?$"

ScorchedChambers_BattleGirl_Text_2:
# 85 "data/maps/ScorchedChambers/scripts.pory"
	.string "...oh man I'm so sticky with sweat...$"

ScorchedChambers_ExpertF_Text_0:
# 92 "data/maps/ScorchedChambers/scripts.pory"
	.string "Ah, you also fell down.$"

ScorchedChambers_ExpertF_Text_1:
# 93 "data/maps/ScorchedChambers/scripts.pory"
	.string "Well, you sure are energetic.$"

ScorchedChambers_ExpertF_Text_2:
# 95 "data/maps/ScorchedChambers/scripts.pory"
	.string "I fell down this hole a while ago, but\n"
	.string "it's like a sauna in here so it's alright.$"

ScorchedChambers_ExpertM_Text_0:
# 102 "data/maps/ScorchedChambers/scripts.pory"
	.string "Oh dear I think I put my back out.$"

ScorchedChambers_ExpertM_Text_1:
# 103 "data/maps/ScorchedChambers/scripts.pory"
	.string "I'm much too old to be falling into\n"
	.string "caves...$"

ScorchedChambers_ExpertM_Text_2:
# 105 "data/maps/ScorchedChambers/scripts.pory"
	.string "I might be too sore to make my way out...$"

ScorchedChambers_Camper_Text_0:
# 110 "data/maps/ScorchedChambers/scripts.pory"
	.string "Apparently you can jump down from here,\nbut it looks a little high for me...$"

ScorchedChambers_MagmaGrunt1_Text_0:
# 116 "data/maps/ScorchedChambers/scripts.pory"
	.string "Hey! You're not supposed to be in here!$"

ScorchedChambers_MagmaGrunt1_Text_1:
# 117 "data/maps/ScorchedChambers/scripts.pory"
	.string "Well shoot, I guess I can't stop you...$"

ScorchedChambers_MagmaGrunt1_Text_2:
# 119 "data/maps/ScorchedChambers/scripts.pory"
	.string "I'm supposed to stop people from coming\n"
	.string "in, but what can I do if they just beat\l"
	.string "me up?$"

ScorchedChambers_MagmaGrunt2_Text_0:
# 125 "data/maps/ScorchedChambers/scripts.pory"
	.string "Huh? Is Fred not doing his job?$"

ScorchedChambers_MagmaGrunt2_Text_1:
# 126 "data/maps/ScorchedChambers/scripts.pory"
	.string "Oh, well that explains it.$"

ScorchedChambers_MagmaGrunt2_Text_2:
# 128 "data/maps/ScorchedChambers/scripts.pory"
	.string "Geez he could have at least alerted us\n"
	.string "that someone got in.$"

ScorchedChambers_MagmaGrunt3_Text_0:
# 134 "data/maps/ScorchedChambers/scripts.pory"
	.string "WAH! Where did you come from?$"

ScorchedChambers_MagmaGrunt3_Text_1:
# 135 "data/maps/ScorchedChambers/scripts.pory"
	.string "This isn't it...$"

ScorchedChambers_MagmaGrunt3_Text_2:
# 137 "data/maps/ScorchedChambers/scripts.pory"
	.string "I'm trying to stay cool back here but\n"
	.string "man, I'm sweltering.$"

ScorchedChambers_MagmaGrunt4_Text_0:
# 143 "data/maps/ScorchedChambers/scripts.pory"
	.string "If only my arms were a little longer!$"

ScorchedChambers_MagmaGrunt4_Text_1:
# 144 "data/maps/ScorchedChambers/scripts.pory"
	.string "Curse my tiny Tyrunt arms...$"

ScorchedChambers_MagmaGrunt4_Text_2:
# 146 "data/maps/ScorchedChambers/scripts.pory"
	.string "I don't know what that item is but I\n"
	.string "sure do want it.$"

ScorchedChambers_MagmaCouple_Text_0:
# 196 "data/maps/ScorchedChambers/scripts.pory"
	.string "Not again!$"

ScorchedChambers_MagmaCouple_Text_1:
# 198 "data/maps/ScorchedChambers/scripts.pory"
	.string "We'll never hear the end of this...$"

ScorchedChambers_MagmaCouple_Text_2:
# 202 "data/maps/ScorchedChambers/scripts.pory"
	.string "This isn't the last you've heard of us!\nAgain!$"

ScorchedChambers_AlertEvelynn_Text_0:
# 242 "data/maps/ScorchedChambers/scripts.pory"
	.string "HEY! KID!$"

ScorchedChambers_AlertEvelynn_Text_1:
# 256 "data/maps/ScorchedChambers/scripts.pory"
	.string "What are you even doing here?\p...\pHuh? I can't hear you from down here!$"

ScorchedChambers_AlertEvelynn_Text_2:
# 259 "data/maps/ScorchedChambers/scripts.pory"
	.string "Wait right there!\nI'll come up!$"

ScorchedChambers_MagmaBridge_Text_0:
# 320 "data/maps/ScorchedChambers/scripts.pory"
	.string "Now that you've had your little chat,\nlet's get down to business.$"

ScorchedChambers_MagmaMultiBattle_Text_0:
# 338 "data/maps/ScorchedChambers/scripts.pory"
	.string "What are you doing?\nWe have to fight them!$"

ScorchedChambers_MagmaMultiBattle_Text_1:
# 345 "data/maps/ScorchedChambers/scripts.pory"
	.string "How did you...$"

ScorchedChambers_MagmaMultiBattle_Text_2:
# 347 "data/maps/ScorchedChambers/scripts.pory"
	.string "My promotion... I knew Team Magma\ndidn't have job security!$"

ScorchedChambers_MagmaMultiBattle_Text_3:
# 363 "data/maps/ScorchedChambers/scripts.pory"
	.string "Haa...\pYou're dismissed.$"

ScorchedChambers_MagmaMultiBattle_Text_4:
# 373 "data/maps/ScorchedChambers/scripts.pory"
	.string "Yes sir!$"

ScorchedChambers_MagmaMultiBattle_Text_5:
# 384 "data/maps/ScorchedChambers/scripts.pory"
	.string "Maxie!\pWhat are you up to now?!$"

ScorchedChambers_MagmaMultiBattle_Text_6:
# 391 "data/maps/ScorchedChambers/scripts.pory"
	.string "Doesn't it seem strange, Miss Evelynn?$"

ScorchedChambers_MagmaMultiBattle_Text_7:
# 393 "data/maps/ScorchedChambers/scripts.pory"
	.string "What does?$"

ScorchedChambers_MagmaMultiBattle_Text_8:
# 394 "data/maps/ScorchedChambers/scripts.pory"
	.string "Everything.\pThe warmth of this lava,\nthe strength of our Pokemon,\leven our very lives.$"

ScorchedChambers_MagmaMultiBattle_Text_9:
# 397 "data/maps/ScorchedChambers/scripts.pory"
	.string "...\pHave you gone mad Maxie?$"

ScorchedChambers_MagmaMultiBattle_Text_10:
# 404 "data/maps/ScorchedChambers/scripts.pory"
	.string "I...\pOf course I know that!\pWho wouldn't know their own name?!$"

ScorchedChambers_MagmaMultiBattle_Text_11:
# 407 "data/maps/ScorchedChambers/scripts.pory"
	.string "Yes, yes of course...\njust as my name is Maxie,\lyour name is Evelynn.$"

ScorchedChambers_MagmaMultiBattle_Text_12:
# 412 "data/maps/ScorchedChambers/scripts.pory"
	.string "...\pI see it's still too early.$"

ScorchedChambers_MagmaMultiBattle_Text_13:
# 416 "data/maps/ScorchedChambers/scripts.pory"
	.string "I shall be taking my leave here,\nI hope to see you again Evelynn.$"

ScorchedChambers_MagmaMultiBattle_Text_14:
# 420 "data/maps/ScorchedChambers/scripts.pory"
	.string "...and I hope to never see your annoying\nfriend again.$"

ScorchedChambers_MagmaMultiBattle_Text_15:
# 430 "data/maps/ScorchedChambers/scripts.pory"
	.string "I uh...\p...\p...thanks for the help...$"

ScorchedChambers_MagmaCouple_Text1::
# 216 "data/maps/ScorchedChambers/scripts.pory"
	.string "Huh?\p"
	.string "Aren't you the one from Ochre Vale...?\p"
	.string "Oh shoot, you are too!\p"
	.string "Don't tell me you've come to\nmess with us again!$"

ScorchedChambers_MagmaCouple_Text2::
# 223 "data/maps/ScorchedChambers/scripts.pory"
	.string "Hey man, what are you up t-\p"
	.string "Oh god, not this kid again!\p"
	.string "We got scolded so hard because\nyou screwed up what we were\ldoing before!\p"
	.string "Why have you come back to harass us?\p"
	.string "...\p"
	.string "Huh?\nWe're doing something wrong?\p"
	.string "Ignorance truely is bliss isn't it?\p"
	.string "We're not gonna go easy this time,\nso prepare yourself for a butt-kicking!$"

ScorchedChambers_EvelynnText::
# 443 "data/maps/ScorchedChambers/scripts.pory"
	.string "I see that you've already taken care of\nsome of the guards.\p"
	.string "If I had known you would be doing that,\nI wouldn't have bothered sneaking in...\p"
	.string "Whatever, how about a temporary\nalliance?\p"
	.string "I'm not really sure what all these\nTeam Magma goons are after,\lbut it can't be good whatever it is.\p"
	.string "I think I saw their Boss up ahead,\nbut he's all mine to take care of,\lso if you don't mind...$"

ScorchedChambers_EvelynnText2::
# 451 "data/maps/ScorchedChambers/scripts.pory"
	.string "I know I know,\nI didn't make it very far.\p"
	.string "But I think we'd better work together\nto take down these two.\p"
	.string "I'll quickly heal your Pokemon,\nso you better not hold me back!$"

ScorchedChambers_MaxieText::
# 457 "data/maps/ScorchedChambers/scripts.pory"
	.string "Far from it!\nI'd say you're the one who's mad here.\p"
	.string "Tell me, how much do you remember?\p"
	.string "Do you know where we are?\pDo you know who I am?\pDo you even know your name?$"
