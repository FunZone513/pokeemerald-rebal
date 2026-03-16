OchreVale_PokeCentre_MapScripts::
# 2 "data/maps/OchreVale_PokeCentre/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OchreVale_PokeCentre_OnTransition
	.byte 0


OchreVale_PokeCentre_OnTransition::
# 6 "data/maps/OchreVale_PokeCentre/scripts.pory"
	setrespawn HEAL_LOCATION_OCHRE_VALE
	return


OchreVale_PokeCentre_Nurse::
# 10 "data/maps/OchreVale_PokeCentre/scripts.pory"
	setvar VAR_0x800B, 1
# 11 "data/maps/OchreVale_PokeCentre/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 12 "data/maps/OchreVale_PokeCentre/scripts.pory"
	waitmessage
# 13 "data/maps/OchreVale_PokeCentre/scripts.pory"
	waitbuttonpress
# 14 "data/maps/OchreVale_PokeCentre/scripts.pory"
	release
	return


OchreVale_PokeCentre_Hiker::
# 18 "data/maps/OchreVale_PokeCentre/scripts.pory"
	msgbox OchreVale_PokeCentre_Hiker_Text_0, MSGBOX_NPC
	return


OchreVale_PokeCentre_Lass::
# 22 "data/maps/OchreVale_PokeCentre/scripts.pory"
	lock
# 23 "data/maps/OchreVale_PokeCentre/scripts.pory"
	msgbox OchreVale_PokeCentre_Lass_Text_0, MSGBOX_NPC
# 24 "data/maps/OchreVale_PokeCentre/scripts.pory"
	applymovement 4, OchreVale_PokeCentre_Lass_Movement_0
# 25 "data/maps/OchreVale_PokeCentre/scripts.pory"
	waitmovement 0
# 26 "data/maps/OchreVale_PokeCentre/scripts.pory"
	release
	return


OchreVale_PokeCentre_Scientist::
# 30 "data/maps/OchreVale_PokeCentre/scripts.pory"
	msgbox OchreVale_PokeCentre_Scientist_Text_0, MSGBOX_NPC
	return


OchreVale_PokeCentre_AquaGrunt::
# 34 "data/maps/OchreVale_PokeCentre/scripts.pory"
	lockall
# 35 "data/maps/OchreVale_PokeCentre/scripts.pory"
	checktrainerflag TRAINER_OCHRE_VALE_POKECENTRE_AQUA_GRUNT
	goto_if 0, OchreVale_PokeCentre_AquaGrunt_2
# 54 "data/maps/OchreVale_PokeCentre/scripts.pory"
	msgbox OchreVale_PokeCentre_AquaGrunt_Text_4, MSGBOX_AUTOCLOSE
OchreVale_PokeCentre_AquaGrunt_1:
# 56 "data/maps/OchreVale_PokeCentre/scripts.pory"
	releaseall
	return

OchreVale_PokeCentre_AquaGrunt_2:
# 36 "data/maps/OchreVale_PokeCentre/scripts.pory"
	switch VAR_TEMP_0
# 37 "data/maps/OchreVale_PokeCentre/scripts.pory"
	case 0, OchreVale_PokeCentre_AquaGrunt_6
# 41 "data/maps/OchreVale_PokeCentre/scripts.pory"
	case 1, OchreVale_PokeCentre_AquaGrunt_7
# 45 "data/maps/OchreVale_PokeCentre/scripts.pory"
	case 2, OchreVale_PokeCentre_AquaGrunt_8
	goto OchreVale_PokeCentre_AquaGrunt_1

OchreVale_PokeCentre_AquaGrunt_6:
# 38 "data/maps/OchreVale_PokeCentre/scripts.pory"
	msgbox OchreVale_PokeCentre_AquaGrunt_Text_0, MSGBOX_NPC
# 39 "data/maps/OchreVale_PokeCentre/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto OchreVale_PokeCentre_AquaGrunt_1

OchreVale_PokeCentre_AquaGrunt_7:
# 42 "data/maps/OchreVale_PokeCentre/scripts.pory"
	msgbox OchreVale_PokeCentre_AquaGrunt_Text_1, MSGBOX_NPC
# 43 "data/maps/OchreVale_PokeCentre/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto OchreVale_PokeCentre_AquaGrunt_1

OchreVale_PokeCentre_AquaGrunt_8:
# 46 "data/maps/OchreVale_PokeCentre/scripts.pory"
	trainerbattle_single TRAINER_OCHRE_VALE_POKECENTRE_AQUA_GRUNT, OchreVale_PokeCentre_AquaGrunt_Text_2, OchreVale_PokeCentre_AquaGrunt_Text_3
	goto OchreVale_PokeCentre_AquaGrunt_1


# 24 "data/maps/OchreVale_PokeCentre/scripts.pory"
OchreVale_PokeCentre_Lass_Movement_0:
# 24 "data/maps/OchreVale_PokeCentre/scripts.pory"
	face_right
	step_end

OchreVale_PokeCentre_Hiker_Text_0:
# 18 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "Ochre Vale is a great place to stock up\n"
	.string "on supplies before I continue on to\l"
	.string "Springwood City.$"

OchreVale_PokeCentre_Lass_Text_0:
# 23 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "My sister and I grew up around here,\n"
	.string "we're inseparable!$"

OchreVale_PokeCentre_Scientist_Text_0:
# 30 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "There's only so much dirt you can study\n"
	.string "before it becomes tedious...$"

OchreVale_PokeCentre_AquaGrunt_Text_0:
# 38 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "Don't bother me!\nCan't you see I'm busy!?$"

OchreVale_PokeCentre_AquaGrunt_Text_1:
# 42 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "Are you deaf?? Leave me alone!$"

OchreVale_PokeCentre_AquaGrunt_Text_2:
# 48 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "THAT'S IT! YOU ASKED FOR IT!$"

OchreVale_PokeCentre_AquaGrunt_Text_3:
# 49 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "Well at least it'll be easy to heal my\n"
	.string "Pokemon...$"

OchreVale_PokeCentre_AquaGrunt_Text_4:
# 54 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "Well if I was going to have all my\n"
	.string "Pokemon knocked out, this is a pretty\l"
	.string "good to do it.$"
