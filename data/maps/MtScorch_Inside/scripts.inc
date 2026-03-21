MtScorch_Inside_MapScripts::
	.byte 0


MtScorch_Inside_Fisherman::
# 4 "data/maps/MtScorch_Inside/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GOOD_ROD, MtScorch_Inside_Fisherman_1
# 9 "data/maps/MtScorch_Inside/scripts.pory"
	msgbox MtScorch_Inside_Fisherman_Text_2, MSGBOX_NPC
	return

MtScorch_Inside_Fisherman_1:
# 5 "data/maps/MtScorch_Inside/scripts.pory"
	msgbox MtScorch_Inside_Fisherman_Text_0, MSGBOX_NPC
# 6 "data/maps/MtScorch_Inside/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 7 "data/maps/MtScorch_Inside/scripts.pory"
	msgbox MtScorch_Inside_Fisherman_Text_1, MSGBOX_NPC
	return


MtScorch_Inside_Kindler::
# 14 "data/maps/MtScorch_Inside/scripts.pory"
	trainerbattle_single TRAINER_MT_SCORCH_INSIDE_KINDLER, MtScorch_Inside_Kindler_Text_0, MtScorch_Inside_Kindler_Text_1
# 19 "data/maps/MtScorch_Inside/scripts.pory"
	msgbox MtScorch_Inside_Kindler_Text_2, MSGBOX_AUTOCLOSE
	end


MtScorch_Inside_Kindler2::
# 24 "data/maps/MtScorch_Inside/scripts.pory"
	trainerbattle_single TRAINER_MT_SCORCH_INSIDE_KINDLER_2, MtScorch_Inside_Kindler2_Text_0, MtScorch_Inside_Kindler2_Text_1
# 29 "data/maps/MtScorch_Inside/scripts.pory"
	msgbox MtScorch_Inside_Kindler2_Text_2, MSGBOX_AUTOCLOSE
	end


MtScorch_Inside_Hiker::
# 34 "data/maps/MtScorch_Inside/scripts.pory"
	trainerbattle_single TRAINER_MT_SCORCH_INSIDE_HIKER, MtScorch_Inside_Hiker_Text_0, MtScorch_Inside_Hiker_Text_1
# 39 "data/maps/MtScorch_Inside/scripts.pory"
	msgbox MtScorch_Inside_Hiker_Text_2, MSGBOX_AUTOCLOSE
	end


MtScorch_Inside_CoolTrainer::
# 44 "data/maps/MtScorch_Inside/scripts.pory"
	trainerbattle_single TRAINER_MT_SCORCH_INSIDE_COOL_TRAINER, MtScorch_Inside_CoolTrainer_Text_0, MtScorch_Inside_CoolTrainer_Text_1
# 49 "data/maps/MtScorch_Inside/scripts.pory"
	msgbox MtScorch_Inside_CoolTrainer_Text_2, MSGBOX_AUTOCLOSE
	end


MtScorch_Inside_Psychic::
# 54 "data/maps/MtScorch_Inside/scripts.pory"
	trainerbattle_single TRAINER_MT_SCORCH_INSIDE_PSYCHIC, MtScorch_Inside_Psychic_Text_0, MtScorch_Inside_Psychic_Text_1
# 59 "data/maps/MtScorch_Inside/scripts.pory"
	msgbox MtScorch_Inside_Psychic_Text_2, MSGBOX_AUTOCLOSE
	end


MtScorch_Inside_Fisherman_Text_0:
# 5 "data/maps/MtScorch_Inside/scripts.pory"
	.string "'ave this.$"

MtScorch_Inside_Fisherman_Text_1:
# 7 "data/maps/MtScorch_Inside/scripts.pory"
	.string "I've no use for it 'ere, ain't no fish.$"

MtScorch_Inside_Fisherman_Text_2:
# 9 "data/maps/MtScorch_Inside/scripts.pory"
	.string "How's the rod treatin' ya?$"

MtScorch_Inside_Kindler_Text_0:
# 16 "data/maps/MtScorch_Inside/scripts.pory"
	.string "Can you take the heat?$"

MtScorch_Inside_Kindler_Text_1:
# 17 "data/maps/MtScorch_Inside/scripts.pory"
	.string "Whew, you can even dish out the heat!$"

MtScorch_Inside_Kindler_Text_2:
# 19 "data/maps/MtScorch_Inside/scripts.pory"
	.string "I'm really feeling the heat in here.$"

MtScorch_Inside_Kindler2_Text_0:
# 26 "data/maps/MtScorch_Inside/scripts.pory"
	.string "Hey man can you spare some water?$"

MtScorch_Inside_Kindler2_Text_1:
# 27 "data/maps/MtScorch_Inside/scripts.pory"
	.string "The smoke got in my eyes, I would've won\n"
	.string "if I could see...$"

MtScorch_Inside_Kindler2_Text_2:
# 29 "data/maps/MtScorch_Inside/scripts.pory"
	.string "Gimme a sec... Trying to wash out my\n"
	.string "eyes... The smoke...$"

MtScorch_Inside_Hiker_Text_0:
# 36 "data/maps/MtScorch_Inside/scripts.pory"
	.string "I'm aiming for the top!$"

MtScorch_Inside_Hiker_Text_1:
# 37 "data/maps/MtScorch_Inside/scripts.pory"
	.string "This is but a minor set-back!$"

MtScorch_Inside_Hiker_Text_2:
# 39 "data/maps/MtScorch_Inside/scripts.pory"
	.string "Do you think if I get to the top I'll\n"
	.string "become popular with the ladies?$"

MtScorch_Inside_CoolTrainer_Text_0:
# 46 "data/maps/MtScorch_Inside/scripts.pory"
	.string "Mt Scorch is a good place to train\n"
	.string "against fire types.$"

MtScorch_Inside_CoolTrainer_Text_1:
# 47 "data/maps/MtScorch_Inside/scripts.pory"
	.string "Hmm, I guess I needed better diversity.$"

MtScorch_Inside_CoolTrainer_Text_2:
# 49 "data/maps/MtScorch_Inside/scripts.pory"
	.string "I thought it would be good enough to\n"
	.string "just have some Pokemon strong against\l"
	.string "fire types.$"

MtScorch_Inside_Psychic_Text_0:
# 56 "data/maps/MtScorch_Inside/scripts.pory"
	.string "Thought you could sneak past me did\n"
	.string "you?$"

MtScorch_Inside_Psychic_Text_1:
# 57 "data/maps/MtScorch_Inside/scripts.pory"
	.string "Oh, darn.$"

MtScorch_Inside_Psychic_Text_2:
# 59 "data/maps/MtScorch_Inside/scripts.pory"
	.string "Do you think I could convince you to go\n"
	.string "for a swim real quick?$"
