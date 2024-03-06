# Alphabit Classifier

A program that uses data from Unicode to classify characters in an input stream into alphabetic and non-alphabetic.

## How to build

```
make
```
## How to use

After building you can run it with a specific input you decide using:

```
echo "YOUR TEXT" | ./main
```

Example:
```
echo "This! Is a tešt тест ** % test." | ./main
```
Or you can run the test script using:

```
chmod +x test.sh
./test.sh
```
And you can modify the tests.txt file to add the tests you want.