void scroll_gfx_mat_wf_dl_water_3() {
	Gfx *mat = segmented_to_virtual(mat_wf_dl_water_3);
	static int interval_tex_wf_dl_water_3 = 2;
	static int cur_interval_tex_wf_dl_water_3 = 2;


	if (--cur_interval_tex_wf_dl_water_3 <= 0) {
		shift_t_down(mat, 10, PACK_TILESIZE(0, 1));
		cur_interval_tex_wf_dl_water_3 = interval_tex_wf_dl_water_3;
	}
	shift_t_down(mat, 12, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_wf_dl_fire() {
	Gfx *mat = segmented_to_virtual(mat_wf_dl_fire);
	static int interval_tex_wf_dl_fire = 2;
	static int cur_interval_tex_wf_dl_fire = 2;


	if (--cur_interval_tex_wf_dl_fire <= 0) {
		shift_s_down(mat, 10, PACK_TILESIZE(0, 1));
		cur_interval_tex_wf_dl_fire = interval_tex_wf_dl_fire;
	}
	shift_s(mat, 12, PACK_TILESIZE(0, 1));

};

void scroll_wf() {
	scroll_gfx_mat_wf_dl_water_3();
	scroll_gfx_mat_wf_dl_fire();
};
