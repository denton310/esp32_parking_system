

// 'car', 73x17px
const unsigned char bitmap_car [] PROGMEM = {
	0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 
	0x00, 0xe0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x1e, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
	0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x01, 0xc0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 
	0x0e, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x38, 0x00, 0x1c, 0x7f, 0xc0, 0x00, 0x00, 0x00, 
	0x01, 0xff, 0x1c, 0x00, 0x30, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xff, 0x86, 0x00, 0x63, 0xff, 
	0xe0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xe3, 0x00, 0xc7, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x01, 0xff, 
	0xf1, 0x80, 0x9f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfc, 0x80, 0x80, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80
};
// 'empty', 128x64px
const unsigned char bitmap_empty [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x02, 0x81, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x02, 0x80, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x02, 0x80, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x02, 0x80, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x24, 0x80, 0x00, 0x7f, 0xfe, 0xff, 0xf0, 0x00, 0x02, 0x60, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xc2, 0x80, 0x1f, 0x80, 0x00, 0x00, 0x0f, 0x00, 0x02, 0x98, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0x02, 0x40, 0xe0, 0x3f, 0xfe, 0xff, 0xe0, 0xf8, 0x04, 0x86, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0c, 0x01, 0x47, 0x0f, 0xc0, 0x02, 0x80, 0x1e, 0x07, 0x85, 0x01, 0x80, 0x00, 0x00, 
	0x00, 0x00, 0x30, 0x01, 0x38, 0x70, 0x00, 0x02, 0x80, 0x03, 0xf0, 0x79, 0x00, 0x60, 0x00, 0x00, 
	0x00, 0x00, 0xc0, 0x03, 0x83, 0x80, 0x00, 0x02, 0x80, 0x00, 0x1e, 0x02, 0x00, 0x18, 0x00, 0x00, 
	0x00, 0x01, 0x00, 0x0e, 0x1c, 0x00, 0x00, 0x02, 0x80, 0x00, 0x03, 0xfb, 0x00, 0x06, 0x00, 0x00, 
	0x00, 0x06, 0x00, 0x38, 0xd0, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x10, 0xc0, 0x01, 0x00, 0x00, 
	0x00, 0x08, 0x00, 0xe3, 0x48, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x26, 0x20, 0x00, 0x80, 0x00, 
	0x00, 0x30, 0x03, 0x8c, 0x28, 0x01, 0xff, 0xfe, 0xff, 0xfc, 0x00, 0x25, 0x98, 0x00, 0x60, 0x00, 
	0x00, 0x40, 0x06, 0x30, 0x28, 0x03, 0x00, 0x00, 0x00, 0x07, 0x80, 0x28, 0x46, 0x00, 0x10, 0x00, 
	0x00, 0xc0, 0x08, 0xc0, 0x24, 0x3c, 0x7f, 0xfe, 0xff, 0xf0, 0x70, 0x48, 0x31, 0x80, 0x08, 0x00, 
	0x01, 0x80, 0x33, 0x00, 0x15, 0xc1, 0x80, 0x02, 0x80, 0x0f, 0x0c, 0x50, 0x0c, 0x40, 0x04, 0x00, 
	0x03, 0x00, 0xc4, 0x00, 0x16, 0x1e, 0x00, 0x02, 0x80, 0x00, 0xe3, 0x90, 0x03, 0x20, 0x02, 0x00, 
	0x06, 0x01, 0x18, 0x00, 0x70, 0xe0, 0x00, 0x02, 0x80, 0x00, 0x18, 0x30, 0x00, 0x98, 0x01, 0x00, 
	0x0c, 0x06, 0x60, 0x01, 0x83, 0x00, 0x00, 0x02, 0x80, 0x00, 0x07, 0x8c, 0x00, 0x46, 0x00, 0x80, 
	0x0c, 0x08, 0x80, 0x06, 0x3a, 0x00, 0x00, 0x02, 0x80, 0x00, 0x01, 0x23, 0x80, 0x31, 0x00, 0x40, 
	0x06, 0x13, 0x00, 0x18, 0xc9, 0x00, 0x07, 0xfe, 0xff, 0x80, 0x01, 0x58, 0x40, 0x0c, 0x80, 0x40, 
	0x02, 0x24, 0x00, 0x63, 0x05, 0x00, 0x78, 0x00, 0x00, 0x78, 0x02, 0x47, 0x30, 0x02, 0x60, 0x40, 
	0x01, 0x48, 0x01, 0x8c, 0x04, 0x83, 0x83, 0xfe, 0xff, 0x07, 0x82, 0x80, 0x8c, 0x01, 0x10, 0x80, 
	0x00, 0x90, 0x02, 0x30, 0x02, 0xbc, 0x3c, 0x02, 0x80, 0xf0, 0x7c, 0x80, 0x62, 0x00, 0xc8, 0x80, 
	0x00, 0x20, 0x04, 0xc0, 0x02, 0xc1, 0xc0, 0x02, 0x80, 0x1f, 0x05, 0x00, 0x19, 0x80, 0x25, 0x00, 
	0x00, 0x20, 0x19, 0x00, 0x0c, 0x1e, 0x00, 0x02, 0x80, 0x00, 0xf1, 0x00, 0x04, 0x40, 0x12, 0x00, 
	0x00, 0x20, 0x32, 0x00, 0x11, 0x60, 0x00, 0x02, 0x80, 0x00, 0x08, 0x80, 0x03, 0x20, 0x08, 0x00, 
	0x00, 0x10, 0x44, 0x00, 0x27, 0x40, 0x00, 0x02, 0x80, 0x00, 0x0a, 0x70, 0x00, 0x90, 0x08, 0x00, 
	0x00, 0x08, 0x98, 0x00, 0xc9, 0x20, 0x00, 0x02, 0x80, 0x00, 0x13, 0x0c, 0x00, 0x48, 0x10, 0x00, 
	0x00, 0x05, 0x20, 0x03, 0x18, 0xa0, 0x00, 0x02, 0x80, 0x00, 0x14, 0xe6, 0x00, 0x26, 0x20, 0x00, 
	0x00, 0x02, 0x40, 0x04, 0x60, 0x90, 0x1f, 0xfe, 0xff, 0xe0, 0x24, 0x11, 0x80, 0x11, 0x40, 0x00, 
	0x00, 0x00, 0x80, 0x19, 0x80, 0x51, 0xe0, 0x00, 0x00, 0x1c, 0x48, 0x0c, 0x40, 0x0c, 0x80, 0x00, 
	0x00, 0x01, 0x00, 0x62, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x03, 0xd8, 0x03, 0x20, 0x02, 0x00, 0x00, 
	0x00, 0x00, 0x80, 0x8c, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x98, 0x02, 0x00, 0x00, 
	0x00, 0x00, 0x61, 0x30, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0xc4, 0x04, 0x00, 0x00, 
	0x00, 0x00, 0x22, 0x40, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x33, 0x18, 0x00, 0x00, 
	0x00, 0x00, 0x14, 0x80, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x18, 0xa0, 0x00, 0x00, 
	0x00, 0x00, 0x09, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x06, 0x40, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x82, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x98, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0xe4, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x60, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x38, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x06, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x06, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xc3, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x08, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xff, 0xe0, 0x80, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x10, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x40, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x11, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x40, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x27, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x20, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x23, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x20, 0x00, 0x00, 0x00
};

// 'defaultti', 128x64px
const unsigned char bitmap_defaultti [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x02, 0x81, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x02, 0x80, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x02, 0x80, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x02, 0x80, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x3c, 0x80, 0x00, 0x7f, 0xfe, 0xff, 0xf0, 0x00, 0x02, 0x60, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xfe, 0x80, 0x1f, 0x80, 0x00, 0x00, 0x0f, 0x00, 0x02, 0xf8, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0xfe, 0x40, 0xe0, 0x3f, 0xfe, 0xff, 0xe0, 0xf8, 0x04, 0xfe, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0xff, 0x47, 0x0f, 0xc0, 0x02, 0x80, 0x1e, 0x07, 0x85, 0xff, 0x80, 0x00, 0x00, 
	0x00, 0x00, 0x3f, 0xff, 0x38, 0x70, 0x00, 0x02, 0x80, 0x03, 0xf0, 0x79, 0xff, 0xe0, 0x00, 0x00, 
	0x00, 0x00, 0xff, 0xff, 0x83, 0x80, 0x00, 0x02, 0x80, 0x00, 0x1e, 0x03, 0xff, 0xf8, 0x00, 0x00, 
	0x00, 0x01, 0xff, 0xfe, 0x1c, 0x00, 0x00, 0x02, 0x80, 0x00, 0x03, 0xfb, 0xff, 0xfe, 0x00, 0x00, 
	0x00, 0x07, 0xff, 0xf8, 0xd0, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x10, 0xff, 0xff, 0x00, 0x00, 
	0x00, 0x0f, 0xff, 0xe3, 0xc8, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x26, 0x3f, 0xff, 0x80, 0x00, 
	0x00, 0x3f, 0xff, 0x8f, 0xe8, 0x01, 0xff, 0xfe, 0xff, 0xfc, 0x00, 0x27, 0x9f, 0xff, 0xe0, 0x00, 
	0x00, 0x7f, 0xfe, 0x3f, 0xe8, 0x03, 0x00, 0x00, 0x00, 0x07, 0x80, 0x2f, 0xc7, 0xff, 0xf0, 0x00, 
	0x00, 0xff, 0xf8, 0xff, 0xe4, 0x3c, 0x7f, 0xfe, 0xff, 0xf0, 0x70, 0x4f, 0xf1, 0xff, 0xf8, 0x00, 
	0x01, 0xff, 0xf3, 0xff, 0xf5, 0xc1, 0x80, 0x02, 0x80, 0x0f, 0x0c, 0x5f, 0xfc, 0x7f, 0xfe, 0x00, 
	0x03, 0xff, 0xc7, 0xff, 0xf6, 0x1e, 0x00, 0x02, 0x80, 0x00, 0xe3, 0x9f, 0xff, 0x3f, 0xfe, 0x00, 
	0x07, 0xff, 0x1f, 0xff, 0xf0, 0xe0, 0x00, 0x02, 0x80, 0x00, 0x18, 0x3f, 0xff, 0x9f, 0xff, 0x00, 
	0x0f, 0xfe, 0x7f, 0xff, 0x83, 0x00, 0x00, 0x02, 0x80, 0x00, 0x07, 0xbf, 0xff, 0xc7, 0xff, 0x80, 
	0x0f, 0xf8, 0xff, 0xfe, 0x3a, 0x00, 0x00, 0x02, 0x80, 0x00, 0x01, 0x03, 0xff, 0xf1, 0xff, 0xc0, 
	0x07, 0xf3, 0xff, 0xf8, 0xf9, 0x00, 0x07, 0xfe, 0xff, 0x80, 0x01, 0x78, 0x7f, 0xfc, 0xff, 0xc0, 
	0x03, 0xe7, 0xff, 0xe3, 0xfd, 0x00, 0x78, 0x00, 0x00, 0x78, 0x02, 0x7f, 0x3f, 0xfe, 0x7f, 0xc0, 
	0x01, 0xcf, 0xff, 0x8f, 0xfc, 0x83, 0x83, 0xfe, 0xff, 0x07, 0x82, 0xff, 0x8f, 0xff, 0x1f, 0x80, 
	0x00, 0x9f, 0xfe, 0x3f, 0xfe, 0xbc, 0x3c, 0x02, 0x80, 0xf0, 0x7c, 0xff, 0xe3, 0xff, 0xcf, 0x80, 
	0x00, 0x3f, 0xfc, 0xff, 0xfe, 0xc1, 0xc0, 0x02, 0x80, 0x1f, 0x05, 0xff, 0xfb, 0xff, 0xe7, 0x00, 
	0x00, 0x3f, 0xf9, 0xff, 0xfc, 0x1e, 0x00, 0x02, 0x80, 0x00, 0xf1, 0xff, 0xf9, 0xff, 0xf2, 0x00, 
	0x00, 0x3f, 0xf3, 0xff, 0xf1, 0x60, 0x00, 0x02, 0x80, 0x00, 0x08, 0xff, 0xfc, 0x3f, 0xf8, 0x00, 
	0x00, 0x1f, 0xc7, 0xff, 0xe7, 0x40, 0x00, 0x02, 0x80, 0x00, 0x0a, 0x7f, 0xff, 0x9f, 0xf8, 0x00, 
	0x00, 0x1f, 0x9f, 0xff, 0xcf, 0x20, 0x00, 0x02, 0x80, 0x00, 0x13, 0x0f, 0xff, 0xcf, 0xf0, 0x00, 
	0x00, 0x0f, 0x3f, 0xff, 0x1f, 0xa0, 0x00, 0x02, 0x80, 0x00, 0x17, 0xe7, 0xff, 0xe7, 0xe0, 0x00, 
	0x00, 0x02, 0x7f, 0xfc, 0x7f, 0x90, 0x1f, 0xfe, 0xff, 0xe0, 0x27, 0xf1, 0xff, 0xf1, 0xc0, 0x00, 
	0x00, 0x00, 0xff, 0xf9, 0xff, 0xd1, 0xe0, 0x00, 0x00, 0x1c, 0x4f, 0xfc, 0x3f, 0xfc, 0x40, 0x00, 
	0x00, 0x01, 0xff, 0xe3, 0xff, 0xde, 0x00, 0x00, 0x00, 0x03, 0xcf, 0xff, 0x3f, 0xff, 0x00, 0x00, 
	0x00, 0x00, 0xff, 0x8f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x9f, 0xfe, 0x00, 0x00, 
	0x00, 0x00, 0x7f, 0x3f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xc7, 0xfc, 0x00, 0x00, 
	0x00, 0x00, 0x3c, 0x7f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xf3, 0xf8, 0x00, 0x00, 
	0x00, 0x00, 0x0d, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf8, 0xe0, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfe, 0x40, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xf8, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0xfc, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x60, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x38, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x06, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x06, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xc3, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x08, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xff, 0xe0, 0x80, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x10, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x40, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x11, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x40, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x27, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x20, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x23, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x20, 0x00, 0x00, 0x00
};
// 'sensor_1a_off', 29x23px
const unsigned char bitmap_sensor_1a_off [] PROGMEM = {
	0x00, 0x00, 0x01, 0xc0, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x0c, 0x20, 0x00, 0x00, 0x30, 0x20, 
	0x00, 0x00, 0xc0, 0x10, 0x00, 0x03, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x18, 0x00, 0x10, 0x00, 0xe0, 
	0x00, 0x60, 0x01, 0x80, 0x00, 0x80, 0x06, 0x00, 0x03, 0x00, 0x18, 0x00, 0x06, 0x00, 0x60, 0x00, 
	0x08, 0x00, 0x80, 0x00, 0x10, 0x03, 0x00, 0x00, 0x20, 0x0c, 0x00, 0x00, 0x40, 0x30, 0x00, 0x00, 
	0x80, 0x60, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 
	0x1c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'sensor_1a_on', 29x23px
const unsigned char bitmap_sensor_1a_on [] PROGMEM = {
	0x00, 0x00, 0x01, 0xc0, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x3f, 0xe0, 
	0x00, 0x00, 0xff, 0xf0, 0x00, 0x03, 0xff, 0xf0, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x1f, 0xff, 0xe0, 
	0x00, 0x7f, 0xff, 0x80, 0x00, 0xff, 0xfe, 0x00, 0x03, 0xff, 0xf8, 0x00, 0x07, 0xff, 0xe0, 0x00, 
	0x0f, 0xff, 0x80, 0x00, 0x1f, 0xff, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x7f, 0xf0, 0x00, 0x00, 
	0xff, 0xe0, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 
	0x1c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'sensor_1b_off', 27x22px
const unsigned char bitmap_sensor_1b_off [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x30, 0x80, 
	0x00, 0x00, 0xc0, 0x80, 0x00, 0x03, 0x00, 0x80, 0x00, 0x0e, 0x00, 0x40, 0x00, 0x18, 0x00, 0x40, 
	0x00, 0x60, 0x01, 0xc0, 0x01, 0x80, 0x06, 0x00, 0x02, 0x00, 0x18, 0x00, 0x0c, 0x00, 0x60, 0x00, 
	0x18, 0x01, 0x80, 0x00, 0x20, 0x06, 0x00, 0x00, 0x40, 0x08, 0x00, 0x00, 0x80, 0x10, 0x00, 0x00, 
	0x80, 0x20, 0x00, 0x00, 0x80, 0xc0, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 
	0x34, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00
};
// 'sensor_1c_off', 24x19px
const unsigned char bitmap_sensor_1c_off [] PROGMEM = {
	0x00, 0x00, 0x1c, 0x00, 0x00, 0x64, 0x00, 0x01, 0x82, 0x00, 0x06, 0x02, 0x00, 0x18, 0x01, 0x00, 
	0x60, 0x03, 0x00, 0x80, 0x06, 0x01, 0x00, 0x08, 0x02, 0x00, 0x10, 0x0c, 0x00, 0x60, 0x10, 0x01, 
	0x80, 0x20, 0x02, 0x00, 0x40, 0x0c, 0x00, 0xc0, 0x30, 0x00, 0x40, 0x40, 0x00, 0x21, 0x80, 0x00, 
	0x12, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x04, 0x00, 0x00
};
// 'sensor_1b_on', 27x22px
const unsigned char bitmap_sensor_1b_on [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x3f, 0x80, 
	0x00, 0x00, 0xff, 0x80, 0x00, 0x03, 0xff, 0x80, 0x00, 0x0f, 0xff, 0xc0, 0x00, 0x1f, 0xff, 0xc0, 
	0x00, 0x7f, 0xff, 0xc0, 0x01, 0xff, 0xfe, 0x00, 0x03, 0xff, 0xf8, 0x00, 0x0f, 0xff, 0xe0, 0x00, 
	0x1f, 0xff, 0x80, 0x00, 0x3f, 0xfe, 0x00, 0x00, 0x7f, 0xf8, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 
	0xff, 0xe0, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 
	0x3c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00
};
// 'sensor_1d_off', 20x17px
const unsigned char bitmap_sensor_1d_off [] PROGMEM = {
	0x00, 0x00, 0x40, 0x00, 0x01, 0xc0, 0x00, 0x02, 0x40, 0x00, 0x04, 0x20, 0x00, 0x18, 0x20, 0x00, 
	0x60, 0x10, 0x00, 0x80, 0x10, 0x03, 0x00, 0x10, 0x0c, 0x00, 0x60, 0x10, 0x01, 0x80, 0x60, 0x06, 
	0x00, 0x40, 0x08, 0x00, 0x80, 0x30, 0x00, 0x80, 0x40, 0x00, 0x41, 0x80, 0x00, 0x26, 0x00, 0x00, 
	0x18, 0x00, 0x00
};
// 'sensor_2a_off', 32x13px
const unsigned char bitmap_sensor_2a_off [] PROGMEM = {
	0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x1f, 0x81, 0x00, 0x07, 0xe0, 0x01, 0x00, 0x78, 0x00, 0x01, 
	0x07, 0x80, 0x00, 0x01, 0x18, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 
	0x40, 0x00, 0x3f, 0xff, 0x40, 0x0f, 0xc0, 0x00, 0x20, 0x70, 0x00, 0x00, 0x23, 0x80, 0x00, 0x00, 
	0x1c, 0x00, 0x00, 0x00
};
// 'sensor_1c_on', 24x19px
const unsigned char bitmap_sensor_1c_on [] PROGMEM = {
	0x00, 0x00, 0x1c, 0x00, 0x00, 0x7c, 0x00, 0x01, 0xfe, 0x00, 0x07, 0xfe, 0x00, 0x1f, 0xff, 0x00, 
	0x7f, 0xff, 0x00, 0xff, 0xfe, 0x01, 0xff, 0xf8, 0x03, 0xff, 0xf0, 0x0f, 0xff, 0xe0, 0x1f, 0xff, 
	0x80, 0x3f, 0xfe, 0x00, 0x7f, 0xfc, 0x00, 0xff, 0xf0, 0x00, 0x7f, 0xc0, 0x00, 0x3f, 0x80, 0x00, 
	0x1e, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x04, 0x00, 0x00
};
// 'sensor_2a_on', 32x13px
const unsigned char bitmap_sensor_2a_on [] PROGMEM = {
	0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x1f, 0xff, 0x00, 0x07, 0xff, 0xff, 0x00, 0x7f, 0xff, 0xff, 
	0x07, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x7f, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xc0, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 
	0x1c, 0x00, 0x00, 0x00
};
// 'sensor_1d_on', 20x17px
const unsigned char bitmap_sensor_1d_on [] PROGMEM = {
	0x00, 0x00, 0x40, 0x00, 0x01, 0xc0, 0x00, 0x03, 0xc0, 0x00, 0x07, 0xe0, 0x00, 0x1f, 0xe0, 0x00, 
	0x7f, 0xf0, 0x00, 0xff, 0xf0, 0x03, 0xff, 0xf0, 0x0f, 0xff, 0xe0, 0x1f, 0xff, 0x80, 0x7f, 0xfe, 
	0x00, 0x7f, 0xf8, 0x00, 0xff, 0xf0, 0x00, 0xff, 0xc0, 0x00, 0x7f, 0x80, 0x00, 0x3e, 0x00, 0x00, 
	0x18, 0x00, 0x00
};
// 'sensor_2b_off', 28x12px
const unsigned char bitmap_sensor_2b_off [] PROGMEM = {
	0x00, 0x01, 0xff, 0xf0, 0x00, 0x7e, 0x00, 0x10, 0x03, 0x80, 0x00, 0x10, 0x1c, 0x00, 0x00, 0x10, 
	0xe0, 0x00, 0x00, 0x10, 0x80, 0x00, 0x00, 0x10, 0x40, 0x00, 0x00, 0x10, 0x40, 0x07, 0xff, 0xf0, 
	0x40, 0x18, 0x00, 0x00, 0x21, 0xe0, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00
};
// 'sensor_2b_on', 28x12px
const unsigned char bitmap_sensor_2b_on [] PROGMEM = {
	0x00, 0x01, 0xff, 0xf0, 0x00, 0x7f, 0xff, 0xf0, 0x03, 0xff, 0xff, 0xf0, 0x1f, 0xff, 0xff, 0xf0, 
	0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xff, 0xf0, 
	0x7f, 0xf8, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00
};
// 'sensor_3b_off', 29x12px
const unsigned char bitmap_sensor_3b_off [] PROGMEM = {
	0xff, 0xe0, 0x00, 0x00, 0x80, 0x3e, 0x00, 0x00, 0x80, 0x01, 0xf0, 0x00, 0x80, 0x00, 0x1e, 0x00, 
	0x80, 0x00, 0x01, 0xf8, 0x80, 0x00, 0x00, 0x10, 0x80, 0x00, 0x00, 0x10, 0xff, 0xf0, 0x00, 0x20, 
	0x00, 0x0f, 0x80, 0x20, 0x00, 0x00, 0x70, 0x40, 0x00, 0x00, 0x0c, 0x40, 0x00, 0x00, 0x03, 0x80
};
// 'sensor_3c_off', 25x11px
const unsigned char bitmap_sensor_3c_off [] PROGMEM = {
	0xff, 0xf0, 0x00, 0x00, 0x80, 0x0f, 0x00, 0x00, 0x80, 0x01, 0xe0, 0x00, 0x80, 0x00, 0x18, 0x00, 
	0x80, 0x00, 0x07, 0x80, 0x80, 0x00, 0x01, 0x00, 0xff, 0x80, 0x01, 0x00, 0x00, 0x78, 0x02, 0x00, 
	0x00, 0x07, 0x82, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x04, 0x00
};
// 'sensor_3b_on', 29x12px
const unsigned char bitmap_sensor_3b_on [] PROGMEM = {
	0xff, 0xe0, 0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0xff, 0xff, 0xf0, 0x00, 0xff, 0xff, 0xfe, 0x00, 
	0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xe0, 
	0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x03, 0x80
};
// 'sensor_2d_off', 22x11px
const unsigned char bitmap_sensor_2d_off [] PROGMEM = {
	0x00, 0x07, 0xfc, 0x00, 0x78, 0x04, 0x03, 0x80, 0x04, 0x3c, 0x00, 0x04, 0xc0, 0x00, 0x04, 0x80, 
	0x00, 0x04, 0x40, 0x00, 0x04, 0x40, 0x00, 0x04, 0x20, 0x3f, 0xfc, 0x23, 0xc0, 0x00, 0x3c, 0x00, 
	0x00
};
// 'sensor_2c_off', 25x11px
const unsigned char bitmap_sensor_2c_off [] PROGMEM = {
	0x00, 0x1f, 0xff, 0x80, 0x00, 0x60, 0x00, 0x80, 0x07, 0x80, 0x00, 0x80, 0x38, 0x00, 0x00, 0x80, 
	0xc0, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x80, 0x40, 0x01, 0xff, 0x80, 0x40, 0x1e, 0x00, 0x00, 
	0x20, 0xe0, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00
};
// 'sensor_3c_on', 25x11px
const unsigned char bitmap_sensor_3c_on [] PROGMEM = {
	0xff, 0xf0, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xf8, 0x00, 
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x7f, 0xfe, 0x00, 
	0x00, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x04, 0x00
};
// 'sensor_3a_off', 32x13px
const unsigned char bitmap_sensor_3a_off [] PROGMEM = {
	0xfe, 0x00, 0x00, 0x00, 0x81, 0xf8, 0x00, 0x00, 0x80, 0x07, 0x80, 0x00, 0x80, 0x00, 0x78, 0x00, 
	0x80, 0x00, 0x07, 0x80, 0x80, 0x00, 0x00, 0x70, 0x80, 0x00, 0x00, 0x0c, 0x80, 0x00, 0x00, 0x03, 
	0xff, 0xf0, 0x00, 0x02, 0x00, 0x0f, 0x00, 0x02, 0x00, 0x00, 0xf8, 0x04, 0x00, 0x00, 0x07, 0x84, 
	0x00, 0x00, 0x00, 0x78
};
// 'sensor_2c_on', 25x11px
const unsigned char bitmap_sensor_2c_on [] PROGMEM = {
	0x00, 0x1f, 0xff, 0x80, 0x00, 0x7f, 0xff, 0x80, 0x07, 0xff, 0xff, 0x80, 0x3f, 0xff, 0xff, 0x80, 
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xff, 0x80, 0x7f, 0xfe, 0x00, 0x00, 
	0x3f, 0xe0, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00
};
// 'sensor_2d_on', 22x11px
const unsigned char bitmap_sensor_2d_on [] PROGMEM = {
	0x00, 0x07, 0xfc, 0x00, 0x7f, 0xfc, 0x03, 0xff, 0xfc, 0x3f, 0xff, 0xfc, 0xff, 0xff, 0xfc, 0xff, 
	0xff, 0xfc, 0x7f, 0xff, 0xfc, 0x7f, 0xff, 0xfc, 0x3f, 0xff, 0xfc, 0x3f, 0xc0, 0x00, 0x3c, 0x00, 
	0x00
};
// 'sensor_3a_on', 32x13px
const unsigned char bitmap_sensor_3a_on [] PROGMEM = {
	0xfe, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0xff, 0xff, 0x80, 0x00, 0xff, 0xff, 0xf8, 0x00, 
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xfe, 0x00, 0x0f, 0xff, 0xfe, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x07, 0xfc, 
	0x00, 0x00, 0x00, 0x78
};
// 'sensor_3d_off', 21x11px
const unsigned char bitmap_sensor_3d_off [] PROGMEM = {
	0xff, 0x00, 0x00, 0x80, 0xf0, 0x00, 0x80, 0x1f, 0x00, 0x80, 0x00, 0xf0, 0x80, 0x00, 0x08, 0x80, 
	0x00, 0x08, 0x80, 0x00, 0x10, 0x80, 0x00, 0x10, 0xff, 0xe0, 0x20, 0x00, 0x1c, 0x40, 0x00, 0x03, 
	0xc0
};
// 'sensor_4c_on', 25x19px
const unsigned char bitmap_sensor_4c_on [] PROGMEM = {
	0x10, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 
	0x7f, 0xf0, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 
	0x3f, 0xff, 0xc0, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x03, 0xff, 0xf0, 0x00, 0x00, 0xff, 0xf8, 0x00, 
	0x00, 0x3f, 0xfe, 0x00, 0x00, 0x1f, 0xff, 0x80, 0x00, 0x0f, 0xff, 0x00, 0x00, 0x03, 0xfe, 0x00, 
	0x00, 0x01, 0xfc, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x20, 0x00
};
// 'sensor_4d_on', 21x16px
const unsigned char bitmap_sensor_4d_on [] PROGMEM = {
	0x10, 0x00, 0x00, 0x18, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x7f, 0xe0, 0x00, 0xff, 
	0xf8, 0x00, 0xff, 0xfc, 0x00, 0x7f, 0xfe, 0x00, 0x1f, 0xff, 0x80, 0x07, 0xff, 0xc0, 0x01, 0xff, 
	0xf0, 0x00, 0xff, 0xf8, 0x00, 0x3f, 0xf8, 0x00, 0x1f, 0xf0, 0x00, 0x07, 0xe0, 0x00, 0x01, 0xc0
};
// 'sensor_4a_off', 28x23px
const unsigned char bitmap_sensor_4a_off [] PROGMEM = {
	0x18, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x21, 0x80, 0x00, 0x00, 0x40, 0x60, 0x00, 0x00, 
	0x40, 0x18, 0x00, 0x00, 0x80, 0x06, 0x00, 0x00, 0xc0, 0x01, 0x80, 0x00, 0x30, 0x00, 0x40, 0x00, 
	0x08, 0x00, 0x20, 0x00, 0x06, 0x00, 0x18, 0x00, 0x01, 0x80, 0x04, 0x00, 0x00, 0x60, 0x02, 0x00, 
	0x00, 0x10, 0x01, 0x00, 0x00, 0x08, 0x00, 0x80, 0x00, 0x06, 0x00, 0x40, 0x00, 0x01, 0x80, 0x20, 
	0x00, 0x00, 0x40, 0x10, 0x00, 0x00, 0x20, 0x10, 0x00, 0x00, 0x18, 0x10, 0x00, 0x00, 0x04, 0x20, 
	0x00, 0x00, 0x02, 0x20, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x80
};
// 'sensor_4a_on', 28x23px
const unsigned char bitmap_sensor_4a_on [] PROGMEM = {
	0x18, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 
	0x7f, 0xf8, 0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0xff, 0xff, 0x80, 0x00, 0x3f, 0xff, 0xc0, 0x00, 
	0x0f, 0xff, 0xe0, 0x00, 0x07, 0xff, 0xf8, 0x00, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x7f, 0xfe, 0x00, 
	0x00, 0x1f, 0xff, 0x00, 0x00, 0x0f, 0xff, 0x80, 0x00, 0x07, 0xff, 0xc0, 0x00, 0x01, 0xff, 0xe0, 
	0x00, 0x00, 0x7f, 0xf0, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x07, 0xe0, 
	0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x80
};
// 'sensor_4b_off', 27x21px
const unsigned char bitmap_sensor_4b_off [] PROGMEM = {
	0x18, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x20, 0xc0, 0x00, 0x00, 
	0x40, 0x30, 0x00, 0x00, 0x40, 0x0c, 0x00, 0x00, 0xc0, 0x02, 0x00, 0x00, 0x30, 0x01, 0x00, 0x00, 
	0x0e, 0x00, 0xc0, 0x00, 0x01, 0x00, 0x30, 0x00, 0x00, 0xc0, 0x08, 0x00, 0x00, 0x30, 0x04, 0x00, 
	0x00, 0x08, 0x03, 0x00, 0x00, 0x06, 0x00, 0x80, 0x00, 0x01, 0x00, 0x40, 0x00, 0x00, 0x80, 0x20, 
	0x00, 0x00, 0x40, 0x20, 0x00, 0x00, 0x20, 0x40, 0x00, 0x00, 0x18, 0x80, 0x00, 0x00, 0x07, 0x00, 
	0x00, 0x00, 0x01, 0x00
};
// 'sensor_4c_off', 25x19px
const unsigned char bitmap_sensor_4c_off [] PROGMEM = {
	0x10, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x23, 0x80, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 
	0x40, 0x30, 0x00, 0x00, 0x80, 0x0c, 0x00, 0x00, 0x80, 0x02, 0x00, 0x00, 0x40, 0x01, 0x80, 0x00, 
	0x38, 0x00, 0x40, 0x00, 0x04, 0x00, 0x20, 0x00, 0x03, 0x00, 0x10, 0x00, 0x00, 0xc0, 0x08, 0x00, 
	0x00, 0x20, 0x06, 0x00, 0x00, 0x10, 0x01, 0x80, 0x00, 0x0c, 0x01, 0x00, 0x00, 0x02, 0x02, 0x00, 
	0x00, 0x01, 0x8c, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x20, 0x00
};
// 'sensor_4b_on', 27x21px
const unsigned char bitmap_sensor_4b_on [] PROGMEM = {
	0x18, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 
	0x7f, 0xf0, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0x3f, 0xff, 0x00, 0x00, 
	0x0f, 0xff, 0xc0, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xfc, 0x00, 
	0x00, 0x0f, 0xff, 0x00, 0x00, 0x07, 0xff, 0x80, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00, 0xff, 0xe0, 
	0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x07, 0x00, 
	0x00, 0x00, 0x01, 0x00
};
// 'sensor_3d_on', 21x11px
const unsigned char bitmap_sensor_3d_on [] PROGMEM = {
	0xff, 0x00, 0x00, 0xff, 0xf0, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xf8, 0xff, 
	0xff, 0xf8, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xe0, 0x00, 0x1f, 0xc0, 0x00, 0x03, 
	0xc0
};
// 'sensor_4d_off', 21x16px
const unsigned char bitmap_sensor_4d_off [] PROGMEM = {
	0x10, 0x00, 0x00, 0x18, 0x00, 0x00, 0x27, 0x00, 0x00, 0x20, 0x80, 0x00, 0x40, 0x60, 0x00, 0x80, 
	0x18, 0x00, 0x80, 0x0c, 0x00, 0x70, 0x02, 0x00, 0x18, 0x01, 0x80, 0x06, 0x00, 0x40, 0x01, 0x00, 
	0x30, 0x00, 0x80, 0x08, 0x00, 0x60, 0x08, 0x00, 0x18, 0x10, 0x00, 0x06, 0x20, 0x00, 0x01, 0xc0
};