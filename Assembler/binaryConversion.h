/*
	Names:			Christian Hegarty,	Naqash Nadeem,	Nicole Orr,	Josh Rivett,	Shaun Yap
	Matric Number: 	170025705			160010238		170010591	170005367		160006581
	Module Code: 	AC21009
	Team Number:	15
*/

#ifndef BINARY_CLASS_H
#define BINARY_CLASS_H

class BinaryConversion {
	public:
		/* Function for converting a decimal number to a binary array. */
		static int toBinary(long, int*, int);

		/* Function to convert an array of binary integers to a decimal number. */
		static long toDecimal(int*, int, bool);
};

#endif