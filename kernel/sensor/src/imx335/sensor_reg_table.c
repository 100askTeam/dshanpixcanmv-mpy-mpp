static const k_sensor_reg imx335_mipi_2lane_raw10_1920x1080_30fps_regs[] = {
    { 0x3000, 0x01 },
    { 0x3002, 0x00 },
    { 0x3a01, 0x01 }, // 2 lane
    { 0x300c, 0x3b }, // lane 24MHz
    { 0x300d, 0x2a },
    { 0x314c, 0xc6 },
    { 0x314d, 0x00 },
    { 0x315a, 0x02 },
    { 0x3168, 0xa0 },
    { 0x316a, 0x7e },
    { 0x319e, 0x01 },    //1188Mbps
    { 0x3a18, 0x8f }, // mipi phy
    { 0x3a19, 0x00 },
    { 0x3a1a, 0x4f },
    { 0x3a1b, 0x00 },
    { 0x3a1c, 0x47 },
    { 0x3a1d, 0x00 },
    { 0x3a1e, 0x37 },
    { 0x3a1f, 0x01 },
    { 0x3a20, 0x4f },
    { 0x3a21, 0x00 },
    { 0x3a22, 0x87 },
    { 0x3a23, 0x00 },
    { 0x3a24, 0x4f },
    { 0x3a25, 0x00 },
    { 0x3a26, 0x7f },
    { 0x3a27, 0x00 },
    { 0x3a28, 0x3f },
    { 0x3a29, 0x00 },
    { 0x3050, 0x00 }, // AD bit, 12bit ==> 0x00, 10bit
    { 0x319d, 0x00 }, // output bit, 12bit ==>0x00, 10bit
    { 0x341c, 0xff }, // AD bit, 12bit ==>0xff, 10bit
    { 0x341d, 0x01 }, // AD bit, 12bit ==>0x01, 10bit
    { 0x3018, 0x04 }, // window mode
    { 0x3300, 0x00 }, // scan mode or binning
    { 0x3302, 0x10 }, //black level
    { 0x3199, 0x00 }, // HADD VADD
    { 0x3030, 0x94 }, // V span max, VMAX = 4500
    { 0x3031, 0x11 },
    { 0x3032, 0x00 },
    { 0x3034, 0x26 }, // H span max, HMAX = 550
    { 0x3035, 0x02 },
    { 0x304c, 0x14 }, // V OB width
    { 0x304e, 0x00 }, // H dir inv
    { 0x304f, 0x00 }, // V dir inv
    { 0x3058, 0xac }, // shutter sweep time, 1000 ET Line
    { 0x3059, 0x0d },
    { 0x305a, 0x00 },
    { 0x30e8, 0x00 },
    { 0x30e9, 0x00 },
    { 0x3056, 0x48 }, // effective pixel line, y output size = 1096 line = 8 + 1080 +8
    { 0x3057, 0x04 },
    { 0x302c, 0x80 }, // crop mode H start, 672/2 + 48 = 384
    { 0x302d, 0x01 },
    { 0x302e, 0x98 }, // crop mode H size, 1944 = 12 + 1920 +12
    { 0x302f, 0x07 },
    { 0x3072, 0x28 }, // crop mode OB V size
    { 0x3073, 0x00 },
    { 0x3074, 0x60 }, // crop mode UL V start
    { 0x3075, 0x02 },
    { 0x3076, 0x90 }, // crop mode V size,
    { 0x3077, 0x08 },
    { 0x30c6, 0x12 }, // crop mode black offset
    { 0x30c7, 0x00 },
    { 0x30ce, 0x64 }, // crop mode UNRD_LINE_MAX
    { 0x30cf, 0x00 },
    { 0x30d8, 0xc0 }, // crop mode UNREAD_ED_ADR
    { 0x30d9, 0x0b },
    { REG_NULL, 0x00 }
};

static const k_sensor_reg imx335_mipi_2lane_raw12_1920x1080_30fps_mclk_24m_regs[] = {
    { 0x3000, 0x01 },
    { 0x3002, 0x00 },
    { 0x3a01, 0x01 }, // 2 lane
    { 0x300c, 0x3b }, // lane 24MHz
    { 0x300d, 0x2a },
    { 0x314c, 0xc6 },
    { 0x314d, 0x00 },
    { 0x315a, 0x02 },
    { 0x3168, 0xa0 },
    { 0x316a, 0x7e },
    { 0x319e, 0x01 },    //1188Mbps
    { 0x3a18, 0x8f }, // mipi phy
    { 0x3a19, 0x00 },
    { 0x3a1a, 0x4f },
    { 0x3a1b, 0x00 },
    { 0x3a1c, 0x47 },
    { 0x3a1d, 0x00 },
    { 0x3a1e, 0x37 },
    { 0x3a1f, 0x01 },
    { 0x3a20, 0x4f },
    { 0x3a21, 0x00 },
    { 0x3a22, 0x87 },
    { 0x3a23, 0x00 },
    { 0x3a24, 0x4f },
    { 0x3a25, 0x00 },
    { 0x3a26, 0x7f },
    { 0x3a27, 0x00 },
    { 0x3a28, 0x3f },
    { 0x3a29, 0x00 },
    { 0x3018, 0x04 }, // window mode
    { 0x3300, 0x00 }, // scan mode or binning
    { 0x3302, 0x10 }, //black level
    { 0x3199, 0x00 }, // HADD VADD
    { 0x3030, 0x94 }, // V span max
    { 0x3031, 0x11 },
    { 0x3032, 0x00 },
    { 0x3034, 0x26 }, // H span max
    { 0x3035, 0x02 },
    { 0x304c, 0x14 }, // V OB width
    { 0x304e, 0x00 }, // H dir inv
    { 0x304f, 0x00 }, // V dir inv
    { 0x3058, 0xac }, // shutter sweep time, 1000 ET Line
    { 0x3059, 0x0d },
    { 0x305a, 0x00 },
    { 0x30e8, 0x00 },
    { 0x30e9, 0x00 },
    { 0x3056, 0x48 }, // effective pixel line
    { 0x3057, 0x04 },
    { 0x302c, 0x80 }, // crop mode H start
    { 0x302d, 0x01 },
    { 0x302e, 0x98 }, // crop mode H size, 1944
    { 0x302f, 0x07 },
    { 0x3072, 0x28 }, // crop mode OB V size
    { 0x3073, 0x00 },
    { 0x3074, 0x60 }, // crop mode UL V start
    { 0x3075, 0x02 },
    { 0x3076, 0x90 }, // crop mode V size, 2192
    { 0x3077, 0x08 },
    { 0x30c6, 0x12 }, // crop mode black offset
    { 0x30c7, 0x00 },
    { 0x30ce, 0x64 }, // crop mode UNRD_LINE_MAX
    { 0x30cf, 0x00 },
    { 0x30d8, 0xc0 }, // crop mode UNREAD_ED_ADR
    { 0x30d9, 0x0b },
    { REG_NULL, 0x00 }
};


static const k_sensor_reg imx335_mipi_2lane_raw12_1920x1080_30fps_mclk_74_25_regs[] = {
    { 0x3000, 0x01 },
    { 0x3002, 0x00 },
    { 0x3a01, 0x01 }, // 2 lane
    { 0x300c, 0xb6 }, // lane 24MHz
    { 0x300d, 0x7f },
    { 0x314c, 0x80 },
    { 0x314d, 0x00 },
    { 0x315a, 0x03 },
    { 0x3168, 0x68 },
    { 0x316a, 0x7f },
    { 0x319e, 0x01 },    //1188Mbps
    { 0x3a18, 0x8f }, // mipi phy
    { 0x3a19, 0x00 },
    { 0x3a1a, 0x4f },
    { 0x3a1b, 0x00 },
    { 0x3a1c, 0x47 },
    { 0x3a1d, 0x00 },
    { 0x3a1e, 0x37 },
    { 0x3a1f, 0x01 },
    { 0x3a20, 0x4f },
    { 0x3a21, 0x00 },
    { 0x3a22, 0x87 },
    { 0x3a23, 0x00 },
    { 0x3a24, 0x4f },
    { 0x3a25, 0x00 },
    { 0x3a26, 0x7f },
    { 0x3a27, 0x00 },
    { 0x3a28, 0x3f },
    { 0x3a29, 0x00 },
    { 0x3018, 0x04 }, // window mode
    { 0x3300, 0x00 }, // scan mode or binning
    { 0x3302, 0x10 }, //black level
    { 0x3199, 0x00 }, // HADD VADD
    { 0x3030, 0x94 }, // V span max
    { 0x3031, 0x11 },
    { 0x3032, 0x00 },
    { 0x3034, 0x26 }, // H span max
    { 0x3035, 0x02 },
    { 0x304c, 0x14 }, // V OB width
    { 0x304e, 0x00 }, // H dir inv
    { 0x304f, 0x00 }, // V dir inv
    { 0x3058, 0xac }, // shutter sweep time, 1000 ET Line
    { 0x3059, 0x0d },
    { 0x305a, 0x00 },
    { 0x30e8, 0x00 },
    { 0x30e9, 0x00 },
    { 0x3056, 0x48 }, // effective pixel line
    { 0x3057, 0x04 },
    { 0x302c, 0x80 }, // crop mode H start
    { 0x302d, 0x01 },
    { 0x302e, 0x98 }, // crop mode H size, 1944
    { 0x302f, 0x07 },
    { 0x3072, 0x28 }, // crop mode OB V size
    { 0x3073, 0x00 },
    { 0x3074, 0x60 }, // crop mode UL V start
    { 0x3075, 0x02 },
    { 0x3076, 0x90 }, // crop mode V size, 2192
    { 0x3077, 0x08 },
    { 0x30c6, 0x12 }, // crop mode black offset
    { 0x30c7, 0x00 },
    { 0x30ce, 0x64 }, // crop mode UNRD_LINE_MAX
    { 0x30cf, 0x00 },
    { 0x30d8, 0xc0 }, // crop mode UNREAD_ED_ADR
    { 0x30d9, 0x0b },
    { REG_NULL, 0x00 }
};

static const k_sensor_reg imx335_mipi_2lane_raw12_2592x1944_30fps_mclk_24m_regs[] = {
    { 0x3000, 0x01 },
    { 0x3002, 0x00 },
    { 0x3a01, 0x01 }, // 2 lane
    { 0x300c, 0x3b }, // lane 24MHz
    { 0x300d, 0x2a },
    { 0x314c, 0xc6 },
    { 0x314d, 0x00 },
    { 0x315a, 0x02 },
    { 0x3168, 0xa0 },
    { 0x316a, 0x7e },
    { 0x319e, 0x01 },    //1188Mbps
    { 0x3a18, 0x8f }, // mipi phy
    { 0x3a19, 0x00 },
    { 0x3a1a, 0x4f },
    { 0x3a1b, 0x00 },
    { 0x3a1c, 0x47 },
    { 0x3a1d, 0x00 },
    { 0x3a1e, 0x37 },
    { 0x3a1f, 0x01 },
    { 0x3a20, 0x4f },
    { 0x3a21, 0x00 },
    { 0x3a22, 0x87 },
    { 0x3a23, 0x00 },
    { 0x3a24, 0x4f },
    { 0x3a25, 0x00 },
    { 0x3a26, 0x7f },
    { 0x3a27, 0x00 },
    { 0x3a28, 0x3f },
    { 0x3a29, 0x00 },
    { 0x3302, 0x10 }, //black level
    { 0x3058, 0xac }, // shutter sweep time, 1000 ET Line
    { 0x3059, 0x0d },
    { 0x305a, 0x00 },
    { 0x30e8, 0x00 },
    { 0x30e9, 0x00 },
    { REG_NULL, 0x00 }
};


static const k_sensor_reg imx335_mipi_2lane_raw12_2592x1944_30fps_mclk_74_25_regs[] = {
    { 0x3000, 0x01 },
    { 0x3002, 0x00 },
    { 0x3a01, 0x01 }, // 2 lane
    { 0x300c, 0xb6 }, // lane 24MHz
    { 0x300d, 0x7f },
    { 0x314c, 0x80 },
    { 0x314d, 0x00 },
    { 0x315a, 0x03 },
    { 0x3168, 0x68 },
    { 0x316a, 0x7f },
    { 0x319e, 0x01 },    //1188Mbps
    { 0x3a18, 0x8f }, // mipi phy
    { 0x3a19, 0x00 },
    { 0x3a1a, 0x4f },
    { 0x3a1b, 0x00 },
    { 0x3a1c, 0x47 },
    { 0x3a1d, 0x00 },
    { 0x3a1e, 0x37 },
    { 0x3a1f, 0x01 },
    { 0x3a20, 0x4f },
    { 0x3a21, 0x00 },
    { 0x3a22, 0x87 },
    { 0x3a23, 0x00 },
    { 0x3a24, 0x4f },
    { 0x3a25, 0x00 },
    { 0x3a26, 0x7f },
    { 0x3a27, 0x00 },
    { 0x3a28, 0x3f },
    { 0x3a29, 0x00 },
    { 0x3302, 0x10 }, //black level
    { 0x3058, 0xac }, // shutter sweep time, 1000 ET Line
    { 0x3059, 0x0d },
    { 0x305a, 0x00 },
    { 0x30e8, 0x00 },
    { 0x30e9, 0x00 },
    { REG_NULL, 0x00 }
};

static const k_sensor_reg imx335_mipi_4lane_raw10_2592x1940_30fps_regs[] = {
    { 0x3000, 0x01},
    { 0x3002, 0x01},
    { 0x3004, 0x04},
    { 0x3004, 0x00},
    //All pixel scan mode, A/D Conversion 10bit / Output 10 bit / 891 Mbps /30fps
    { 0x3018, 0x00},
    { 0x3030, 0x94},
    { 0x3031, 0x11},
    { 0x3032, 0x00},
    { 0x3034, 0x26},
    { 0x3035, 0x02},
    { 0x304c, 0x14},
    { 0x304e, 0x00},
    { 0x304f, 0x00},
    { 0x3050, 0x00},
    { 0x3056, 0xac},
    { 0x3057, 0x07},
    { 0x3072, 0x28},
    { 0x3073, 0x00},
    { 0x3074, 0xb0},
    { 0x3075, 0x00},
    { 0x3076, 0x58},
    { 0x3077, 0x0f},
    //All pixel
    { 0x3078, 0x01},
    { 0x3079, 0x02},
    { 0x307a, 0xff},
    { 0x307b, 0x02},
    { 0x307c, 0x00},
    { 0x307d, 0x00},
    { 0x307e, 0x00},
    { 0x307f, 0x00},
    { 0x3080, 0x01},
    { 0x3081, 0x02},
    { 0x3082, 0xff},
    { 0x3083, 0x02},
    { 0x3084, 0x00},
    { 0x3085, 0x00},
    { 0x3086, 0x00},
    { 0x3087, 0x00},
    { 0x30a4, 0x33},
    { 0x30a8, 0x10},
    { 0x30a9, 0x04},
    { 0x30ac, 0x00},
    { 0x30ad, 0x00},
    { 0x30b0, 0x10},
    { 0x30b1, 0x08},
    { 0x30b4, 0x00},
    { 0x30b5, 0x00},
    { 0x30b6, 0x00},
    { 0x30b7, 0x00},
    { 0x3112, 0x08},
    { 0x3113, 0x00},
    { 0x3116, 0x08},
    { 0x3117, 0x00},
    { 0x3199, 0x00},
    { 0x319d, 0x00},
    { 0x3300, 0x00},
    { 0x341c, 0xff},
    { 0x341d, 0x01},
    { 0x3a01, 0x03},
    { 0x3a18, 0x7f},
    { 0x3a19, 0x00},
    { 0x3a1a, 0x37},
    { 0x3a1b, 0x00},
    { 0x3a1c, 0x37},
    { 0x3a1d, 0x00},
    { 0x3a1e, 0xf7},
    { 0x3a1f, 0x00},
    { 0x3a20, 0x3f},
    { 0x3a21, 0x00},
    { 0x3a22, 0x6f},
    { 0x3a23, 0x00},
    { 0x3a24, 0x3f},
    { 0x3a25, 0x00},
    { 0x3a26, 0x5f},
    { 0x3a27, 0x00},
    { 0x3a28, 0x2f},
    { 0x3a29, 0x00},
    //----891Mbps/lane 24MHz
    { 0x300c, 0x3b},
    { 0x300d, 0x2a},
    { 0x314c, 0x29},
    { 0x314d, 0x01},
    { 0x315a, 0x06},
    { 0x3168, 0xa0},
    { 0x316a, 0x7e},
    { 0x319e, 0x02},
    { 0x3000, 0x00},
    { 0x3002, 0x00},
    { 0x3302, 0x10 }, //black level
    { 0x3058, 0xac }, // shutter sweep time, 1000 ET Line
    { 0x3059, 0x0d },
    { 0x305a, 0x00 },
    { 0x30e8, 0x00 },
    { 0x30e9, 0x00 },
    { REG_NULL, 0x00 }
};


static const k_sensor_reg imx335_mipi_4lane_raw12_2592x1944_30fps_mclk_74_25_regs[] = {    //891Mbps
    { 0x3000, 0x01 },
    { 0x3002, 0x00 },
    { 0x3a01, 0x03 }, // 4 lane
    { 0x300c, 0xb6 }, // lane 24MHz
    { 0x300d, 0x7f },
    { 0x314c, 0xC0 },
    { 0x314d, 0x00 },
    { 0x315a, 0x07 },
    { 0x3168, 0x68 },
    { 0x316a, 0x7F },
    { 0x319e, 0x02 },    //891Mbps
    { 0x3a18, 0x7f },     // mipi phy
    { 0x3a19, 0x00 },
    { 0x3a1a, 0x37 },
    { 0x3a1b, 0x00 },
    { 0x3a1c, 0x37 },
    { 0x3a1d, 0x00 },
    { 0x3a1e, 0xf7 },
    { 0x3a1f, 0x00 },
    { 0x3a20, 0x3f },
    { 0x3a21, 0x00 },
    { 0x3a22, 0x6f },
    { 0x3a23, 0x00 },
    { 0x3a24, 0x3f },
    { 0x3a25, 0x00 },
    { 0x3a26, 0x5f },
    { 0x3a27, 0x00 },
    { 0x3a28, 0x2f },
    { 0x3a29, 0x00 },
    { 0x3302, 0x10 }, //black level
    { 0x3058, 0xac }, // shutter sweep time, 1000 ET Line
    { 0x3059, 0x0d },
    { 0x30e8, 0x00 },
    { 0x30e9, 0x00 },
    { REG_NULL, 0x00 }
};


static const k_sensor_reg imx335_mipi_4lane_raw12_2592x1944_30fps_mclk_24m_regs[] = {    //891Mbps
    { 0x3000, 0x01 },
    { 0x3002, 0x00 },
    { 0x3a01, 0x03 }, // 4 lane
    { 0x300c, 0x3b }, // lane 24MHz
    { 0x300d, 0x2a },
    { 0x314c, 0x19 },
    { 0x314d, 0x01 },
    { 0x315a, 0x06 },
    { 0x3168, 0xa0 },
    { 0x316a, 0x7e },
    { 0x319e, 0x02 },    //891Mbps
    { 0x3a18, 0x7f },     // mipi phy
    { 0x3a19, 0x00 },
    { 0x3a1a, 0x37 },
    { 0x3a1b, 0x00 },
    { 0x3a1c, 0x37 },
    { 0x3a1d, 0x00 },
    { 0x3a1e, 0xf7 },
    { 0x3a1f, 0x00 },
    { 0x3a20, 0x3f },
    { 0x3a21, 0x00 },
    { 0x3a22, 0x6f },
    { 0x3a23, 0x00 },
    { 0x3a24, 0x3f },
    { 0x3a25, 0x00 },
    { 0x3a26, 0x5f },
    { 0x3a27, 0x00 },
    { 0x3a28, 0x2f },
    { 0x3a29, 0x00 },
    { 0x3302, 0x10 }, //black level
    { 0x3058, 0xac }, // shutter sweep time, 1000 ET Line
    { 0x3059, 0x0d },
    { 0x30e8, 0x00 },
    { 0x30e9, 0x00 },
    { REG_NULL, 0x00 }
};


static const k_sensor_reg imx335_mipi_4lane_raw10_dol_2x_regs[] = {
    { 0x3000, 0x01},
    { 0x3002, 0x01},
    { 0x3004, 0x04},
    { 0x3004, 0x00},
    //All pixel scan mode, A/D Conversion 10bit / Output 10 bit / 1188 Mbps /60fps
    { 0x3018, 0x00},
    { 0x3030, 0x8c}, //VMAX = 3980 = 0xf8c
    { 0x3031, 0x0f},	//0x0f
    { 0x3032, 0x00},

    //{ 0x3034, 0x13}, //30fps
    //{ 0x3035, 0x01},
    { 0x3034, 0x75}, //25fps, 0x175 = 373
    { 0x3035, 0x01},

    { 0x304c, 0x14},
    { 0x304e, 0x00},
    { 0x304f, 0x00},
    { 0x3050, 0x00},
    { 0x3056, 0xac},
    { 0x3057, 0x07},
    { 0x3072, 0x28},
    { 0x3073, 0x00},
    { 0x3074, 0xb0},
    { 0x3075, 0x00},
    { 0x3076, 0x58},
    { 0x3077, 0x0f},
    //All pixel
    //normal
    { 0x3078, 0x01},
    { 0x3079, 0x02},
    { 0x307a, 0xff},
    { 0x307b, 0x02},
    { 0x307c, 0x00},
    { 0x307d, 0x00},
    { 0x307e, 0x00},
    { 0x307f, 0x00},
    { 0x3080, 0x01},
    { 0x3081, 0x02},
    { 0x3082, 0xff},
    { 0x3083, 0x02},
    { 0x3084, 0x00},
    { 0x3085, 0x00},
    { 0x3086, 0x00},
    { 0x3087, 0x00},
    { 0x30a4, 0x33},
    { 0x30a8, 0x10},
    { 0x30a9, 0x04},
    { 0x30ac, 0x00},
    { 0x30ad, 0x00},
    { 0x30b0, 0x10},
    { 0x30b1, 0x08},
    { 0x30b4, 0x00},
    { 0x30b5, 0x00},
    { 0x30b6, 0x00},
    { 0x30b7, 0x00},
    { 0x3112, 0x08},
    { 0x3113, 0x00},
    { 0x3116, 0x08},
    { 0x3117, 0x00},
    //normal end
    { 0x3199, 0x00},
    { 0x319d, 0x00},
    { 0x3300, 0x00},
    { 0x341c, 0xff},
    { 0x341d, 0x01},
    { 0x3a01, 0x03},
    //phy timing
    { 0x3a18, 0x8f},
    { 0x3a19, 0x00},
    { 0x3a1a, 0x4f},
    { 0x3a1b, 0x00},
    { 0x3a1c, 0x47},
    { 0x3a1d, 0x00},
    { 0x3a1e, 0x37},
    { 0x3a1f, 0x01},
    { 0x3a20, 0x4f},
    { 0x3a21, 0x00},
    { 0x3a22, 0x87},
    { 0x3a23, 0x00},
    { 0x3a24, 0x4f},
    { 0x3a25, 0x00},
    { 0x3a26, 0x7f},
    { 0x3a27, 0x00},
    { 0x3a28, 0x3f},
    { 0x3a29, 0x00},
    //----1188Mbps/lane 24MHz inck
    { 0x300c, 0x3b},
    { 0x300d, 0x2a},
    { 0x314c, 0xc6},
    { 0x314d, 0x00},
    { 0x315a, 0x02},
    { 0x3168, 0xa0},
    { 0x316a, 0x7e},
    { 0x319e, 0x01},
    //start
    { 0x3000, 0x00},
    { 0x3002, 0x00},
    { 0x3302, 0x10}, //black level
    { 0x3058, (IMX335_VMAX_DOL2*2 - 1024)&0xFF}, //SHR0, 1000 ET Line, 3980*2 - 1024 = 0x1b18
    { 0x3059, (IMX335_VMAX_DOL2*2 - 1024)>>8},
    { 0x305a, 0x00},
    { 0x305c, (DOL2_RHS1 - (1024>>4))&0xFF}, //SHR1, 1024/16 ET Line, RHS1 - 64
    { 0x305d, (DOL2_RHS1 - (1024>>4))>>8},
    { 0x305e, 0x00},
    { 0x3068, (DOL2_RHS1&0xFF)}, //RHS1
    { 0x3069, (DOL2_RHS1>>8)},
    { 0x30e8, 0x00}, //gain
    { 0x30e9, 0x00},

    /* DOL related */
    { 0x319f, 0x03}, //VC
    { 0x3048, 0x01}, //DOL mode
    { 0x3049, 0x01}, //DOL 2 frame
    { 0x304c, 0x13}, //DOL HDR VC mode
    { 0x31d7, 0x01}, //master mode, 2 DOL
    { 0x304a, 0x04}, //exposure operation: DOL 2 frame
    { 0x304b, 0x03}, //exposure operation: DOL 2 frame/3 frame
    { REG_NULL, 0x00 }
};


static const k_sensor_reg imx335_mipi_4lane_raw10_3x_regs[] = {
    { 0x3000, 0x01},
    { 0x3002, 0x01},
    { 0x3004, 0x04},
    { 0x3004, 0x00},
    //All pixel scan mode, A/D Conversion 10bit / Output 10 bit / 1188 Mbps /60fps
    { 0x3018, 0x00}, //WINMODE, all-pixel scan mode
    { 0x3030, 0x94}, //VMAX = 4500
    { 0x3031, 0x11},
    { 0x3032, 0x00},

    //{ 0x3034, 0x13}, //15fps
    //{ 0x3035, 0x01},
    { 0x3034, 0x26}, //7.5fps, 0x226(550)
    { 0x3035, 0x02},

    { 0x304c, 0x14}, //vertical direction OB width = 20
    { 0x304e, 0x00}, //no mirror
    { 0x304f, 0x00}, //no flip
    { 0x3050, 0x00}, //AD 10bit
    { 0x3056, 0xac},
    { 0x3057, 0x07},
    { 0x3072, 0x28},
    { 0x3073, 0x00},
    { 0x3074, 0xb0},
    { 0x3075, 0x00},
    { 0x3076, 0x58},
    { 0x3077, 0x0f},
    //All pixel
    //normal
    { 0x3078, 0x01},
    { 0x3079, 0x02},
    { 0x307a, 0xff},
    { 0x307b, 0x02},
    { 0x307c, 0x00},
    { 0x307d, 0x00},
    { 0x307e, 0x00},
    { 0x307f, 0x00},
    { 0x3080, 0x01},
    { 0x3081, 0x02},
    { 0x3082, 0xff},
    { 0x3083, 0x02},
    { 0x3084, 0x00},
    { 0x3085, 0x00},
    { 0x3086, 0x00},
    { 0x3087, 0x00},
    { 0x30a4, 0x33},
    { 0x30a8, 0x10},
    { 0x30a9, 0x04},
    { 0x30ac, 0x00},
    { 0x30ad, 0x00},
    { 0x30b0, 0x10},
    { 0x30b1, 0x08},
    { 0x30b4, 0x00},
    { 0x30b5, 0x00},
    { 0x30b6, 0x00},
    { 0x30b7, 0x00},
    { 0x3112, 0x08},
    { 0x3113, 0x00},
    { 0x3116, 0x08},
    { 0x3117, 0x00},
    //normal end
    { 0x3199, 0x00},
    { 0x319d, 0x00}, //MDBIT, 10bit
    { 0x3300, 0x00},
    { 0x341c, 0xff}, //ADBIT1, 10bit
    { 0x341d, 0x01},
    { 0x3a01, 0x03}, //CSI-2 4lane
    //phy timing
    { 0x3a18, 0x8f},
    { 0x3a19, 0x00},
    { 0x3a1a, 0x4f},
    { 0x3a1b, 0x00},
    { 0x3a1c, 0x47},
    { 0x3a1d, 0x00},
    { 0x3a1e, 0x37},
    { 0x3a1f, 0x01},
    { 0x3a20, 0x4f},
    { 0x3a21, 0x00},
    { 0x3a22, 0x87},
    { 0x3a23, 0x00},
    { 0x3a24, 0x4f},
    { 0x3a25, 0x00},
    { 0x3a26, 0x7f},
    { 0x3a27, 0x00},
    { 0x3a28, 0x3f},
    { 0x3a29, 0x00},
    //----1188Mbps/lane 24MHz inck
    { 0x300c, 0x3b},
    { 0x300d, 0x2a},
    { 0x314c, 0xc6},
    { 0x314d, 0x00},
    { 0x315a, 0x02},
    { 0x3168, 0xa0},
    { 0x316a, 0x7e},
    { 0x319e, 0x01},
    //start
    { 0x3000, 0x00},
    { 0x3002, 0x00},
    { 0x3302, 0x10}, //black level
    { 0x3058, (IMX335_VMAX_DOL3*4 - 3072)&0xFF}, //SHR0, 3072 ET Line,  4500*4 - 3072
    { 0x3059, (IMX335_VMAX_DOL3*4 - 3072)>>8},
    { 0x305a, 0x00},
    { 0x305c, (DOL3_RHS1 - (3072>>4))&0xFF}, //SHR1, 3072/16 ET Line, RHS1 - 128
    { 0x305d, (DOL3_RHS1 - (3072>>4))>>8},
    { 0x305e, 0x00},
    { 0x3060, (DOL3_RHS2 - (3072>>8))&0xFF}, //SHR2, 3072/256 ET Line, RHS2 - 8
    { 0x3061, ((DOL3_RHS2 - (3072>>8))>>8)},
    { 0x3062, 0x00},
    { 0x3068, (DOL3_RHS1&0xFF)}, //RHS1
    { 0x3069, (DOL3_RHS1>>8)},
    { 0x306c, (DOL3_RHS2&0xFF)}, //RHS2
    { 0x306d, (DOL3_RHS2>>8)},
    { 0x30e8, 0x00}, //gain
    { 0x30e9, 0x00},

    /* DOL related */
    { 0x319f, 0x03}, //VC
    { 0x3048, 0x01}, //DOL mode
    { 0x3049, 0x02}, //DOL 3 frame
    { 0x304c, 0x13}, //DOL HDR VC mode
    { 0x31d7, 0x03}, //master mode, 3 DOL
    { 0x304a, 0x05}, //exposure operation: DOL 3 frame
    { 0x304b, 0x03}, //exposure operation: DOL 2 frame/3 frame
    { REG_NULL, 0x00 }
};