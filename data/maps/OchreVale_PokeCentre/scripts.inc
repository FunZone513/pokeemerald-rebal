OchreVale_PokeCentre_MapScripts::
# 2 "data/maps/OchreVale_PokeCentre/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OchreVale_PokeCentre_OnTransition
	.byte 0


OchreVale_PokeCentre_OnTransition::
# 6 "data/maps/OchreVale_PokeCentre/scripts.pory"
	setrespawn HEAL_LOCATION_OCHRE_VALE
	return


OchreVale_PokeCentre_Hiker::
# 10 "data/maps/OchreVale_PokeCentre/scripts.pory"
	msgbox OchreVale_PokeCentre_Hiker_Text_0, MSGBOX_NPC
	return


OchreVale_PokeCentre_Lass::
# 14 "data/maps/OchreVale_PokeCentre/scripts.pory"
	lock
# 15 "data/maps/OchreVale_PokeCentre/scripts.pory"
	msgbox OchreVale_PokeCentre_Lass_Text_0, MSGBOX_NPC
# 16 "data/maps/OchreVale_PokeCentre/scripts.pory"
	applymovement 4, OchreVale_PokeCentre_Lass_Movement_0
# 17 "data/maps/OchreVale_PokeCentre/scripts.pory"
	waitmovement 0
# 18 "data/maps/OchreVale_PokeCentre/scripts.pory"
	release
	return


OchreVale_PokeCentre_Scientist::
# 22 "data/maps/OchreVale_PokeCentre/scripts.pory"
	msgbox OchreVale_PokeCentre_Scientist_Text_0, MSGBOX_NPC
	return


OchreVale_PokeCentre_MagmaGrunt::
# 26 "data/maps/OchreVale_PokeCentre/scripts.pory"
	lockall
# 27 "data/maps/OchreVale_PokeCentre/scripts.pory"
	checktrainerflag TRAINER_OCHRE_VALE_POKECENTRE_MAGMA_GRUNT
	goto_if 0, OchreVale_PokeCentre_MagmaGrunt_2
# 46 "data/maps/OchreVale_PokeCentre/scripts.pory"
	msgbox OchreVale_PokeCentre_MagmaGrunt_Text_4, MSGBOX_AUTOCLOSE
OchreVale_PokeCentre_MagmaGrunt_1:
# 48 "data/maps/OchreVale_PokeCentre/scripts.pory"
	releaseall
	return

OchreVale_PokeCentre_MagmaGrunt_2:
# 28 "data/maps/OchreVale_PokeCentre/scripts.pory"
	switch VAR_TEMP_0
# 29 "data/maps/OchreVale_PokeCentre/scripts.pory"
	case 0, OchreVale_PokeCentre_MagmaGrunt_6
# 33 "data/maps/OchreVale_PokeCentre/scripts.pory"
	case 1, OchreVale_PokeCentre_MagmaGrunt_7
# 37 "data/maps/OchreVale_PokeCentre/scripts.pory"
	case 2, OchreVale_PokeCentre_MagmaGrunt_8
	goto OchreVale_PokeCentre_MagmaGrunt_1

OchreVale_PokeCentre_MagmaGrunt_6:
# 30 "data/maps/OchreVale_PokeCentre/scripts.pory"
	msgbox OchreVale_PokeCentre_MagmaGrunt_Text_0, MSGBOX_NPC
# 31 "data/maps/OchreVale_PokeCentre/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto OchreVale_PokeCentre_MagmaGrunt_1

OchreVale_PokeCentre_MagmaGrunt_7:
# 34 "data/maps/OchreVale_PokeCentre/scripts.pory"
	msgbox OchreVale_PokeCentre_MagmaGrunt_Text_1, MSGBOX_NPC
# 35 "data/maps/OchreVale_PokeCentre/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto OchreVale_PokeCentre_MagmaGrunt_1

OchreVale_PokeCentre_MagmaGrunt_8:
# 38 "data/maps/OchreVale_PokeCentre/scripts.pory"
	trainerbattle_single TRAINER_OCHRE_VALE_POKECENTRE_MAGMA_GRUNT, OchreVale_PokeCentre_MagmaGrunt_Text_2, OchreVale_PokeCentre_MagmaGrunt_Text_3
	goto OchreVale_PokeCentre_MagmaGrunt_1


# 16 "data/maps/OchreVale_PokeCentre/scripts.pory"
OchreVale_PokeCentre_Lass_Movement_0:
# 16 "data/maps/OchreVale_PokeCentre/scripts.pory"
	face_right
	step_end

OchreVale_PokeCentre_Hiker_Text_0:
# 10 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "Ochre Vale is a great place to stock up\n"
	.string "on supplies before I continue on to\l"
	.string "Springwood City.$"

OchreVale_PokeCentre_Lass_Text_0:
# 15 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "My sister and I grew up around here,\n"
	.string "we're inseparable!$"

OchreVale_PokeCentre_Scientist_Text_0:
# 22 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "There's only so much dirt you can study\n"
	.string "before it becomes tedious...$"

OchreVale_PokeCentre_MagmaGrunt_Text_0:
# 30 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "Don't bother me!\nCan't you see I'm busy!?$"

OchreVale_PokeCentre_MagmaGrunt_Text_1:
# 34 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "Are you deaf?? Leave me alone!$"

OchreVale_PokeCentre_MagmaGrunt_Text_2:
# 40 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "THAT'S IT! YOU ASKED FOR IT!$"

OchreVale_PokeCentre_MagmaGrunt_Text_3:
# 41 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "Well at least it'll be easy to heal my\n"
	.string "Pokemon...$"

OchreVale_PokeCentre_MagmaGrunt_Text_4:
# 46 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "Well if I was going to have all my\n"
	.string "Pokemon knocked out, this is a pretty\l"
	.string "good to do it.$"
