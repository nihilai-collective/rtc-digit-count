# Digit Counting
Performance profiling of functions (Compiled and run on Windows 10.0.26100 using the MSVC 19.51.36256.0 compiler).  

Latest Results: (Sep 19, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor-AVX2): iterations begin at 60 and double each epoch (e.g. 60 -> 120 -> 240 -> ...) up to a per-test-size maximum (scaled so every size gets the same iterations*count memory/verification budget - smaller integer counts get proportionally more iterations to average out timing noise). Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.500000% AND mean shift < 1.000000% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 20 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
 This is the commit of BenchmarkSuite that was used to generate these results: [4972187](https://github.com/realtimechris/benchmarksuite/commit/4972187).
 
----
### uint64_t-integer_count[10]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2021.52 | 0.469062 | 189.812ms | 105 | 98304 | 5306.23 | 49.531 | 0.293033 | 1(Win) |
| lemire_digit_count | 1507.68 | 2.24416 | 6.8363ms | 105 | 3072 | 6789.14 | 66.2435 | 0.569146 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6779.16 | 1.44996 | 2.9305ms | 1049 | 768 | 3514.08 | 147.526 | 0.252531 | 1(Win) |
| lemire_digit_count | 5176.53 | 0.862701 | 58.7653ms | 1051 | 12288 | 34258.8 | 193.547 | 0.365978 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8554.82 | 0.863593 | 2.317ms | 10512 | 96 | 9832.24 | 1171.88 | 0.265331 | 1(Win) |
| lemire_digit_count | 5481.08 | 0.763681 | 7.1542ms | 10504 | 192 | 37401.6 | 1827.6 | 0.417114 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8621.1 | 1.07268 | 145.859ms | 104955 | 438 | 6.7936e+06 | 11610.3 | 0.269572 | 1(Win) |
| lemire_digit_count | 5563.37 | 0.860751 | 138.401ms | 105016 | 384 | 9.21976e+06 | 18001.8 | 0.418124 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8525.25 | 1.38829 | 144.033ms | 1050376 | 30 | 7.9829e+07 | 117500 | 0.273444 | 1(Win) |
| lemire_digit_count | 5640.29 | 0.95291 | 32.969ms | 1049685 | 30 | 8.58104e+07 | 177483 | 0.413265 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2010.55 | 1.90693 | 1.4777ms | 299 | 384 | 2802.44 | 141.667 | 0.867108 | 1(Win) |
| lemire_digit_count | 1496.22 | 1.01986 | 1.9348ms | 299 | 384 | 1447.39 | 190.365 | 1.26445 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2447.65 | 1.18636 | 0.5361ms | 2994 | 30 | 5747.13 | 1166.67 | 0.923744 | 1(Win) |
| lemire_digit_count | 1602.86 | 0.670472 | 1.7606ms | 3008 | 48 | 6910.46 | 1789.58 | 1.42023 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2498.75 | 1.00365 | 87.9974ms | 30001 | 384 | 5.07138e+06 | 11450.3 | 0.929414 | 1(Win) |
| lemire_digit_count | 1627.73 | 0.740097 | 16.0831ms | 30033 | 48 | 814025 | 17595.8 | 1.42966 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2466.98 | 0.972196 | 48.8086ms | 299881 | 30 | 3.81062e+07 | 115927 | 0.94481 | 1(Win) |
| lemire_digit_count | 1613.11 | 0.672173 | 159.528ms | 300032 | 48 | 6.82353e+07 | 177379 | 1.44503 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1058.06 | 1.82578 | 5.7092ms | 55 | 3072 | 2507.06 | 49.4792 | 0.551234 | 1(Win) |
| lemire_digit_count | 769.928 | 0.634044 | 217.674ms | 55 | 98304 | 18344.5 | 68.1315 | 1.13162 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3544.29 | 0.448063 | 47.1668ms | 550 | 12288 | 5399.88 | 147.949 | 0.491392 | 1(Win) |
| lemire_digit_count | 2719.73 | 2.10339 | 0.2317ms | 547 | 48 | 780.142 | 191.667 | 0.680794 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 4585.33 | 1.03824 | 1.1133ms | 5499 | 48 | 6768.62 | 1143.75 | 0.493781 | 1(Win) |
| lemire_digit_count | 2817.77 | 0.881353 | 119.9ms | 5500 | 3072 | 826793 | 1861.39 | 0.811449 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 4734.29 | 0.377337 | 4.8671ms | 55021 | 30 | 52471.3 | 11083.3 | 0.491048 | 1(Win) |
| lemire_digit_count | 3003.7 | 0.225202 | 16.0746ms | 55007 | 48 | 74250.9 | 17464.6 | 0.774441 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 4556.8 | 0.919793 | 114.175ms | 549945 | 48 | 5.37949e+07 | 115096 | 0.511503 | 1(Win) |
| lemire_digit_count | 2954.36 | 0.815137 | 78.6871ms | 550058 | 30 | 6.28452e+07 | 177560 | 0.789032 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1511.17 | 0.817745 | 1134.37ms | 80 | 100000 | 17061.1 | 50.511 | 0.390852 | 1(Win) |
| lemire_digit_count | 1439.14 | 1.20397 | 12.0497ms | 80 | 6144 | 2495.08 | 52.9297 | 0.532342 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5207.21 | 1.99588 | 1.4864ms | 799 | 384 | 3276.49 | 146.354 | 0.333037 | 1(Win) |
| lemire_digit_count | 3992.43 | 1.02051 | 1.8198ms | 799 | 384 | 1457.18 | 190.885 | 0.472481 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6429.54 | 1.46557 | 0.5111ms | 7978 | 30 | 9022.99 | 1183.33 | 0.352759 | 1(Win) |
| lemire_digit_count | 4284.05 | 0.530171 | 3.5084ms | 7997 | 96 | 8551.54 | 1780.21 | 0.534006 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6392.43 | 0.794496 | 97.4766ms | 79966 | 384 | 3.44978e+06 | 11929.9 | 0.363525 | 1(Win) |
| lemire_digit_count | 2315.24 | 0.860776 | 56.9432ms | 79942 | 96 | 7.71282e+06 | 32929.2 | 1.00593 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6500.96 | 1.64162 | 21.0299ms | 800377 | 30 | 1.11456e+08 | 117413 | 0.358551 | 1(Win) |
| lemire_digit_count | 4265.19 | 0.947688 | 32.0491ms | 800377 | 30 | 8.62908e+07 | 178960 | 0.546531 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1984.73 | 0.856321 | 93.1573ms | 105 | 49152 | 9167.48 | 50.4333 | 0.298274 | 1(Win) |
| lemire_digit_count | 1824.95 | 1.64042 | 6.0456ms | 105 | 3072 | 2478.22 | 54.7526 | 0.442337 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6897.81 | 1.44872 | 2.942ms | 1049 | 768 | 3391.39 | 145.052 | 0.250855 | 1(Win) |
| lemire_digit_count | 5113.8 | 1.20517 | 67.5742ms | 1051 | 12288 | 68508.6 | 195.923 | 0.36871 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8625.18 | 1.30964 | 1.1439ms | 10552 | 48 | 11205.7 | 1166.67 | 0.26359 | 1(Win) |
| lemire_digit_count | 5664.45 | 0.600531 | 0.3326ms | 10533 | 30 | 3402.3 | 1773.33 | 0.404267 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 9146.55 | 0.302093 | 4.8384ms | 104892 | 30 | 32747.1 | 10936.7 | 0.254112 | 1(Win) |
| lemire_digit_count | 5606.87 | 0.616795 | 215.711ms | 104960 | 438 | 5.31087e+06 | 17852.7 | 0.414901 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8631.06 | 1.05488 | 53.9445ms | 1050109 | 30 | 4.49436e+07 | 116030 | 0.27006 | 1(Win) |
| lemire_digit_count | 5637.28 | 0.858845 | 87.7767ms | 1050109 | 30 | 6.98364e+07 | 177650 | 0.413533 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1492.16 | 1.87888 | 5.7678ms | 75 | 3072 | 2496.74 | 47.9818 | 0.388049 | 1(Win) |
| lemire_digit_count | 1313.34 | 0.503936 | 778.059ms | 75 | 100000 | 7534.69 | 54.47 | 0.595438 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 4970.87 | 0.938584 | 5.8642ms | 750 | 1536 | 2803.71 | 143.945 | 0.347564 | 1(Win) |
| lemire_digit_count | 3764.17 | 0.891463 | 1.8192ms | 750 | 384 | 1102.86 | 190.104 | 0.502284 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6128.2 | 1.38353 | 0.2325ms | 7497 | 30 | 7816.09 | 1166.67 | 0.370159 | 1(Win) |
| lemire_digit_count | 2204.39 | 1.14206 | 0.5987ms | 7497 | 30 | 41160.9 | 3243.33 | 1.04108 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6310.16 | 0.90636 | 86.3894ms | 74996 | 384 | 4.05255e+06 | 11334.4 | 0.368266 | 1(Win) |
| lemire_digit_count | 4119.38 | 0.246184 | 3.2173ms | 75001 | 30 | 54816.1 | 17363.3 | 0.564704 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6143.53 | 1.25643 | 20.8295ms | 749780 | 30 | 6.41547e+07 | 116390 | 0.379407 | 1(Win) |
| lemire_digit_count | 4039.12 | 0.933895 | 32.0203ms | 749780 | 30 | 8.19994e+07 | 177030 | 0.577185 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1923.62 | 0.923894 | 22.9258ms | 100 | 12288 | 2583.08 | 49.6257 | 0.309166 | 1(Win) |
| lemire_digit_count | 1676.9 | 1.57257 | 6.3824ms | 100 | 3072 | 2454.07 | 56.8359 | 0.510101 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6403.19 | 1.08227 | 96.5779ms | 1000 | 24576 | 63850.7 | 148.934 | 0.274192 | 1(Win) |
| lemire_digit_count | 4864.17 | 0.634974 | 269.867ms | 1000 | 49152 | 76168.2 | 196.047 | 0.38928 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8369.82 | 1.22098 | 44.0977ms | 99996 | 192 | 3.71577e+06 | 11393.8 | 0.277496 | 1(Win) |
| lemire_digit_count | 5425.06 | 0.957526 | 3.3674ms | 100024 | 30 | 850402 | 17583.3 | 0.428711 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8329.27 | 0.960566 | 21.9555ms | 1000261 | 30 | 3.63069e+07 | 114527 | 0.279848 | 1(Win) |
| lemire_digit_count | 5355.21 | 0.749706 | 32.0412ms | 1000261 | 30 | 5.35029e+07 | 178130 | 0.435284 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2361.57 | 1.28747 | 11.4992ms | 125 | 6144 | 2601.05 | 50.5371 | 0.253385 | 1(Win) |
| lemire_digit_count | 2246.17 | 1.69504 | 6.0197ms | 125 | 3072 | 2497.15 | 53.1901 | 0.331633 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8267.87 | 0.968013 | 5.9073ms | 1249 | 1536 | 2987.68 | 144.076 | 0.210524 | 1(Win) |
| lemire_digit_count | 6058.34 | 0.815007 | 118.145ms | 1250 | 24576 | 63191.5 | 196.749 | 0.310709 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10386.3 | 1.18833 | 1.2721ms | 12502 | 48 | 8931.74 | 1147.92 | 0.21851 | 1(Win) |
| lemire_digit_count | 3699.31 | 0.827543 | 3.075ms | 12502 | 48 | 34144.5 | 3222.92 | 0.620135 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10321.2 | 0.960299 | 48.59ms | 1250219 | 30 | 3.69189e+07 | 115520 | 0.225801 | 1(Win) |
| lemire_digit_count | 6708.94 | 0.831705 | 31.9136ms | 1249809 | 30 | 6.54997e+07 | 177660 | 0.3475 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2368.47 | 1.4495 | 45.8452ms | 125 | 24576 | 13077.4 | 50.3255 | 0.242442 | 1(Win) |
| lemire_digit_count | 2151.44 | 0.765101 | 96.1147ms | 125 | 49152 | 8831.27 | 55.4016 | 0.362319 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7949.42 | 1.8783 | 47.1436ms | 1250 | 12288 | 97521 | 149.984 | 0.216443 | 1(Win) |
| lemire_digit_count | 6239.01 | 0.357202 | 14.5986ms | 1250 | 3072 | 1430.16 | 191.016 | 0.302335 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10123 | 0.673397 | 5.7504ms | 12505 | 192 | 12084.4 | 1178.12 | 0.223315 | 1(Win) |
| lemire_digit_count | 3697.53 | 0.847563 | 0.6058ms | 12484 | 30 | 22344.8 | 3220 | 0.621835 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10499.6 | 1.94604 | 5.0217ms | 125033 | 30 | 1.4653e+06 | 11356.7 | 0.221297 | 1(Win) |
| lemire_digit_count | 6865.42 | 0.203823 | 3.418ms | 124997 | 30 | 37574.7 | 17363.3 | 0.338976 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10223.4 | 1.15714 | 20.8894ms | 1250027 | 30 | 5.46186e+07 | 116607 | 0.227955 | 1(Win) |
| lemire_digit_count | 6689.81 | 0.715468 | 248.296ms | 1250079 | 30 | 4.87696e+07 | 178207 | 0.348433 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2902.88 | 1.29429 | 11.5098ms | 150 | 6144 | 2499.89 | 49.2839 | 0.203731 | 1(Win) |
| lemire_digit_count | 2655.33 | 2.38179 | 2.9882ms | 150 | 1536 | 2525.95 | 53.8411 | 0.3117 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 9674.38 | 0.830464 | 94.319ms | 1500 | 24576 | 37057.5 | 147.864 | 0.181499 | 1(Win) |
| lemire_digit_count | 7504.06 | 0.774086 | 3.6527ms | 1501 | 768 | 1674.53 | 190.755 | 0.253155 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 12352.1 | 1.5884 | 0.2195ms | 14981 | 30 | 10126.4 | 1156.67 | 0.184582 | 1(Win) |
| lemire_digit_count | 4356.82 | 0.454295 | 12.8647ms | 15012 | 192 | 42785.5 | 3285.94 | 0.527547 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 12101 | 1.34726 | 21.3029ms | 1499897 | 30 | 7.60862e+07 | 118207 | 0.19263 | 1(Win) |
| lemire_digit_count | 8002.46 | 0.885455 | 32.1522ms | 1499897 | 30 | 7.51502e+07 | 178747 | 0.291289 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 3257.94 | 0.899081 | 1182.57ms | 175 | 100000 | 21218.5 | 51.234 | 0.181557 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 3132.28 | 2.40376 | 3.0254ms | 175 | 1536 | 2517.08 | 53.2552 | 0.227616 | 1(Tie) |

----
### uint64_t-integer_count[100]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 11446 | 2.04911 | 1.4513ms | 1750 | 384 | 3429.07 | 145.833 | 0.151122 | 1(Win) |
| lemire_digit_count | 8406.49 | 1.59778 | 59.0234ms | 1750 | 12288 | 123638 | 198.527 | 0.221535 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 13725.9 | 0.531401 | 150.756ms | 17500 | 5862 | 244729 | 1215.9 | 0.16433 | 1(Win) |
| lemire_digit_count | 9462.5 | 0.507479 | 0.8007ms | 17496 | 30 | 2402.3 | 1763.33 | 0.24146 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 14439.8 | 0.759105 | 93.9011ms | 174992 | 384 | 2.95561e+06 | 11557.3 | 0.16096 | 1(Win) |
| lemire_digit_count | 9315.54 | 0.581278 | 275.697ms | 174980 | 438 | 4.74899e+06 | 17913.5 | 0.249706 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 14510.5 | 0.824244 | 20.667ms | 1750015 | 30 | 2.69621e+07 | 115017 | 0.160638 | 1(Win) |
| lemire_digit_count | 9354.82 | 0.738726 | 75.1276ms | 1750067 | 30 | 5.21106e+07 | 178410 | 0.249205 | 2(Loss) |
