#ifndef COMMANDS_H
#define COMMANDS_H

#include "common.h"

#include "commands/displayPeriodicTable.h"
#include "commands/getAtomicNumber.h"
#include "commands/getElectronConfig.h"
#include "commands/getElement.h"
#include "commands/getElementDetails.h"
#include "commands/getElementName.h"
#include "commands/getElementSymbol.h"
#include "commands/getGroup.h"
#include "commands/getIsotopeWeight.h"
#include "commands/getNobleGasConfig.h"
#include "commands/getWavelength.h"

#include "commands/credits.h"
#include "commands/hash.h"
#include "commands/help.h"
#include "commands/repository.h"
// #include "commands/template.h"
#include "commands/update.h"
#include "commands/version.h"

/*
    Command Hashes
*/

#define CREDITS_HASH                229462281912979U            // credits
#define HASH_HASH                   6385287881U                 // hash
#define HELP_HASH                   6385292014U                 // help
#define REPOSITORY_HASH             8246864397448208389U        // repository
#define UPDATE_HASH                 6954104508584U              // update
#define VERSION_HASH                229486327000139U            // version
#define PERIODICTABLE_HASH          15378816737432914834U       // displayPeriodicTable
#define ATOMICNUM_HASH              10528486662183460459U       // getAtomicNumber
#define ELECTRONCONFIG_HASH         13477816550730122999U       // getElectronConfig
#define GETELEMENT_HASH             8246353987072950095U        // getElement
#define ELEMENTDETAILS_HASH         13492430702868894581U       // getElementDetails
#define ELEMENTNAME_HASH            1442770494972854128U        // getElementName
#define ELEMENTSYMBOL_HASH          3203822760350397605U        // getElementSymbol
#define GETGROUP_HASH               7572409540773970U           // getGroup
#define ISOTOPEWEIGHT_HASH          10244830366085616784U       // getIsotopeWeight
#define NOBLEGASCONFIG_HASH         15643981699756441766U       // getNobleGasConfig
#define WAVELENGTH_HASH             2280509947330249274U        // getWavelength

/*
    TODO: 
    
    Remove the `get` prefix from each command & re-hash all commands after that.
    FIX ALL COMMANDS
*/

#endif