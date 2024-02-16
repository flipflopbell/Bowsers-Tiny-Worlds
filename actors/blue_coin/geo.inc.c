#include "src/game/envfx_snow.h"

const GeoLayout blue_coin_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 50),
		GEO_OPEN_NODE(),
			GEO_SWITCH_CASE(8, geo_switch_anim_state),
			GEO_OPEN_NODE(),
				GEO_NODE_START(),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_ALPHA, blue_coin_000_displaylist_mesh_layer_4),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, blue_coin_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout blue_coin_no_shadow_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_OPEN_NODE(),
			GEO_SWITCH_CASE(8, geo_switch_anim_state),
			GEO_OPEN_NODE(),
				GEO_NODE_START(),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_ALPHA, blue_coin_000_displaylist_mesh_layer_4),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, blue_coin_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
