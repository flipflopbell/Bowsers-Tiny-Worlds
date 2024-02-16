// !skybox.inc.c

void bhv_custom_skybox_loop(void) {
    cur_obj_scale(30.0),
    o->activeFlags |= ACTIVE_FLAG_INITIATED_TIME_STOP; // Important for cutscenes (Thanks Coolio)
    o->oPosX = gLakituState.pos[0];
    o->oPosY = gLakituState.pos[1];
    o->oPosZ = gLakituState.pos[2];
}