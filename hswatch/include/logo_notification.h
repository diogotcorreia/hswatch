#define LOGO_NOTIFICATION_HEIGHT 16
#define LOGO_NOTIFICATION_WIDTH 16

#define ALARM_ICON_W 9
#define ALARM_ICON_H 10

#define BATTERY_ICON_W 18
#define BATTERY_ICON_H 10

#define BT_ICON_W 7
#define BT_ICON_H 9

static const unsigned char PROGMEM bt_logo[] = {
	0x18, 0x29, 0x6B, 0x2E, 0x1C, 0x2E, 0x6B, 0x29, 0x18,
};

static const unsigned char PROGMEM bat_0[] = {
	0xFF, 0xFF, 0x00, 0x01, 0x80, 0x00, 0x01, 0x80, 0x00, 0x01,
	0x80, 0x03, 0x01, 0x80, 0x03, 0x01, 0x80, 0x03, 0x01, 0x80,
	0x03, 0x01, 0x80, 0x00, 0x01, 0x80, 0x00, 0xFF, 0xFF, 0x00,
};

static const unsigned char PROGMEM bat_1[] = {
	0xFF, 0xFF, 0x00, 0x0F, 0x80, 0x00, 0x0F, 0x80, 0x00, 0x1F,
	0x80, 0x03, 0x1F, 0x00, 0x02, 0x3F, 0x00, 0x02, 0x3F, 0x80,
	0x03, 0x7F, 0x80, 0x00, 0x7F, 0x80, 0x00, 0xFF, 0xFF, 0x00,
};

static const unsigned char PROGMEM bat_2[] = {
	0xFF, 0xFF, 0x00, 0xFF, 0x87, 0x00, 0xFF, 0x87, 0x00, 0xFF,
	0x8F, 0x03, 0xFF, 0x0F, 0x02, 0xFF, 0x1F, 0x02, 0xFF, 0x9F,
	0x03, 0xFF, 0xBF, 0x00, 0xFF, 0xBF, 0x00, 0xFF, 0xFF, 0x00,
};

static const unsigned char PROGMEM bat_3[] = {
	0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF,
	0xFF, 0x03, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0x03, 0xFF, 0xFF,
	0x03, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
};

static const unsigned char PROGMEM bat_charge[] = {
	0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFE, 0x00, 0x7F,
	0xFF, 0x03, 0x3F, 0xFF, 0x03, 0x1F, 0xFC, 0x03, 0x7F, 0xFE,
	0x03, 0x7F, 0xFF, 0x00, 0xBF, 0xFF, 0x00, 0xFF, 0xFF, 0x00,
};

static const unsigned char PROGMEM alarm_icon[] = {
	0x10, 0x00, 0x38, 0x00, 0x7C, 0x00, 0x7C, 0x00, 0x7C, 0x00,
	0x7C, 0x00, 0xFE, 0x00, 0xFF, 0x01, 0x00, 0x00, 0x38, 0x00,
};

static const uint8_t PROGMEM logo_sms[] = {
	0x00, 0x00, 0x00, 0x00, 0xFE, 0x0F, 0xFF, 0x1F, 0xFF, 0x1F, 0x93,
	0x9C, 0x93, 0x9C, 0xFF, 0x9F, 0xFF, 0x9F, 0xFE, 0x8F, 0x04, 0x80,
	0x00, 0xC0, 0xE0, 0x7F, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00};

static const uint8_t PROGMEM logo_email[] = {
	0x00, 0x00, 0x00, 0x00, 0xFC, 0x3F, 0xF9, 0x9F, 0xF3, 0xCF, 0xE7,
	0xE7, 0xCF, 0xF3, 0x9F, 0xF9, 0x1F, 0xF8, 0x4F, 0xF2, 0xE7, 0xE7,
	0xF3, 0xCF, 0xF9, 0x9F, 0xFC, 0x3F, 0x00, 0x00, 0x00, 0x00};

static const uint8_t PROGMEM logo_facebook[] = {
	0xFC, 0x3F, 0xFE, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE1, 0xFF,
	0xE0, 0xFF, 0xFC, 0xFF, 0xFC, 0x3F, 0xE0, 0x3F, 0xE0, 0xFF, 0xFC,
	0xFF, 0xFC, 0xFF, 0xFC, 0xFF, 0xFC, 0xFE, 0x7C, 0xFC, 0x3C};

static const uint8_t PROGMEM logo_instagram[] = {
	0xFC, 0x3F, 0xFE, 0x7F, 0xFF, 0xEF, 0x7F, 0xC6, 0x1F, 0xE8, 0x8F,
	0xF1, 0xCF, 0xF3, 0xE7, 0xE7, 0xE7, 0xE7, 0xCF, 0xF3, 0x8F, 0xF1,
	0x1F, 0xF8, 0x7F, 0xFE, 0xFF, 0xFF, 0xFE, 0x7F, 0xFC, 0x3F};

static const uint8_t PROGMEM logo_geral[] = {
	0x00, 0x80, 0x00, 0xC0, 0x00, 0xF0, 0x00, 0xFC, 0xFC, 0xFE, 0xFF,
	0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFC, 0xFE, 0x38, 0xFC,
	0x78, 0xF0, 0x70, 0xC0, 0xF0, 0x80, 0x60, 0x00, 0x60, 0x00};

static const uint8_t PROGMEM logo_messenger[] = {
	0xC0, 0x03, 0xF8, 0x1F, 0xFC, 0x3F, 0xFE, 0x7F, 0xFE, 0x7F, 0x7F,
	0xEF, 0x3F, 0xF6, 0x1F, 0xF8, 0x6F, 0xFC, 0xF7, 0xFE, 0xFE, 0x7F,
	0xFE, 0x7F, 0xFC, 0x3F, 0xF8, 0x0F, 0x98, 0x01, 0x08, 0x00};

static const uint8_t PROGMEM logo_telephone[] = {
	0x0C, 0x00, 0x18, 0x00, 0x32, 0x00, 0x27, 0x00, 0x0F, 0x00, 0x1F,
	0x00, 0x1F, 0x00, 0x3E, 0x00, 0x7C, 0x00, 0xF8, 0x00, 0xF0, 0x31,
	0xE0, 0x67, 0xC0, 0xCF, 0x80, 0x9F, 0x00, 0x3F, 0x00, 0x1E};

static const uint8_t PROGMEM logo_whatsapp[] = {
	0xC0, 0x03, 0xF0, 0x0F, 0xF8, 0x1F, 0xFC, 0x3F, 0xCE, 0x7F, 0xC6,
	0x7F, 0xC7, 0xFF, 0xCF, 0xFF, 0x8F, 0xFF, 0x1F, 0xF3, 0x3E, 0x70,
	0x7E, 0x70, 0xFE, 0x3F, 0xFE, 0x1F, 0xFE, 0x0F, 0xC0, 0x03};

// static const unsigned char PROGMEM logo_fbo[] =
//{ 0xFE, 0x01, 0xFF, 0x03, 0xFF, 0x03, 0x1F, 0x03, 0xDF, 0x03, 0x0F, 0x03,
//	0xDF, 0x03, 0xDF, 0x03, 0xDF, 0x03, 0xDE, 0x01 };
