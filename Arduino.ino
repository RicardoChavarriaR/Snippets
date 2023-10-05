// Estos comandos son para el cpp.json


{
	// Place your snippets for cpp here. Each snippet is defined under a snippet name and has a prefix, body and 
	// description. The prefix is what is used to trigger the snippet and the body will be expanded and inserted. Possible variables are:
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. Placeholders with the 
	// same ids are connected.
	// Example:
	// "Print to console": {
	// 	"prefix": "log",
	// 	"body": [
	// 		"console.log('$1');",
	// 		"$2"
	// 	],
	// 	"description": "Log output to console"
	// }

//*********************************************************************** Pines ***************************************************************************
		"pinMode":{
			"prefix": "pinMode",
			"body": "pinMode(${1:pin},${2:tipo});"
		},

		"digitalWrite":{
			"prefix":"digitalWrite",
			"body": "digitalWrite(${1:pin},${2:tipo});"
		},

//*********************************************************************** Otros ***************************************************************************	
		"delay":{
			"prefix":"delay",
			"body": "delay(${1:tiempo});"
		}
}

//Esto es una prueba
