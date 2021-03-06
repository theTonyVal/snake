#pragma once
#include <stdint.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

int draw_pixel(uint32_t *pixel_buffer, int x, int y, uint32_t color);
int draw_rect(uint32_t *pixel_buffer, int x, int y, int w, int h, uint32_t color);
void clear_buffer(uint32_t *pixel_buffer);