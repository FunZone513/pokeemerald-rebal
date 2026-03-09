//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/trainers.h' to remove #line markers.
//

#line 1 "src/data/trainers.party"

#line 76
    [DIFFICULTY_NORMAL][TRAINER_NONE] =
    {
#line 78
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 79
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 81
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 82
        .doubleBattle = FALSE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 155
    [DIFFICULTY_NORMAL][GYM_LEADER_MARTIN] =
    {
#line 156
        .trainerName = _("Martin"),
#line 157
        .trainerClass = TRAINER_CLASS_LEADER,
#line 158
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 160
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 161
        .items = { ITEM_POTION, ITEM_SUPER_POTION },
#line 162
        .aiFlags = AI_FLAG_GYM_LEADER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 164
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 167
            .ev = TRAINER_PARTY_EVS(236, 236, 36, 0, 0, 0),
#line 169
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 165
            .ability = ABILITY_STURDY,
#line 166
            .lvl = 12,
#line 168
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 169
                MOVE_STEALTH_ROCK,
                MOVE_TACKLE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 173
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 176
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 236, 236, 0),
#line 178
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 174
            .ability = ABILITY_SPEED_BOOST,
#line 175
            .lvl = 12,
#line 177
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 178
                MOVE_STRUGGLE_BUG,
                MOVE_QUICK_ATTACK,
                MOVE_AIR_SLASH,
                MOVE_DETECT,
            },
            },
            {
#line 183
            .species = SPECIES_CLAUNCHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 185
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 224, 224, 0),
#line 187
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 184
            .lvl = 12,
#line 186
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 187
                MOVE_WATER_PULSE,
                MOVE_AQUA_JET,
                MOVE_FLAIL,
            },
            },
            {
#line 191
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 194
            .ev = TRAINER_PARTY_EVS(12, 0, 244, 0, 0, 224),
#line 196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 192
            .ability = ABILITY_PRANKSTER,
#line 193
            .lvl = 13,
#line 195
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 196
                MOVE_FAKE_OUT,
                MOVE_SHADOW_SNEAK,
                MOVE_WILL_O_WISP,
                MOVE_SCRATCH,
            },
            },
            {
#line 201
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 201
            .heldItem = ITEM_SITRUS_BERRY,
#line 204
            .ev = TRAINER_PARTY_EVS(0, 228, 244, 0, 0, 28),
#line 206
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 202
            .ability = ABILITY_GLUTTONY,
#line 203
            .lvl = 15,
#line 205
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 206
                MOVE_LICK,
                MOVE_TACKLE,
                MOVE_RECYCLE,
                MOVE_CURSE,
            },
            },
        },
    },
#line 211
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER1] =
    {
#line 212
        .trainerName = _("Carlos"),
#line 213
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 214
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 216
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 217
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 219
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 222
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 220
            .ability = ABILITY_INTIMIDATE,
#line 221
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 223
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 226
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 224
            .ability = ABILITY_HUSTLE,
#line 225
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 226
                MOVE_FURY_SWIPES,
                MOVE_QUICK_ATTACK,
                MOVE_BITE,
            },
            },
            {
#line 230
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 232
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 231
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 233
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER2] =
    {
#line 234
        .trainerName = _("Cindy"),
#line 235
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 236
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 237
F_TRAINER_FEMALE | 
#line 238
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 239
        .aiFlags = AI_FLAG_CHEESE_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 241
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 242
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 243
                MOVE_TACKLE,
                MOVE_FAIRY_WIND,
                MOVE_POISON_POWDER,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 248
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 249
            .ability = ABILITY_STATIC,
#line 250
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 251
                MOVE_TACKLE,
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 256
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER3] =
    {
#line 257
        .trainerName = _("David"),
#line 258
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 259
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 261
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 262
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 264
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 265
            .ability = ABILITY_WEAK_ARMOR,
#line 266
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 267
                MOVE_TACKLE,
                MOVE_MUD_SLAP,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 271
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 274
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 272
            .ability = ABILITY_WEAK_ARMOR,
#line 273
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 274
                MOVE_FURY_CUTTER,
                MOVE_ROCK_SLIDE,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 278
    [DIFFICULTY_NORMAL][SPRINGWOOD_GYM_TRAINER4] =
    {
#line 279
        .trainerName = _("Samuel"),
#line 280
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 281
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 283
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 284
        .doubleBattle = TRUE,
#line 285
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 287
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 290
            .ev = TRAINER_PARTY_EVS(248, 8, 0, 0, 252, 0),
#line 292
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 288
            .ability = ABILITY_COMPOUND_EYES,
#line 289
            .lvl = 13,
#line 291
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 292
                MOVE_POISON_POWDER,
                MOVE_VENOSHOCK,
                MOVE_GUST,
                MOVE_BUG_BITE,
            },
            },
            {
#line 297
            .species = SPECIES_BEAUTIFLY,
#line 297
            .gender = TRAINER_MON_FEMALE,
#line 300
            .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
#line 302
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 298
            .ability = ABILITY_SWARM,
#line 299
            .lvl = 13,
#line 301
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 302
                MOVE_GUST,
                MOVE_MEGA_DRAIN,
                MOVE_ATTRACT,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 307
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_BUG_CATCHER] =
    {
#line 308
        .trainerName = _("Bert"),
#line 309
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 310
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 312
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 313
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 315
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 316
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 318
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 320
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 319
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 320
                MOVE_HARDEN,
                MOVE_TACKLE,
                MOVE_POISON_STING,
                MOVE_STRING_SHOT,
            },
            },
            {
#line 325
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 327
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 326
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 328
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_GIRL] =
    {
#line 329
        .trainerName = _("Lola"),
#line 330
        .trainerClass = TRAINER_CLASS_LASS,
#line 331
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 332
F_TRAINER_FEMALE | 
#line 333
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 334
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 336
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 338
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 337
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 339
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 341
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 340
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 342
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_BOY] =
    {
#line 343
        .trainerName = _("Mark"),
#line 344
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 345
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 347
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 348
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 350
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 351
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 353
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_GIRL] =
    {
#line 354
        .trainerName = _("Susie"),
#line 355
        .trainerClass = TRAINER_CLASS_LASS,
#line 356
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 357
F_TRAINER_FEMALE | 
#line 358
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 359
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 361
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 363
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 362
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 364
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 366
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 365
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 367
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_LITTLEGIRL] =
    {
#line 368
        .trainerName = _("Mary"),
#line 369
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 370
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 371
F_TRAINER_FEMALE | 
#line 372
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 373
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 375
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 377
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 376
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 377
                MOVE_WATER_GUN,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 380
    [DIFFICULTY_NORMAL][TRAINER_ROUTE3_FISHERMAN] =
    {
#line 381
        .trainerName = _("Jeff"),
#line 382
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 383
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 385
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 386
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 388
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 390
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 389
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 391
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 393
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 392
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 394
    [DIFFICULTY_NORMAL][TRAINER_ROUTE4_SCHOOLKID] =
    {
#line 395
        .trainerName = _("Timothy"),
#line 396
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 397
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 399
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 400
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 402
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 403
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 405
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 407
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 406
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 408
    [DIFFICULTY_NORMAL][TRAINER_ROUTE5_PICNICKER] =
    {
#line 409
        .trainerName = _("Brittany"),
#line 410
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 411
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 412
F_TRAINER_FEMALE | 
#line 413
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 414
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 416
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 418
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 417
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 419
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 422
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 420
            .ability = ABILITY_STURDY,
#line 421
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 424
    [DIFFICULTY_NORMAL][TRAINER_DRIPSTONE_CAVE_FISHERMAN] =
    {
#line 425
        .trainerName = _("Alan"),
#line 426
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 427
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 429
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 430
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 432
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 434
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 433
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 435
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 437
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 436
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 438
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 440
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 439
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 441
    [DIFFICULTY_NORMAL][TRAINER_ROUTE5_BLACKBELT] =
    {
#line 442
        .trainerName = _("Lister"),
#line 443
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 444
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 446
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 447
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 449
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 451
            .ev = TRAINER_PARTY_EVS(244, 248, 0, 0, 0, 8),
#line 454
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 450
            .ability = ABILITY_IRON_FIST,
#line 453
            .lvl = 20,
#line 452
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 454
                MOVE_SHADOW_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 459
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_HIKER] =
    {
#line 460
        .trainerName = _("Raymond"),
#line 461
        .trainerClass = TRAINER_CLASS_HIKER,
#line 462
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 464
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 465
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 467
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 469
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 468
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 470
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 472
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 471
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 473
    [DIFFICULTY_NORMAL][TRAINER_ROUTE7_PICNICKER] =
    {
#line 474
        .trainerName = _("Chloe"),
#line 475
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 476
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 477
F_TRAINER_FEMALE | 
#line 478
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 479
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 481
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 483
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 482
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 484
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 486
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 485
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 487
    [DIFFICULTY_NORMAL][TRAINER_ROUTE7_SCHOOL_KID] =
    {
#line 488
        .trainerName = _("Jerry"),
#line 489
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 490
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 492
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 493
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 495
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 497
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 496
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 498
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 499
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 501
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 503
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 502
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 504
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 506
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 505
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 507
    [DIFFICULTY_NORMAL][TRAINER_ROUTE7_HIKER] =
    {
#line 508
        .trainerName = _("Daniel"),
#line 509
        .trainerClass = TRAINER_CLASS_HIKER,
#line 510
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 512
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 513
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 515
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 517
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 516
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 518
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 519
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 521
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_BUG_CATCHER] =
    {
#line 522
        .trainerName = _("Charlie"),
#line 523
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 524
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 526
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 527
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 529
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 531
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 530
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 532
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 534
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 533
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 535
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 537
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 536
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 538
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_WOMAN] =
    {
#line 539
        .trainerName = _("Laurel"),
#line 540
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 541
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 542
F_TRAINER_FEMALE | 
#line 543
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 544
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 546
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 548
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 547
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 549
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 551
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 550
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 552
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_GIRL] =
    {
#line 553
        .trainerName = _("Grace"),
#line 554
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 555
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 556
F_TRAINER_FEMALE | 
#line 557
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 558
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 560
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 562
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 561
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 563
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 565
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 564
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 566
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_PICNICKER] =
    {
#line 567
        .trainerName = _("Riley"),
#line 568
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 569
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 570
F_TRAINER_FEMALE | 
#line 571
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 572
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 574
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 576
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 575
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 577
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 579
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 578
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 580
    [DIFFICULTY_NORMAL][TRAINER_SPRING_WOODS_CAMPER] =
    {
#line 581
        .trainerName = _("Arthur"),
#line 582
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 583
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 585
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 586
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 588
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 590
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 589
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 591
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 593
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 592
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 594
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_BLACK_BELT] =
    {
#line 595
        .trainerName = _("Mitchell"),
#line 596
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 597
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 599
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 600
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 602
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 604
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 603
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 605
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 607
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 606
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 608
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_BATTLE_GIRL] =
    {
#line 609
        .trainerName = _("Leanna"),
#line 610
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 611
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 612
F_TRAINER_FEMALE | 
#line 613
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 614
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 616
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 618
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 617
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 619
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_PICNICKER] =
    {
#line 620
        .trainerName = _("Imogen"),
#line 621
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 622
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 623
F_TRAINER_FEMALE | 
#line 624
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 625
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 627
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 629
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 628
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 630
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 632
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 631
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 633
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 635
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 634
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 636
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_HIKER] =
    {
#line 637
        .trainerName = _("Aaron"),
#line 638
        .trainerClass = TRAINER_CLASS_HIKER,
#line 639
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 641
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 642
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 644
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 646
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 645
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 647
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 649
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 648
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 650
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 652
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 651
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 653
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 655
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 654
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 656
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 658
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 657
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 659
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 661
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 660
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 662
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_MAGMA_GRUNT1] =
    {
#line 663
        .trainerName = _("Ricky"),
#line 664
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 665
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 667
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 668
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 670
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 674
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 671
            .ability = ABILITY_SIMPLE,
#line 673
            .lvl = 18,
#line 672
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 674
                MOVE_EMBER,
                MOVE_AMNESIA,
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
            {
#line 679
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 683
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 680
            .ability = ABILITY_FLAME_BODY,
#line 682
            .lvl = 18,
#line 681
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 683
                MOVE_EMBER,
                MOVE_SMOG,
                MOVE_YAWN,
            },
            },
        },
    },
#line 687
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_MAGMA_GRUNT2] =
    {
#line 688
        .trainerName = _("Bessa"),
#line 689
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 690
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 691
F_TRAINER_FEMALE | 
#line 692
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 693
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 695
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 699
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 696
            .ability = ABILITY_WEAK_ARMOR,
#line 698
            .lvl = 20,
#line 697
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 699
                MOVE_ROCK_SLIDE,
                MOVE_BIND,
                MOVE_DRAGON_BREATH,
                MOVE_CURSE,
            },
            },
        },
    },
#line 704
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_MINE_ENTRANCE_MAGMA_GRUNT] =
    {
#line 705
        .trainerName = _("Harry"),
#line 706
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 707
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 709
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 710
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 712
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 715
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 714
            .ability = ABILITY_SAND_STREAM,
#line 713
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 715
                MOVE_SAND_ATTACK,
                MOVE_YAWN,
                MOVE_DIG,
                MOVE_BITE,
            },
            },
        },
    },
#line 720
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_HIKER] =
    {
#line 721
        .trainerName = _("Broden"),
#line 722
        .trainerClass = TRAINER_CLASS_HIKER,
#line 723
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 725
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 726
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 728
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 730
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 729
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 731
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 733
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 732
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 734
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_BATTLE_GIRL] =
    {
#line 735
        .trainerName = _("Angela"),
#line 736
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 737
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 738
F_TRAINER_FEMALE | 
#line 739
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 740
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 742
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 744
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 743
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 745
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 749
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 746
            .ability = ABILITY_HUGE_POWER,
#line 748
            .lvl = 20,
#line 747
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 749
                MOVE_ROLLOUT,
                MOVE_SLAM,
                MOVE_TACKLE,
                MOVE_AQUA_JET,
            },
            },
        },
    },
#line 754
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_BEAUTY] =
    {
#line 755
        .trainerName = _("Rachel"),
#line 756
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 757
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 758
F_TRAINER_FEMALE | 
#line 759
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 760
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 762
            .species = SPECIES_MORELULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 764
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 763
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 765
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 767
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 766
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 768
            .species = SPECIES_CARBINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 770
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 769
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 771
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 773
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 772
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 774
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_MAGMA_GRUNT] =
    {
#line 775
        .trainerName = _("Joseph"),
#line 776
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 777
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 779
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 780
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 782
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 784
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 783
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 785
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 787
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 786
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 788
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_LASS] =
    {
#line 789
        .trainerName = _("Rebecca"),
#line 790
        .trainerClass = TRAINER_CLASS_LASS,
#line 791
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 792
F_TRAINER_FEMALE | 
#line 793
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 794
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 796
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 798
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 797
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 799
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 801
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 800
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 802
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 803
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 805
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_GYM_MANIAC] =
    {
#line 806
        .trainerName = _("Blake"),
#line 807
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 808
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 810
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 811
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 813
            .species = SPECIES_PANCHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 815
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 814
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 816
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 819
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 817
            .ability = ABILITY_SAND_VEIL,
#line 818
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 819
                MOVE_ROCK_SLIDE,
                MOVE_STOMPING_TANTRUM,
                MOVE_SANDSTORM,
                MOVE_BITE,
            },
            },
        },
    },
#line 824
    [DIFFICULTY_NORMAL][GYM_LEADER_DOUGLAS] =
    {
#line 825
        .trainerName = _("Douglas"),
#line 826
        .trainerClass = TRAINER_CLASS_LEADER,
#line 827
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 829
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 830
        .items = { ITEM_SUPER_POTION, ITEM_FULL_HEAL },
#line 831
        .aiFlags = AI_FLAG_GYM_LEADER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 833
            .species = SPECIES_NACLI,
#line 833
            .gender = TRAINER_MON_MALE,
#line 836
            .ev = TRAINER_PARTY_EVS(236, 0, 36, 0, 0, 236),
#line 838
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 834
            .ability = ABILITY_STURDY,
#line 835
            .lvl = 19,
#line 837
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 838
                MOVE_IRON_DEFENSE,
                MOVE_STEALTH_ROCK,
                MOVE_BULLDOZE,
                MOVE_TACKLE,
            },
            },
            {
#line 843
            .species = SPECIES_CHINCHOU,
#line 843
            .gender = TRAINER_MON_FEMALE,
#line 846
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
#line 848
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 844
            .ability = ABILITY_WATER_ABSORB,
#line 845
            .lvl = 19,
#line 847
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 849
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_BUBBLE_BEAM,
                MOVE_VOLT_SWITCH,
            },
            },
            {
#line 854
            .species = SPECIES_MAKUHITA,
#line 854
            .gender = TRAINER_MON_MALE,
#line 857
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
#line 859
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 855
            .ability = ABILITY_GUTS,
#line 856
            .lvl = 20,
#line 858
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 859
                MOVE_BULK_UP,
                MOVE_COUNTER,
                MOVE_FIRE_PUNCH,
                MOVE_ARM_THRUST,
            },
            },
            {
#line 864
            .species = SPECIES_VIGOROTH,
#line 864
            .gender = TRAINER_MON_MALE,
#line 867
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 248, 0, 0),
#line 869
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 865
            .ability = ABILITY_VITAL_SPIRIT,
#line 866
            .lvl = 20,
#line 868
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 869
                MOVE_SLASH,
                MOVE_NIGHT_SLASH,
                MOVE_BULK_UP,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 874
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 874
            .heldItem = ITEM_WIDE_LENS,
#line 877
            .ev = TRAINER_PARTY_EVS(236, 236, 0, 36, 0, 0),
#line 879
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 875
            .ability = ABILITY_LEVITATE,
#line 876
            .lvl = 22,
#line 878
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 879
                MOVE_COSMIC_POWER,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
                MOVE_MORNING_SUN,
            },
            },
        },
    },
#line 884
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_PICNICKER] =
    {
#line 885
        .trainerName = _("Madeline"),
#line 886
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 887
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 888
F_TRAINER_FEMALE | 
#line 889
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 890
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 892
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 894
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 893
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 895
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 897
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 896
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 898
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 900
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 899
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 901
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_COLLECTOR] =
    {
#line 902
        .trainerName = _("Johan"),
#line 903
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 904
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 906
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 907
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 909
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 911
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 910
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 912
            .species = SPECIES_RALTS,
#line 912
            .gender = TRAINER_MON_FEMALE,
#line 914
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 913
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 914
                MOVE_CONFUSION,
                MOVE_DRAINING_KISS,
                MOVE_DOUBLE_TEAM,
            },
            },
        },
    },
#line 918
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_TWINS] =
    {
#line 919
        .trainerName = _("Pibi & Jay"),
#line 920
        .trainerClass = TRAINER_CLASS_TWINS,
#line 921
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 922
F_TRAINER_FEMALE | 
#line 923
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 924
        .doubleBattle = TRUE,
#line 925
        .aiFlags = AI_FLAG_CHEESE_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 927
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 929
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 928
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 929
                MOVE_FAIRY_WIND,
                MOVE_POISON_POWDER,
                MOVE_SLEEP_POWDER,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 934
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 937
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 935
            .ability = ABILITY_TECHNICIAN,
#line 936
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 937
                MOVE_THIEF,
                MOVE_ECHOED_VOICE,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 941
    [DIFFICULTY_NORMAL][TRAINER_ROUTE8_BLACKBELT] =
    {
#line 942
        .trainerName = _("Soho"),
#line 943
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 944
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 946
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 947
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 949
            .species = SPECIES_PANCHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 951
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 950
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 952
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 954
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 953
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 955
    [DIFFICULTY_NORMAL][TRAINER_OCHRE_VALE_POKECENTRE_MAGMA_GRUNT] =
    {
#line 956
        .trainerName = _("Evan"),
#line 957
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 958
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 960
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 961
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 963
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 965
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 964
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 966
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 968
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 967
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 969
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_YOUNGSTER] =
    {
#line 970
        .trainerName = _("Taylor"),
#line 971
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 972
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 974
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 975
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 977
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 979
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 978
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 980
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 982
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 981
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 983
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 985
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 984
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 986
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_COUPLE] =
    {
#line 987
        .trainerName = _("Amy & Luke"),
#line 988
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 989
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 991
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 992
        .doubleBattle = TRUE,
#line 993
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 995
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 997
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 996
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 998
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1000
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 999
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1001
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1003
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1002
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1004
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1006
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1005
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1007
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_RUNNERF] =
    {
#line 1008
        .trainerName = _("Leila"),
#line 1009
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 1010
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 1011
F_TRAINER_FEMALE | 
#line 1012
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1013
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1015
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1016
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1018
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1020
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1019
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1021
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_RUNNERM] =
    {
#line 1022
        .trainerName = _("Matt"),
#line 1023
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 1024
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 1026
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1027
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1029
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1031
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1030
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1032
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1034
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1033
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1035
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1037
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1036
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1038
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_LADY] =
    {
#line 1039
        .trainerName = _("Cordelia"),
#line 1040
        .trainerClass = TRAINER_CLASS_LADY,
#line 1041
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1042
F_TRAINER_FEMALE | 
#line 1043
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1044
        .items = { ITEM_FULL_RESTORE },
#line 1045
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1047
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1049
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1048
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1050
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1052
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1051
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1053
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1055
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1054
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1056
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1058
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1057
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1059
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1061
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1060
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1062
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_TUBERM] =
    {
#line 1063
        .trainerName = _("Kyle"),
#line 1064
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1065
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 1067
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1068
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1070
            .species = SPECIES_SHELLOS_EAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1072
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1071
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1073
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1075
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1074
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1076
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_TUBERF] =
    {
#line 1077
        .trainerName = _("Kerry"),
#line 1078
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1079
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 1080
F_TRAINER_FEMALE | 
#line 1081
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1082
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1084
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1086
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1085
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1087
            .species = SPECIES_NIDORINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1089
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1088
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1090
    [DIFFICULTY_NORMAL][TRAINER_ROUTE9_FISHERMAN] =
    {
#line 1091
        .trainerName = _("Leonard"),
#line 1092
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1093
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1095
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1096
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1098
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1100
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1099
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1101
            .species = SPECIES_SKRELP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1103
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1102
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1104
            .species = SPECIES_FRILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1105
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1107
    [DIFFICULTY_NORMAL][TRAINER_ROUTE5_EXPERT] =
    {
#line 1108
        .trainerName = _("Gergino"),
#line 1109
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1110
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 1112
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1113
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1115
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1117
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1116
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1118
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1120
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1119
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1121
    [DIFFICULTY_NORMAL][TRAINER_ROUTE10_HIKER] =
    {
#line 1122
        .trainerName = _("Rictor"),
#line 1123
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1124
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 1126
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1127
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1129
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1131
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1130
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1132
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1134
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1133
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1135
    [DIFFICULTY_NORMAL][TRAINER_ROUTE10_YOUNGSTER] =
    {
#line 1136
        .trainerName = _("Henry"),
#line 1137
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 1138
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 1140
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1141
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1143
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1145
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1144
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1146
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1147
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1149
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1151
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1150
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1152
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_HIKER] =
    {
#line 1153
        .trainerName = _("Hugh"),
#line 1154
        .trainerClass = TRAINER_CLASS_HIKER,
#line 1155
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 1157
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1158
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1160
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1162
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1161
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1163
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1165
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1164
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1166
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1168
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1167
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1169
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_PICNICKER] =
    {
#line 1170
        .trainerName = _("Rayleigh"),
#line 1171
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1172
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 1173
F_TRAINER_FEMALE | 
#line 1174
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1175
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1177
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1178
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1180
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1182
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1181
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1183
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_GUITARIST] =
    {
#line 1184
        .trainerName = _("Kurt"),
#line 1185
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 1186
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 1188
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1189
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1191
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1193
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1192
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1194
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1195
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1197
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BUG_CATCHER] =
    {
#line 1198
        .trainerName = _("Bryan"),
#line 1199
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1200
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1202
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1203
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1205
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1207
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1206
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1208
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1210
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1209
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1211
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1212
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1214
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1216
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1215
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1217
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_FISHERMAN] =
    {
#line 1218
        .trainerName = _("Oscar"),
#line 1219
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1220
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1222
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1223
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1225
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1226
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1228
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BLACKBELT] =
    {
#line 1229
        .trainerName = _("Ian"),
#line 1230
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 1231
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 1233
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1234
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1236
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1238
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1237
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1239
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1240
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1242
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_BATTLEGIRL] =
    {
#line 1243
        .trainerName = _("Elise"),
#line 1244
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 1245
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 1246
F_TRAINER_FEMALE | 
#line 1247
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1248
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1250
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1251
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1253
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1255
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1254
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1256
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_EXPERTF] =
    {
#line 1257
        .trainerName = _("Deborah"),
#line 1258
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1259
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 1260
F_TRAINER_FEMALE | 
#line 1261
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1262
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1264
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1268
            .ev = TRAINER_PARTY_EVS(228, 0, 236, 12, 32, 0),
#line 1270
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 1265
            .ability = ABILITY_HEALER,
#line 1266
            .lvl = 24,
#line 1269
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 1267
            .teraType = TYPE_NORMAL,
            .moves = {
#line 1271
                MOVE_SOFT_BOILED,
                MOVE_HEAL_PULSE,
                MOVE_ICY_WIND,
                MOVE_DAZZLING_GLEAM,
            },
            },
        },
    },
#line 1276
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_EXPERTM] =
    {
#line 1277
        .trainerName = _("Dale"),
#line 1278
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1279
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 1281
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1282
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1284
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1288
            .ev = TRAINER_PARTY_EVS(248, 248, 0, 4, 0, 0),
#line 1290
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1285
            .ability = ABILITY_THICK_FAT,
#line 1286
            .lvl = 24,
#line 1289
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 1287
            .teraType = TYPE_NORMAL,
            .moves = {
#line 1290
                MOVE_HEAVY_SLAM,
                MOVE_CRUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 1295
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_AQUA_GRUNT1] =
    {
#line 1296
        .trainerName = _("Jeremy"),
#line 1297
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 1298
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1300
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1301
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1303
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1304
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1306
            .species = SPECIES_SHELLOS_EAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1308
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1307
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1309
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_AQUA_GRUNT2] =
    {
#line 1310
        .trainerName = _("Charles"),
#line 1311
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 1312
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1314
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1315
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1317
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1319
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1318
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1320
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1322
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1321
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1323
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_AQUA_GRUNT3] =
    {
#line 1324
        .trainerName = _("Liam"),
#line 1325
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 1326
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1328
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1329
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1331
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1332
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1334
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1336
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1335
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1337
    [DIFFICULTY_NORMAL][TRAINER_QUIET_GROVE_ADMIN] =
    {
#line 1338
        .trainerName = _("Sayla"),
#line 1339
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 1340
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 1341
F_TRAINER_FEMALE | 
#line 1342
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 1343
        .aiFlags = AI_FLAG_RIVAL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1345
            .species = SPECIES_CLAMPERL,
#line 1345
            .gender = TRAINER_MON_FEMALE,
#line 1347
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1346
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1347
                MOVE_WHIRLPOOL,
                MOVE_SUPERSONIC,
            },
            },
            {
#line 1350
            .species = SPECIES_FRILLISH,
#line 1350
            .gender = TRAINER_MON_FEMALE,
#line 1353
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1352
            .ability = ABILITY_CURSED_BODY,
#line 1351
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1353
                MOVE_ABSORB,
                MOVE_POISON_STING,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1357
            .species = SPECIES_SEEL,
#line 1357
            .gender = TRAINER_MON_FEMALE,
#line 1359
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1358
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1359
                MOVE_HEADBUTT,
                MOVE_ICY_WIND,
                MOVE_ICE_SHARD,
                MOVE_LICK,
            },
            },
        },
    },
#line 1364
    [DIFFICULTY_NORMAL][TRAINER_ROUTE10_MAGMA_GRUNT] =
    {
#line 1365
        .trainerName = _("Malcolm"),
#line 1366
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1367
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1369
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1370
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1372
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1374
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1373
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1375
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1377
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1376
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1378
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1379
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1381
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1383
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1382
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1384
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT1] =
    {
#line 1385
        .trainerName = _("Fred"),
#line 1386
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1387
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1389
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1390
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1392
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1394
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1393
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1395
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT2] =
    {
#line 1396
        .trainerName = _("Stacy"),
#line 1397
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1398
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1399
F_TRAINER_FEMALE | 
#line 1400
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1401
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1403
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1405
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1404
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1406
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1408
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1407
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1409
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT3] =
    {
#line 1410
        .trainerName = _("Alec"),
#line 1411
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1412
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1414
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1415
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1417
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1419
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1418
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1420
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1422
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1421
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1423
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT4] =
    {
#line 1424
        .trainerName = _("Harold"),
#line 1425
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1426
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1428
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1429
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1431
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1432
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1434
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1435
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1437
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1439
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1438
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1440
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT5] =
    {
#line 1441
        .trainerName = _("Ricky"),
#line 1442
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1443
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1445
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1446
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1448
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1449
            .ability = ABILITY_SIMPLE,
#line 1451
            .lvl = 21,
#line 1450
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1452
                MOVE_HEAT_WAVE,
                MOVE_TACKLE,
                MOVE_STOCKPILE,
            },
            },
            {
#line 1456
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1460
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1457
            .ability = ABILITY_FLAME_BODY,
#line 1459
            .lvl = 21,
#line 1458
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1460
                MOVE_FLAMETHROWER,
                MOVE_SMOG,
                MOVE_YAWN,
            },
            },
        },
    },
#line 1464
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT6] =
    {
#line 1465
        .trainerName = _("Bessa"),
#line 1466
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1467
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1468
F_TRAINER_FEMALE | 
#line 1469
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1470
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1472
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1473
            .ability = ABILITY_WEAK_ARMOR,
#line 1475
            .lvl = 24,
#line 1474
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1476
                MOVE_ROCK_SLIDE,
                MOVE_BIND,
                MOVE_DRAGON_BREATH,
                MOVE_CURSE,
            },
            },
        },
    },
#line 1481
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_GRUNT7] =
    {
#line 1482
        .trainerName = _("Carla"),
#line 1483
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1484
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1485
F_TRAINER_FEMALE | 
#line 1486
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1487
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1489
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1491
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1490
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1492
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1494
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1493
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1494
                MOVE_WILL_O_WISP,
                MOVE_EMBER,
                MOVE_QUICK_ATTACK,
                MOVE_DISABLE,
            },
            },
            {
#line 1499
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1501
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1500
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1502
    [DIFFICULTY_NORMAL][TRAINER_SCORCHED_CHAMBERS_MAGMA_ADMIN] =
    {
#line 1503
        .trainerName = _("Terrance"),
#line 1504
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 1505
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 1507
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1508
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1510
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1513
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1512
            .ability = ABILITY_DROUGHT,
#line 1511
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1513
                MOVE_PROTECT,
                MOVE_LAVA_PLUME,
                MOVE_SMOKESCREEN,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 1518
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1519
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1520
                MOVE_ROCK_SLIDE,
                MOVE_FLAMETHROWER,
                MOVE_YAWN,
            },
            },
            {
#line 1524
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1527
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1526
            .ability = ABILITY_FLAME_BODY,
#line 1525
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1527
                MOVE_CONFUSE_RAY,
                MOVE_HEX,
                MOVE_HEAT_WAVE,
                MOVE_SMOG,
            },
            },
        },
    },
#line 1532
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_PICNICKER] =
    {
#line 1533
        .trainerName = _("Nadia"),
#line 1534
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1535
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 1536
F_TRAINER_FEMALE | 
#line 1537
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1538
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1540
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1542
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1541
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1543
            .species = SPECIES_SHELLOS_EAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1545
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1544
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1546
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_BUG_CATCHER] =
    {
#line 1547
        .trainerName = _("Barney"),
#line 1548
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1549
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1551
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1552
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1554
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1556
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1555
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1557
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1559
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1558
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1560
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_PSYCHIC] =
    {
#line 1561
        .trainerName = _("EDWARD"),
#line 1562
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 1563
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 1565
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1566
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1568
            .species = SPECIES_SOLOSIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1570
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1569
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1571
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1573
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1572
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1574
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_BUG_MANIAC] =
    {
#line 1575
        .trainerName = _("Edwardo"),
#line 1576
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 1577
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 1579
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1580
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1582
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1584
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1583
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1585
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_NINJA_BOY] =
    {
#line 1586
        .trainerName = _("Yorushi"),
#line 1587
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 1588
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 1590
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1591
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1593
            .species = SPECIES_TYROGUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1595
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1594
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1596
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1598
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1597
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1599
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_BIRD_KEEPER] =
    {
#line 1600
        .trainerName = _("Albero"),
#line 1601
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 1602
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 1604
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1605
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1607
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1610
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1609
            .ability = ABILITY_DRIZZLE,
#line 1608
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1611
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1613
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1612
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1614
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1616
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1615
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1617
    [DIFFICULTY_NORMAL][TRAINER_ROUTE6_BEAUTY] =
    {
#line 1618
        .trainerName = _("Rosanne"),
#line 1619
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1620
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1621
F_TRAINER_FEMALE | 
#line 1622
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1623
        .doubleBattle = FALSE,
#line 1624
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1626
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1629
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1627
            .ability = ABILITY_HUGE_POWER,
#line 1628
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1630
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1632
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1631
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1634
    [DIFFICULTY_NORMAL][RIVAL_EVELYNN_1] =
    {
#line 1635
        .trainerName = _("Evelynn"),
#line 1636
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1637
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 1638
F_TRAINER_FEMALE | 
#line 1639
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1640
        .items = { ITEM_SUPER_POTION },
#line 1641
        .aiFlags = AI_FLAG_RIVAL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1643
            .species = SPECIES_ROSELIA,
#line 1643
            .gender = TRAINER_MON_FEMALE,
#line 1646
            .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
#line 1648
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1645
            .ability = ABILITY_POISON_POINT,
#line 1644
            .lvl = 16,
#line 1647
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1648
                MOVE_MAGICAL_LEAF,
                MOVE_POISON_STING,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 1653
            .species = SPECIES_VENIPEDE,
#line 1653
            .gender = TRAINER_MON_FEMALE,
#line 1656
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 1658
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1655
            .ability = ABILITY_SPEED_BOOST,
#line 1654
            .lvl = 16,
#line 1657
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1658
                MOVE_ROLLOUT,
                MOVE_POISON_TAIL,
                MOVE_BUG_BITE,
                MOVE_PROTECT,
            },
            },
            {
#line 1663
            .species = SPECIES_MAWILE,
#line 1663
            .gender = TRAINER_MON_FEMALE,
#line 1666
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 1668
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1665
            .ability = ABILITY_INTIMIDATE,
#line 1664
            .lvl = 18,
#line 1667
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1668
                MOVE_BITE,
                MOVE_SUCKER_PUNCH,
                MOVE_FAIRY_WIND,
            },
            },
        },
    },
