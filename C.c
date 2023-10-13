// Estos comandos van en archivo c.json



{
	// Place your snippets for c here. Each snippet is defined under a snippet name and has a prefix, body and 
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
//************************************************ Main ***************************************************
	"inicio":{
		"prefix": "inicio",
		"body":[
			"#include <stdio.h>"
			"$1\n"
			"int main(){",
			"\t$2",
			"\n",
			"return 0;",
			"}"
		]
	},

//************************************************ Impresión y escaneo de datos ***************************************************

	"print":{
	"prefix": "printf",
	"body": "printf(\"$1\");"
	},

	"scanf":{
		"prefix": "scanf",
		"body": "scanf(\"%${1:Letra}\",&${2:variable});"
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

	"For":{
		"prefix": "For",
		"body":[
			"for(${1:Tamaño} ${2:i}=0; ${2:i}<${3:Contador}; ${2:i}++){",
			"\t${4:Codigo}",
			"}"
		]
	}
}
