#include "includes.h"

// @Path src\periodic.h
// Contains the periodic table data, functions, and different access methods.

// Element groups enumeration
typedef enum elementGroups
{
    ALKALI_METALS,
    ALKALINE_EARTH_METALS,
    LANTHANIDES,
    REACTIVE_NONMETALS,
    ACTINIDES,
    TRANSITION_METALS,
    POST_TRANSITION_METALS,
    METALLOIDS,
    HALOGENS,
    NOBLE_GASES,
    UNKNOWN
} element_group;

//  The Element type
/**
 * @brief The Element type
 * @author Mike4544
 *
 * @param _atomicNumber The atomic number of the element
 * @param _symbol The symbol of the element
 * @param _name The name of the element
 * @param _relativeAtomicMass The relative atomic mass of the element
 * @param _group The group of the element
 *
 *
 */
typedef struct Element
{
    int _atomicNumber;
    char _symbol[10];
    char _name[30];
    double _relativeAtomic;
    unsigned char _group;
} Element;

static Element elements[118];

/**
 * @param _symbols is used to store the symbols of the elements and to get the element in a faster way
 * @param _names is used to store the names of the elements and to get the element in a faster way
 * 
 */
static const char *_symbols = "H |He|Li|Be|B |C |N |O |F |Ne|Na|Mg|Al|Si|P |S |Cl|Ar|K |Ca|Sc|Ti|V |Cr|Mn|Fe|Co|Ni|Cu|Zn|Ga|Ge|As|Se|Br|Kr|Rb|Sr|Y |Zr|Nb|Mo|Tc|Ru|Rh|Pd|Ag|Cd|In|Sn|Sb|Te|I |Xe|Cs|Ba|La|Ce|Pr|Nd|Pm|Sm|Eu|Gd|Tb|Dy|Ho|Er|Tm|Yb|Lu|Hf|Ta|W |Re|Os|Ir|Pt|Au|Hg|Tl|Pb|Bi|Po|At|Rn|Fr|Ra|Ac|Th|Pa|U |Np|Pu|Am|Cm|Bk|Cf|Es|Fm|Md|No|Lr|Rf|Db|Sg|Bh|Hs|Mt|Ds|Rg|Cn|Nh|Fl|Mc|Lv|Ts|Og";

// Makes sure that each name is as long as the maximum length of an element name.
// The longest name is "Ununpentium" which is 11 characters long.
// So Hydrogen will become "Hydrogen   " and Ununpentium will become "Ununpentium".
static const char *_names = "Hydrogen   |Helium     |Lithium    |Beryllium  |Boron      |Carbon     |Nitrogen   |Oxygen     |Fluorine   |Neon       |Sodium     |Magnesium  |Aluminium  |Silicon    |Phosphorus |Sulphur    |Chlorine   |Argon      |Potassium  |Calcium    |Scandium   |Titanium   |Vanadium   |Chromium   |Manganese  |Iron       |Cobalt     |Nickel     |Copper     |Zinc       |Gallium    |Germanium  |Arsenic    |Selenium   |Bromine    |Krypton    |Rubidium   |Strontium  |Yttrium    |Zirconium  |Niobium    |Molybdenum |Technetium |Ruthenium  |Rhodium    |Palladium  |Silver     |Cadmium    |Indium     |Tin        |Antimony   |Tellurium  |Iodine     |Xenon      |Caesium    |Barium     |Lanthanum  |Cerium     |Praseodymium|Neodymium  |Promethium |Samarium   |Europium   |Gadolinium |Terbium    |Dysprosium |Holmium    |Erbium     |Thulium    |Ytterbium  |Lutetium   |Hafnium    |Tantalum   |Tungsten   |Rhenium    |Osmium     |Iridium    |Platinum   |Gold       |Mercury    |Thallium   |Lead       |Bismuth    |Polonium   |Astatine   |Radon      |Francium   |Radium     |Actinium   |Thorium    |Protactinium|Uranium    |Neptunium  |Plutonium  |Americium  |Curium     |Berkelium  |Californium|Einsteinium|Fermium    |Mendelevium|Nobelium   |Lawrencium |Rutherfordium|Dubnium   |Seaborgium |Bohrium    |Hassium    |Meitnerium |Darmstadtium|Roentgenium|Copernicium|Nihonium   |Flerovium  |Moscovium  |Livermorium|Tennessine |Oganesson  ";

static const int _symbolMax = 3;
static const int _nameMax = 12;

static const char * _groups = "Alkali metals|Alkaline earth metals|Lanthanides|Actinides|Transition metals|Post-transition metals|Metalloids|Reactive nonmetals|Halogens|Noble gases";


// GET functions
void api_getElementName(char element[MAX_STRING]);
void api_getElementSymbol(char element[MAX_STRING]);
void api_getElement(int number);
void api_getElementGroup(char element[MAX_STRING]);

void api_getNGConfig(char element[MAX_STRING]);
void api_getElectronConfig(int elementLine);

void api_getAtomicNumber(char element[MAX_STRING]);
void api_getMolarMass(int element, int atom);

// LIST functions
void api_listAllElements();
void api_listAllElementGroups();
void api_listAllElementsInGroup(char group[MAX_STRING]);
