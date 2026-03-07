SpringwoodCity_Institution_1F_MapScripts::
	.byte 0


SpringwoodCity_Institution_1F_Director::
# 4 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 5 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	switch VAR_DYECRESS_MYSTERY_STATE
# 6 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	case 2, SpringwoodCity_Institution_1F_Director_3
# 11 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	case 3, SpringwoodCity_Institution_1F_Director_4
# 16 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Director_Text_1, MSGBOX_NPC
SpringwoodCity_Institution_1F_Director_1:
# 18 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return

SpringwoodCity_Institution_1F_Director_3:
# 7 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Director_Text, MSGBOX_NPC
# 8 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	setvar VAR_DYECRESS_MYSTERY_STATE, 3
	goto SpringwoodCity_Institution_1F_Director_1

SpringwoodCity_Institution_1F_Director_4:
# 12 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Director_Text_0, MSGBOX_NPC
	goto SpringwoodCity_Institution_1F_Director_1


SpringwoodCity_Institution_1F_Scientist1::
# 32 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 33 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Scientist1_Text_0
# 34 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Scientist2::
# 38 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 39 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Scientist2_Text_0, MSGBOX_NPC
# 40 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Scientist3::
# 44 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 45 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Scientist3_Text_0, MSGBOX_NPC
# 46 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Scientist4::
# 50 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 51 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Scientist4_Text_0, MSGBOX_NPC
# 52 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Display::
# 56 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 57 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Display_Text_0
# 58 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Display2::
# 62 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 63 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Display2_Text_0
# 64 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Display3::
# 68 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 69 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Display3_Text_0
# 70 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Display4::
# 74 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 75 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Display4_Text_0
# 76 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Display5::
# 80 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 81 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Display5_Text_0
# 82 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Display6::
# 86 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 87 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Display6_Text_0
# 88 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Display7::
# 92 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 93 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Display7_Text_0
# 94 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Table::
# 98 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 99 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Table_Text_0
# 100 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Director_Text_0:
# 12 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "I've sent some of my guys over to\n"
	.string "Dyecress Town to help out Spenser with\l"
	.string "his deciphering of the old texts. I hope\l"
	.string "they learn something fruitful from it!$"

SpringwoodCity_Institution_1F_Director_Text_1:
# 16 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "We're collecting data from Labs all over\n"
	.string "the region.$"

SpringwoodCity_Institution_1F_Scientist1_Text_0:
# 33 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "These readings are a little... off...$"

SpringwoodCity_Institution_1F_Scientist2_Text_0:
# 39 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "I'm trying to determine what it is about\n"
	.string "evolutionary stones that causes\l"
	.string "Pokemon to evolve.$"

SpringwoodCity_Institution_1F_Scientist3_Text_0:
# 45 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "Our research here is more geared\n"
	.string "towards potential commercialisation\l"
	.string "and the greater impact of discoveries.$"

SpringwoodCity_Institution_1F_Scientist4_Text_0:
# 51 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "We can learn a lot about our future by\n"
	.string "looking at our past, but at the same\l"
	.string "time, we can change our future to\l"
	.string "however we want it today.$"

SpringwoodCity_Institution_1F_Display_Text_0:
# 57 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "There seems to be a stone of some kind\n"
	.string "behind the glass.$"

SpringwoodCity_Institution_1F_Display2_Text_0:
# 63 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "It's a strangely red rock.$"

SpringwoodCity_Institution_1F_Display3_Text_0:
# 69 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "It appears to be a fossil of some kind.$"

SpringwoodCity_Institution_1F_Display4_Text_0:
# 75 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "Kind of looks like a feather imprinted\n"
	.string "on a stone.$"

SpringwoodCity_Institution_1F_Display5_Text_0:
# 81 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "Looks like some sort of ancient relic.$"

SpringwoodCity_Institution_1F_Display6_Text_0:
# 87 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "The display shows off a sample of ash.$"

SpringwoodCity_Institution_1F_Display7_Text_0:
# 93 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "Someone's left sock.$"

SpringwoodCity_Institution_1F_Table_Text_0:
# 99 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "The diagrams are too complex to\n"
	.string "understand.$"

SpringwoodCity_Institution_1F_Director_Text::
# 21 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "Yes? Can I help you?\p"
	.string "...\p"
	.string "Oh! You're from Dyecress!\nHow wonderful it is to hear that\lOld Man Spenser is finally letting us\linvestigate the town's history.\p"
	.string "It's been a dark spot in our knowledge\nbase for quite some time now.\p"
	.string "We always hear about the rich history\nof the town, yet we're never allowed to\llearn any of it, it's really a shame.\p"
	.string "I'll dispatch some of our researchers\nright away!\p"
	.string "They'll make sure to help out with any of\nSpenser's qualms, and I'll make sure they\ldon't make a mess of the town.$"
