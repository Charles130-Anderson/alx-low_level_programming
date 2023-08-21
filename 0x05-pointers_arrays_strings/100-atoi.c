#include "main.h"

int convertStringToInt(char *str)
{
int index, negativeFlag, numDigits, result, factor, currentDigit;

index = 0;
negativeFlag = 0;
numDigits = 0;
result = 0;
factor = 0;
currentDigit = 0;

while (str[numDigits] != '\0')
numDigits++;

while (index < numDigits && factor == 0)
{
if (str[index] == '-')
++negativeFlag;

if (str[index] >= '0' && str[index] <= '9')
{
currentDigit = str[index] - '0';
if (negativeFlag % 2)
currentDigit = -currentDigit;
result = result * 10 + currentDigit;
factor = 1;
if (str[index + 1] < '0' || str[index + 1] > '9')
break;
factor = 0;
}
index++;
}

if (factor == 0)
return 0;

return result;
}
