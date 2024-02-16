#include "src/game/envfx_snow.h"

const GeoLayout wf_area_2_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, -50, 0, wf_dl__Bat_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, -5000, 0, wf_dl__Bat_Visual_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wf_dl__Bat_Visual_mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wf_dl__Bat_Visual_mesh_layer_5),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wf_area_2[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 60000, 0, 10000, 60000, -100, 10000, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, wf_area_2_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
