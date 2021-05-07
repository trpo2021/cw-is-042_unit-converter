#include <libconverter/converter.h>
#include <libconverter/input.h>
#include <libconverter/units.h>

#include <string.h>

DefineUnits* from_one_unit(DefineUnits* units, struct bstree* unit_list, int num_of_units, const char* coef_list_path)
{
    if (strcmp(units->have_unit, units->want_unit) == 0) {
        return units;
    }

    struct bstree* coefficient_list;
    struct bstree* coefficient_node;
    coefficient_list = add_units_to_list(coef_list_path, num_of_units);

    for (int i = 0; i < num_of_units; ++i) {
        if (is_category_compliance(unit_list, units->have_unit, i) == 1) {
            coefficient_node = bstree_lookup(coefficient_list, i);
            units->want_value = atof(coefficient_node->value) * units->have_value;
        }
    }
    units = to_another_unit(units, unit_list, coefficient_list, num_of_units);

    return units;
}

static DefineUnits* to_another_unit(DefineUnits* units, struct bstree* unit_list, struct bstree* coefficient_list, int num_of_units)
{
    struct bstree* coefficient_node;
    for (int i = 0; i < num_of_units; ++i) {
        if (is_category_compliance(unit_list, units->have_unit, i) == 1) {
            coefficient_node = bstree_lookup(coefficient_list, i);
            units->want_value /= atof(coefficient_node->value);
        }
    }
    return units;
}