class polygonet_state : public driver_device
{
public:
	polygonet_state(running_machine &machine, const driver_device_config_base &config)
		: driver_device(machine, config) { }

	/* 68k-side shared ram */
	UINT32* shared_ram;

	UINT16* dsp56k_p_mirror;
	UINT16* dsp56k_p_8000;
	UINT16* dsp56k_bank00_ram;
	UINT16* dsp56k_bank01_ram;
	UINT16* dsp56k_bank02_ram;
	UINT16* dsp56k_shared_ram_16;
	UINT16* dsp56k_bank04_ram;
	int cur_sound_region;

	direct_update_delegate dsp56k_update_handler;

	/* TTL text plane stuff */
	int ttl_gfx_index;
	tilemap_t *ttl_tilemap;
	tilemap_t *roz_tilemap;
	UINT16 ttl_vram[0x800];
	UINT16 roz_vram[0x800];
};

/*----------- defined in video/plygonet.c -----------*/

VIDEO_START( polygonet );
VIDEO_UPDATE( polygonet );

READ32_HANDLER( polygonet_ttl_ram_r );
WRITE32_HANDLER( polygonet_ttl_ram_w );
READ32_HANDLER( polygonet_roz_ram_r );
WRITE32_HANDLER( polygonet_roz_ram_w );
