#pragma once

#include <infos/define.h>

namespace infos {
	namespace arch {
		namespace x86 {
            struct vbe_mode_info_structure {
                uint16_t attributes;
                uint8_t window_a;
                uint8_t window_b;
                uint16_t granularity;
                uint16_t window_size;
                uint16_t segment_a;
                uint16_t segment_b;
                uint32_t win_func_ptr;
                uint16_t pitch;
                uint16_t width;
                uint16_t height;
                uint8_t w_char;
                uint8_t y_char;
                uint8_t planes;
                uint8_t bpp;
                uint8_t banks;
                uint8_t memory_model;
                uint8_t bank_size;
                uint8_t image_pages;
                uint8_t reserved0;
             
                uint8_t red_mask;
                uint8_t red_position;
                uint8_t green_mask;
                uint8_t green_position;
                uint8_t blue_mask;
                uint8_t blue_position;
                uint8_t reserved_mask;
                uint8_t reserved_position;
                uint8_t direct_color_attributes;
             
                uint32_t framebuffer;
                uint32_t off_screen_mem_off;
                uint16_t off_screen_mem_size;
                uint8_t reserved1[206];
            } __attribute__ ((packed));

            struct vbe_info_structure {
                char signature[4];
                uint16_t version;
                uint32_t oem;
                uint32_t capabilities;
                uint32_t video_modes;
                uint16_t video_memory;
                uint16_t software_rev;
                uint32_t vendor;
                uint32_t product_name;
                uint32_t product_rev;
                char reserved[222];
                char oem_data[256];
            } __attribute__ ((packed));

            struct vbe2_pmi_table {
                uint16_t set_window;
                uint16_t set_display_start;
                uint16_t set_pallette;
            } __attribute__ ((packed));
        }
    }
}
