 #include "holberton.h"
/**
  * binary_to_uint - check the code for Holberton School students.
  * @b: Constant Character pointer
  * Return: countResult
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int countResult = 0, i, value;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			value = 0;
		else if (b[i] == '1')
			value = 1;
		else
				return (0);

		countResult = countResult * 2 + value;
	}

	return (countResult);
}

