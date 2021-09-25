/*
 * Main.c
 *
 *  Created on: 16 juli 2021
 *      Author: Daniel Mårtensson
 */

#include <stdlib.h>
#include <stdio.h>

#include "Open_SAE_J1939/Open_SAE_J1939.h"
#include "ISO_11783/ISO_11783-7_Application_Layer/Application_Layer.h"
#include "SAE_J1939/SAE_J1939-71_Application_Layer/Application_Layer.h"
#include "SAE_J1939/SAE_J1939-73_Diagnostics_Layer/Diagnostics_Layer.h"
#include "SAE_J1939/SAE_J1939-81_Network_Management_Layer/Network_Management_Layer.h"

int main() {

	/* Create our J1939 structure */
	J1939 j1939 = {0};

	/* Load your ECU information */
	Open_SAE_J1939_Startup_ECU(&j1939);

	while(1) {
		/* Read incoming messages */
		Open_SAE_J1939_Listen_For_Messages(&j1939);
		/* Your application code here */

	}

	return 0;
}
