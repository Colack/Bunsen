#define CMD_GET_NAME_HASH               229466956013990U
#define CMD_GET_SYMBOL_HASH             249889515323374683U 
#define CMD_GET_ELEMENT_HASH            8246353987072950095U

#define CMD_GET_ATOMIC_NO_HASH          10528486662183460459U
#define CMD_GET_ELEMENT_GR_HASH         10717938186677395292U
#define CMD_GET_NG_CFG_HASH             13875264875927385392U
#define CMD_GET_MOLAR_MASS_HASH         15161883487309708276U
#define CMD_GET_ELECTRON_CFG_HASH       13477816550730122999U

#define CMD_LIST_ALL_EL_HASH            16020803631752962487U
#define CMD_LIST_ALL_ELL_GR_HASH        1834757248859756676U
#define CMD_LIST_ALL_ELL_IN_GR_HASH     5802285869811133627U

#define CMD_HELP_HASH                   6385292014U
#define CMD_VERSION_HASH                229486327000139U
#define CMD_CREDITS_HASH                229462281912979U
#define CMD_REPO_HASH                   6385651515U
#define CMD_SMILE_HASH                  5861864U
#define CMD_EXIT_HASH                   6385204799U



//  Hash function to make the if-else if ladder a bit more efficient
//  
//  Courtesy of cnicutar on Stackoverflow
const unsigned long long hash(unsigned char *str);