#include <libconverter/converter.h>
#include <libconverter/units.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void to_another_unit(DefineUnits* units, struct bstree* unit_list, struct bstree* coefficient_list, int num_of_units)
{
    struct bstree* coefficient_node;
    int key = -1;
    for (int i = 0; i < num_of_units; ++i) {
        if (is_category_compliance(unit_list, units->want_unit, i) == 0) {
            key = i;
        }
    }
    if (key == -1) {
        exit(EXIT_FAILURE);
    }
    coefficient_node = bstree_lookup(coefficient_list, key);
    units->want_value /= atof(coefficient_node->value);
}

DefineUnits* from_one_unit(DefineUnits* units, struct bstree* unit_list, int num_of_units, const char* coef_list_path)
{
    if (strcmp(units->have_unit, units->want_unit) == 0) {
        return units;
    }

    struct bstree* coefficient_list;
    struct bstree* coefficient_node;
    coefficient_list = add_units_to_list(coef_list_path, num_of_units);
    printf("I have: %lf %s", units->have_value, units->have_unit);

    int key = -1;
    for (int i = 0; i < num_of_units; ++i) {
        if (is_category_compliance(unit_list, units->have_unit, i) == true) {
            key = i - 1;
            break;
        }
    }
    if (key == -1) {
        return units;
    }
    coefficient_node = bstree_lookup(coefficient_list, key);
    units->want_value = atof(coefficient_node->value) * units->have_value;
    to_another_unit(units, unit_list, coefficient_list, num_of_units);
    printf("Now I have: %0.9lf %s", units->want_value, units->want_unit);

    return units;
}