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

	"Arduino":{
		"prefix": "arduino",
		"body": [
			"#include <Arduino.h>\n\n\n",
			"void setup(){",
			"$1\n}\n",
			"void loop(){",
			"\n}"
		]
	},

//*********************************************************************** Pines ***************************************************************************
		"pinMode":{
			"prefix": "pinMode",
			"body": "pinMode(${1:pin},${2:OUTPUT});"
		},

		"digitalWrite":{
			"prefix":"digitalWrite",
			"body": "digitalWrite(${1:pin},${2:HIGH});"
		},

		"analogWrite":{
			"prefix":"analogWrite",
			"body": "analogWrite(${1:variable},${2:PWM});"
		},

//*********************************************************************** Otros ***************************************************************************	
		"delay":{
			"prefix":"delay",
			"body": "delay(${1:tiempo});"
		},

//*********************************************************************** Serial ***************************************************************************	

		"SerialBegin":{
			"prefix":"begin",
			"body": "begin(${1:9600});"
		},

		"SerialPrint":{
			"prefix":"print",
			"body": "print(${1:Impresión});"
		},

		"SerialPrint":{
			"prefix":"print",
			"body": "print(${1:Impresión});"
		},

		"SerialPrintln":{
			"prefix":"println",
			"body": "println(${1:Impresión});"
		},


//************************************************ Bucles ***************************************************

	"while":{
		"prefix": "While",
		"body":[
			"while(${1:Condicion}){",
			"\t$2",
			"}"
		]
	},

	"do":{
		"prefix": "Do",
		"body":[
			"do{",
			"\t${2:Condición}\n",
			"}while(${1:Condición});"
		]
	},

	"for":{
		"prefix": "For",
		"body":[
			"for(${1:Tamaño} ${2:i}=0; ${2:i}<=${3:Contador}; ${2:i}++){",
			"\t${4:Codigo}",
			"}"
		]
	}
}

//Esto es una prueba
