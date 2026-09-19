# Digit Counting
Performance profiling of functions (Compiled and run on macOS 25.6.0 using the Clang 23.1.0 compiler).  

Latest Results: (Sep 19, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 -> 120 -> 240 -> ...) up to a per-test-size maximum (scaled so every size gets the same iterations*count memory/verification budget - smaller integer counts get proportionally more iterations to average out timing noise). Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.500000% AND mean shift < 1.000000% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
 This is the commit of BenchmarkSuite that was used to generate these results: [32913c9](https://github.com/realtimechris/benchmarksuite/commit/32913c9).
 
----
### uint32_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| lemire_digit_count STATISTICAL TIE | 2343.58 | 0.439167 | 0.442791ms | 5532 | 30 | 2932.64 | 2251.33 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 2331.98 | 0.484398 | 0.41325ms | 5532 | 30 | 3603.43 | 2262.53 | 1(Tie) |

----
### uint32_t-integer_count[10000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 2321.09 | 0.859731 | 4.08133ms | 55022 | 30 | 1.13326e+06 | 22607 | 1(Win) |
| lemire_digit_count | 2256.35 | 0.68612 | 88.7152ms | 54998 | 192 | 4.88411e+06 | 23245.6 | 2(Loss) |

----
### uint32_t-integer_count[100]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| lemire_digit_count | 1085.35 | 0.600857 | 150.382ms | 300 | 24576 | 61709.6 | 263.724 | 1(Win) |
| rtc_digit_count | 991.835 | 0.775206 | 385.582ms | 300 | 21702 | 108649 | 288.632 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count STATISTICAL TIE | 1277.74 | 0.267149 | 0.420583ms | 3000 | 30 | 1073.18 | 2238.83 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 1268.26 | 0.448947 | 0.413208ms | 3000 | 30 | 3076.25 | 2255.57 | 1(Tie) |

----
### uint32_t-integer_count[10000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 1273.94 | 0.625241 | 4.07392ms | 30026 | 30 | 592545 | 22477.7 | 1(Win) |
| lemire_digit_count | 1186.21 | 1.9022 | 4.42329ms | 30026 | 30 | 6.32584e+06 | 24140.3 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| lemire_digit_count STATISTICAL TIE | 1269.24 | 0.434114 | 269.599ms | 299951 | 30 | 2.87174e+07 | 225376 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 1268.3 | 0.502142 | 40.7352ms | 300073 | 30 | 3.85111e+07 | 225635 | 1(Tie) |

----
### uint32_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| lemire_digit_count STATISTICAL TIE | 2342.07 | 0.253856 | 41.9682ms | 550220 | 30 | 9.70442e+06 | 224046 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 2336.83 | 0.287875 | 273.638ms | 550156 | 30 | 1.25328e+07 | 224522 | 1(Tie) |

----
### uint32_t-integer_count[1000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count STATISTICAL TIE | 3175.01 | 0.391691 | 0.41475ms | 7495 | 30 | 2332.93 | 2251.37 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 3175.01 | 0.381835 | 0.412875ms | 7495 | 30 | 2217 | 2251.37 | 1(Tie) |

----
### uint32_t-integer_count[10000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 3267.55 | 0.294271 | 9.249ms | 74954 | 30 | 124326 | 21876.3 | 1(Win) |
| lemire_digit_count | 3200.81 | 0.266999 | 4.06196ms | 74999 | 30 | 106790 | 22345.7 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count STATISTICAL TIE | 3170.47 | 0.382475 | 204.868ms | 750056 | 48 | 3.57428e+07 | 225616 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 3169.98 | 0.468547 | 214.505ms | 750056 | 48 | 5.36564e+07 | 225651 | 1(Tie) |

----
### uint32_t-integer_count[100]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 3501.47 | 1.78993 | 18.9313ms | 1000 | 3072 | 73011.3 | 272.364 | 1(Win) |
| lemire_digit_count | 3047.34 | 1.63455 | 2.74083ms | 1000 | 384 | 10048.1 | 312.953 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 3638.47 | 2.46349 | 10.2861ms | 10000 | 192 | 800509 | 2621.09 | 1(Win) |
| lemire_digit_count | 3303.31 | 1.05692 | 173.983ms | 10000 | 3072 | 2.86027e+06 | 2887.03 | 2(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| lemire_digit_count STATISTICAL TIE | 4236.1 | 0.632471 | 42.9876ms | 100000 | 96 | 1.94635e+06 | 22513.1 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 4174.88 | 1.85989 | 4.084ms | 100000 | 30 | 5.41514e+06 | 22843.2 | 1(Tie) |

----
### uint32_t-integer_count[100000]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| lemire_digit_count STATISTICAL TIE | 4222.39 | 0.423563 | 40.917ms | 1000000 | 30 | 2.74562e+07 | 225861 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 4193.95 | 0.704739 | 41.2393ms | 1000000 | 30 | 7.70428e+07 | 227393 | 1(Tie) |
