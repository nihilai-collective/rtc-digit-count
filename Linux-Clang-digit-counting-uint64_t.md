# Digit Counting
Performance profiling of functions (Compiled and run on Linux 6.17.0-1022-azure using the Clang 24.0.0 compiler).  

Latest Results: (Sep 19, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor-AVX2): iterations begin at 60 and double each epoch (e.g. 60 -> 120 -> 240 -> ...) up to a per-test-size maximum (scaled so every size gets the same iterations*count memory/verification budget - smaller integer counts get proportionally more iterations to average out timing noise). Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 10.000000% AND mean shift < 5.000000% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 20 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
 This is the commit of BenchmarkSuite that was used to generate these results: [4972187](https://github.com/realtimechris/benchmarksuite/commit/4972187).
 
----
### uint64_t-integer_count[10]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 1856.11 | 6.21747 | 1.41475ms | 109 | 30 | 361.523 | 55.8333 | 0.337423 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 1838.54 | 2.01738 | 1.40642ms | 109 | 30 | 38.792 | 56.3667 | 0.443252 | 1(Tie) |

----
### uint64_t-integer_count[100]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7202.42 | 3.37527 | 1.43438ms | 1045 | 30 | 654.023 | 138.333 | 0.237573 | 1(Win) |
| lemire_digit_count | 4659.84 | 4.52326 | 3.41573ms | 1062 | 30 | 2899.2 | 217.333 | 0.41528 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10980.5 | 1.5401 | 3.69909ms | 10513 | 30 | 5932.78 | 913.1 | 0.204138 | 1(Win) |
| lemire_digit_count | 6201.79 | 1.55144 | 1.69793ms | 10514 | 30 | 18874.1 | 1616.73 | 0.36772 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 11708.8 | 1.54851 | 3.1118ms | 104945 | 30 | 525586 | 8547.67 | 0.198353 | 1(Win) |
| lemire_digit_count | 6233.19 | 3.32802 | 4.32406ms | 104945 | 30 | 8.56629e+06 | 16056.5 | 0.37325 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 11799.5 | 0.538229 | 17.1062ms | 1050303 | 30 | 6.26266e+06 | 84889 | 0.197551 | 1(Win) |
| lemire_digit_count | 6357.05 | 1.0465 | 29.9302ms | 1050303 | 30 | 8.15681e+07 | 157565 | 0.366757 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 519.619 | 1.60655 | 1.41431ms | 31 | 30 | 24.369 | 56.1 | 1.4711 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 510.029 | 3.73014 | 7.06121ms | 29 | 48 | 200.351 | 54.7708 | 1.30868 | 1(Tie) |

----
### uint64_t-integer_count[100]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2184.89 | 0.703295 | 14.7828ms | 300 | 96 | 81.3575 | 130.896 | 0.770155 | 1(Win) |
| lemire_digit_count | 1339.23 | 2.22182 | 1.44265ms | 297 | 30 | 661.834 | 211.4 | 1.38895 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3100.22 | 1.85438 | 16.934ms | 3001 | 96 | 28127.5 | 923.062 | 0.720635 | 1(Win) |
| lemire_digit_count | 1795.66 | 0.540334 | 1.72205ms | 3011 | 30 | 2240.2 | 1599.27 | 1.26951 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3398.55 | 0.332005 | 3.07024ms | 30008 | 30 | 23447.5 | 8420.6 | 0.683289 | 1(Win) |
| lemire_digit_count | 1797.72 | 2.04253 | 4.32244ms | 30008 | 30 | 3.17166e+06 | 15919 | 1.29225 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3223.54 | 1.76978 | 17.3779ms | 300152 | 30 | 7.40931e+07 | 88799.3 | 0.723123 | 1(Win) |
| lemire_digit_count | 1809.33 | 1.25429 | 29.8905ms | 300152 | 30 | 1.18131e+08 | 158206 | 1.28856 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 997.462 | 4.50406 | 7.09077ms | 56 | 48 | 279.147 | 53.5417 | 0.675223 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 947.769 | 1.64729 | 1.41044ms | 54 | 30 | 23.592 | 53.8333 | 0.823676 | 1(Tie) |

----
### uint64_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3578.49 | 5.70663 | 1.44246ms | 552 | 30 | 2117.84 | 147.233 | 0.470255 | 1(Win) |
| lemire_digit_count | 2610.87 | 1.18282 | 1.43968ms | 552 | 30 | 170.924 | 201.8 | 0.719802 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5783.35 | 0.939278 | 3.69251ms | 5478 | 30 | 2159.44 | 903.267 | 0.388073 | 1(Win) |
| lemire_digit_count | 3273.83 | 0.307083 | 1.71843ms | 5474 | 30 | 719.402 | 1594.67 | 0.69697 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6228.9 | 0.330454 | 3.05964ms | 54934 | 30 | 23173.8 | 8410.6 | 0.372701 | 1(Win) |
| lemire_digit_count | 3249.47 | 3.69474 | 4.33662ms | 54934 | 30 | 1.06449e+07 | 16122.3 | 0.715804 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6040.96 | 1.50837 | 17.3214ms | 550336 | 30 | 5.15204e+07 | 86880.5 | 0.385826 | 1(Win) |
| lemire_digit_count | 3292.11 | 1.28732 | 30.0268ms | 550336 | 30 | 1.26358e+08 | 159424 | 0.708134 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 1331.56 | 5.64832 | 3.34264ms | 77 | 30 | 288.823 | 54.9333 | 0.468927 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 1297.56 | 5.70427 | 1.43048ms | 80 | 30 | 336.355 | 58.7 | 0.572621 | 1(Tie) |

----
### uint64_t-integer_count[100]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 4756.67 | 5.00324 | 4.08187ms | 786 | 30 | 1864.46 | 157.567 | 0.382407 | 1(Win) |
| lemire_digit_count | 3792.2 | 1.11653 | 1.45453ms | 803 | 30 | 152.654 | 202.033 | 0.503299 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8179.41 | 3.87333 | 1.59117ms | 8037 | 30 | 39521.4 | 937.067 | 0.27466 | 1(Win) |
| lemire_digit_count | 4759.67 | 0.541188 | 3.99285ms | 8005 | 30 | 2260.52 | 1603.97 | 0.47918 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 9098.7 | 0.256376 | 3.06217ms | 80067 | 30 | 13887.6 | 8392.2 | 0.255207 | 1(Win) |
| lemire_digit_count | 4890.57 | 0.867631 | 4.32892ms | 80067 | 30 | 550532 | 15613.3 | 0.475412 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8671.42 | 1.7734 | 17.2601ms | 799799 | 30 | 7.29991e+07 | 87961.1 | 0.268804 | 1(Win) |
| lemire_digit_count | 4823.6 | 0.966809 | 30.0596ms | 799799 | 30 | 7.01167e+07 | 158128 | 0.483335 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 2050.4 | 2.30894 | 1.43097ms | 109 | 30 | 41.0575 | 50.6667 | 0.381579 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 1824.71 | 5.34611 | 1.4272ms | 109 | 30 | 277.926 | 56.9333 | 0.457466 | 1(Tie) |

----
### uint64_t-integer_count[100]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6918.83 | 4.31904 | 3.33743ms | 1044 | 30 | 1159.9 | 143.967 | 0.251005 | 1(Win) |
| lemire_digit_count | 4417.93 | 5.71066 | 1.43565ms | 1032 | 30 | 4852.15 | 222.7 | 0.432892 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 11028.1 | 0.973105 | 3.68574ms | 10473 | 30 | 2330.29 | 905.7 | 0.203129 | 1(Win) |
| lemire_digit_count | 6249.21 | 0.594695 | 4.00783ms | 10473 | 30 | 2710.36 | 1598.3 | 0.36517 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 11361.7 | 4.79317 | 3.05001ms | 104986 | 30 | 5.35237e+06 | 8812.3 | 0.204389 | 1(Win) |
| lemire_digit_count | 6501.05 | 0.142831 | 4.29799ms | 104986 | 30 | 14516.4 | 15401 | 0.35788 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 11492.5 | 1.50537 | 17.2717ms | 1050271 | 30 | 5.16393e+07 | 87154 | 0.202829 | 1(Win) |
| lemire_digit_count | 6333.29 | 1.18643 | 29.9052ms | 1050271 | 30 | 1.05621e+08 | 158151 | 0.368125 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1441.22 | 2.01254 | 3.28396ms | 76 | 30 | 30.9471 | 50.4667 | 0.439248 | 1(Win) |
| lemire_digit_count | 1276.39 | 2.11854 | 1.40755ms | 73 | 30 | 40.5333 | 54.8667 | 0.600091 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 4973.62 | 4.30977 | 3.33141ms | 747 | 30 | 1143.72 | 143.267 | 0.345394 | 1(Win) |
| lemire_digit_count | 3451.86 | 1.78533 | 1.43366ms | 745 | 30 | 404.993 | 205.8 | 0.547098 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7905.39 | 1.25389 | 1.58401ms | 7504 | 30 | 3865.67 | 905.3 | 0.282839 | 1(Win) |
| lemire_digit_count | 4506.39 | 0.255599 | 1.71155ms | 7504 | 30 | 494.326 | 1588.13 | 0.505699 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8414.64 | 0.25283 | 3.06101ms | 75003 | 30 | 13856.9 | 8500.47 | 0.275891 | 1(Win) |
| lemire_digit_count | 4412.49 | 4.42103 | 4.31659ms | 75003 | 30 | 1.54084e+07 | 16210.4 | 0.52723 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8011.71 | 1.84714 | 17.484ms | 750025 | 30 | 8.15869e+07 | 89279.2 | 0.290935 | 1(Win) |
| lemire_digit_count | 4570.77 | 0.641847 | 30.0476ms | 750025 | 30 | 3.02662e+07 | 156490 | 0.510059 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 1695.3 | 3.79928 | 14.6643ms | 100 | 96 | 437.962 | 56.2188 | 0.372316 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 1617.67 | 4.11366 | 1.41677ms | 98 | 30 | 169.799 | 57.8333 | 0.482161 | 1(Tie) |

----
### uint64_t-integer_count[100]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7158.64 | 2.64386 | 3.34753ms | 1000 | 30 | 371.868 | 133.167 | 0.237795 | 1(Win) |
| lemire_digit_count | 4484.28 | 3.56242 | 1.45518ms | 1004 | 30 | 1735.43 | 213.5 | 0.407478 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10542 | 1.00765 | 1.58069ms | 9993 | 30 | 2489.31 | 904 | 0.21241 | 1(Win) |
| lemire_digit_count | 5932.12 | 0.950548 | 17.946ms | 9998 | 96 | 22410.6 | 1607.38 | 0.384022 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 11299.7 | 0.340805 | 3.03026ms | 99955 | 30 | 24797.6 | 8436.03 | 0.205467 | 1(Win) |
| lemire_digit_count | 5910.89 | 3.91314 | 21.8539ms | 100036 | 48 | 1.91467e+07 | 16139.9 | 0.393601 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10898.5 | 1.61075 | 17.3282ms | 999993 | 30 | 5.95985e+07 | 87504.4 | 0.213879 | 1(Win) |
| lemire_digit_count | 6039.35 | 1.23782 | 29.8398ms | 999993 | 30 | 1.14618e+08 | 157909 | 0.386042 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 2420.24 | 2.22632 | 3.32564ms | 130 | 30 | 38.8782 | 51.1333 | 0.308502 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 2167.34 | 5.99444 | 3.29262ms | 130 | 30 | 351.472 | 57.1 | 0.377601 | 1(Tie) |

----
### uint64_t-integer_count[100]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8622.61 | 4.24104 | 1.44005ms | 1265 | 30 | 1056.09 | 139.9 | 0.189738 | 1(Win) |
| lemire_digit_count | 5626.41 | 5.7367 | 1.45743ms | 1265 | 30 | 4538.32 | 214.4 | 0.320921 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 13316.5 | 1.19669 | 1.59003ms | 12539 | 30 | 3464.48 | 898 | 0.168173 | 1(Win) |
| lemire_digit_count | 7513.17 | 0.387799 | 1.69869ms | 12539 | 30 | 1142.93 | 1591.63 | 0.303246 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 14070.4 | 0.341163 | 3.04983ms | 125051 | 30 | 25084.6 | 8475.8 | 0.165017 | 1(Win) |
| lemire_digit_count | 7674.75 | 0.936751 | 4.31371ms | 125051 | 30 | 635644 | 15539 | 0.303096 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 13605.5 | 1.34778 | 17.1441ms | 1249903 | 30 | 4.18299e+07 | 87611.8 | 0.171319 | 1(Win) |
| lemire_digit_count | 7530.93 | 1.2448 | 29.9575ms | 1249903 | 30 | 1.1646e+08 | 158281 | 0.309588 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 2333.13 | 1.54079 | 1.41251ms | 126 | 30 | 18.792 | 51.3667 | 0.30557 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 2244.39 | 1.66743 | 3.31882ms | 126 | 30 | 24.023 | 53.6667 | 0.407495 | 1(Tie) |

----
### uint64_t-integer_count[100]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8566.37 | 3.42341 | 1.42115ms | 1249 | 30 | 679.31 | 139 | 0.202072 | 1(Win) |
| lemire_digit_count | 5871.1 | 1.4437 | 3.35056ms | 1250 | 30 | 257.757 | 203.033 | 0.324684 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 13358 | 1.03865 | 3.66066ms | 12504 | 30 | 2579.11 | 892.7 | 0.167465 | 1(Win) |
| lemire_digit_count | 7440.09 | 0.382152 | 1.70853ms | 12513 | 30 | 1127.02 | 1603.87 | 0.306239 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 13258.3 | 5.31866 | 3.00841ms | 124987 | 30 | 6.85932e+06 | 8990.37 | 0.175157 | 1(Win) |
| lemire_digit_count | 7545.99 | 2.37059 | 10.0506ms | 125021 | 30 | 4.20893e+06 | 15800.4 | 0.308354 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 14150.1 | 0.78133 | 16.8746ms | 1249994 | 30 | 1.29983e+07 | 84245.9 | 0.164728 | 1(Win) |
| lemire_digit_count | 7511.08 | 1.21784 | 29.9595ms | 1249994 | 30 | 1.12076e+08 | 158711 | 0.310402 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2816.75 | 2.28702 | 1.40712ms | 153 | 30 | 41.9414 | 51.7 | 0.229426 | 1(Win) |
| lemire_digit_count | 2623.89 | 1.72726 | 1.43687ms | 153 | 30 | 27.569 | 55.5 | 0.283344 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 9843.67 | 3.89427 | 1.43303ms | 1497 | 30 | 956.552 | 145 | 0.175145 | 1(Win) |
| lemire_digit_count | 6892 | 2.82031 | 1.45949ms | 1497 | 30 | 1023.47 | 207.1 | 0.277751 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 15806.2 | 1.63853 | 3.687ms | 15017 | 30 | 6611.76 | 906.033 | 0.141778 | 1(Win) |
| lemire_digit_count | 8965.48 | 0.320027 | 1.69993ms | 15002 | 30 | 782.441 | 1595.8 | 0.253947 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 16617.7 | 3.08299 | 3.02909ms | 150064 | 30 | 2.11484e+06 | 8612.03 | 0.139563 | 1(Win) |
| lemire_digit_count | 9294.79 | 0.150615 | 4.30669ms | 150064 | 30 | 16133.6 | 15397 | 0.250321 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 16944.1 | 0.770712 | 16.7993ms | 1500220 | 30 | 1.27051e+07 | 84437.5 | 0.137566 | 1(Win) |
| lemire_digit_count | 9030.24 | 1.20272 | 29.8742ms | 1500220 | 30 | 1.08934e+08 | 158437 | 0.258179 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 3112.18 | 1.66982 | 1.43817ms | 175 | 30 | 24.092 | 53.6667 | 0.256566 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 3044.65 | 3.47743 | 14.6921ms | 174 | 96 | 344.547 | 54.4792 | 0.223094 | 1(Tie) |

----
### uint64_t-integer_count[100]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 11952.4 | 4.04514 | 3.33233ms | 1750 | 30 | 956.662 | 139.6 | 0.14651 | 1(Win) |
| lemire_digit_count | 8151.2 | 1.14982 | 7.25493ms | 1750 | 48 | 266.095 | 204.771 | 0.229818 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 18598.8 | 1.67072 | 7.88997ms | 17500 | 48 | 10788.9 | 897.354 | 0.120248 | 1(Win) |
| lemire_digit_count | 10459.4 | 0.335156 | 1.71151ms | 17499 | 30 | 857.845 | 1595.5 | 0.218037 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 20121.5 | 0.337692 | 3.03571ms | 175024 | 30 | 23541.6 | 8295.4 | 0.115329 | 1(Win) |
| lemire_digit_count | 10073.1 | 6.83208 | 21.9305ms | 174970 | 48 | 6.14825e+07 | 16565.4 | 0.230941 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 19712.5 | 0.837633 | 16.9451ms | 1749966 | 30 | 1.50871e+07 | 84662 | 0.118242 | 1(Win) |
| lemire_digit_count | 10533.7 | 1.21366 | 29.8302ms | 1749966 | 30 | 1.1092e+08 | 158434 | 0.221334 | 2(Loss) |
