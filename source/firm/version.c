#include "firm.h"
#include "../common.h"

// We use the firm's section 0's hash to identify the version
struct firm_signature firm_signatures[] = {
    {.sig = { 0xEE, 0xE2, 0x81, 0x2E, 0xB9, 0x10, 0x0D, 0x03, 0xFE, 0xA2, 0x3F, 0x44, 0xB5, 0x1C, 0xB3, 0x5E },
     .version = 0x1F,
     .version_string = "4.1.0",
     .console = console_o3ds },
    {.sig = { 0x8C, 0x29, 0xDA, 0x7B, 0xB5, 0x5F, 0xFE, 0x44, 0x1F, 0x66, 0x79, 0x70, 0x8E, 0xE4, 0x42, 0xE3 },
     .version = 0x2A,
     .version_string = "6.1.0",
     .console = console_o3ds },
    {.sig = { 0x1D, 0x96, 0x80, 0xD9, 0x0A, 0xA9, 0xDB, 0xE8, 0x29, 0x77, 0xCB, 0x7D, 0x90, 0x55, 0xB7, 0xF9 },
     .version = 0x30,
     .version_string = "7.2.0",
     .console = console_o3ds },
    {.sig = { 0x3B, 0x61, 0x2E, 0xBA, 0x42, 0xAE, 0x24, 0x46, 0xAD, 0x60, 0x2F, 0x7B, 0x52, 0x16, 0x82, 0x91 },
     .version = 0x37,
     .version_string = "8.0.0",
     .console = console_o3ds },
    {.sig = { 0x3F, 0xBF, 0x14, 0x06, 0x33, 0x77, 0x82, 0xDE, 0xB2, 0x68, 0x83, 0x01, 0x6B, 0x1A, 0x71, 0x69 },
     .version = 0x38,
     .version_string = "9.0.0",
     .console = console_o3ds },
    {.sig = { 0x5C, 0x6A, 0x51, 0xF3, 0x79, 0x4D, 0x21, 0x91, 0x0B, 0xBB, 0xFD, 0x17, 0x7B, 0x72, 0x6B, 0x59 },
     .version = 0x49,
     .version_string = "9.6.0",
     .console = console_o3ds },
    {.sig = { 0xF5, 0x7E, 0xC3, 0x86, 0x1F, 0x8D, 0x8E, 0xFB, 0x44, 0x61, 0xF3, 0x16, 0x51, 0x0A, 0x57, 0x7D },
     .version = 0x50,
     .version_string = "10.4.0",
     .console = console_o3ds },
    {.sig = { 0xE9, 0xAD, 0x74, 0x9D, 0x46, 0x9C, 0x9C, 0xF4, 0x96, 0x9E, 0x1A, 0x7A, 0xDF, 0x40, 0x2A, 0x82 },
     .version = 0x52,
     .version_string = "11.0.0",
     .console = console_o3ds },
    {.sig = { 0x31, 0xCC, 0x46, 0xCD, 0x61, 0x7A, 0xE7, 0x13, 0x7F, 0xE5, 0xFC, 0x20, 0x46, 0x91, 0x6A, 0xBB },
     .version = 0x04,
     .version_string = "9.0.0",
     .console = console_n3ds },
    {.sig = { 0x40, 0x35, 0x6C, 0x9A, 0x24, 0x36, 0x93, 0x7B, 0x76, 0xFE, 0x5D, 0xB1, 0x4D, 0x05, 0x06, 0x52 },
     .version = 0x0F,
     .version_string = "9.5.0",
     .console = console_n3ds },
    {.sig = { 0x07, 0xFE, 0x9A, 0x62, 0x3F, 0xDE, 0x54, 0xC1, 0x9B, 0x06, 0x91, 0xD8, 0x4F, 0x44, 0x9C, 0x21 },
     .version = 0x1B,
     .version_string = "10.2.0",
     .console = console_n3ds },
    {.sig = { 0x1A, 0x56, 0x5C, 0xFF, 0xC9, 0xCC, 0x62, 0xBB, 0x2B, 0xC2, 0x23, 0xB6, 0x4F, 0x48, 0xD1, 0xCC },
     .version = 0x1F,
     .version_string = "10.4.0",
     .console = console_n3ds },
    {.sig = { 0x52, 0x30, 0x0F, 0x55, 0xA2, 0x64, 0x4E, 0xFF, 0x96, 0x90, 0xF0, 0xE5, 0x6E, 0xC8, 0x2E, 0xB3 },
     .version = 0x21,
     .version_string = "11.0.0",
     .console = console_n3ds },
    {.sig = { 0xE8, 0xB8, 0x82, 0xF5, 0x8C, 0xC4, 0x1B, 0x24, 0x05, 0x60, 0x6D, 0xB8, 0x74, 0xF5, 0xE5, 0xDD },
     .version = 0x16,
     .version_string = "6.2.0_TWL",
     .console = console_o3ds },
    {.sig = { 0x0F, 0x05, 0xC5, 0xF3, 0x60, 0x83, 0x8B, 0x9D, 0xC8, 0x44, 0x3F, 0xB3, 0x06, 0x4D, 0x30, 0xC7 },
     .version = 0x00,
     .version_string = "9.0.0_TWL",
     .console = console_n3ds },
    {.sig = { 0x65, 0xB7, 0x55, 0x78, 0x97, 0xE6, 0x5C, 0xD6, 0x11, 0x74, 0x95, 0xDD, 0x61, 0xE8, 0x08, 0x40 },
     .version = 0x0B,
     .version_string = "6.0.0_AGB",
     .console = console_o3ds },
    {.sig = { 0xAF, 0x81, 0xA1, 0xAB, 0xBA, 0xAC, 0xAC, 0xA7, 0x30, 0xE8, 0xD8, 0x74, 0x7C, 0x47, 0x1C, 0x5D },
     .version = 0x00,
     .version_string = "9.0.0_AGB",
     .console = console_n3ds },
    {.version = 0xFF, .version_string = "Not found" } // Terminate list
};

struct firm_signature *
get_firm_info(firm_h *firm)
{
    for (struct firm_signature *signature = firm_signatures;; signature++) {
        if (memcmp(signature->sig, firm->section[0].hash, 0x10) == 0) {
            return signature;
        }
        if (signature->version == 0xFF) {
            return signature; // Error. Not found, invalid, etc.
        }
    }

    return NULL;
}
