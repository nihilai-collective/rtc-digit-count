# Digit Counting
Performance profiling of functions (Compiled and run on Linux 6.17.0-1022-azure using the GCC 16.0.1 compiler).  

Latest Results: (Oct 14, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor-AVX2): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a per-test-size maximum (scaled so every size gets the same iterations*count memory/verification budget - smaller integer counts get proportionally more iterations to average out timing noise). Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 10 seconds have elapsed or the iteration cap is reached. The first epoch is kept only as an initial fallback; every later epoch is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result, whether or not it met the convergence thresholds. A result counts as converged only if that retained epoch has RSE <= 10% AND mean shift <= 5%; non-converged results are still included in the rankings and in win/tie/loss tallying, so a result that did not meet these thresholds should be read with its reduced statistical confidence in mind. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
 This is the commit of BenchmarkSuite that was used to generate these results: [e7faa83](https://github.com/nihilai-collective/benchmarksuite/commit/e7faa83).
 
----
### uint64_t-integer_count[10]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 577.765 | 0.18796 | 1014.96ms | 30 | 3072 | 26.3882 | 49.3092 | 0.175295 | 1.13326 | 1(Win) | true |
| lemire_digit_count | 566.837 | 0.343828 | 1034.03ms | 30 | 768 | 23.1779 | 50.526 | 0.222119 | 1.25581 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2116.63 | 0.359442 | 207.091ms | 299 | 384 | 90.2441 | 134.87 | 0.220605 | 0.812093 | 1(Win) | true |
| lemire_digit_count | 1767.12 | 0.186742 | 238.93ms | 300 | 1536 | 140.294 | 161.839 | 0.0104581 | 1.03027 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2884.24 | 0.418875 | 126.12ms | 3000 | 192 | 3314.41 | 991.901 | 0.711642 | 0.778864 | 1(Win) | true |
| lemire_digit_count | 2261.08 | 0.462948 | 157.004ms | 3000 | 5862 | 201140 | 1265.3 | 0.0671177 | 1.00189 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2980.63 | 0.358858 | 117.311ms | 30011 | 30 | 35621 | 9602.17 | 0.191949 | 0.778819 | 1(Win) | true |
| lemire_digit_count | 2375.7 | 0.154434 | 147.766ms | 30011 | 30 | 10384.3 | 12047.2 | 0.645473 | 0.978016 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2937.92 | 1.00163 | 116.325ms | 299872 | 30 | 2.85189e+07 | 97341.1 | 0.0206876 | 0.793238 | 1(Win) | true |
| lemire_digit_count | 2335.8 | 0.808583 | 147.905ms | 300014 | 30 | 2.94296e+07 | 122492 | 0.634042 | 0.997903 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 1068.99 | 0.0923233 | 1012.89ms | 55 | 12288 | 25.2144 | 49.0651 | 0.0199074 | 0.617782 | 1(Win) | true |
| lemire_digit_count | 1030.3 | 0.267661 | 1031.23ms | 55 | 1536 | 28.2964 | 50.709 | 0.0192619 | 0.671028 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 3893.43 | 0.300456 | 206.368ms | 551 | 768 | 126.371 | 135.009 | 0.23491 | 0.441154 | 1(Win) | true |
| lemire_digit_count | 3256.15 | 0.227691 | 239.679ms | 551 | 768 | 103.761 | 161.432 | 0.181956 | 0.560044 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 5261.08 | 0.638861 | 126.296ms | 5488 | 96 | 3877.63 | 994.812 | 0.176223 | 0.427127 | 1(Win) | true |
| lemire_digit_count | 4220.93 | 0.208004 | 156.868ms | 5503 | 192 | 1284.3 | 1243.4 | 0.206916 | 0.536457 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 5410.87 | 0.751152 | 117.149ms | 54975 | 438 | 2.32019e+06 | 9689.4 | 0.22273 | 0.428998 | 1(Win) | true |
| lemire_digit_count | 4350.87 | 0.347377 | 147.932ms | 55024 | 30 | 52659 | 12060.8 | 0.198872 | 0.534047 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 5430.06 | 0.706704 | 116.452ms | 549686 | 30 | 1.39642e+07 | 96540.7 | 0.124541 | 0.429178 | 1(Win) | true |
| lemire_digit_count | 4307.85 | 0.499332 | 146.82ms | 550134 | 30 | 1.10947e+07 | 121789 | 0.336361 | 0.541074 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 1524.64 | 0.587681 | 1012.09ms | 80 | 98304 | 8495.32 | 50.0222 | 0.0732226 | 0.433491 | 1(Win) | true |
| lemire_digit_count | 1502.49 | 0.0894348 | 1030.86ms | 80 | 12288 | 25.4483 | 50.8841 | 0.320247 | 0.468304 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 5555.8 | 0.552819 | 224.007ms | 800 | 49152 | 28344.4 | 137.366 | 0.0670044 | 0.309594 | 1(Win) | true |
| lemire_digit_count | 4738.26 | 0.205223 | 240.485ms | 802 | 768 | 84.2517 | 161.392 | 0.134552 | 0.3843 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 7623.17 | 0.46947 | 126.325ms | 8001 | 192 | 4239.71 | 1000.94 | 0.00260165 | 0.294805 | 1(Win) | true |
| lemire_digit_count | 6109.67 | 0.353572 | 156.599ms | 7999 | 96 | 1871.14 | 1248.65 | 0.0433992 | 0.370941 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 7881.88 | 0.66284 | 117.18ms | 79942 | 384 | 1.5785e+06 | 9672.7 | 0.222797 | 0.29454 | 1(Win) | true |
| lemire_digit_count | 6360.29 | 0.144739 | 148.272ms | 80083 | 30 | 9061.91 | 12007.8 | 0.412193 | 0.365254 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 7929.22 | 0.827226 | 116.217ms | 800082 | 30 | 1.90098e+07 | 96228.6 | 1.0815 | 0.293908 | 1(Win) | true |
| lemire_digit_count | 6256.1 | 0.632175 | 147.242ms | 799683 | 30 | 1.78166e+07 | 121903 | 0.535551 | 0.372573 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2049.21 | 0.270787 | 1014.43ms | 106 | 1536 | 27.2075 | 49.1497 | 0.0397225 | 0.314595 | 1(Win) | true |
| lemire_digit_count | 1976.28 | 0.181579 | 1033.75ms | 105 | 3072 | 26.0142 | 50.679 | 0.350647 | 0.355472 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 7326.62 | 0.53269 | 206.357ms | 1050 | 24576 | 13032.9 | 136.707 | 0.0837467 | 0.232899 | 1(Win) | true |
| lemire_digit_count | 6077.61 | 0.733668 | 240.2ms | 1049 | 21702 | 31680.8 | 164.683 | 0.228192 | 0.298863 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 9842.76 | 0.582861 | 126.335ms | 10499 | 5862 | 206092 | 1017.29 | 0.607334 | 0.228312 | 1(Win) | true |
| lemire_digit_count | 8012.72 | 0.235963 | 157.673ms | 10506 | 192 | 1671.34 | 1250.37 | 0.174001 | 0.282521 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 10464.1 | 0.227575 | 117.018ms | 105061 | 48 | 22791.5 | 9575.04 | 0.0220239 | 0.2218 | 1(Win) | true |
| lemire_digit_count | 8304.43 | 0.179387 | 147.673ms | 104930 | 30 | 14017.8 | 12050 | 0.124602 | 0.279775 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 10321.1 | 1.06245 | 116.085ms | 1050692 | 30 | 3.19185e+07 | 97084.6 | 0.107043 | 0.225796 | 1(Win) | true |
| lemire_digit_count | 8182.07 | 0.642277 | 147.097ms | 1050153 | 48 | 2.96664e+07 | 122402 | 0.267447 | 0.284874 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 1460.27 | 0.0919851 | 1012.55ms | 75 | 12288 | 24.9401 | 48.9769 | 0.306785 | 0.444158 | 1(Win) | true |
| lemire_digit_count | 1413.31 | 0.171781 | 1031.02ms | 75 | 3072 | 23.2146 | 50.6051 | 0.227836 | 0.497333 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 5311.67 | 0.288436 | 206.456ms | 752 | 768 | 116.431 | 134.991 | 0.00482262 | 0.32311 | 1(Win) | true |
| lemire_digit_count | 4405.4 | 0.142662 | 239.666ms | 750 | 3072 | 164.796 | 162.351 | 0.0844839 | 0.413432 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 7181.76 | 0.421916 | 126.301ms | 7499 | 192 | 3389.4 | 995.828 | 0.0757797 | 0.312834 | 1(Win) | true |
| lemire_digit_count | 5747.16 | 0.394118 | 156.965ms | 7500 | 96 | 2309.82 | 1244.59 | 0.0844609 | 0.394126 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 7356.47 | 0.772327 | 117.14ms | 75009 | 384 | 2.16582e+06 | 9723.98 | 0.0506683 | 0.315585 | 1(Win) | true |
| lemire_digit_count | 5918.03 | 0.309226 | 147.641ms | 74974 | 30 | 41873.7 | 12081.9 | 0.0242729 | 0.39256 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 7428.87 | 0.639327 | 116.11ms | 750088 | 30 | 1.13697e+07 | 96291.9 | 0.4315 | 0.31371 | 1(Win) | true |
| lemire_digit_count | 5842.92 | 0.536078 | 146.892ms | 749931 | 48 | 2.06671e+07 | 122403 | 0.125873 | 0.398915 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 1920.43 | 0.450664 | 1012.21ms | 100 | 98304 | 4922.23 | 49.6526 | 0.0688107 | 0.340724 | 1(Win) | true |
| lemire_digit_count | 1874.71 | 0.238485 | 1031.27ms | 100 | 1536 | 22.3986 | 50.6354 | 0.320406 | 0.372569 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 7099.42 | 0.31551 | 206.657ms | 1001 | 384 | 69.1328 | 134.482 | 0.160467 | 0.241469 | 1(Win) | true |
| lemire_digit_count | 5911.24 | 0.264357 | 239.911ms | 1001 | 384 | 70.0051 | 161.513 | 0.284575 | 0.308017 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 9413.44 | 0.486604 | 125.88ms | 10001 | 5862 | 142492 | 1013.2 | 0.389219 | 0.238701 | 1(Win) | true |
| lemire_digit_count | 7509.05 | 0.506624 | 156.935ms | 10001 | 5862 | 242737 | 1270.16 | 0.0052845 | 0.301712 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 10014.6 | 0.257545 | 117.355ms | 100048 | 30 | 18062.7 | 9527.47 | 0.173581 | 0.23187 | 1(Win) | true |
| lemire_digit_count | 7912.26 | 0.160239 | 147.735ms | 99947 | 48 | 17886 | 12046.7 | 0.0368222 | 0.293702 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 9898.01 | 0.63846 | 116.178ms | 999903 | 48 | 1.81605e+07 | 96340.8 | 1.08489 | 0.235451 | 1(Win) | true |
| lemire_digit_count | 7778.7 | 0.680323 | 146.853ms | 1000009 | 30 | 2.08711e+07 | 122602 | 0.0746475 | 0.299615 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2417.95 | 0.0666323 | 1012.04ms | 125 | 24576 | 26.4808 | 49.2635 | 0.00999523 | 0.273387 | 1(Win) | true |
| lemire_digit_count | 2348.49 | 0.171693 | 1030.61ms | 125 | 6144 | 46.8091 | 50.8379 | 0.000640316 | 0.300403 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 8686.4 | 0.544864 | 206.767ms | 1250 | 49152 | 27493.5 | 137.264 | 0.263739 | 0.197977 | 1(Win) | true |
| lemire_digit_count | 7373.7 | 0.269946 | 239.356ms | 1248 | 384 | 72.8998 | 161.406 | 0.167515 | 0.246875 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 11954.5 | 0.312807 | 126.173ms | 12486 | 384 | 3727.75 | 996.049 | 0.0337384 | 0.187971 | 1(Win) | true |
| lemire_digit_count | 9568.16 | 0.387313 | 156.76ms | 12532 | 48 | 1123.36 | 1249.04 | 0.0233458 | 0.236889 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 12524.9 | 0.296101 | 117.041ms | 124924 | 30 | 23798.3 | 9512 | 0.121803 | 0.185358 | 1(Win) | true |
| lemire_digit_count | 9811.21 | 0.617507 | 147.885ms | 125026 | 192 | 1.08129e+06 | 12152.8 | 0.292796 | 0.236852 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 12331.2 | 0.745889 | 116.431ms | 1249689 | 48 | 2.4945e+07 | 96648.8 | 0.0150695 | 0.188992 | 1(Win) | true |
| lemire_digit_count | 9749.02 | 0.65866 | 147.616ms | 1249689 | 48 | 3.11204e+07 | 122248 | 0.18965 | 0.239082 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2422.1 | 0.160457 | 1012.89ms | 125 | 3072 | 19.2062 | 49.2777 | 0.0257694 | 0.273179 | 1(Win) | true |
| lemire_digit_count | 2346.14 | 0.180612 | 1031.14ms | 125 | 6144 | 51.7552 | 50.8166 | 0.267515 | 0.297899 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 8844.82 | 0.521353 | 206.496ms | 1249 | 192 | 94.7081 | 134.714 | 0.19679 | 0.194769 | 1(Win) | true |
| lemire_digit_count | 7358.72 | 0.276706 | 239.507ms | 1251 | 384 | 77.3177 | 162.164 | 0.123806 | 0.247643 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 12040.8 | 0.447173 | 126.268ms | 12499 | 96 | 1881.45 | 990 | 0.14709 | 0.186797 | 1(Win) | true |
| lemire_digit_count | 9536.56 | 0.163577 | 157.192ms | 12501 | 384 | 1605.79 | 1250.14 | 0.0742137 | 0.23736 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 12338 | 0.627014 | 117.04ms | 125001 | 384 | 1.40935e+06 | 9661.99 | 0.771294 | 0.188169 | 1(Win) | true |
| lemire_digit_count | 9884.19 | 0.177333 | 147.557ms | 125004 | 48 | 21957.5 | 12061 | 0.125562 | 0.235095 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 12284.7 | 0.803308 | 116.341ms | 1249991 | 48 | 2.9167e+07 | 97038.3 | 0.473708 | 0.189705 | 1(Win) | true |
| lemire_digit_count | 9774.37 | 0.552234 | 146.88ms | 1249991 | 48 | 2.17733e+07 | 121960 | 0.433375 | 0.238466 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2908.58 | 0.313701 | 1013.25ms | 150 | 3072 | 72.9779 | 49.1325 | 0.118735 | 0.22388 | 1(Win) | true |
| lemire_digit_count | 2819.7 | 0.0884987 | 1030.92ms | 150 | 12288 | 24.7427 | 50.7045 | 0.199423 | 0.249363 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 10618.6 | 0.227873 | 206.882ms | 1500 | 1536 | 144.726 | 134.706 | 0.207391 | 0.161823 | 1(Win) | true |
| lemire_digit_count | 8809.35 | 0.146258 | 239.405ms | 1499 | 3072 | 173.14 | 162.319 | 0.0469493 | 0.206357 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 14330.6 | 0.464562 | 126.542ms | 15005 | 192 | 4131.59 | 998.536 | 0.0995258 | 0.156831 | 1(Win) | true |
| lemire_digit_count | 11486.5 | 0.336982 | 156.897ms | 15002 | 96 | 1691.22 | 1245.54 | 0.021749 | 0.197167 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 14812.8 | 0.519152 | 117.035ms | 149993 | 438 | 1.10085e+06 | 9656.78 | 0.426448 | 0.156732 | 1(Win) | true |
| lemire_digit_count | 11675.6 | 0.583412 | 147.404ms | 149993 | 438 | 2.23774e+06 | 12251.6 | 0.162344 | 0.199037 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 14710.1 | 0.900386 | 116.381ms | 1500274 | 48 | 3.68138e+07 | 97264.9 | 0.0895137 | 0.158425 | 1(Win) | true |
| lemire_digit_count | 11727.2 | 0.59878 | 147.232ms | 1500274 | 48 | 2.56169e+07 | 122005 | 0.104044 | 0.198756 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 3387.66 | 0.198585 | 1013.34ms | 175 | 3072 | 29.3527 | 49.223 | 0.348402 | 0.193316 | 1(Win) | true |
| lemire_digit_count | 3276.73 | 0.20258 | 1032.85ms | 175 | 3072 | 32.6488 | 50.8893 | 0.110143 | 0.212599 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 12368.3 | 0.239879 | 206.164ms | 1751 | 1536 | 161.06 | 134.992 | 0.234322 | 0.138425 | 1(Win) | true |
| lemire_digit_count | 10313.2 | 0.212307 | 239.6ms | 1751 | 1536 | 181.453 | 161.891 | 0.115283 | 0.176999 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 16524.5 | 0.425396 | 126.234ms | 17500 | 5862 | 108205 | 1009.97 | 0.0152259 | 0.135976 | 1(Win) | true |
| lemire_digit_count | 13384 | 0.165239 | 162.078ms | 17504 | 384 | 1630.99 | 1247.23 | 0.354114 | 0.169172 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 17522.9 | 0.3661 | 117.123ms | 174973 | 30 | 36463.1 | 9522.83 | 0.163032 | 0.132521 | 1(Win) | true |
| lemire_digit_count | 13575.4 | 0.772129 | 149.05ms | 175003 | 438 | 3.94679e+06 | 12294 | 0.451763 | 0.171188 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 17318.9 | 0.9779 | 116.925ms | 1750124 | 30 | 2.66444e+07 | 96371.3 | 0.381142 | 0.134557 | 1(Win) | true |
| lemire_digit_count | 13646.1 | 0.672233 | 146.973ms | 1750004 | 48 | 3.24445e+07 | 122301 | 0.20111 | 0.170802 | 2(Loss) | true |
