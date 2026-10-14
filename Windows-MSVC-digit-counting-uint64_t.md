# Digit Counting
Performance profiling of functions (Compiled and run on Windows 10.0.26100 using the MSVC 19.51.36260.0 compiler).  

Latest Results: (Oct 14, 2026)

> Adaptive sampling on (AMD EPYC 9V74 80-Core Processor-AVX512): iterations begin at 60 and double each epoch (e.g. 60 ? 120 ? 240 ? ...) up to a per-test-size maximum (scaled so every size gets the same iterations*count memory/verification budget - smaller integer counts get proportionally more iterations to average out timing noise). Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 10 seconds have elapsed or the iteration cap is reached. The first epoch is kept only as an initial fallback; every later epoch is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result, whether or not it met the convergence thresholds. A result counts as converged only if that retained epoch has RSE <= 10% AND mean shift <= 5%; non-converged results are still included in the rankings and in win/tie/loss tallying, so a result that did not meet these thresholds should be read with its reduced statistical confidence in mind. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
 This is the commit of BenchmarkSuite that was used to generate these results: [e7faa83](https://github.com/nihilai-collective/benchmarksuite/commit/e7faa83).
 
----
### uint64_t-integer_count[10]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 685.454 | 0.903445 | 919.565ms | 30 | 98304 | 13977.7 | 41.7379 | 0.00487472 | 1.02463 | 1(Win) | true |
| lemire_digit_count | 636.336 | 0.835881 | 957.587ms | 30 | 98304 | 13883.6 | 44.9595 | 0.269976 | 1.2904 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2230.38 | 0.948539 | 203.633ms | 300 | 21702 | 32102.8 | 128.223 | 0.349008 | 0.850597 | 1(Win) | true |
| lemire_digit_count | 1769.93 | 0.407308 | 241.077ms | 300 | 6144 | 2661.99 | 161.605 | 0.0302054 | 1.14085 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2817.42 | 0.469719 | 128.725ms | 2996 | 192 | 4356.18 | 1014.06 | 0.0513347 | 0.85199 | 1(Win) | true |
| lemire_digit_count | 1863.17 | 0.667749 | 193.689ms | 3009 | 30 | 3172.41 | 1540 | 0 | 1.3066 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2902.3 | 0.436935 | 121.999ms | 29997 | 30 | 55643.7 | 9856.67 | 0.169377 | 0.84963 | 1(Win) | true |
| lemire_digit_count | 1859.91 | 0.330636 | 199.124ms | 29985 | 48 | 124043 | 15375 | 4.06614 | 1.3277 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2792.49 | 0.986897 | 125.888ms | 299982 | 48 | 4.90672e+07 | 102448 | 0.872843 | 0.885888 | 1(Win) | true |
| lemire_digit_count | 1707.11 | 1.62813 | 203.151ms | 299968 | 30 | 2.2332e+08 | 167577 | 0.443046 | 1.44985 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 1247.5 | 0.8455 | 940.221ms | 55 | 100000 | 12641.6 | 42.052 | 0.101984 | 0.557835 | 1(Win) | true |
| lemire_digit_count | 1159.18 | 0.741838 | 965.274ms | 55 | 100000 | 11271.2 | 45.256 | 0.631082 | 0.722656 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 4041.79 | 0.825581 | 204.183ms | 550 | 49152 | 56382.3 | 129.73 | 0.480618 | 0.467355 | 1(Win) | true |
| lemire_digit_count | 3125.15 | 0.548933 | 250.461ms | 550 | 49152 | 41693.5 | 167.782 | 0.693608 | 0.649791 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 3473.8 | 1.45549 | 152.456ms | 5498 | 96 | 46332.2 | 1509.38 | 1.04603 | 0.696337 | 1(Win) | true |
| lemire_digit_count | 3088.82 | 1.3373 | 203.969ms | 5503 | 384 | 198223 | 1698.96 | 0.338357 | 0.787224 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 5265.08 | 0.35953 | 121.658ms | 55047 | 48 | 61684.4 | 9970.83 | 0.291667 | 0.468512 | 1(Win) | true |
| lemire_digit_count | 3420.42 | 0.241234 | 191.099ms | 55039 | 96 | 131561 | 15345.8 | 1.24682 | 0.722033 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 5197.54 | 0.948819 | 125.869ms | 550034 | 30 | 2.75087e+07 | 100923 | 0.0858001 | 0.476089 | 1(Win) | true |
| lemire_digit_count | 3365.76 | 0.962532 | 190.938ms | 550034 | 30 | 6.75095e+07 | 155850 | 2.92945 | 0.735378 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 1839.46 | 0.591012 | 937.287ms | 80 | 98304 | 5912.22 | 41.4948 | 0.495194 | 0.38037 | 1(Win) | true |
| lemire_digit_count | 1710.67 | 0.500254 | 987.541ms | 80 | 98304 | 4897.65 | 44.6187 | 0.728771 | 0.481831 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 5855.88 | 0.609176 | 204.233ms | 800 | 49152 | 30992.3 | 130.351 | 0.0218463 | 0.326164 | 1(Win) | true |
| lemire_digit_count | 4494.33 | 1.65089 | 248.305ms | 800 | 49152 | 386421 | 169.84 | 0.658355 | 0.453537 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 7369.94 | 0.658202 | 131.054ms | 7996 | 5862 | 271889 | 1034.7 | 0.182376 | 0.326122 | 1(Win) | true |
| lemire_digit_count | 4914.83 | 0.362196 | 194.137ms | 8005 | 384 | 12155.6 | 1553.39 | 0.0503187 | 0.494059 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 7736.08 | 0.426456 | 120.995ms | 79821 | 30 | 52827.6 | 9840 | 0.20284 | 0.318824 | 1(Win) | true |
| lemire_digit_count | 4886.86 | 1.29053 | 197.583ms | 79976 | 96 | 3.89458e+06 | 15607.3 | 1.78668 | 0.505203 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 7344.1 | 1.14288 | 122.138ms | 799830 | 48 | 6.7633e+07 | 103862 | 0.759119 | 0.336915 | 1(Win) | true |
| lemire_digit_count | 4952.67 | 0.827168 | 199.78ms | 800003 | 30 | 4.87095e+07 | 154047 | 0.636422 | 0.499686 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2415.23 | 0.803292 | 912.278ms | 105 | 24576 | 2722.09 | 41.4307 | 0.215602 | 0.290467 | 1(Win) | true |
| lemire_digit_count | 2215.55 | 0.846127 | 948.027ms | 105 | 100000 | 14611.9 | 45.177 | 0.0221303 | 0.37242 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 7695.95 | 1.00261 | 199.309ms | 1049 | 21702 | 36892.9 | 130.043 | 0.220906 | 0.243199 | 1(Win) | true |
| lemire_digit_count | 6168.88 | 0.551484 | 240.815ms | 1051 | 3072 | 2464.17 | 162.402 | 0.140112 | 0.331001 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 9553.76 | 0.769501 | 130.704ms | 10500 | 5862 | 381320 | 1048.12 | 0.33453 | 0.251639 | 1(Win) | true |
| lemire_digit_count | 3109.09 | 0.24968 | 243.204ms | 10496 | 384 | 24813.4 | 3219.53 | 1.64678 | 0.785176 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 10078.1 | 0.443261 | 123.201ms | 104972 | 30 | 58160.9 | 9933.33 | 0.302928 | 0.244853 | 1(Win) | true |
| lemire_digit_count | 3208.62 | 0.392819 | 227.118ms | 104871 | 30 | 449759 | 31170 | 1.22531 | 0.77068 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 10105.9 | 0.867028 | 120.512ms | 1050217 | 30 | 2.2151e+07 | 99106.7 | 0.164534 | 0.244863 | 1(Win) | true |
| lemire_digit_count | 6469.36 | 0.987163 | 185.367ms | 1050217 | 30 | 7.00704e+07 | 154817 | 0.0172217 | 0.382571 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 1710.1 | 0.89865 | 910.534ms | 75 | 100000 | 14127.1 | 41.825 | 0.000856114 | 0.410134 | 1(Win) | true |
| lemire_digit_count | 1589.66 | 0.703034 | 951.533ms | 75 | 100000 | 10006 | 44.994 | 0.264044 | 0.514959 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 5600.66 | 0.841876 | 196.039ms | 750 | 21702 | 25083.9 | 127.703 | 0.574455 | 0.338208 | 1(Win) | true |
| lemire_digit_count | 4298.84 | 0.62665 | 241.181ms | 750 | 49152 | 53411.4 | 166.349 | 0.114833 | 0.472559 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 7004.6 | 0.783131 | 130.241ms | 7506 | 96 | 6148.03 | 1021.88 | 0.101833 | 0.344056 | 1(Win) | true |
| lemire_digit_count | 4553.6 | 0.644132 | 228.211ms | 7501 | 3072 | 314547 | 1570.93 | 0.295442 | 0.533339 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 7221.54 | 0.226581 | 122.118ms | 74974 | 96 | 48314.7 | 9901.04 | 0.412001 | 0.341494 | 1(Win) | true |
| lemire_digit_count | 4709.48 | 0.237205 | 187.227ms | 74963 | 30 | 38896.6 | 15180 | 0.589391 | 0.524144 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 7220.79 | 0.907149 | 120.538ms | 749937 | 30 | 2.42191e+07 | 99046.7 | 0.480616 | 0.342659 | 1(Win) | true |
| lemire_digit_count | 4472.77 | 1.19386 | 193.464ms | 749937 | 30 | 1.09327e+08 | 159900 | 0.346464 | 0.553352 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2278.59 | 0.740866 | 932.803ms | 100 | 100000 | 9617.84 | 41.86 | 0.366845 | 0.305502 | 1(Win) | true |
| lemire_digit_count | 2125.5 | 0.752414 | 978.158ms | 100 | 100000 | 11404.5 | 44.883 | 0.343804 | 0.390709 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 7493.9 | 0.683179 | 195.996ms | 1000 | 3072 | 2321.56 | 127.246 | 0.436793 | 0.25318 | 1(Win) | true |
| lemire_digit_count | 5838.34 | 0.45997 | 272.75ms | 1000 | 49152 | 27747.2 | 163.346 | 0.0523391 | 0.347374 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 9391.74 | 0.586648 | 128.316ms | 9992 | 192 | 6801.92 | 1014.58 | 0.102564 | 0.255988 | 1(Win) | true |
| lemire_digit_count | 2824.48 | 0.463613 | 230.252ms | 10008 | 96 | 23561.4 | 3379.17 | 0.0616143 | 0.86629 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 9641.69 | 0.463354 | 122.188ms | 99988 | 30 | 63000 | 9890 | 0 | 0.255782 | 1(Win) | true |
| lemire_digit_count | 6267.98 | 0.237906 | 190.841ms | 99945 | 30 | 39264.4 | 15206.7 | 1.04121 | 0.393751 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 9206.22 | 1.02073 | 122.619ms | 1000215 | 48 | 5.36888e+07 | 103612 | 0.404518 | 0.268774 | 1(Win) | true |
| lemire_digit_count | 6135.04 | 0.773536 | 211.151ms | 999932 | 30 | 4.337e+07 | 155437 | 0.12158 | 0.4034 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2840.19 | 0.939063 | 910.385ms | 125 | 100000 | 15546.8 | 41.988 | 0.0991476 | 0.250061 | 1(Win) | true |
| lemire_digit_count | 2675.75 | 0.554827 | 946.512ms | 125 | 100000 | 6111.22 | 44.556 | 0.080732 | 0.309794 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 9182.22 | 0.814997 | 197.33ms | 1250 | 49152 | 55039 | 129.84 | 0.596555 | 0.206917 | 1(Win) | true |
| lemire_digit_count | 7463.75 | 0.785524 | 238.783ms | 1250 | 1536 | 2419.23 | 159.766 | 0.243902 | 0.272573 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 11117 | 0.721176 | 133.423ms | 12500 | 5862 | 350590 | 1072.35 | 1.46772 | 0.21635 | 1(Win) | true |
| lemire_digit_count | 7718.6 | 0.596233 | 196.136ms | 12491 | 30 | 2540.23 | 1543.33 | 0.215517 | 0.314295 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 11470.1 | 0.953824 | 123.886ms | 125027 | 384 | 3.77523e+06 | 10395.3 | 0.377188 | 0.214985 | 1(Win) | true |
| lemire_digit_count | 7693.17 | 0.665058 | 186.812ms | 124981 | 438 | 4.6502e+06 | 15493.2 | 0.061723 | 0.320966 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 12012.1 | 0.89003 | 128.905ms | 1249902 | 30 | 2.34016e+07 | 99233.3 | 0.286797 | 0.20597 | 1(Win) | true |
| lemire_digit_count DID NOT CONVERGE | 7778.81 | 0.800704 | 230.849ms | 1249902 | 30 | 4.51638e+07 | 153237 | 12.6141 | 0.318159 | -(Loss) | false |

----
### uint64_t-integer_count[10]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2831.76 | 0.687104 | 909.543ms | 125 | 100000 | 8369.34 | 42.104 | 0.49511 | 0.245134 | 1(Win) | true |
| lemire_digit_count | 2649.95 | 0.694656 | 945.841ms | 125 | 100000 | 9770.27 | 44.997 | 0.0133324 | 0.309429 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 9309.21 | 0.484409 | 199.049ms | 1250 | 6144 | 2365.5 | 128.092 | 0.956456 | 0.203067 | 1(Win) | true |
| lemire_digit_count | 7408.43 | 0.583956 | 241.242ms | 1250 | 3072 | 2713.29 | 160.938 | 0.0404694 | 0.273359 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 11617.9 | 0.799846 | 132.711ms | 12507 | 30 | 2022.99 | 1026.67 | 0.96463 | 0.205453 | 1(Win) | true |
| lemire_digit_count | 7434.06 | 0.634965 | 196.822ms | 12499 | 5862 | 607664 | 1603.46 | 0.185862 | 0.326954 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 10784.6 | 1.31412 | 128.249ms | 124970 | 96 | 2.02463e+06 | 11051 | 0.349981 | 0.228824 | 1(Win) | true |
| lemire_digit_count | 7834.39 | 0.261818 | 199.096ms | 124987 | 48 | 76165.8 | 15214.6 | 1.77803 | 0.315295 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 11946.2 | 1.22065 | 120.121ms | 1249933 | 30 | 4.45063e+07 | 99783.3 | 0.127197 | 0.207155 | 1(Win) | true |
| lemire_digit_count | 7560.6 | 0.974508 | 189.45ms | 1249933 | 30 | 7.08196e+07 | 157663 | 0.281451 | 0.327347 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 3445.03 | 0.607963 | 910.249ms | 150 | 98304 | 6263.59 | 41.5192 | 0.193182 | 0.201923 | 1(Win) | true |
| lemire_digit_count | 3167.18 | 0.751594 | 947.681ms | 150 | 100000 | 11526.2 | 45.171 | 0.239057 | 0.25918 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 11237.1 | 0.557647 | 195.47ms | 1500 | 49152 | 24777 | 127.319 | 0.0255607 | 0.168185 | 1(Win) | true |
| lemire_digit_count | 8767.5 | 0.774338 | 293.598ms | 1501 | 1536 | 2455.42 | 163.281 | 0.317965 | 0.229814 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 13851.2 | 0.674848 | 128.494ms | 14998 | 5862 | 284694 | 1032.67 | 0.203929 | 0.172724 | 1(Win) | true |
| lemire_digit_count | 9219.19 | 0.361196 | 193.206ms | 14999 | 384 | 12060.2 | 1551.56 | 0 | 0.26381 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 14518.8 | 0.497983 | 121.079ms | 150008 | 30 | 72229.9 | 9853.33 | 0.20339 | 0.169915 | 1(Win) | true |
| lemire_digit_count | 8736.07 | 1.53728 | 195.764ms | 150012 | 192 | 1.21681e+07 | 16376 | 1.05734 | 0.282635 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 14062.6 | 1.013 | 123.699ms | 1499792 | 48 | 5.09558e+07 | 101710 | 1.12403 | 0.175945 | 1(Win) | true |
| lemire_digit_count | 8589.35 | 1.63585 | 215.924ms | 1500167 | 30 | 2.22724e+08 | 166563 | 0.556422 | 0.28815 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 3997.61 | 0.875811 | 908.93ms | 175 | 98304 | 13142.1 | 41.748 | 0.0925069 | 0.17594 | 1(Win) | true |
| lemire_digit_count | 3744.25 | 0.551235 | 946.213ms | 175 | 98304 | 5934.56 | 44.573 | 0.0980392 | 0.219761 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 12662.4 | 1.45715 | 198.036ms | 1750 | 12288 | 45320.1 | 131.795 | 0.303481 | 0.150319 | 1(Win) | true |
| lemire_digit_count | 10052.2 | 0.729879 | 241.092ms | 1750 | 24576 | 36089 | 166.028 | 0.305414 | 0.202221 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 16349.7 | 0.255327 | 137.579ms | 17499 | 768 | 5216.19 | 1020.7 | 0.165563 | 0.146924 | 1(Win) | true |
| lemire_digit_count | 10795.1 | 0.598973 | 252.065ms | 17508 | 30 | 2574.71 | 1546.67 | 0 | 0.225578 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 14748.8 | 1.05155 | 133.84ms | 174997 | 438 | 6.20131e+06 | 11315.5 | 0.860278 | 0.167271 | 1(Win) | true |
| lemire_digit_count | 5400.27 | 0.373913 | 257.902ms | 175009 | 48 | 641024 | 30906.2 | 2.57565 | 0.457687 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 16635.3 | 0.988014 | 122.349ms | 1750090 | 30 | 2.94787e+07 | 100330 | 1.87135 | 0.148733 | 1(Win) | true |
| lemire_digit_count | 10449.6 | 0.875886 | 193.524ms | 1749956 | 48 | 9.39272e+07 | 159708 | 0.808997 | 0.236882 | 2(Loss) | true |
