#ifndef SHUNTING_YARD_H
#define SHUNTING_YARD_H

typedef enum
{
    OK,
    ERROR_SYNTAX,
    ERROR_OPEN_PARENTHESIS,
    ERROR_CLOSE_PARENTHESIS,
    ERROR_UNRECOGNIZED,
    ERROR_NO_INPUT,
    ERROR_UNDEFINED_FUNCTION,
    ERROR_FUNCTION_ARGUMENTS,
    ERROR_UNDEFINED_CONSTANT
} Status;

// Calculates the result of a mathematical expression.
Status shunting_yard(const char *expression, double *result);

#endif  // SHUNTING_YARD_H
