SpringwoodCity_Institution_1F_MapScripts::
	.byte 0


SpringwoodCity_Institution_1F_Director::
# 4 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 5 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	switch VAR_DYECRESS_MYSTERY_STATE
# 6 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	case 0, SpringwoodCity_Institution_1F_Director_3
# 7 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	case 1, SpringwoodCity_Institution_1F_Director_3
# 8 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	case 2, SpringwoodCity_Institution_1F_Director_3
# 12 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	case 3, SpringwoodCity_Institution_1F_Director_4
# 17 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	case 4, SpringwoodCity_Institution_1F_Director_5
SpringwoodCity_Institution_1F_Director_5:
# 19 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Director_Text_1, MSGBOX_NPC
SpringwoodCity_Institution_1F_Director_1:
# 22 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return

SpringwoodCity_Institution_1F_Director_3:
# 9 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Director_Text_0, MSGBOX_NPC
	goto SpringwoodCity_Institution_1F_Director_1

SpringwoodCity_Institution_1F_Director_4:
# 13 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Director_Text, MSGBOX_NPC
# 14 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	setvar VAR_DYECRESS_MYSTERY_STATE, 4
	goto SpringwoodCity_Institution_1F_Director_1


SpringwoodCity_Institution_1F_Scientist1::
# 36 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 37 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Scientist1_Text_0
# 38 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Scientist2::
# 42 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 43 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Scientist2_Text_0, MSGBOX_NPC
# 44 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Scientist3::
# 48 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 49 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Scientist3_Text_0, MSGBOX_NPC
# 50 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Scientist4::
# 54 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 55 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Scientist4_Text_0, MSGBOX_NPC
# 56 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Display::
# 60 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 61 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Display_Text_0
# 62 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Display2::
# 66 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 67 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Display2_Text_0
# 68 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Display3::
# 72 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 73 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Display3_Text_0
# 74 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Display4::
# 78 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 79 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Display4_Text_0
# 80 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Display5::
# 84 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 85 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Display5_Text_0
# 86 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Display6::
# 90 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 91 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Display6_Text_0
# 92 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Display7::
# 96 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 97 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Display7_Text_0
# 98 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Table::
# 102 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	lockall
# 103 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	msgbox SpringwoodCity_Institution_1F_Table_Text_0
# 104 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	releaseall
	return


SpringwoodCity_Institution_1F_Director_Text_0:
# 9 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "We're collecting data from Labs all over\n"
	.string "the region.$"

SpringwoodCity_Institution_1F_Director_Text_1:
# 19 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "I've sent some of my guys over to\n"
	.string "Dyecress Town to help out Simon with\l"
	.string "his investigation. I hope they learn\l"
	.string "something fruitful from it!$"

SpringwoodCity_Institution_1F_Scientist1_Text_0:
# 37 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "These readings are a little... off...$"

SpringwoodCity_Institution_1F_Scientist2_Text_0:
# 43 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "I'm trying to determine what it is about\n"
	.string "evolutionary stones that causes\l"
	.string "Pokemon to evolve.$"

SpringwoodCity_Institution_1F_Scientist3_Text_0:
# 49 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "Our research here is more geared\n"
	.string "towards potential commercialisation\l"
	.string "and the greater impact of discoveries.$"

SpringwoodCity_Institution_1F_Scientist4_Text_0:
# 55 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "We can learn a lot about our future by\n"
	.string "looking at our past, but at the same\l"
	.string "time, we can change our future to\l"
	.string "however we want it today.$"

SpringwoodCity_Institution_1F_Display_Text_0:
# 61 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "There seems to be a stone of some kind\n"
	.string "behind the glass.$"

SpringwoodCity_Institution_1F_Display2_Text_0:
# 67 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "It's a strangely red rock.$"

SpringwoodCity_Institution_1F_Display3_Text_0:
# 73 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "It appears to be a fossil of some kind.$"

SpringwoodCity_Institution_1F_Display4_Text_0:
# 79 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "Kind of looks like a feather imprinted\n"
	.string "on a stone.$"

SpringwoodCity_Institution_1F_Display5_Text_0:
# 85 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "Looks like some sort of ancient relic.$"

SpringwoodCity_Institution_1F_Display6_Text_0:
# 91 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "The display shows off a sample of ash.$"

SpringwoodCity_Institution_1F_Display7_Text_0:
# 97 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "Someone's left sock.$"

SpringwoodCity_Institution_1F_Table_Text_0:
# 103 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "The diagrams are too complex to\n"
	.string "understand.$"

SpringwoodCity_Institution_1F_Director_Text::
# 25 "data/maps/SpringwoodCity_Institution_1F/scripts.pory"
	.string "Yes? Can I help you?\p"
	.string "...\p"
	.string "Oh! You're from Dyecress!\nHow wonderful it is to hear that\lOld Man Simon is finally letting us\linvestigate the town's history.\p"
	.string "It's been a dark spot in our knowledge\nbase for quite some time now.\p"
	.string "We always hear about the rich history\nof the town, yet we're never allowed to\llearn any of it, it's really a shame.\p"
	.string "I'll dispatch some of our researchers\nright away!\p"
	.string "They'll make sure to help out with any\nof Simon's qualms, and I'll make sure\lthey don't make a mess of the town.$"
