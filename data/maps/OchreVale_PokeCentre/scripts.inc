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
	goto_if_set FLAG_TEMP_1, OchreVale_PokeCentre_MagmaGrunt_2
# 37 "data/maps/OchreVale_PokeCentre/scripts.pory"
	msgbox OchreVale_PokeCentre_MagmaGrunt_Text_3, MSGBOX_NPC
# 38 "data/maps/OchreVale_PokeCentre/scripts.pory"
	setflag FLAG_TEMP_1
# 40 "data/maps/OchreVale_PokeCentre/scripts.pory"
	releaseall
	return

OchreVale_PokeCentre_MagmaGrunt_2:
# 28 "data/maps/OchreVale_PokeCentre/scripts.pory"
	trainerbattle_single TRAINER_OCHRE_VALE_POKECENTRE_MAGMA_GRUNT, OchreVale_PokeCentre_MagmaGrunt_Text_0, OchreVale_PokeCentre_MagmaGrunt_Text_1
# 33 "data/maps/OchreVale_PokeCentre/scripts.pory"
	msgbox OchreVale_PokeCentre_MagmaGrunt_Text_2, MSGBOX_AUTOCLOSE
	end


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
	.string "THAT'S IT! YOU ASKED FOR IT!$"

OchreVale_PokeCentre_MagmaGrunt_Text_1:
# 31 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "Well at least it'll be easy to heal my\n"
	.string "Pokemon...$"

OchreVale_PokeCentre_MagmaGrunt_Text_2:
# 33 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "I was waiting to see if the other guys\n"
	.string "needed my help, but I guess I'll have to\l"
	.string "wait a bit longer now...$"

OchreVale_PokeCentre_MagmaGrunt_Text_3:
# 37 "data/maps/OchreVale_PokeCentre/scripts.pory"
	.string "Don't bother me!\nCan't you see I'm busy!?$"
