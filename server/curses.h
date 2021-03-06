#include "minorGems/util/SimpleVector.h"


void initCurses();

void freeCurses();


void cursesLogBirth( char *inEmail );
void cursesLogDeath( char *inEmail, double inAge );



// check whether a player has a curse token
// meant to be called at birth
char hasCurseToken( char *inEmail );


// gets a list of email addresses for players who now have curse tokens when
// they didn't the last time hasCurseToken was called
//
// Passed-in vector is filled with emails that are destroyed by caller
void getNewCurseTokenHolders( SimpleVector<char*> *inEmailList );



// returns true of curse effective
char cursePlayer( int inGiverID, char *inGiverEmail, char *inReceiverName );

void logPlayerNameForCurses( char *inPlayerEmail, char *inPlayerName );



// returns curse level, or 0 if not cursed
// returns -1 if pending lookup on remote server
int getCurseLevel( char *inPlayerEmail );



// true if name already exists in curse system
char isNameDuplicateForCurses( char *inPlayerName );


void stepCurseServerRequests();
