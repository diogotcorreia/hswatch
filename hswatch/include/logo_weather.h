#define LOGO_WEATHER_HEIGHT 24
#define LOGO_WEATHER_WIDTH 24

static const unsigned char PROGMEM sun_icon[] = {
	0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x00,
	0x30, 0x00, 0x0C, 0x70, 0x18, 0x0E, 0x60, 0x66, 0x06, 0x00, 0x81, 0x00,
	0x80, 0x00, 0x01, 0x40, 0x00, 0x02, 0x40, 0x00, 0x02, 0x2E, 0x00, 0x74,
	0x2E, 0x00, 0x74, 0x40, 0x00, 0x02, 0x40, 0x00, 0x02, 0x80, 0x00, 0x01,
	0x00, 0x81, 0x00, 0x60, 0x66, 0x06, 0x70, 0x18, 0x0E, 0x30, 0x00, 0x0C,
	0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char PROGMEM clouds1_icon[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,
	0x80, 0x00, 0x00, 0x84, 0x10, 0x00, 0x08, 0x08, 0x00, 0xC0, 0xE3, 0x07,
	0x20, 0x14, 0x08, 0x20, 0x0C, 0x10, 0xE4, 0x07, 0x20, 0x22, 0x04, 0x20,
	0x10, 0x00, 0x40, 0x08, 0x00, 0x40, 0x08, 0x00, 0x40, 0x08, 0x00, 0x20,
	0x08, 0x00, 0x20, 0x10, 0x08, 0x10, 0x20, 0x18, 0x08, 0xC0, 0xE7, 0x07,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char PROGMEM clouds2_icon[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x78, 0x00, 0x00, 0x86, 0x00, 0xC0, 0x01, 0x01, 0x30, 0xF1, 0x03,
	0x10, 0x0A, 0x04, 0x08, 0x06, 0x08, 0xF8, 0x03, 0x10, 0x10, 0x02, 0x20,
	0x08, 0x00, 0x20, 0x08, 0x00, 0x20, 0x04, 0x00, 0x20, 0x04, 0x00, 0x20,
	0x08, 0x00, 0x10, 0x08, 0x04, 0x10, 0x10, 0x0C, 0x0C, 0xE0, 0xF3, 0x03,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char PROGMEM rain1_icon[] = {
	0x00, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x00, 0x18, 0x06, 0x00, 0x04, 0x08,
	0xE0, 0x03, 0x10, 0x10, 0x02, 0x10, 0x08, 0x01, 0x20, 0x04, 0x00, 0x20,
	0x04, 0x00, 0x20, 0x04, 0x00, 0x20, 0x04, 0x00, 0x10, 0x04, 0x02, 0x10,
	0x08, 0x04, 0x08, 0x10, 0x1E, 0x06, 0xE0, 0xE1, 0x01, 0x00, 0x00, 0x00,
	0x80, 0x88, 0x00, 0x80, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x80, 0x88, 0x00, 0x80, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char PROGMEM rain2_icon[] = {
	0x00, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x00, 0x18, 0x06, 0x00, 0x04, 0x08,
	0xE0, 0x03, 0x10, 0x10, 0x02, 0x10, 0x08, 0x01, 0x20, 0x04, 0x00, 0x20,
	0x04, 0x00, 0x20, 0x04, 0x00, 0x20, 0x04, 0x00, 0x10, 0x04, 0x02, 0x10,
	0x08, 0x04, 0x08, 0x10, 0x1E, 0x06, 0xE0, 0xE1, 0x01, 0x00, 0x00, 0x00,
	0x20, 0x91, 0x00, 0x90, 0x48, 0x00, 0x00, 0x00, 0x00, 0x08, 0x04, 0x00,
	0x44, 0x22, 0x00, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char PROGMEM sleet_icon[] = {
	0x00, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x00, 0x18, 0x06, 0x00, 0x04, 0x08,
	0xE0, 0x03, 0x10, 0x10, 0x02, 0x10, 0x08, 0x01, 0x20, 0x04, 0x00, 0x20,
	0x04, 0x00, 0x20, 0x04, 0x00, 0x20, 0x04, 0x00, 0x10, 0x04, 0x02, 0x10,
	0x08, 0x04, 0x08, 0x10, 0x1E, 0x06, 0xE0, 0xE1, 0x01, 0x00, 0x00, 0x00,
	0x20, 0x08, 0x02, 0x70, 0x1C, 0x07, 0x20, 0x08, 0x02, 0x00, 0x41, 0x00,
	0x80, 0xE3, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char PROGMEM fog_icon[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x00, 0x10, 0x06, 0x00, 0x08, 0x08,
	0xC0, 0x07, 0x10, 0x30, 0x02, 0x20, 0x08, 0x02, 0x20, 0x08, 0x00, 0x20,
	0x04, 0x00, 0x20, 0x04, 0x00, 0x20, 0x04, 0x00, 0x10, 0xC8, 0xFF, 0x13,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x9F, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x80, 0xF9, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char PROGMEM snow_icon[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x99, 0x00, 0x00, 0x7E, 0x00,
	0x10, 0x3C, 0x08, 0x20, 0x18, 0x04, 0x40, 0x18, 0x02, 0x80, 0x18, 0x01,
	0x04, 0x99, 0x20, 0x08, 0x5A, 0x10, 0x18, 0x3C, 0x18, 0xFC, 0xFF, 0x3F,
	0xFC, 0xFF, 0x3F, 0x18, 0x3C, 0x18, 0x08, 0x5A, 0x10, 0x04, 0x99, 0x20,
	0x80, 0x18, 0x01, 0x40, 0x18, 0x02, 0x20, 0x18, 0x04, 0x10, 0x3C, 0x08,
	0x00, 0x7E, 0x00, 0x00, 0x99, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char PROGMEM thunder_icon[] = {
	0x00, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x00, 0x18, 0x06, 0x00, 0x04, 0x08,
	0xE0, 0x03, 0x10, 0x10, 0x02, 0x10, 0x08, 0x01, 0x20, 0x04, 0x00, 0x20,
	0x04, 0x00, 0x20, 0x04, 0x00, 0x20, 0x04, 0x00, 0x10, 0x04, 0x02, 0x10,
	0x08, 0x04, 0x08, 0x10, 0x0E, 0x06, 0xE0, 0xF1, 0x01, 0x00, 0x08, 0x00,
	0x00, 0x0C, 0x00, 0x00, 0x06, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x0F, 0x00,
	0x00, 0x0C, 0x00, 0x00, 0x04, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
};
