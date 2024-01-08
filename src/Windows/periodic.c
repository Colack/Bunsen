#include "periodic.h"

// @Path : src\periodic.c
// Contains the periodic table data, functions, and different access methods.

static Element elements[118] = {
    {1, "H", "Hydrogen", 1.007, REACTIVE_NONMETALS},
    {2, "He", "Helium", 4.002602,  NOBLE_GASES},
    {3, "Li", "Lithium", 6.941, ALKALI_METALS},
    {4, "Be", "Beryllium", 9.0121831, ALKALINE_EARTH_METALS},
    {5, "B", "Boron", 10.811, METALLOIDS},
    {6, "C", "Carbon", 12.0107, REACTIVE_NONMETALS},
    {7, "N", "Nitrogen", 14.0067, REACTIVE_NONMETALS},
    {8, "O", "Oxygen", 15.9994, REACTIVE_NONMETALS},
    {9, "F", "Fluorine", 18.9984032, HALOGENS},
    {10, "Ne", "Neon", 20.1797, NOBLE_GASES},
    {11, "Na", "Sodium", 22.98976928, ALKALI_METALS},
    {12, "Mg", "Magnesium", 24.305, ALKALINE_EARTH_METALS},
    {13, "Al", "Aluminum", 26.9815386, POST_TRANSITION_METALS},
    {14, "Si", "Silicon", 28.0855, METALLOIDS},
    {15, "P", "Phosphorus", 30.973762, REACTIVE_NONMETALS},
    {16, "S", "Sulfur", 32.065, REACTIVE_NONMETALS},
    {17, "Cl", "Chlorine", 35.453, HALOGENS},
    {18, "Ar", "Argon", 39.948, NOBLE_GASES},
    {19, "K", "Potassium", 39.0983, ALKALI_METALS},
    {20, "Ca", "Calcium", 40.078, ALKALINE_EARTH_METALS},
    {21, "Sc", "Scandium", 44.955912, TRANSITION_METALS},
    {22, "Ti", "Titanium", 47.867, TRANSITION_METALS},
    {23, "V", "Vanadium", 50.9415, TRANSITION_METALS},
    {24, "Cr", "Chromium", 51.9961, TRANSITION_METALS},
    {25, "Mn", "Manganese", 54.938045, TRANSITION_METALS},
    {26, "Fe", "Iron", 55.845, TRANSITION_METALS},
    {27, "Co", "Cobalt", 58.933195, TRANSITION_METALS},
    {28, "Ni", "Nickel", 58.6934, TRANSITION_METALS},
    {29, "Cu", "Copper", 63.546, TRANSITION_METALS},
    {30, "Zn", "Zinc", 65.38, TRANSITION_METALS},
    {31, "Ga", "Gallium", 69.723, POST_TRANSITION_METALS},
    {32, "Ge", "Germanium", 72.630, METALLOIDS},
    {33, "As", "Arsenic", 74.921595, METALLOIDS},
    {34, "Se", "Selenium", 78.971, REACTIVE_NONMETALS},
    {35, "Br", "Bromine", 79.904, HALOGENS},
    {36, "Kr", "Krypton", 83.798, NOBLE_GASES},
    {37, "Rb", "Rubidium", 85.4678, ALKALI_METALS},
    {38, "Sr", "Strontium", 87.62, ALKALINE_EARTH_METALS},
    {39, "Y", "Yttrium", 88.90585, TRANSITION_METALS},
    {40, "Zr", "Zirconium", 91.224, TRANSITION_METALS},
    {41, "Nb", "Niobium", 92.90628, TRANSITION_METALS},
    {42, "Mo", "Molybdenum", 95.96, TRANSITION_METALS},
    {43, "Tc", "Technetium", 98, TRANSITION_METALS},
    {44, "Ru", "Ruthenium", 101.07, TRANSITION_METALS},
    {45, "Rh", "Rhodium", 102.9055, TRANSITION_METALS},
    {46, "Pd", "Palladium", 106.42, TRANSITION_METALS},
    {47, "Ag", "Silver", 107.8682, TRANSITION_METALS},
    {48, "Cd", "Cadmium", 112.411, TRANSITION_METALS},
    {49, "In", "Indium", 114.818, POST_TRANSITION_METALS},
    {50, "Sn", "Tin", 118.71, POST_TRANSITION_METALS},
    {51, "Sb", "Antimony", 121.76, METALLOIDS},
    {52, "Te", "Tellurium", 127.6, METALLOIDS},
    {53, "I", "Iodine", 126.90447, HALOGENS},
    {54, "Xe", "Xenon", 131.293, NOBLE_GASES},
    {55, "Cs", "Caesium", 132.9054519, ALKALI_METALS},
    {56, "Ba", "Barium", 137.327, ALKALINE_EARTH_METALS},
    {57, "La", "Lanthanum", 138.90547, LANTHANIDES},
    {58, "Ce", "Cerium", 140.116, LANTHANIDES},
    {59, "Pr", "Praseodymium", 140.90765, LANTHANIDES},
    {60, "Nd", "Neodymium", 144.242, LANTHANIDES},
    {61, "Pm", "Promethium", 145, LANTHANIDES},
    {62, "Sm", "Samarium", 150.36, LANTHANIDES},
    {63, "Eu", "Europium", 151.964, LANTHANIDES},
    {64, "Gd", "Gadolinium", 157.25, LANTHANIDES},
    {65, "Tb", "Terbium", 158.92535, LANTHANIDES},
    {66, "Dy", "Dysprosium", 162.5, LANTHANIDES},
    {67, "Ho", "Holmium", 164.93032, LANTHANIDES},
    {68, "Er", "Erbium", 167.259, LANTHANIDES},
    {69, "Tm", "Thulium", 168.93421, LANTHANIDES},
    {70, "Yb", "Ytterbium", 173.054, LANTHANIDES},
    {71, "Lu", "Lutetium", 174.9668, LANTHANIDES},
    {72, "Hf", "Hafnium", 178.49, TRANSITION_METALS},
    {73, "Ta", "Tantalum", 180.94788, TRANSITION_METALS},
    {74, "W", "Tungsten", 183.84, TRANSITION_METALS},
    {75, "Re", "Rhenium", 186.207, TRANSITION_METALS},
    {76, "Os", "Osmium", 190.23, TRANSITION_METALS},
    {77, "Ir", "Iridium", 192.217, TRANSITION_METALS},
    {78, "Pt", "Platinum", 195.084, TRANSITION_METALS},
    {79, "Au", "Gold", 196.966569, TRANSITION_METALS},
    {80, "Hg", "Mercury", 200.592, TRANSITION_METALS},
    {81, "Tl", "Thallium", 204.38, POST_TRANSITION_METALS},
    {82, "Pb", "Lead", 207.2, POST_TRANSITION_METALS},
    {83, "Bi", "Bismuth", 208.9804, POST_TRANSITION_METALS},
    {84, "Po", "Polonium", 209, METALLOIDS},
    {85, "At", "Astatine", 210, HALOGENS},
    {86, "Rn", "Radon", 222, NOBLE_GASES},
    {87, "Fr", "Francium", 223, ALKALI_METALS},
    {88, "Ra", "Radium", 226, ALKALINE_EARTH_METALS},
    {89, "Ac", "Actinium", 227, ACTINIDES},
    {90, "Th", "Thorium", 232.03806, ACTINIDES},
    {91, "Pa", "Protactinium", 231.0588, ACTINIDES},
    {92, "U", "Uranium", 238.02891, ACTINIDES},
    {93, "Np", "Neptunium", 237, ACTINIDES},
    {94, "Pu", "Plutonium", 244, ACTINIDES},
    {95, "Am", "Americium", 243, ACTINIDES},
    {96, "Cm", "Curium", 247, ACTINIDES},
    {97, "Bk", "Berkelium", 247, ACTINIDES},
    {98, "Cf", "Californium", 251, ACTINIDES},
    {99, "Es", "Einsteinium", 252, ACTINIDES},
    {100, "Fm", "Fermium", 257, ACTINIDES},
    {101, "Md", "Mendelevium", 258, ACTINIDES},
    {102, "No", "Nobelium", 259, ACTINIDES},
    {103, "Lr", "Lawrencium", 262, ACTINIDES},
    {104, "Rf", "Rutherfordium", 261, TRANSITION_METALS},
    {105, "Db", "Dubnium", 262, TRANSITION_METALS},
    {106, "Sg", "Seaborgium", 266, TRANSITION_METALS},
    {107, "Bh", "Bohrium", 264, TRANSITION_METALS},
    {108, "Hs", "Hassium", 277, TRANSITION_METALS},
    {109, "Mt", "Meitnerium", 268, TRANSITION_METALS},
    {110, "Ds", "Darmstadtium", 281, TRANSITION_METALS},
    {111, "Rg", "Roentgenium", 272, TRANSITION_METALS},
    {112, "Cn", "Copernicium", 285, TRANSITION_METALS},
    {113, "Nh", "Nihonium", 286, POST_TRANSITION_METALS},
    {114, "Fl", "Flerovium", 289, POST_TRANSITION_METALS},
    {115, "Mc", "Moscovium", 288, POST_TRANSITION_METALS},
    {116, "Lv", "Livermorium", 293, POST_TRANSITION_METALS},
    {117, "Ts", "Tennessine", 294, HALOGENS},
    {118, "Og", "Oganesson", 294, NOBLE_GASES},

};

void api_getElementName(char element[MAX_STRING]) {
    char *find;
    
    find = strstr(_symbols, element);

    if(find == NULL){
        printf("Element not found.\nName are case sensitive.\n");
        return;
    }

    int elementOrder = (find - _symbols) / _symbolMax;

    printf("%s\n", elements[elementOrder]._name);
}

void api_getElementSymbol(char element[MAX_STRING]) {
    char *find;
    
    find = strstr(_names, element);

    if(find == NULL){
        printf("Element not found.\nName are case sensitive.\n");
        return;
    }

    int elementOrder = (find - _names) / _nameMax;

    printf("%s\n", elements[elementOrder]._symbol);
}

void api_listAllElements() {
    for (int i = 0; i < 118; i++) {
        printf("Name: %s\t-\tSymbol: %s\t-\tAtomic Number: %d\t-\tRelative Atomic Mass: %.3f\n\n", elements[i]._name, elements[i]._symbol, elements[i]._atomicNumber, elements[i]._relativeAtomic);
    }
}

void api_getElement(int number) {
    if (number > 0 && number < 119) {
        printf("%s\n",elements[number-1]._name);
    }
    else {
        printf("Invalid number.\nType a number between 1 and 118.\n");
    }
}

void api_listAllElementGroups() {
    printf(
        "1.  Alkali metals\n"
        "2.  Alkaline earth metals\n"
        "3.  Lanthanides\n"
        "4.  Actinides\n"
        "5.  Transition metals\n"
        "6.  Post-transition metals\n"
        "7.  Metalloids\n"
        "8.  Nonmetals\n"
        "9.  Halogens\n"
        "10. Noble gases\n"
    );
}

void api_getElementGroup(char element[MAX_STRING]) {
    int i;
    bool found = false;
    for (i = 0; i < 118; i++) {
        if (strcmp(element, elements[i]._name) == 0 || strcmp(element, elements[i]._symbol) == 0) {
            switch(elements[i]._group){
                case ALKALI_METALS:
                    printf("Alkali metals");
                    break;
                case ALKALINE_EARTH_METALS:
                    printf("Alkaline earth metals");
                    break;
                case LANTHANIDES:
                    printf("Lanthanides");
                    break;
                case ACTINIDES:
                    printf("Actinides");
                    break;
                case TRANSITION_METALS:
                    printf("Transition metals");
                    break;
                case POST_TRANSITION_METALS:
                    printf("Post-transition metals");
                    break;
                case METALLOIDS:
                    printf("Metalloids");
                    break;
                case REACTIVE_NONMETALS:
                    printf("Reactive Nonmetals");
                    break;
                case HALOGENS:
                    printf("Halogens");
                    break;
                case NOBLE_GASES:
                    printf("Noble gases");
                    break;
                default:
                    printf("Element not found.\nName are case sensitive.\n");
                    break;
            }
            printf("\n");
            found = true;
            break;
        }
    }
    if (!found) {
        printf("Element not found.\nName are case sensitive.\n");
    }
}

void api_listAllElementsInGroup(char group[MAX_STRING]){
    unsigned char _type = 0;
    int length = strlen(group);

    char *token = strstr(_groups, group);

    if (token == NULL) {
        printf("Group not found.\n");
        return;
    }

    switch(length){
        case 13: // Same length as Alkali Metals
            _type = ALKALI_METALS;
            break;
        case 21: // Same length as Alkaline Earth Metals
            _type = ALKALINE_EARTH_METALS;
            break;
        case 11: // Same length as Lanthanides and Noble Gases
            if(strncmp(group, "Lanthanides", 11) == 0){
                _type = LANTHANIDES;
            } else {
                _type = NOBLE_GASES;
            }
            break;
        case 9: // Same length as Actinides
            _type = ACTINIDES;
            break;
        case 17: // Same length as Transition Metals
            _type = TRANSITION_METALS;
            break;
        case 22: // Same length as Post-Transition Metals
            _type = POST_TRANSITION_METALS;
            break;
        case 10: // Same length as Metalloids
            _type = METALLOIDS;
            break;
        case 19: // Same length as Reactive Nonmetals
            _type = REACTIVE_NONMETALS;
            break;
        case 8: // Same length as Halogens
            _type = HALOGENS;
            break;
        default:
            printf("Group not found.\n");
            return;
    }

    for(int i = 0; i < 118; ++i){
        if(elements[i]._group == _type){
            printf("%s\t-\t%s\t-\t%d\t-\t%.3f\n\n", elements[i]._name, elements[i]._symbol, elements[i]._atomicNumber, elements[i]._relativeAtomic);
        }
    }

}

void api_getNGConfig(int elementLine) {
    for (int i = 0; i < 117; i++) {
        if (i == elementLine) {
            printf("%s\n",_nobleGasConfig[i]);
        }
    }
}

void api_getAtomicNumber(char element[MAX_STRING]) {

    char *find;
    bool nameChoosen = false;
    
    if(strlen(element) > 2){
        find = strstr(_names, element);
        nameChoosen = true;
    } else {
        find = strstr(_symbols, element);
    }

    if(find == NULL){
        printf("Element not found.\nName are case sensitive.\n");
        return;
    }

    int elementOrder;

    if(nameChoosen){
        elementOrder = (find - _names) / _nameMax;
    } else {
        elementOrder = (find - _symbols) / _symbolMax;
    }

    printf("%s - %d\n", elements[elementOrder]._name, elements[elementOrder]._atomicNumber);

}

void api_getMolarMass(int element, int atoms) {
    printf("%.3f", elements[element-1]._relativeAtomic * atoms);
}

void api_getElectronConfig(int elementLine) {
    for (int i = 0; i < 117; i++) {
        if (i == elementLine) {
            printf("%s\n", _electronConfig[i]);
            break;
        }
    }
}