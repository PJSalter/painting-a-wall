# painting-a-wall

### About:

##### This is a challenge where I had to output each floating-point value with two digits after the decimal point, this was achieved by executing:

```
cout << fixed << setprecision(2); // once before all other cout statements.
```

- (1) Prompt the user to input a wall's height and width. Calculate and output the wall's area.

The challenge outputs a newline after each user-input prompt. For convenience in the examples below, the user's input value is shown on the next line, but such values don't actually appear as output when the program runs.

```
Enter wall height (feet):
12.0
Enter wall width (feet):
15.0
Wall area: 180.00 square feet
```

- (2) Then Extend to calculate and output the amount of paint in gallons needed to paint the wall. Assume a gallon of paint covers 350 square feet. Then Store this value using a const double variable.

```
Enter wall height (feet):
12.0
Enter wall width (feet):
15.0
Wall area: 180.00 square feet
Paint needed: 0.51 gallons
```

- (3) Lastly I had to calculate and output the number of 1 gallon cans needed to paint the wall. A big Hint that I found was to use a math function to round up to the nearest gallon.

```
Enter wall height (feet):
12.0
Enter wall width (feet):
15.0
Wall area: 180.00 square feet
Paint needed: 0.51 gallons
Cans needed: 1 can(s)
```
