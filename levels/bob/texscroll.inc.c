void scroll_bob_dl__Skull_Visual_mesh_layer_5_vtx_1() {
	int i = 0;
	int count = 4;
	int width = 128 * 0x20;
	int height = 128 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl__Skull_Visual_mesh_layer_5_vtx_1);

	deltaX = (int)(0.05000000074505806 * 0x20) % width;
	deltaY = (int)(0.05000000074505806 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_gfx_mat_bob_dl_water_2() {
	Gfx *mat = segmented_to_virtual(mat_bob_dl_water_2);


	shift_t(mat, 10, PACK_TILESIZE(0, 1));
	shift_s(mat, 12, PACK_TILESIZE(0, 1));
	shift_t_down(mat, 12, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_bob_dl_lava_2() {
	Gfx *mat = segmented_to_virtual(mat_bob_dl_lava_2);


	shift_s(mat, 14, PACK_TILESIZE(0, 1));
	shift_t_down(mat, 14, PACK_TILESIZE(0, 1));
	shift_s(mat, 16, PACK_TILESIZE(0, 1));
	shift_t(mat, 16, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_bob_dl_fancy_cloud_layer1() {
	Gfx *mat = segmented_to_virtual(mat_bob_dl_fancy_cloud_layer1);


	shift_s(mat, 10, PACK_TILESIZE(0, 1));
	shift_t_down(mat, 10, PACK_TILESIZE(0, 1));
	shift_s(mat, 12, PACK_TILESIZE(0, 1));
	shift_t(mat, 12, PACK_TILESIZE(0, 1));

};

void scroll_bob() {
	scroll_bob_dl__Skull_Visual_mesh_layer_5_vtx_1();
	scroll_gfx_mat_bob_dl_water_2();
	scroll_gfx_mat_bob_dl_lava_2();
	scroll_gfx_mat_bob_dl_fancy_cloud_layer1();
};
