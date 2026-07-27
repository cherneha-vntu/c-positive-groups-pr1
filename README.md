# Practical Work 1: Advanced Array Processing in C

This project is a laboratory/practical work for the "Computer Technologies and Programming" course. It contains a C program that processes an array of random integers, identifies groups of consecutive positive numbers, calculates their sum and average, and caps any elements exceeding the average to the integer part of the average.

## Programs Included

### 1. Process Positive Groups (`main.c`)

This program dynamically allocates an array of random integers, prints it with positive numbers highlighted in green, and then identifies all groups of consecutive positive numbers. For each group, it calculates the sum and the average value. Any element within a group that is strictly greater than the group's average is replaced by the integer part of the average. Finally, it outputs the modified array.

## How to Compile and Run

```bash
gcc main.c -o main
./main
```

## Example Usage

Example run of **`main.c`**:
```text
Розмір масиву: 113

=== Початковий масив ===
  11   -1  -10  -10  -10   15    1   -5  -17    4   12   -4  -15   10    7    1  -13    9  -16   15
  11   16   20   -5    7   15  -10    6   15   -3  -10    7   16    3   18  -13   -1    0    5    2
 -17   -4   20  -12  -12    9   12   -3   -1   18   -9  -11   15   -8    7    2  -13   17  -11  -17
  -7    1   11   -9  -15   10    0    4  -11  -16  -12   -5    3  -13    5   13   18   -4  -11   -4
  -4    1    8  -10   15   -6   14  -19  -10  -16  -13    6    6   20   19   11    9   -2   -3   20
   5    5   -6  -11   14   20  -19   12   -3   -8  -11   13   15

=== Обробка груп додатних чисел ===
  Група [0..0] (1 елем.): сума=11, середнє=11.00
    Замінено елементів: 0
  Група [5..6] (2 елем.): сума=16, середнє=8.00
    Замінено елементів: 1
  Група [9..10] (2 елем.): сума=16, середнє=8.00
    Замінено елементів: 1
  Група [13..15] (3 елем.): сума=18, середнє=6.00
    Замінено елементів: 2
  Група [17..17] (1 елем.): сума=9, середнє=9.00
    Замінено елементів: 0
  Група [19..22] (4 елем.): сума=62, середнє=15.50
    Замінено елементів: 2
  Група [24..25] (2 елем.): сума=22, середнє=11.00
    Замінено елементів: 1

=== Масив після обробки ===
  11   -1  -10  -10  -10    8    1   -5  -17    4    8   -4  -15    6    6    1  -13    9  -16   15
  11   15   15   -5    7   11  -10    6   10   -3  -10    7   11    3   11  -13   -1    0    3    2
 -17   -4   20  -12  -12    9   10   -3   -1   18   -9  -11   15   -8    4    2  -13   17  -11  -17
  -7    1    6   -9  -15   10    0    4  -11  -16  -12   -5    3  -13    5   12   12   -4  -11   -4
  -4    1    4  -10   15   -6   14  -19  -10  -16  -13    6    6   11   11   11    9   -2   -3   10
   5    5   -6  -11   14   17  -19   12   -3   -8  -11   13   14
```

## Contributing

Contributions are welcome and appreciated! Here's how you can contribute:

1. Fork the project
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

Please make sure to update tests as appropriate and adhere to the existing coding style.

## License

This project is licensed under the CSSM Unlimited License v2.0 (CSSM-ULv2). See the [LICENSE](LICENSE) file for details.
