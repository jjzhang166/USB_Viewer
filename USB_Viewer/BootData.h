#pragma once



unsigned char mbr_data[512] = {
	/*引导代码开始*/0xFA, 0x31, 0xC0, 0x8E, 0xD8, 0x8E, 0xC0, 0x8E, 0xD0, 0xBC, 0x00, 0x7C, 0xFB, 0xFC, 0x89, 0xE6,
	0xBF, 0x00, 0x06, 0xB9, 0x00, 0x01, 0xF3, 0xA5, 0xEA, 0xDC, 0x06, 0x00, 0x00, 0x10, 0x00, 0x01,
	0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00,
	0xFF, 0x00, 0x99, 0x07, 0x1E, 0x0E, 0x1F, 0x3A, 0x16, 0x10, 0x00, 0x74, 0x06, 0x1F, 0xEA, 0x36,
	0xE7, 0x00, 0xF0, 0x3D, 0xFB, 0x54, 0x75, 0x05, 0x8C, 0xD8, 0xFB, 0xEB, 0x1D, 0x80, 0xFC, 0x08,
	0x75, 0x1B, 0xE8, 0x81, 0x00, 0x8A, 0x36, 0x13, 0x00, 0xFE, 0xCE, 0x8B, 0x0E, 0x15, 0x00, 0x86,
	0xCD, 0xC0, 0xE1, 0x06, 0x0A, 0x0E, 0x11, 0x00, 0x31, 0xC0, 0xF8, 0xEB, 0x65, 0x80, 0xFC, 0x02,
	0x72, 0xCB, 0x80, 0xFC, 0x04, 0x77, 0xC6, 0x60, 0x80, 0xCC, 0x40, 0x50, 0xBE, 0x00, 0x00, 0xC7,
	0x04, 0x10, 0x00, 0x30, 0xE4, 0x89, 0x44, 0x02, 0x89, 0x5C, 0x04, 0x8C, 0x44, 0x06, 0x66, 0x31,
	0xC0, 0x66, 0x89, 0x44, 0x0C, 0x88, 0xF0, 0xF6, 0x26, 0x11, 0x00, 0x88, 0xCF, 0x88, 0xEB, 0xC0,
	0xEF, 0x06, 0x81, 0xE1, 0x3F, 0x00, 0x01, 0xC8, 0x48, 0x89, 0xC7, 0xA1, 0x13, 0x00, 0xF7, 0x26,
	0x11, 0x00, 0xF7, 0xE3, 0x01, 0xF8, 0x81, 0xD2, 0x00, 0x00, 0x89, 0x44, 0x08, 0x89, 0x54, 0x0A,
	0x58, 0x30, 0xC0, 0x8A, 0x16, 0x10, 0x00, 0xE8, 0x0C, 0x00, 0x88, 0x26, 0x03, 0x00, 0x61, 0xA1,
	0x02, 0x00, 0x1F, 0xCA, 0x02, 0x00, 0x9C, 0xFF, 0x1E, 0x22, 0x00, 0xC3, 0x80, 0xFA, 0x8F, 0x7F,
	0x04, 0x88, 0x16, 0x2D, 0x06, 0xBE, 0x87, 0x07, 0xE8, 0x8D, 0x00, 0xBE, 0xBE, 0x07, 0x31, 0xC0,
	0xB9, 0x04, 0x00, 0xF6, 0x04, 0x80, 0x74, 0x03, 0x40, 0x89, 0xF5, 0x81, 0xC6, 0x10, 0x00, 0xE2,
	0xF2, 0x48, 0x74, 0x02, 0xCD, 0x18, 0xBF, 0x05, 0x00, 0xBE, 0x1D, 0x06, 0xC7, 0x44, 0x02, 0x01,
	0x00, 0x66, 0x8B, 0x46, 0x08, 0x66, 0x89, 0x44, 0x08, 0xB8, 0x00, 0x42, 0x8A, 0x16, 0x2D, 0x06,
	0xCD, 0x13, 0x73, 0x0D, 0x4F, 0x74, 0x49, 0x30, 0xE4, 0x8A, 0x16, 0x2D, 0x06, 0xCD, 0x13, 0xEB,
	0xD8, 0xA1, 0xFE, 0x7D, 0x3D, 0x55, 0xAA, 0x75, 0x37, 0xFA, 0x66, 0xA1, 0x4C, 0x00, 0x66, 0xA3,
	0x3F, 0x06, 0xBE, 0x13, 0x04, 0x8B, 0x04, 0x48, 0x89, 0x04, 0xC1, 0xE0, 0x06, 0x8E, 0xC0, 0x31,
	0xFF, 0xBE, 0x1D, 0x06, 0xB9, 0x60, 0x00, 0xFC, 0xF3, 0xA5, 0xC7, 0x06, 0x4C, 0x00, 0x17, 0x00,
	0xA3, 0x4E, 0x00, 0xFB, 0x8A, 0x16, 0x2D, 0x06, 0x89, 0xEE, 0xFA, 0xEA, 0x00, 0x7C, 0x00, 0x00,
	0xBE, 0xAA, 0x07, 0xE8, 0x02, 0x00, 0xEB, 0xFE, 0xAC, 0x20, 0xC0, 0x74, 0x09, 0xB4, 0x0E, 0xBB,
	0x07, 0x00, 0xCD, 0x10, 0xEB, 0xF2, 0xC3, 0x53, 0x74, 0x61, 0x72, 0x74, 0x20, 0x62, 0x6F, 0x6F,
	0x74, 0x69, 0x6E, 0x67, 0x20, 0x66, 0x72, 0x6F, 0x6D, 0x20, 0x55, 0x53, 0x42, 0x20, 0x64, 0x65,
	0x76, 0x69, 0x63, 0x65, 0x2E, 0x2E, 0x2E, 0x0D, 0x0A, 0x00, 0x42, 0x6F, 0x6F, 0x74, 0x20, 0x66,
	0x61, 0x69, 0x6C, 0x65, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,/*引导代码结束*/ 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xAA
};

unsigned char pbr_ntfs_data[2048] = {
	0xEB, 0x52, 0x90, 0x4E, 0x54, 0x46, 0x53, 0x20, 0x20, 0x20, 0x20, 0x00, 0x02, 0x08, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x3F, 0x00, 0xFF, 0x00, 0x00, 0x08, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xFF, 0x37, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xAD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xF6, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xBC, 0xA5, 0x21, 0x78, 0xEC, 0x21, 0x78, 0x7C,
	0x00, 0x00, 0x00, 0x00, /*引导代码开始*/0xFA, 0xFC, 0xB6, 0x00, 0x31, 0xC0, 0xBD, 0x00, 0x7C, 0x8E, 0xD0, 0x8D,
	0x66, 0xE0, 0xFB, 0x89, 0x56, 0xFE, 0x50, 0xB4, 0x41, 0xBB, 0xAA, 0x55, 0xCD, 0x13, 0x1F, 0x72,
	0x10, 0x81, 0xFB, 0x55, 0xAA, 0x75, 0x0A, 0xF6, 0xC1, 0x01, 0x74, 0x05, 0xC6, 0x86, 0xAA, 0x01,
	0x42, 0x16, 0x07, 0x66, 0x81, 0xBE, 0xFC, 0x07, 0x47, 0x52, 0x55, 0x42, 0x74, 0x13, 0xBB, 0x00,
	0x7E, 0x66, 0x8B, 0x86, 0x1C, 0x00, 0x66, 0x40, 0xE8, 0xE1, 0x00, 0xE8, 0xDE, 0x00, 0xE8, 0xDB,
	0x00, 0x66, 0x31, 0xC0, 0x8B, 0x46, 0x0B, 0x89, 0x46, 0xFC, 0xE8, 0x8C, 0x00, 0x88, 0xCB, 0x8A,
	0x46, 0x0D, 0xE8, 0x84, 0x00, 0x88, 0xCD, 0x00, 0xDD, 0x80, 0xED, 0x09, 0x88, 0x6E, 0xFB, 0x8A,
	0x46, 0x44, 0xE8, 0x65, 0x00, 0x80, 0xF9, 0x03, 0x76, 0x05, 0xB0, 0x01, 0xE9, 0xFB, 0x00, 0x88,
	0x4E, 0xF9, 0x8A, 0x46, 0x40, 0xE8, 0x52, 0x00, 0x80, 0xF9, 0x01, 0x75, 0xED, 0x88, 0x4E, 0xFA,
	0x66, 0x8B, 0x46, 0x30, 0x88, 0xE9, 0x66, 0xD3, 0xE0, 0x66, 0x03, 0x86, 0x1C, 0x00, 0x66, 0x89,
	0x46, 0xF4, 0xBA, 0x01, 0x00, 0x8A, 0x4E, 0xFA, 0xD3, 0xE2, 0x89, 0xD1, 0xBB, 0x00, 0x20, 0x53,
	0xE8, 0x79, 0x00, 0xE2, 0xFB, 0x5B, 0x81, 0x3F, 0x46, 0x49, 0x75, 0x6C, 0x89, 0xD1, 0xE8, 0x34,
	0x00, 0x89, 0xDF, 0xB0, 0x80, 0xE8, 0x40, 0x02, 0x72, 0x5E, 0xBB, 0x00, 0x38, 0x66, 0x31, 0xC0,
	0xB0, 0x05, 0xE8, 0x8A, 0x03, 0x89, 0xDF, 0xE9, 0xD6, 0x00, 0x08, 0xC0, 0x78, 0x04, 0x88, 0xE9,
	0xEB, 0x09, 0xF6, 0xD8, 0x2C, 0x09, 0x88, 0xC1, 0xC3, 0x30, 0xC9, 0xFE, 0xC1, 0x66, 0xD1, 0xE8,
	0x73, 0xF9, 0xFE, 0xC9, 0xC3, 0x53, 0x57, 0x89, 0xDF, 0x8B, 0x47, 0x06, 0x48, 0x89, 0xC3, 0xF7,
	0x66, 0xFC, 0xC1, 0xE1, 0x09, 0x39, 0xC1, 0x75, 0x1F, 0x89, 0xD9, 0x89, 0xFB, 0x03, 0x5F, 0x04,
	0x8B, 0x07, 0x83, 0xEF, 0x02, 0x03, 0x7E, 0xFC, 0x83, 0xC3, 0x02, 0x3B, 0x05, 0x75, 0x09, 0x8B,
	0x17, 0x89, 0x15, 0xE2, 0xF0, 0x5F, 0x5B, 0xC3, 0xB0, 0x02, 0xEB, 0x4E, 0x66, 0x60, 0x66, 0x31,
	0xD2, 0x66, 0x52, 0x66, 0x50, 0x06, 0x53, 0x6A, 0x01, 0x6A, 0x10, 0x66, 0x31, 0xC9, 0x66, 0xFF,
	0x76, 0x18, 0x59, 0x66, 0xF7, 0xF1, 0x42, 0x59, 0x52, 0x31, 0xD2, 0x66, 0xF7, 0xF1, 0x86, 0xD6,
	0x59, 0x86, 0xC5, 0xC0, 0xE4, 0x06, 0x08, 0xE1, 0xB8, 0x01, 0x02, 0x89, 0xE6, 0x8A, 0x56, 0xFE,
	0xCD, 0x13, 0x61, 0x66, 0x61, 0x72, 0x37, 0x66, 0x40, 0x03, 0x5E, 0x0B, 0x73, 0x09, 0x52, 0x8C,
	0xC2, 0x80, 0xC6, 0x10, 0x8E, 0xC2, 0x5A, 0xC3, 0x30, 0x00, 0x00, 0x86, 0xC8, 0x01, 0xEB, 0x1E,
	0x4E, 0x6F, 0x20, 0x67, 0x72, 0x6C, 0x64, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xD3, 0xA1, 0xBE, 0xC8,
	0x7D, 0xAC, 0xB4, 0x0E, 0xCD, 0x10, 0x3C, 0x00, 0x75, 0xF7, 0xEB, 0xFE, 0x00, 0x00, 0x55, 0xAA,
	0xE8, 0x6F, 0x01, 0xB0, 0x90, 0xE8, 0x85, 0x01, 0x0F, 0x82, 0xBE, 0x00, 0x66, 0x81, 0x7C, 0x08,
	0x00, 0x04, 0x18, 0x00, 0x75, 0xEF, 0x03, 0x74, 0x14, 0x80, 0x3C, 0x30, 0x75, 0xE7, 0x83, 0xC6,
	0x10, 0x03, 0x34, 0xE8, 0xF5, 0x00, 0x0F, 0x83, 0xA7, 0x00, 0xE8, 0x45, 0x01, 0xB0, 0xB0, 0xE8,
	0x5B, 0x01, 0x0F, 0x82, 0x94, 0x00, 0x8B, 0x5C, 0x09, 0x80, 0xFB, 0x04, 0x75, 0xF1, 0x80, 0x7C,
	0x08, 0x00, 0x75, 0x09, 0xFF, 0x74, 0x10, 0x03, 0x74, 0x14, 0x56, 0xEB, 0x1B, 0xFF, 0x74, 0x30,
	0x66, 0x31, 0xD2, 0x66, 0x8B, 0x4C, 0x28, 0x81, 0xF9, 0x00, 0x10, 0x77, 0x6D, 0x66, 0xC1, 0xE9,
	0x09, 0xBB, 0x00, 0x60, 0x53, 0xE8, 0xB9, 0x02, 0xB0, 0xA0, 0xE8, 0xEB, 0x00, 0x72, 0x5B, 0x66,
	0x81, 0x7C, 0x08, 0x01, 0x04, 0x40, 0x00, 0x75, 0xF1, 0x8A, 0x4E, 0xF9, 0x66, 0x31, 0xDB, 0xB3,
	0x01, 0x66, 0xD3, 0xE3, 0x66, 0x31, 0xD2, 0x5E, 0x59, 0x51, 0xAC, 0xB9, 0x08, 0x00, 0x51, 0x50,
	0xA8, 0x01, 0x74, 0x2A, 0x56, 0x66, 0x52, 0x66, 0x53, 0x66, 0x89, 0xD9, 0xBB, 0x00, 0x50, 0xE8,
	0x3A, 0x02, 0x72, 0x26, 0x81, 0x3F, 0x49, 0x4E, 0x75, 0x20, 0xE8, 0x98, 0xFE, 0x89, 0xDE, 0x83,
	0xC6, 0x18, 0x03, 0x34, 0xE8, 0x64, 0x00, 0x73, 0x18, 0x66, 0x5B, 0x66, 0x5A, 0x5E, 0x66, 0x01,
	0xDA, 0x58, 0xD0, 0xE8, 0x59, 0xE2, 0xC7, 0x59, 0xE2, 0xBF, 0x8D, 0xB6, 0xD0, 0x01, 0xE9, 0x20,
	0xFF, 0x83, 0x7C, 0x04, 0x00, 0x0F, 0x85, 0xF1, 0xFD, 0x66, 0x8B, 0x04, 0x89, 0xFB, 0xE8, 0xCE,
	0x01, 0xB0, 0x80, 0xE8, 0x72, 0x00, 0x72, 0x2E, 0x80, 0x7C, 0x08, 0x01, 0x74, 0x0E, 0x8B, 0x4C,
	0x10, 0xC4, 0xBE, 0xE8, 0x01, 0x03, 0x74, 0x14, 0xF3, 0xA4, 0xEB, 0x12, 0x66, 0x31, 0xD2, 0x66,
	0x8B, 0x4C, 0x28, 0x66, 0xC1, 0xE9, 0x09, 0xC4, 0x9E, 0xE8, 0x01, 0xE8, 0x13, 0x02, 0x8B, 0x56,
	0xFE, 0x52, 0xFF, 0xAE, 0xE8, 0x01, 0xB0, 0x04, 0xE9, 0xAF, 0xFE, 0x89, 0xF3, 0xF6, 0x47, 0x0C,
	0x02, 0x74, 0x02, 0xF9, 0xC3, 0x30, 0xED, 0x56, 0x8D, 0xB6, 0xD3, 0x01, 0x83, 0xC3, 0x52, 0x8A,
	0x4F, 0xFE, 0xAC, 0x8A, 0x27, 0x80, 0xFC, 0x41, 0x72, 0x08, 0x80, 0xFC, 0x5A, 0x77, 0x03, 0x80,
	0xC4, 0x20, 0x38, 0xE0, 0x75, 0x0C, 0x43, 0x43, 0xE2, 0xE8, 0x80, 0x3C, 0x00, 0x75, 0x03, 0x5E,
	0xF8, 0xC3, 0x5E, 0x03, 0x74, 0x08, 0xEB, 0xC3, 0xE8, 0x17, 0x00, 0xE8, 0x2F, 0x00, 0x72, 0x11,
	0xF6, 0x05, 0x04, 0x75, 0x0B, 0xE8, 0x25, 0x00, 0x73, 0xF6, 0xE8, 0x05, 0x00, 0xE8, 0x1D, 0x00,
	0xF8, 0xC3, 0x50, 0x31, 0xC0, 0x89, 0x05, 0x89, 0x45, 0x06, 0x8B, 0x45, 0x14, 0x01, 0xF8, 0x89,
	0x45, 0x04, 0x58, 0x81, 0xFF, 0x00, 0x20, 0x75, 0x03, 0x80, 0x0D, 0x02, 0xC3, 0x8B, 0x5D, 0x04,
	0xF6, 0x05, 0x04, 0x75, 0x66, 0x89, 0xDE, 0x80, 0x3C, 0xFF, 0x74, 0x16, 0x80, 0x3C, 0x20, 0x75,
	0x03, 0x89, 0x75, 0x06, 0x03, 0x5F, 0x04, 0x38, 0x04, 0x75, 0xEA, 0x89, 0x5D, 0x04, 0x89, 0x75,
	0x02, 0xC3, 0x83, 0x7D, 0x06, 0x01, 0x72, 0xF9, 0x8B, 0x75, 0x06, 0x80, 0x7C, 0x08, 0x00, 0x75,
	0x0A, 0x89, 0xF3, 0x03, 0x5F, 0x14, 0x03, 0x74, 0x04, 0xEB, 0x22, 0x66, 0x8B, 0x4C, 0x28, 0x66,
	0xC1, 0xE9, 0x09, 0x83, 0xF9, 0x08, 0x0F, 0x87, 0x9E, 0xFD, 0x8D, 0x9D, 0x00, 0x08, 0x50, 0x66,
	0x31, 0xD2, 0xE8, 0x3C, 0x01, 0x58, 0x72, 0xC9, 0x8B, 0x74, 0x30, 0x01, 0xDE, 0x89, 0x75, 0x06,
	0x80, 0x0D, 0x04, 0xF6, 0x05, 0x02, 0x74, 0x03, 0xE8, 0x5C, 0x00, 0x89, 0xDE, 0x3B, 0x5D, 0x06,
	0x72, 0x02, 0xF9, 0xC3, 0x03, 0x5F, 0x04, 0x38, 0x04, 0x75, 0xF0, 0x50, 0x06, 0x1E, 0x07, 0x89,
	0x75, 0x02, 0x89, 0x5D, 0x04, 0x66, 0x8B, 0x44, 0x10, 0x8D, 0x9D, 0x00, 0x04, 0xF6, 0x05, 0x02,
	0x75, 0x05, 0xE8, 0x8A, 0x00, 0xEB, 0x1A, 0x53, 0xE8, 0x51, 0xFD, 0x66, 0x8B, 0x44, 0x14, 0xE8,
	0x4A, 0xFD, 0x5B, 0x81, 0x3F, 0x46, 0x49, 0x0F, 0x85, 0x3D, 0xFD, 0xB9, 0x02, 0x00, 0xE8, 0x04,
	0xFD, 0x07, 0x58, 0x03, 0x5F, 0x14, 0x80, 0x3F, 0xFF, 0x74, 0xB7, 0x38, 0x07, 0x74, 0x05, 0x03,
	0x5F, 0x04, 0xEB, 0xF2, 0x89, 0xDE, 0xC3, 0x50, 0x80, 0x0D, 0x08, 0x3B, 0x5D, 0x06, 0x0F, 0x83,
	0x16, 0xFD, 0x38, 0x07, 0x74, 0x05, 0x03, 0x5F, 0x04, 0xEB, 0xF0, 0x89, 0x5D, 0x02, 0x66, 0x8B,
	0x46, 0xF4, 0x66, 0x89, 0x47, 0x10, 0x66, 0x40, 0x66, 0x89, 0x47, 0x14, 0x03, 0x5F, 0x04, 0x3B,
	0x5D, 0x06, 0x73, 0x23, 0x80, 0x3F, 0x80, 0x75, 0x1E, 0x66, 0x8B, 0x57, 0x10, 0x8A, 0x4E, 0xFA,
	0x66, 0xD3, 0xE2, 0xE8, 0x46, 0x00, 0x66, 0x09, 0xC0, 0x0F, 0x84, 0xDB, 0xFC, 0x66, 0x89, 0x47,
	0x10, 0x66, 0x89, 0x57, 0x14, 0xEB, 0xD5, 0x8B, 0x5D, 0x02, 0x80, 0x25, 0xF7, 0x58, 0xC3, 0x57,
	0xBF, 0x00, 0x20, 0x8A, 0x4E, 0xFA, 0x66, 0xD3, 0xE0, 0x66, 0x89, 0xC2, 0x66, 0xB8, 0x01, 0x00,
	0x00, 0x00, 0x66, 0xD3, 0xE0, 0x66, 0x89, 0xC1, 0xE8, 0x11, 0x00, 0x0F, 0x82, 0xA9, 0xFC, 0x81,
	0x3F, 0x46, 0x49, 0x0F, 0x85, 0xA1, 0xFC, 0xE8, 0x6B, 0xFC, 0x5F, 0xC3, 0xFF, 0x75, 0x02, 0x66,
	0x52, 0x66, 0x51, 0x53, 0x8B, 0x75, 0x02, 0x8A, 0x04, 0xF6, 0x05, 0x04, 0x74, 0x1E, 0x89, 0xF3,
	0x8A, 0x4E, 0xFB, 0x66, 0xD3, 0xEA, 0x3B, 0x5D, 0x06, 0x73, 0x11, 0x38, 0x07, 0x75, 0x0D, 0x66,
	0x39, 0x57, 0x08, 0x77, 0x07, 0x89, 0xDE, 0x03, 0x5F, 0x04, 0xEB, 0xEA, 0x89, 0x75, 0x04, 0xE8,
	0x7B, 0xFE, 0x5B, 0x66, 0x59, 0x66, 0x5A, 0x72, 0x04, 0xE8, 0x05, 0x00, 0xF8, 0x8F, 0x45, 0x02,
	0xC3, 0x51, 0x53, 0xF6, 0x44, 0x08, 0x01, 0x0F, 0x84, 0x4D, 0xFC, 0x8A, 0x44, 0x0C, 0x24, 0x01,
	0x08, 0x05, 0x66, 0x89, 0x4D, 0x1C, 0x8A, 0x4E, 0xFB, 0x66, 0x89, 0xD0, 0x66, 0xD3, 0xE8, 0x66,
	0x89, 0x45, 0x18, 0x66, 0xD3, 0xE0, 0x66, 0x29, 0xC2, 0x66, 0x89, 0x55, 0x20, 0x31, 0xD2, 0x66,
	0x89, 0x55, 0x10, 0x66, 0x8B, 0x54, 0x10, 0x03, 0x74, 0x20, 0xE8, 0xC7, 0x00, 0x66, 0x3B, 0x55,
	0x18, 0x76, 0xF7, 0x8A, 0x4E, 0xFB, 0x66, 0x09, 0xC0, 0x74, 0x47, 0x66, 0x8B, 0x45, 0x18, 0x66,
	0x2B, 0x45, 0x08, 0x66, 0x03, 0x45, 0x10, 0x66, 0xD3, 0xE0, 0x66, 0x03, 0x45, 0x20, 0xF6, 0x05,
	0x08, 0x74, 0x2A, 0x66, 0x50, 0x66, 0x40, 0x66, 0x2B, 0x55, 0x08, 0x66, 0x03, 0x55, 0x10, 0x66,
	0xD3, 0xE2, 0x66, 0x39, 0xC2, 0x75, 0x0C, 0x51, 0xE8, 0x89, 0x00, 0x59, 0x66, 0x8B, 0x45, 0x10,
	0x66, 0xD3, 0xE0, 0x66, 0x89, 0xC2, 0x66, 0x58, 0x66, 0x03, 0x96, 0x1C, 0x00, 0x66, 0x03, 0x86,
	0x1C, 0x00, 0xF6, 0x05, 0x08, 0x75, 0x4A, 0x66, 0x53, 0x66, 0x89, 0xD3, 0x66, 0x2B, 0x5D, 0x18,
	0x66, 0xD3, 0xE3, 0x66, 0x89, 0xD9, 0x66, 0x5B, 0x66, 0x2B, 0x4D, 0x20, 0x66, 0xC7, 0x45, 0x20,
	0x00, 0x00, 0x00, 0x00, 0x66, 0x3B, 0x4D, 0x1C, 0x76, 0x04, 0x66, 0x8B, 0x4D, 0x1C, 0x66, 0x51,
	0x66, 0x09, 0xC0, 0x75, 0x05, 0xE8, 0xC7, 0x00, 0xEB, 0x05, 0xE8, 0x8F, 0xFB, 0xE2, 0xFB, 0x66,
	0x59, 0x66, 0x29, 0x4D, 0x1C, 0x76, 0x0A, 0x66, 0x89, 0x55, 0x18, 0xE8, 0x26, 0x00, 0xE9, 0x62,
	0xFF, 0x5B, 0x59, 0xC3, 0x66, 0x31, 0xC0, 0x84, 0xC9, 0x74, 0x13, 0x51, 0xAC, 0x66, 0xC1, 0xC8,
	0x08, 0xFE, 0xC9, 0x75, 0xF7, 0x59, 0xF6, 0xD9, 0x80, 0xC1, 0x04, 0xC0, 0xE1, 0x03, 0xC3, 0xB0,
	0x03, 0xE9, 0xA6, 0xFB, 0xAC, 0x88, 0xC1, 0x88, 0xCD, 0x80, 0xE1, 0x0F, 0x74, 0x1D, 0xC0, 0xED,
	0x04, 0xE8, 0xD0, 0xFF, 0x66, 0xD3, 0xE8, 0x66, 0x89, 0x55, 0x08, 0x66, 0x01, 0xC2, 0x88, 0xE9,
	0xE8, 0xC1, 0xFF, 0x66, 0xD3, 0xF8, 0x66, 0x01, 0x45, 0x10, 0xC3, 0xF6, 0x05, 0x04, 0x74, 0xCF,
	0x66, 0x52, 0x53, 0x8B, 0x75, 0x02, 0x8A, 0x04, 0xE8, 0x32, 0xFD, 0x72, 0xC2, 0x80, 0x7C, 0x08,
	0x00, 0x74, 0xBC, 0x66, 0xC7, 0x45, 0x10, 0x00, 0x00, 0x00, 0x00, 0x5B, 0x66, 0x5A, 0x03, 0x74,
	0x20, 0xEB, 0xB1, 0x55, 0x89, 0xE5, 0x66, 0x31, 0xC0, 0x87, 0x46, 0x06, 0x66, 0xC1, 0xE0, 0x04,
	0x66, 0x03, 0x46, 0x04, 0x5D, 0xC2, 0x04, 0x00, 0x55, 0x89, 0xE5, 0x66, 0xC1, 0x66, 0x04, 0x0C,
	0xC1, 0x6E, 0x04, 0x0C, 0x5D, 0xC3, 0x1E, 0x56, 0xE8, 0xD8, 0xFF, 0x66, 0x50, 0xE8, 0xE8, 0xFF,
	0x5E, 0x1F, 0x06, 0x57, 0xE8, 0xCC, 0xFF, 0x66, 0x50, 0xE8, 0xDC, 0xFF, 0x5F, 0x07, 0xC3, 0x57,
	0x66, 0x52, 0x66, 0xC1, 0xE1, 0x09, 0xF6, 0x05, 0x01, 0x74, 0x43, 0x66, 0x31, 0xD2, 0x8A, 0x55,
	0x18, 0x80, 0xE2, 0x0F, 0x74, 0x38, 0x89, 0xDF, 0x51, 0x8A, 0x4E, 0xFB, 0x80, 0xC1, 0x09, 0x66,
	0xD3, 0xE2, 0x06, 0x57, 0xE8, 0x9C, 0xFF, 0x66, 0x29, 0xD0, 0x66, 0xC7, 0x46, 0xF0, 0x10, 0x00,
	0x00, 0x00, 0x66, 0xD3, 0x66, 0xF0, 0x59, 0x66, 0x01, 0xD1, 0x66, 0x2B, 0x4E, 0xF0, 0x66, 0x51,
	0xE8, 0x39, 0x00, 0x66, 0x59, 0x66, 0x03, 0x4E, 0xF0, 0x67, 0xE3, 0x2A, 0x89, 0xFB, 0x89, 0xDF,
	0x66, 0x89, 0xCA, 0x66, 0x31, 0xC0, 0x66, 0x89, 0xC1, 0xE8, 0x96, 0xFF, 0xB9, 0x00, 0x80, 0x66,
	0x39, 0xD1, 0x76, 0x02, 0x89, 0xD1, 0x51, 0xC1, 0xE9, 0x02, 0x66, 0xF3, 0xAB, 0xE8, 0x82, 0xFF,
	0x59, 0x66, 0x29, 0xCA, 0x75, 0xE6, 0x89, 0xFB, 0x66, 0x5A, 0x5F, 0xC3, 0x1E, 0x56, 0xFC, 0x66,
	0x50, 0xE8, 0x54, 0xFF, 0x5E, 0x1F, 0x66, 0x8B, 0x56, 0xF0, 0x66, 0x01, 0xD0, 0x66, 0x50, 0xE8,
	0x46, 0xFF, 0x5F, 0x07, 0x06, 0x57, 0x1E, 0x56, 0x66, 0x31, 0xC9, 0xB9, 0x00, 0x80, 0x66, 0x39,
	0xD1, 0x76, 0x02, 0x89, 0xD1, 0x51, 0xC1, 0xE9, 0x02, 0x66, 0xF3, 0xA5, 0xE8, 0x37, 0xFF, 0x59,
	0x66, 0x29, 0xCA, 0x75, 0xE6, 0x5F, 0x07, 0x5E, 0x1F, 0x66, 0x31, 0xD2, 0xAD, 0xF6, 0xC4, 0x80,
	0x75, 0x0A, 0xB9, 0x00, 0x08, 0xF3, 0xA5, 0xBA, 0x00, 0x10, 0xEB, 0x5D, 0x89, 0xC1, 0x81, 0xE1,
	0xFF, 0x0F, 0x41, 0x01, 0xF1, 0x30, 0xFF, 0x81, 0xFA, 0x00, 0x10, 0x77, 0x5E, 0x08, 0xFF, 0x75,
	0x05, 0xAC, 0x88, 0xC3, 0xB7, 0x08, 0xF6, 0xC3, 0x01, 0x74, 0x34, 0x89, 0xD0, 0x48, 0x51, 0x53,
	0xB1, 0x0C, 0x83, 0xF8, 0x10, 0x72, 0x06, 0xD1, 0xE8, 0xFE, 0xC9, 0xEB, 0xF5, 0xAD, 0x89, 0xC3,
	0xD3, 0xEB, 0x52, 0xBA, 0x01, 0x00, 0xD3, 0xE2, 0x4A, 0x21, 0xD0, 0x5A, 0x83, 0xC0, 0x03, 0x89,
	0xC1, 0xF7, 0xDB, 0x4B, 0x26, 0x8A, 0x01, 0xAA, 0x42, 0xE2, 0xF9, 0x5B, 0x59, 0xEB, 0x02, 0xA4,
	0x42, 0xD0, 0xEB, 0xFE, 0xCF, 0x39, 0xCE, 0x72, 0xAE, 0xE8, 0xBA, 0xFE, 0x66, 0x29, 0x56, 0xF0,
	0x74, 0x06, 0x81, 0xFA, 0x00, 0x10, 0x74, 0x81, 0x5E, 0x1F, 0xC3, 0x16, 0x1F, 0xB0, 0x05, 0xE9,
	0xD8, 0xF9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x52, 0x55, 0x42/*引导代码结束*/
};

unsigned char pbr_fat32_data[512] = {
	0xEB, 0x58, 0x90, 0x4D, 0x53, 0x44, 0x4F, 0x53, 0x35, 0x2E, 0x30, 0x00, 0x02, 0x08, 0xF2, 0x17,
	0x02, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x3F, 0x00, 0xFF, 0x00, 0x00, 0x08, 0x00, 0x00,
	0x00, 0x38, 0x10, 0x00, 0x07, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
	0x01, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x80, 0x00, 0x29, 0x1E, 0xC9, 0x6D, 0x3C, 0x4E, 0x4F, 0x20, 0x4E, 0x41, 0x4D, 0x45, 0x20, 0x20,
	0x20, 0x20, 0x46, 0x41, 0x54, 0x33, 0x32, 0x20, 0x20, 0x20,/*引导代码开始*/ 0xFA, 0xFC, 0xB6, 0x00, 0x80, 0xFE,
	0xFF, 0x75, 0x02, 0xB2, 0x00, 0x31, 0xC0, 0xBD, 0x00, 0x7C, 0x8E, 0xD0, 0x8D, 0x66, 0xE0, 0xFB,
	0x89, 0x56, 0x40, 0x16, 0xB4, 0x41, 0xBB, 0xAA, 0x55, 0xCD, 0x13, 0x1F, 0x72, 0x10, 0x81, 0xFB,
	0x55, 0xAA, 0x75, 0x0A, 0xF6, 0xC1, 0x01, 0x74, 0x05, 0xC6, 0x06, 0x90, 0x7D, 0x42, 0x16, 0x07,
	0x66, 0x31, 0xC0, 0x66, 0x89, 0x46, 0x44, 0x8B, 0x46, 0x0E, 0x66, 0x03, 0x46, 0x1C, 0x66, 0x89,
	0x46, 0x48, 0x66, 0x89, 0x46, 0x4C, 0x66, 0x8B, 0x46, 0x10, 0x66, 0xF7, 0x66, 0x24, 0x66, 0x01,
	0x46, 0x4C, 0x66, 0x8B, 0x46, 0x2C, 0x66, 0x50, 0xE8, 0x8B, 0x00, 0xBE, 0xBD, 0x7D, 0x0F, 0x82,
	0x2F, 0x01, 0xC4, 0x9E, 0xE8, 0x01, 0xE8, 0x99, 0x00, 0x31, 0xFF, 0xB9, 0x0B, 0x00, 0xBE, 0xC0,
	0x7D, 0xF3, 0xA6, 0x74, 0x15, 0x83, 0xC7, 0x20, 0x83, 0xE7, 0xE0, 0x3B, 0x7E, 0x0B, 0x75, 0xEB,
	0x4A, 0x75, 0xDF, 0x66, 0x58, 0xE8, 0x2A, 0x00, 0xEB, 0xCC, 0x26, 0xFF, 0x75, 0x09, 0x26, 0xFF,
	0x75, 0x0F, 0x66, 0x58, 0x31, 0xDB, 0x66, 0x50, 0xE8, 0x4B, 0x00, 0x73, 0x08, 0x8B, 0x56, 0x40,
	0x52, 0xFF, 0xAE, 0xE8, 0x01, 0xE8, 0x5A, 0x00, 0x4A, 0x75, 0xFA, 0x66, 0x58, 0xE8, 0x02, 0x00,
	0xEB, 0xE4, 0x06, 0x53, 0x66, 0xC1, 0xE0, 0x02, 0x66, 0x0F, 0xB7, 0x5E, 0x0B, 0x66, 0xF7, 0xF3,
	0x66, 0x03, 0x46, 0x48, 0xBB, 0x60, 0x00, 0x8E, 0xC3, 0x31, 0xDB, 0x66, 0x3B, 0x46, 0x44, 0x74,
	0x07, 0x66, 0x89, 0x46, 0x44, 0xE8, 0x2A, 0x00, 0x26, 0x67, 0x80, 0x62, 0x03, 0x0F, 0x26, 0x67,
	0x66, 0x8B, 0x02, 0x5B, 0x07, 0xC3, 0x66, 0x3D, 0xF8, 0xFF, 0xFF, 0x0F, 0xF5, 0x72, 0x12, 0x66,
	0x48, 0x66, 0x48, 0x66, 0x0F, 0xB6, 0x56, 0x0D, 0x52, 0x66, 0xF7, 0xE2, 0x5A, 0x66, 0x03, 0x46,
	0x4C, 0xC3, 0x66, 0x60, 0x66, 0x31, 0xD2, 0x66, 0x52, 0x66, 0x50, 0x06, 0x53, 0x6A, 0x01, 0x6A,
	0x10, 0x66, 0x31, 0xC9, 0x66, 0xFF, 0x76, 0x18, 0x59, 0x66, 0xF7, 0xF1, 0x42, 0x59, 0x52, 0x31,
	0xD2, 0x66, 0xF7, 0xF1, 0x86, 0xD6, 0x59, 0x86, 0xC5, 0xC0, 0xE4, 0x06, 0x08, 0xE1, 0xB8, 0x01,
	0x02, 0x89, 0xE6, 0x8A, 0x56, 0x40, 0x06, 0x1E, 0xCD, 0x13, 0x1F, 0x07, 0x61, 0x66, 0x61, 0x72,
	0x4D, 0x66, 0x40, 0x03, 0x5E, 0x0B, 0x73, 0x09, 0x52, 0x8C, 0xC2, 0x80, 0xC6, 0x10, 0x8E, 0xC2,
	0x5A, 0xC3, 0x64, 0x69, 0x73, 0x6B, 0x20, 0x65, 0x72, 0x72, 0x6F, 0x72, 0x00, 0x4E, 0x6F, 0x20,
	0x47, 0x52, 0x4C, 0x44, 0x52, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xC0, 0x59, 0xBE, 0xB2,
	0x7D, 0xAC, 0xB4, 0x0E, 0xCD, 0x10, 0x3C, 0x00, 0x75, 0xF7, 0xEB, 0xFE, 0x00, 0x00, /*引导代码结束*/0x55, 0xAA
};