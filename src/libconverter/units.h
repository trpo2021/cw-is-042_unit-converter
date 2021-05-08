#pragma once

#include <libconverter/input.h>

DefineUnits* from_one_unit(
        DefineUnits* units,
        BSTree* unit_list,
        int num_of_units,
        const char* coef_list_path);