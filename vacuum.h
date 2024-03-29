#pragma once

/*#include <stdlib.h>
#include <math.h>
#include <cab202_graphics.h>
#include "vacuum.h"*/

void setup_vacuum();

void draw_vacuum();

void update_vacuum();

void control_vacuum(char key);

void return_to_base();

void pause_vacuum();

void set_direction();
int get_direction();

void set_battery_level();
int get_battery_level();

void set_vacuum_x();
void set_vacuum_y();

void get_vacuum_coords(double*x, double*y);
void get_vacuum_size(int* w, int* h);

char* get_vacuum_bitmap();

double get_charging_ref_time();
void set_charging_ref_time(double t);