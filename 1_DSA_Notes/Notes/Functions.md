
### Functions/Methods
1. **pow(num, power)** : returns the floating point value of num^power
    1.  Use round(pow(num, power)) : to remove the choping of floating point.
2. **round(float):** decimal of .5 or higher gets ceiling value, and lower values gets floor value
3. **reverse(arr.begin(), arr.end())**: reverses an array or vector


## String
1. **.length() or .size()**: returns the length of a string/array.
2. **tolower(char)**: converts an uppercase char to its lowercase equivalent.
3. **isalnum()**: returns non-zero number(True) for alphanumeric (uppercase (A-Z), lowercase(a-z), or 
            numeric (0-9) ) and return 0 for non-alphanumeric (@, ,,, -, %, #, !, etc)


### Tricks
* To find the length/digits of a num : // Library required: # include <cmath>
  * int length = log10(n) + 1;
  

### Notes
Importing **# include<bits/stdc++.h>** will import almost all standard c++ libraries 
