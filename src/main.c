/* 1 0f 8 Decoder Chip by Dlloydev*/

#include "wokwi-api.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  pin_t pin_D1;
  pin_t pin_D2;
  pin_t pin_D3;
  pin_t pin_D4;
  pin_t pin_D5;
  pin_t pin_D6;
  pin_t pin_D7;
  pin_t pin_D8;
  uint32_t Select_attr;
} chip_state_t;

static void chip_timer_event(void *user_data);

void chip_init(void) {
  chip_state_t *chip = malloc(sizeof(chip_state_t));
  chip->pin_D1 = pin_init("D1", OUTPUT);
  chip->pin_D2 = pin_init("D2", OUTPUT);
  chip->pin_D3 = pin_init("D3", OUTPUT);
  chip->pin_D4 = pin_init("D4", OUTPUT);
  chip->pin_D5 = pin_init("D5", OUTPUT);
  chip->pin_D6 = pin_init("D6", OUTPUT);
  chip->pin_D7 = pin_init("D7", OUTPUT);
  chip->pin_D8 = pin_init("D8", OUTPUT);
  chip->Select_attr = attr_init("Select", 0);

  const timer_config_t timer_config = {
    .callback = chip_timer_event,
    .user_data = chip,
  };
  timer_t timer_id = timer_init(&timer_config);
  timer_start(timer_id, 1000, true);
}

static void chip_timer_event(void *user_data) {
  chip_state_t *chip = (chip_state_t*)user_data;
  pin_write(chip->pin_D8, (attr_read(chip->Select_attr) == 8) ? 1 : 0);
  pin_write(chip->pin_D7, (attr_read(chip->Select_attr) == 7) ? 1 : 0);
  pin_write(chip->pin_D6, (attr_read(chip->Select_attr) == 6) ? 1 : 0);
  pin_write(chip->pin_D5, (attr_read(chip->Select_attr) == 5) ? 1 : 0);
  pin_write(chip->pin_D4, (attr_read(chip->Select_attr) == 4) ? 1 : 0);
  pin_write(chip->pin_D3, (attr_read(chip->Select_attr) == 3) ? 1 : 0);
  pin_write(chip->pin_D2, (attr_read(chip->Select_attr) == 2) ? 1 : 0);
  pin_write(chip->pin_D1, (attr_read(chip->Select_attr) == 1) ? 1 : 0);
}
