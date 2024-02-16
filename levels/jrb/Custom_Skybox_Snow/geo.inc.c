#include "src/game/envfx_snow.h"

const GeoLayout EDSkyboxSnow_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_FORCE, Custom_Skybox_Snow__Skybox_004_mesh_layer_0),
		GEO_DISPLAY_LIST(LAYER_FORCE, Custom_Skybox_Snow_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
