#include "src/game/envfx_snow.h"

const GeoLayout jrb_area_3_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, jrb_dl__Snowflake_mesh_layer_1),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 0, -180, 0, jrb_dl__Snowflake_Visual_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout jrb_area_3[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 10000, 0, 20000, 10000, -100, 20000, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, jrb_area_3_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_SNOW_BLIZZARD, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
