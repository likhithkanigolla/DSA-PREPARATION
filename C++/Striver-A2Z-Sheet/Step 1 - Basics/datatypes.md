Here's a table with the data types, their sizes, and their value ranges expressed in exponential format:

| **Data Type**   | **Size**               | **Range (Signed)**                            | **Range (Unsigned)**                    |
|-----------------|------------------------|-----------------------------------------------|-----------------------------------------|
| `char`          | Typically 1 byte       | -2^7 to 2^7 - 1                               | 0 to 2^8 - 1                            |
| `short`         | At least 2 bytes       | -2^15 to 2^15 - 1                             | 0 to 2^16 - 1                           |
| `int`           | At least 2 bytes       | -2^15 to 2^15 - 1 or -2^31 to 2^31 - 1        | 0 to 2^16 - 1 or 0 to 2^32 - 1          |
| `long`          | At least 4 bytes       | -2^31 to 2^31 - 1 or -2^63 to 2^63 - 1        | 0 to 2^32 - 1 or 0 to 2^64 - 1          |
| `long long`     | At least 8 bytes       | -2^63 to 2^63 - 1                             | 0 to 2^64 - 1                           |
| `float`         | Typically 4 bytes      | Approx. ±1.2 × 10^-38 to ±3.4 × 10^38         | N/A                                     |
| `double`        | Typically 8 bytes      | Approx. ±2.3 × 10^-308 to ±1.7 × 10^308       | N/A                                     |
| `long double`   | Typically 10+ bytes    | Approx. ±3.4 × 10^-4932 to ±1.1 × 10^4932     | N/A                                     |

Note that the exact range of `long double` can vary depending on the implementation and the system architecture.

Here's the table with the ranges expressed in powers of 10:

| **Data Type**   | **Size**               | **Range (Signed)**                      | **Range (Unsigned)**                |
|-----------------|------------------------|-----------------------------------------|-------------------------------------|
| `char`          | Typically 1 byte       | -10^2 to 10^2 - 1                       | 0 to 10^2                           |
| `short`         | At least 2 bytes       | -3.2 × 10^4 to 3.2 × 10^4 - 1           | 0 to 6.5 × 10^4                     |
| `int`           | At least 2 bytes       | -3.2 × 10^4 to 3.2 × 10^4 - 1 or        | 0 to 6.5 × 10^4 or                  |
|                 |                        | -2.1 × 10^9 to 2.1 × 10^9 - 1           | 0 to 4.3 × 10^9                     |
| `long`          | At least 4 bytes       | -2.1 × 10^9 to 2.1 × 10^9 - 1 or        | 0 to 4.3 × 10^9 or                  |
|                 |                        | -9.2 × 10^18 to 9.2 × 10^18 - 1         | 0 to 1.8 × 10^19                    |
| `long long`     | At least 8 bytes       | -9.2 × 10^18 to 9.2 × 10^18 - 1         | 0 to 1.8 × 10^19                    |
| `float`         | Typically 4 bytes      | Approx. ±1.2 × 10^-38 to ±3.4 × 10^38   | N/A                                 |
| `double`        | Typically 8 bytes      | Approx. ±2.3 × 10^-308 to ±1.7 × 10^308 | N/A                                 |
| `long double`   | Typically 10+ bytes    | Approx. ±3.4 × 10^-4932 to ±1.1 × 10^4932 | N/A                               |

This table represents the ranges of each data type in terms of powers of 10, making it easier to grasp the magnitude of values each type can hold.