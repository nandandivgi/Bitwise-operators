# Bitwise-operators
We use the bitwise operators in C language to perform operations on the available data at a bit level. Thus, performing a bitwise operation is also called bit-level programming. It is mainly used in numerical computations for a faster calculation because it consists of two digits – 1 or 0.

Types of Bitwise Operators in C
There are various types of bitwise operators used in all the programming languages. Here is a list of the ones used in C:

* Bitwise OR Operator
* Bitwise AND Operator
* Unary Operator (Binary One’s complement operator)
* Bitwise XOR Operator
* Binary Right Shift Operator
* Binary Left Shift Operator  

The table below lists all the Bitwise operations that are supported by the C language. Let us assume that the variable ‘Q’ holds 13 while a variable ‘P’ holds 60, then:

| Operator | Meaning | Description | Examples |
| --- | --- | --- | --- |
| \| |	Bitwise OR operator |	It copies a bit when it exists in either of the operands.	| (P \| Q) = 61, which is, 0011 1101 |
| &	| Bitwise AND operator | It copies a bit to the result when it exists in both the operands. |	(P & Q) = 12, which is, 0000 1100 |
| ~ |	Binary Ones complement operator |	It is a unary operator that has an effect to ‘flip’ the bits. Meaning, all the 0s become 1s and vice-versa.	| (~P ) = ~(60), which is,. 1100 0011 |
| ^ |	Bitwise XOR operator | It is an exclusive OR operator that copies the bit when it is set in one of the operands, but not in both. | (P ^ Q) = 61, which is, 0011 1101 |
| >> |	Shift operator (Right) | It moves the value of the left operand to the right by the number of bits that the right operand specifies. | P >> 2 = 15 which is, 0000 1111 |
| << |	Shift operator (Left)	| It moves the value of the right operand to the left by the number of bits that the right operand specifies.	| P << 2 = 240 which is, 1111 0000 |
