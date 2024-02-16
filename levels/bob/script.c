#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x5, _group1_mio0SegmentRomStart, _group1_mio0SegmentRomEnd), 
	LOAD_MIO0(0x6, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_NIGHT_SKYBOX, EDSkyboxNight_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RED_NIGHT_SKYBOX, EDSkyboxRedNight_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0xF0, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0xF1, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_RED_COIN_NO_SHADOW, -1600, 0, 850, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN_NO_SHADOW, 1600, 0, 850, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN_NO_SHADOW, 0, 600, -4500, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_TRANSPARENT_STAR, 0, 0, -800, 0, 0, 0, 0x00000000, bhvRedCoinStarMarker),
		OBJECT(MODEL_NONE, 0, 300, -800, 0, 0, 0, 0x00000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, 0, 200, 1925, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 0, 0, 1925),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_SPIDER_DANCE),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, bob_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0xF0, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0xF1, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_TRANSPARENT_STAR, 0, 0, -1000, 0, 0, 0, 0x00000000, bhvRedCoinStarMarker),
		OBJECT(MODEL_NONE, 0, 500, -1000, 0, 0, 0, (1 << 24), bhvHiddenRedCoinStar),
		OBJECT(MODEL_NIGHT_SKYBOX, 0, 0, 0, 0, 0, 0, 0x00000000, bhvCustomSkybox),
		OBJECT(MODEL_NONE, 0, 200, -2275, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 0, 0, -2275),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SPOOKY),
		TERRAIN_TYPE(TERRAIN_SPOOKY),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, bob_area_3),
		WARP_NODE(0x0A, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0xF0, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0xF1, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_RED_COIN_NO_SHADOW, -1788, 400, 1800, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_TRANSPARENT_STAR, 0, 0, -587, 0, 0, 0, 0x00000000, bhvRedCoinStarMarker),
		OBJECT(MODEL_NONE, 0, 900, -587, 0, 0, 0, (2 << 24), bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, 0, 200, 800, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 0, 0, 800),
		TERRAIN(bob_area_3_collision),
		MACRO_OBJECTS(bob_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_GHOSTLY_GALAXY),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(4, bob_area_4),
		WARP_NODE(0x0A, LEVEL_BOB, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0xF0, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0xF1, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_RED_COIN_NO_SHADOW, 2800, 300, 0, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN_NO_SHADOW, 0, 400, -2300, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN_NO_SHADOW, -2600, 0, -2300, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN_NO_SHADOW, -1200, 500, 3100, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_TRANSPARENT_STAR, 0, 0, 800, 0, 0, 0, 0x00000000, bhvRedCoinStarMarker),
		OBJECT(MODEL_NONE, 0, 300, 800, 0, 0, 0, (3 << 24), bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, 0, 200, 2951, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 0, 0, 2951),
		TERRAIN(bob_area_4_collision),
		MACRO_OBJECTS(bob_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_SPIDER_DANCE),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(5, bob_area_5),
		WARP_NODE(0x0A, LEVEL_BOB, 0x05, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0xF0, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0xF1, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_RED_COIN_NO_SHADOW, -700, 1000, 1900, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_TRANSPARENT_STAR, 1800, 0, -1900, 0, 0, 0, 0x00000000, bhvRedCoinStarMarker),
		OBJECT(MODEL_NONE, 1800, 300, -1900, 0, 0, 0, (4 << 24), bhvHiddenRedCoinStar),
		OBJECT(MODEL_RED_NIGHT_SKYBOX, 0, 0, 0, 0, 0, 0, 0x00000000, bhvCustomSkybox),
		OBJECT(MODEL_NONE, -1800, 200, -1900, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -1800, 0, -1900),
		TERRAIN(bob_area_5_collision),
		MACRO_OBJECTS(bob_area_5_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_PIZZASCARE),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -1800, 0, -1900),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
