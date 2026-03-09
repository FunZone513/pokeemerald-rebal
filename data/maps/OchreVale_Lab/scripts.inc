OchreVale_Lab_MapScripts::
	.byte 0


OchreVale_Lab_Director::
# 4 "data/maps/OchreVale_Lab/scripts.pory"
	lockall
# 5 "data/maps/OchreVale_Lab/scripts.pory"
	compare VAR_ROUTE4_WATER_STONE_STATE, 4
	goto_if_le OchreVale_Lab_Director_2
# 8 "data/maps/OchreVale_Lab/scripts.pory"
	compare VAR_ROUTE4_WATER_STONE_STATE, 5
	goto_if_eq OchreVale_Lab_Director_3
# 11 "data/maps/OchreVale_Lab/scripts.pory"
	msgbox OchreVale_Lab_Director_Text_1, MSGBOX_NPC
OchreVale_Lab_Director_1:
# 13 "data/maps/OchreVale_Lab/scripts.pory"
	releaseall
	return

OchreVale_Lab_Director_2:
# 6 "data/maps/OchreVale_Lab/scripts.pory"
	msgbox OchreVale_Lab_Director_Text, MSGBOX_NPC
# 7 "data/maps/OchreVale_Lab/scripts.pory"
	setvar VAR_ROUTE4_WATER_STONE_STATE, 5
	goto OchreVale_Lab_Director_1

OchreVale_Lab_Director_3:
# 9 "data/maps/OchreVale_Lab/scripts.pory"
	msgbox OchreVale_Lab_Director_Text_0, MSGBOX_NPC
	goto OchreVale_Lab_Director_1


OchreVale_Lab_Scientist::
# 24 "data/maps/OchreVale_Lab/scripts.pory"
	lockall
# 25 "data/maps/OchreVale_Lab/scripts.pory"
	msgbox OchreVale_Lab_Scientist_Text_0, MSGBOX_NPC
# 26 "data/maps/OchreVale_Lab/scripts.pory"
	releaseall
	return


OchreVale_Lab_Scientist2::
# 30 "data/maps/OchreVale_Lab/scripts.pory"
	lockall
# 31 "data/maps/OchreVale_Lab/scripts.pory"
	msgbox OchreVale_Lab_Scientist2_Text_0, MSGBOX_NPC
# 32 "data/maps/OchreVale_Lab/scripts.pory"
	releaseall
	return


OchreVale_Lab_Scientist3::
# 36 "data/maps/OchreVale_Lab/scripts.pory"
	lockall
# 37 "data/maps/OchreVale_Lab/scripts.pory"
	msgbox OchreVale_Lab_Scientist3_Text_0, MSGBOX_NPC
# 38 "data/maps/OchreVale_Lab/scripts.pory"
	releaseall
	return


OchreVale_Lab_Director_Text_0:
# 9 "data/maps/OchreVale_Lab/scripts.pory"
	.string "Those guys call themselves 'Team\n"
	.string "Magma'. I'm not sure why they've decided\l"
	.string "to start hindering our research all of a\l"
	.string "sudden.$"

OchreVale_Lab_Director_Text_1:
# 11 "data/maps/OchreVale_Lab/scripts.pory"
	.string "I thank you for getting rid of those\n"
	.string "guys getting in the way of our\l"
	.string "research, I hope they don't cause any\l"
	.string "further trouble to us or to you.$"

OchreVale_Lab_Scientist_Text_0:
# 25 "data/maps/OchreVale_Lab/scripts.pory"
	.string "The data we're pulling from analysing\n"
	.string "the rock structures in Ochre Vale Mine\l"
	.string "is... interesting to say the least.$"

OchreVale_Lab_Scientist2_Text_0:
# 31 "data/maps/OchreVale_Lab/scripts.pory"
	.string "This machine is used for molecular\n"
	.string "deconstruction of provided samples\l"
	.string "which help us analyse the lattice\l"
	.string "structres with an electron microscope.\l"
	.string "Fascinating stuff.$"

OchreVale_Lab_Scientist3_Text_0:
# 37 "data/maps/OchreVale_Lab/scripts.pory"
	.string "I'm just here to give the guys some dirt\n"
	.string "every now and then. They insisted I\l"
	.string "wear a coat for some reason, I don't\l"
	.string "know what any of this stuff does.$"

OchreVale_Lab_Director_Text::
# 16 "data/maps/OchreVale_Lab/scripts.pory"
	.string "We're a group from the lab on Route 4,\nand we're supposed to be sending any\limportant looking stones their way,\l"
	.string "but recently we've been having trouble\lwith a group in Ochre Vale Mine.\p"
	.string "They're getting in the way of our\nmaterial collection, as well as\limpeding our transport methods.\p"
	.string "I just wish someone would get them to\nleave us alone.$"
