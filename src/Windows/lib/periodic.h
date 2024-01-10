#ifndef PERIODIC_H
#define PERIODIC_H

#include "../common.h"

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

typedef struct Element
{
    int _atomicNumber;
    char _symbol[10];
    char _name[30];
    double _relativeAtomic;
    unsigned char _group;
} Element;

static Element elements[118];

static const char *_symbols = "H |He|Li|Be|B |C |N |O |F |Ne|Na|Mg|Al|Si|P |S |Cl|Ar|K |Ca|Sc|Ti|V |Cr|Mn|Fe|Co|Ni|Cu|Zn|Ga|Ge|As|Se|Br|Kr|Rb|Sr|Y |Zr|Nb|Mo|Tc|Ru|Rh|Pd|Ag|Cd|In|Sn|Sb|Te|I |Xe|Cs|Ba|La|Ce|Pr|Nd|Pm|Sm|Eu|Gd|Tb|Dy|Ho|Er|Tm|Yb|Lu|Hf|Ta|W |Re|Os|Ir|Pt|Au|Hg|Tl|Pb|Bi|Po|At|Rn|Fr|Ra|Ac|Th|Pa|U |Np|Pu|Am|Cm|Bk|Cf|Es|Fm|Md|No|Lr|Rf|Db|Sg|Bh|Hs|Mt|Ds|Rg|Cn|Nh|Fl|Mc|Lv|Ts|Og";

static const char *_names = "Hydrogen   |Helium     |Lithium    |Beryllium  |Boron      |Carbon     |Nitrogen   |Oxygen     |Fluorine   |Neon       |Sodium     |Magnesium  |Aluminium  |Silicon    |Phosphorus |Sulphur    |Chlorine   |Argon      |Potassium  |Calcium    |Scandium   |Titanium   |Vanadium   |Chromium   |Manganese  |Iron       |Cobalt     |Nickel     |Copper     |Zinc       |Gallium    |Germanium  |Arsenic    |Selenium   |Bromine    |Krypton    |Rubidium   |Strontium  |Yttrium    |Zirconium  |Niobium    |Molybdenum |Technetium |Ruthenium  |Rhodium    |Palladium  |Silver     |Cadmium    |Indium     |Tin        |Antimony   |Tellurium  |Iodine     |Xenon      |Caesium    |Barium     |Lanthanum  |Cerium     |Praseodymium|Neodymium  |Promethium |Samarium   |Europium   |Gadolinium |Terbium    |Dysprosium |Holmium    |Erbium     |Thulium    |Ytterbium  |Lutetium   |Hafnium    |Tantalum   |Tungsten   |Rhenium    |Osmium     |Iridium    |Platinum   |Gold       |Mercury    |Thallium   |Lead       |Bismuth    |Polonium   |Astatine   |Radon      |Francium   |Radium     |Actinium   |Thorium    |Protactinium|Uranium    |Neptunium  |Plutonium  |Americium  |Curium     |Berkelium  |Californium|Einsteinium|Fermium    |Mendelevium|Nobelium   |Lawrencium |Rutherfordium|Dubnium   |Seaborgium |Bohrium    |Hassium    |Meitnerium |Darmstadtium|Roentgenium|Copernicium|Nihonium   |Flerovium  |Moscovium  |Livermorium|Tennessine |Oganesson  ";

static const int _symbolMax = 3;
static const int _nameMax = 12;

static const char * _groups = "Alkali metals|Alkaline earth metals|Lanthanides|Actinides|Transition metals|Post-transition metals|Metalloids|Reactive nonmetals|Halogens|Noble gases";

static const char _electronConfig[119][MAX_STRING] = {
    "N/A","1s1", "1s2", "1s2 2s1", "1s2 2s2", "1s2 2s2 2p1", "1s2 2s2 2p2", "1s2 2s2 2p3", "1s2 2s2 2p4", "1s2 2s2 2p5", "1s2 2s2 2p6", "1s2 2s2 2p6 3s1", "1s2 2s2 2p6 3s2","1s2 2s2 2p6 3s2 3p1","1s2 2s2 2p6 3s2 3p2","1s2 2s2 2p6 3s2 3p3","1s2 2s2 2p6 3s2 3p4","1s2 2s2 2p6 3s2 3p5","1s2 2s2 2p6 3s2 3p6","1s2 2s2 2p6 3s2 3p6 4s1","1s2 2s2 2p6 3s2 3p6 4s2","1s2 2s2 2p6 3s2 3p6 4s2 3d1","1s2 2s2 2p6 3s2 3p6 4s2 3d2","1s2 2s2 2p6 3s2 3p6 4s2 3d3","1s2 2s2 2p6 3s2 3p6 4s2 3d4","1s2 2s2 2p6 3s2 3p6 4s2 3d5","1s2 2s2 2p6 3s2 3p6 4s2 3d6","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p1","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p2","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p3","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p4","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p5","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s1","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d1","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d2","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d3","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d4","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d5","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p1","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p2","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p3","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p4","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p5","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s1","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f1","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f2","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f3","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f4","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f5","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d1","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d2","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d3","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d4","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d5","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p1","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p2","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p3","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p4","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p5","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s1","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g1","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g2","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g3","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g4","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g5","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f1","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f2","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f3","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f4","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f5","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d1","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d2","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d3","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d4","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d5","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p1","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p2","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p3","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p4","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p5","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s1","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h1","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h2","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h3","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h4","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h5","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h6","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h7","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h8","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h9","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h10","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h11","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h12","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h13","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h14","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h15","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h16","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h17","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h18","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h19","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h20","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h21","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h22","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h23","1s2 2s2 2p6 3s2 3p6 4s2 3d6 4p6 5s2 4d6 5p6 6s2 4f6 5d6 6p6 7s2 4g6 5f6 6d6 7p6 8s2 4h24"
};

static const char _nobleGasConfig[119][MAX_STRING] = {
    "N/A","Hydrogen: [He] 1s1","Helium: [He] 2s2","Lithium: [He] 2s1 2p1","Beryllium: [He] 2s2 2p2","Boron: [He] 2s2 2p1","Carbon: [He] 2s2 2p2","Nitrogen: [He] 2s2 2p3","Oxygen: [He] 2s2 2p4","Fluorine: [He] 2s2 2p5","Neon: [He] 2s2 2p6","Sodium: [Ne] 3s1","Magnesium: [Ne] 3s2","Aluminum: [Ne] 3s2 3p1","Silicon: [Ne] 3s2 3p2","Phosphorus: [Ne] 3s2 3p3","Sulfur: [Ne] 3s2 3p4","Chlorine: [Ne] 3s2 3p5","Argon: [Ne] 3s2 3p6","Potassium: [Ar] 4s1","Calcium: [Ar] 4s2","Scandium: [Ar] 3d1 4s2","Titanium: [Ar] 3d2 4s2","Vanadium: [Ar] 3d3 4s2","Chromium: [Ar] 3d5 4s1","Manganese: [Ar] 3d5 4s2","Iron: [Ar] 3d6 4s2","Cobalt: [Ar] 3d7 4s2","Nickel: [Ar] 3d8 4s2","Copper: [Ar] 3d10 4s1","Zinc: [Ar] 3d10 4s2","Gallium: [Ar] 3d10 4s2 4p1","Germanium: [Ar] 3d10 4s2 4p2","Arsenic: [Ar] 3d10 4s2 4p3","Selenium: [Ar] 3d10 4s2 4p4","Bromine: [Ar] 3d10 4s2 4p5","Krypton: [Ar] 3d10 4s2 4p6","Rubidium: [Kr] 5s1","Strontium: [Kr] 5s2","Yttrium: [Kr] 4d1 5s2","Zirconium: [Kr] 4d2 5s2","Niobium: [Kr] 4d4 5s1","Molybdenum: [Kr] 4d5 5s1","Technetium: [Kr] 4d5 5s2","Ruthenium: [Kr] 4d7 5s1","Rhodium: [Kr] 4d8 5s1","Palladium: [Kr] 4d10","Silver: [Kr] 4d10 5s1","Cadmium: [Kr] 4d10 5s2","Indium: [Kr] 4d10 5s2 5p1","Tin: [Kr] 4d10 5s2 5p2","Antimony: [Kr] 4d10 5s2 5p3","Tellurium: [Kr] 4d10 5s2 5p4","Iodine: [Kr] 4d10 5s2 5p5","Xenon: [Kr] 4d10 5s2 5p6","Cesium: [Xe] 6s1","Barium: [Xe] 6s2","Lanthanum: [Xe] 5d1 6s2","Cerium: [Xe] 4f1 5d1 6s2","Praseodymium: [Xe] 4f3 6s2","Neodymium: [Xe] 4f4 6s2","Promethium: [Xe] 4f5 6s2","Samarium: [Xe] 4f6 6s2","Europium: [Xe] 4f7 6s2","Gadolinium: [Xe] 4f7 5d1 6s2","Terbium: [Xe] 4f9 6s2","Dysprosium: [Xe] 4f10 6s2","Holmium: [Xe] 4f11 6s2","Erbium: [Xe] 4f12 6s2","Thulium: [Xe] 4f13 6s2","Ytterbium: [Xe] 4f14 6s2","Lutetium: [Xe] 4f14 5d1 6s2","Hafnium: [Xe] 4f14 5d2 6s2","Tantalum: [Xe] 4f14 5d3 6s2","Tungsten: [Xe] 4f14 5d4 6s2","Rhenium: [Xe] 4f14 5d5 6s2","Osmium: [Xe] 4f14 5d6 6s2","Iridium: [Xe] 4f14 5d7 6s2","Platinum: [Xe] 4f14 5d9 6s1","Gold: [Xe] 4f14 5d10 6s1","Mercury: [Xe] 4f14 5d10 6s2","Thallium: [Xe] 4f14 5d10 6s2 6p1","Lead: [Xe] 4f14 5d10 6s2 6p2","Bismuth: [Xe] 4f14 5d10 6s2 6p3","Polonium: [Xe] 4f14 5d10 6s2 6p4","Astatine: [Xe] 4f14 5d10 6s2 6p5","Radon: [Xe] 4f14 5d10 6s2 6p6","Francium: [Rn] 7s1","Radium: [Rn] 7s2","Actinium: [Rn] 6d1 7s2","Thorium: [Rn] 6d2 7s2","Protactinium: [Rn] 5f2 6d1 7s2","Uranium: [Rn] 5f3 6d1 7s2","Neptunium: [Rn] 5f4 6d1 7s2","Plutonium: [Rn] 5f6 7s2","Americium: [Rn] 5f7 7s2","Curium: [Rn] 5f7 6d1 7s2","Berkelium: [Rn] 5f9 7s2","Californium: [Rn] 5f10 7s2","Einsteinium: [Rn] 5f11 7s2","Fermium: [Rn] 5f12 7s2","Mendelevium: [Rn] 5f13 7s2","Nobelium: [Rn] 5f14 7s2","Lawrencium: [Rn] 5f14 6d1 7s2","Rutherfordium: [Rn] 5f14 6d2 7s2","Dubnium: [Rn] 5f14 6d3 7s2","Seaborgium: [Rn] 5f14 6d4 7s2","Bohrium: [Rn] 5f14 6d5 7s2","Hassium: [Rn] 5f14 6d6 7s2","Meitnerium: [Rn] 5f14 6d7 7s2","Darmstadtium: [Rn] 5f14 6d9 7s1","Roentgenium: [Rn] 5f14 6d10 7s1","Copernicium: [Rn] 5f14 6d10 7s2","Nihonium: [Rn] 5f14 6d10 7s2 7p1","Flerovium: [Rn] 5f14 6d10 7s2 7p2","Moscovium: [Rn] 5f14 6d10 7s2 7p3","Livermorium: [Rn] 5f14 6d10 7s2 7p4","Tennessine: [Rn] 5f14 6d10 7s2 7p5","Oganesson: [Rn] 5f14 6d10 7s2 7p6"
};

void api_getElementName(char element[MAX_STRING]);
void api_getElementSymbol(char element[MAX_STRING]);
void api_getElement(int number);
void api_getElementGroup(char element[MAX_STRING]);
void api_getElementDetails(char element[MAX_STRING]);

void api_getNGConfig(int elementLine);
void api_getElectronConfig(int elementLine);

void api_getAtomicNumber(char element[MAX_STRING]);
void api_getMolarMass(int element, int atom);

void api_getWavelengthFromHertz(float hertz);
void api_getWavelengthFromLamda(float lamda);

// LIST functions
void api_listAllElements();
void api_listAllElementGroups();
void api_listAllElementsInGroup(char group[MAX_STRING]);

#endif