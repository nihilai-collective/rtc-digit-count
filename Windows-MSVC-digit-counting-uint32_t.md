# Digit Counting
Performance profiling of functions (Compiled and run on Windows 10.0.26100 using the MSVC 19.51.36256.0 compiler).  

Latest Results: (Sep 19, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 -> 120 -> 240 -> ...) up to a per-test-size maximum (scaled so every size gets the same iterations*count memory/verification budget - smaller integer counts get proportionally more iterations to average out timing noise). Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.500000% AND mean shift < 1.000000% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
 This is the commit of BenchmarkSuite that was used to generate these results: [32913c9](https://github.com/realtimechris/benchmarksuite/commit/32913c9).
 
----
### uint32_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3842.17 | 0.922761 | 5.5862ms | 550 | 1536 | 2435.4 | 136.458 | 0.444532 | 1(Win) |
| lemire_digit_count | 3171.79 | 1.46531 | 1.6478ms | 551 | 384 | 2261.75 | 165.625 | 0.577615 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count | 3563.9 | 0.680511 | 0.6958ms | 5481 | 30 | 2988.51 | 1466.67 | 0.639662 | 1(Win) |
| rtc_digit_count | 3020.81 | 0.323597 | 26.2832ms | 5498 | 768 | 24231.2 | 1735.81 | 0.753871 | 2(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 4912.78 | 0.841501 | 129.683ms | 55009 | 438 | 3.53662e+06 | 10678.3 | 0.472956 | 1(Win) |
| lemire_digit_count | 3885.9 | 0.260866 | 2.4839ms | 55076 | 30 | 37298.9 | 13516.7 | 0.598891 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 4909.36 | 1.45261 | 44.8278ms | 549961 | 30 | 7.22492e+07 | 106833 | 0.474649 | 1(Win) |
| lemire_digit_count | 3780.83 | 1.09202 | 25.0741ms | 550205 | 30 | 6.89063e+07 | 138783 | 0.616517 | 2(Loss) |

----
### uint32_t-integer_count[10]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 573.522 | 0.985301 | 23.1509ms | 30 | 12288 | 2985.27 | 50.0244 | 1.09935 | 1(Win) |
| lemire_digit_count | 552.3 | 1.24684 | 47.41ms | 30 | 24576 | 10235 | 51.7578 | 1.22734 | 2(Loss) |

----
### uint32_t-integer_count[100]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2107.55 | 0.903812 | 5.5981ms | 300 | 1536 | 2307.51 | 135.612 | 0.815883 | 1(Win) |
| lemire_digit_count | 1612.34 | 0.784568 | 59.1811ms | 300 | 12288 | 23806.4 | 177.409 | 1.14157 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2674.82 | 0.885934 | 0.2232ms | 3010 | 30 | 2712.64 | 1073.33 | 0.84422 | 1(Win) |
| lemire_digit_count | 1931.53 | 0.679548 | 0.6398ms | 2998 | 30 | 3034.48 | 1480 | 1.1745 | 2(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2678.37 | 0.826911 | 40.9304ms | 30013 | 192 | 1.49929e+06 | 10686.5 | 0.867519 | 1(Win) |
| lemire_digit_count | 2048.94 | 0.86489 | 53.0732ms | 30013 | 192 | 2.80266e+06 | 13969.3 | 1.13483 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2631.66 | 1.04608 | 19.4782ms | 299994 | 30 | 3.87984e+07 | 108713 | 0.885513 | 1(Win) |
| lemire_digit_count | 2060.23 | 0.824183 | 25.0879ms | 299994 | 30 | 3.92975e+07 | 138867 | 1.13135 | 2(Loss) |

----
### uint32_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3866.05 | 0.901442 | 5.5652ms | 549 | 1536 | 2288.82 | 135.417 | 0.438905 | 1(Win) |
| lemire_digit_count | 3171.23 | 1.0372 | 3.2509ms | 550 | 768 | 2262.86 | 165.495 | 0.578358 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 4812.26 | 0.649348 | 1.0266ms | 5488 | 48 | 2393.62 | 1087.5 | 0.4609 | 1(Win) |
| lemire_digit_count | 3610.13 | 0.784688 | 0.2806ms | 5514 | 30 | 3919.54 | 1456.67 | 0.638328 | 2(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 4964.61 | 0.652399 | 19.9697ms | 54975 | 96 | 455680 | 10560.4 | 0.468269 | 1(Win) |
| lemire_digit_count | 3798.34 | 0.704529 | 117.807ms | 54993 | 384 | 3.63381e+06 | 13807.6 | 0.611979 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 4953.93 | 1.10083 | 44.4322ms | 549966 | 30 | 4.0751e+07 | 105873 | 0.470463 | 1(Win) |
| lemire_digit_count | 3795.23 | 0.780316 | 57.8828ms | 549966 | 30 | 3.48865e+07 | 138197 | 0.614134 | 2(Loss) |

----
### uint32_t-integer_count[100]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5242.51 | 1.36348 | 2.7834ms | 750 | 768 | 2658.63 | 136.458 | 0.323678 | 1(Win) |
| lemire_digit_count | 4297.86 | 1.45535 | 1.6327ms | 749 | 384 | 2245.16 | 166.146 | 0.424248 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6616.85 | 0.689063 | 2.1399ms | 7502 | 96 | 5328.95 | 1081.25 | 0.341141 | 1(Win) |
| lemire_digit_count | 4845.29 | 0.335234 | 6.0027ms | 7505 | 192 | 4707.68 | 1477.08 | 0.467833 | 2(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6831.77 | 0.25145 | 4.5603ms | 75003 | 30 | 20793.1 | 10470 | 0.339946 | 1(Win) |
| lemire_digit_count | 3402 | 1.29081 | 16.9398ms | 75024 | 48 | 3.53751e+06 | 21031.2 | 0.68389 | 2(Loss) |

----
### uint32_t-integer_count[10]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1965.57 | 0.701304 | 45.8431ms | 100 | 24576 | 2845.42 | 48.5189 | 0.305767 | 1(Win) |
| lemire_digit_count | 1882.83 | 1.78117 | 5.8454ms | 100 | 3072 | 2500.39 | 50.651 | 0.364779 | 2(Loss) |

----
### uint32_t-integer_count[100]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7090.24 | 1.29079 | 2.769ms | 1000 | 768 | 2315.01 | 134.505 | 0.242714 | 1(Win) |
| lemire_digit_count | 5704.22 | 2.03209 | 0.7938ms | 1000 | 192 | 2216.13 | 167.188 | 0.32112 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8940.7 | 1.37324 | 0.2162ms | 10000 | 30 | 6436.78 | 1066.67 | 0.254303 | 1(Win) |
| lemire_digit_count | 4449.49 | 1.08865 | 0.4186ms | 10000 | 30 | 16333.3 | 2143.33 | 0.51776 | 2(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8953.73 | 0.717617 | 136.03ms | 100000 | 438 | 2.55889e+06 | 10651.1 | 0.259438 | 1(Win) |
| lemire_digit_count | 4281.69 | 0.11579 | 4.0694ms | 100000 | 30 | 19954 | 22273.3 | 0.543443 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 9090.12 | 0.934555 | 18.9796ms | 1000000 | 30 | 2.88398e+07 | 104913 | 0.256379 | 1(Win) |
| lemire_digit_count | 6909.12 | 0.963642 | 125.905ms | 1000000 | 48 | 8.49235e+07 | 138031 | 0.337401 | 2(Loss) |
