/*
	File:		ComponentPrototypes.h

	Contains:	Header for routine prototypes for sound output component.

	Written by: Mark Cookson	

	Copyright:	Copyright � 1993-1999 by Apple Computer, Inc., All Rights Reserved.

				You may incorporate this Apple sample source code into your program(s) without
				restriction. This Apple sample source code has been provided "AS IS" and the
				responsibility for its operation is yours. You are not permitted to redistribute
				this Apple sample source code as "Apple sample source code" after having made
				changes. If you're going to re-distribute the source, we require that you make
				it clear in the source that the code was descended from Apple sample source
				code, but that you've made changes.

	Change History (most recent first):
				8/16/1999	Karl Groethe	Updated for Metrowerks Codewarror Pro 2.1
				

*/

#ifndef __COMPONENTPROTOTYPES__
#define __COMPONENTPROTOTYPES__

#ifndef __STRUCTURES__
#include "Structures.h"
#endif

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//	Sound Component Function Prototypes

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// component stuff

pascal ComponentResult __SoundComponentOpen( void *unused, ComponentInstance self );
pascal ComponentResult __SoundComponentClose( void *dummy, ComponentInstance self );
pascal ComponentResult __SoundComponentRegister( void *dummy );
pascal ComponentResult __SoundComponentCanDo( void *unused1, short selector );

pascal ComponentResult	__InitOutputDevice( void *dummy, long actions );
pascal ComponentResult	__StartSource( void *dummy, short count, SoundSource *sources );
pascal ComponentResult	__StopSource( void *dummy, short count, SoundSource *sources );
pascal ComponentResult	__PauseSource( void *dummy, short count, SoundSource *sources );
pascal ComponentResult	__GetSource( void *dummy, SoundSource sourceID, ComponentInstance *source );

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// info methods

pascal ComponentResult __SoundComponentGetInfo( void *dummy, SoundSource sourceID, OSType selector, void *infoPtr );
pascal ComponentResult __SoundComponentSetInfo( void *dummy, SoundSource sourceID, OSType selector, void *infoPtr );

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// control methods

pascal ComponentResult __SoundComponentPlaySourceBuffer(void *dummy, SoundSource sourceID, SoundParamBlockPtr pb, long actions);
static pascal ComponentResult SoundComponentProc(ComponentParameters *params );

#endif
