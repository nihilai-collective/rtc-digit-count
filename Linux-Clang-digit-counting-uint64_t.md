# Digit Counting
Performance profiling of functions (Compiled and run on Linux 6.17.0-1022-azure using the Clang 24.0.0 compiler).  

Latest Results: (Oct 14, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor-AVX2): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a per-test-size maximum (scaled so every size gets the same iterations*count memory/verification budget - smaller integer counts get proportionally more iterations to average out timing noise). Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 10 seconds have elapsed or the iteration cap is reached. The first epoch is kept only as an initial fallback; every later epoch is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result, whether or not it met the convergence thresholds. A result counts as converged only if that retained epoch has RSE <= 10% AND mean shift <= 5%; non-converged results are still included in the rankings and in win/tie/loss tallying, so a result that did not meet these thresholds should be read with its reduced statistical confidence in mind. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
 This is the commit of BenchmarkSuite that was used to generate these results: [e7faa83](https://github.com/nihilai-collective/benchmarksuite/commit/e7faa83).
 
----
### uint64_t-integer_count[10]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 595.313 | 0.158794 | 999.11ms | 30 | 6144 | 36.1166 | 48.2829 | 0.0613141 | 1.02502 | 1(Win) | true |
| lemire_digit_count | 560.73 | 0.0777981 | 1030.43ms | 30 | 12288 | 19.3459 | 51.0017 | 0.123815 | 1.2702 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2234.68 | 0.170392 | 197.421ms | 300 | 3072 | 146.284 | 128.067 | 0.238224 | 0.754903 | 1(Win) | true |
| lemire_digit_count | 1465.74 | 0.333499 | 281.106ms | 302 | 192 | 82.3017 | 196.318 | 0.135487 | 1.28157 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 3006.11 | 0.564938 | 121.217ms | 3000 | 5862 | 169479 | 951.776 | 0.647024 | 0.744624 | 1(Win) | true |
| lemire_digit_count | 1787.47 | 0.318975 | 200.462ms | 2998 | 48 | 1249.75 | 1599.69 | 0.43872 | 1.27372 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 3255.61 | 0.229247 | 109.753ms | 29998 | 30 | 12174.7 | 8787.5 | 0.244446 | 0.713181 | 1(Win) | true |
| lemire_digit_count | 1846.35 | 0.101661 | 190.149ms | 29998 | 30 | 7443.8 | 15494.7 | 0.0844011 | 1.26002 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 3228.22 | 0.652485 | 106.383ms | 299930 | 30 | 1.00271e+07 | 88604.8 | 0.0322677 | 0.72208 | 1(Win) | true |
| lemire_digit_count | 1827.57 | 0.545835 | 188.128ms | 299930 | 30 | 2.18946e+07 | 156512 | 0.145252 | 1.27573 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 1088.15 | 0.277521 | 999.891ms | 55 | 1536 | 27.6056 | 48.3066 | 0.0148228 | 0.577555 | 1(Win) | true |
| lemire_digit_count | 965.365 | 0.190369 | 1031.16ms | 55 | 3072 | 32.6402 | 54.1465 | 0.179475 | 0.832501 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 4098.07 | 0.225371 | 197.557ms | 551 | 1536 | 128.29 | 128.234 | 0.28502 | 0.411024 | 1(Win) | true |
| lemire_digit_count | 2664.12 | 0.15541 | 281.639ms | 551 | 1536 | 144.347 | 197.255 | 0.175896 | 0.705242 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 5629.24 | 0.340888 | 117.294ms | 5497 | 768 | 7739.5 | 931.245 | 0.041929 | 0.398183 | 1(Win) | true |
| lemire_digit_count | 3252.28 | 0.341831 | 198.171ms | 5500 | 5862 | 178132 | 1612.64 | 0.0130602 | 0.700277 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 5842.55 | 0.597325 | 107.872ms | 54995 | 384 | 1.10405e+06 | 8976.74 | 0.0865541 | 0.397236 | 1(Win) | true |
| lemire_digit_count | 3387.36 | 0.123827 | 188.911ms | 55016 | 30 | 11036 | 15489.2 | 0.291804 | 0.686866 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 5723.21 | 0.756451 | 108.505ms | 550141 | 30 | 1.44262e+07 | 91671.4 | 0.448965 | 0.407311 | 1(Win) | true |
| lemire_digit_count | 3362.96 | 0.582444 | 188.209ms | 549895 | 30 | 2.47483e+07 | 155940 | 0.115712 | 0.693282 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 1545.09 | 0.139553 | 1007.87ms | 80 | 6144 | 29.2061 | 49.4053 | 0.0679106 | 0.420196 | 1(Win) | true |
| lemire_digit_count | 1492.5 | 0.188427 | 1030.78ms | 80 | 3072 | 28.5485 | 51.1608 | 0.0751363 | 0.4825 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 5924.19 | 0.19178 | 197.609ms | 800 | 6144 | 374.965 | 128.815 | 0.0460973 | 0.284514 | 1(Win) | true |
| lemire_digit_count | 3860.61 | 0.201878 | 280.713ms | 797 | 768 | 121.264 | 196.832 | 0.273956 | 0.487595 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 8313.57 | 0.450329 | 116.97ms | 8005 | 96 | 1641.51 | 918.24 | 0.0102108 | 0.269375 | 1(Win) | true |
| lemire_digit_count | 4736.97 | 0.349414 | 198.024ms | 8002 | 5862 | 185734 | 1610.95 | 0.0780382 | 0.481288 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 8549.96 | 0.321566 | 108.194ms | 79935 | 30 | 24660.7 | 8916.03 | 0.226321 | 0.271641 | 1(Win) | true |
| lemire_digit_count | 4848.65 | 0.468236 | 188.782ms | 79981 | 384 | 2.08351e+06 | 15731.4 | 0.279631 | 0.479833 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 8484.9 | 0.708431 | 108.883ms | 800050 | 30 | 1.21747e+07 | 89923 | 0.584036 | 0.274725 | 1(Win) | true |
| lemire_digit_count | 4870.76 | 0.452276 | 188.179ms | 800023 | 48 | 2.40912e+07 | 156641 | 0.0353523 | 0.478679 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2055.74 | 0.145144 | 1001.77ms | 105 | 6144 | 30.9625 | 48.9093 | 0.096081 | 0.309743 | 1(Win) | true |
| lemire_digit_count | 1951.65 | 0.442369 | 1029.92ms | 105 | 100000 | 5151.04 | 51.3054 | 0.0153761 | 0.362375 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 7711.07 | 0.427341 | 198.124ms | 1051 | 3072 | 947.436 | 129.954 | 0.277055 | 0.219031 | 1(Win) | true |
| lemire_digit_count | 5068.93 | 0.0965705 | 281.118ms | 1050 | 6144 | 223.716 | 197.596 | 0.023481 | 0.370883 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 10690.6 | 0.418673 | 117.204ms | 10498 | 5862 | 90112.2 | 936.47 | 0.343301 | 0.209351 | 1(Win) | true |
| lemire_digit_count | 6295.16 | 0.170652 | 198.214ms | 10512 | 192 | 1418.01 | 1592.49 | 0.300639 | 0.362241 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 11359.3 | 0.303582 | 108.463ms | 104961 | 30 | 21469.6 | 8812.03 | 0.0536856 | 0.204447 | 1(Win) | true |
| lemire_digit_count | 6470.2 | 0.105043 | 188.868ms | 105159 | 30 | 7952.67 | 15499.9 | 0.0462583 | 0.359568 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 11287.8 | 0.506818 | 106.872ms | 1050065 | 48 | 9.70426e+06 | 88717.4 | 0.482808 | 0.206517 | 1(Win) | true |
| lemire_digit_count | 6389.35 | 0.42545 | 188.347ms | 1050065 | 48 | 2.13431e+07 | 156733 | 0.0692102 | 0.364902 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 1445.02 | 0.0974435 | 1007.65ms | 75 | 12288 | 28.6287 | 49.5345 | 0.0910995 | 0.448715 | 1(Win) | true |
| lemire_digit_count | 1404.46 | 0.0802822 | 1030.9ms | 75 | 12288 | 20.5714 | 50.965 | 0.0494759 | 0.504228 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 5574.91 | 0.16259 | 197.26ms | 750 | 3072 | 133.571 | 128.249 | 0.139287 | 0.302891 | 1(Win) | true |
| lemire_digit_count | 3637.93 | 0.179624 | 281.352ms | 750 | 768 | 95.8396 | 196.665 | 0.285861 | 0.517166 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 7744.88 | 0.273293 | 117.021ms | 7503 | 384 | 2447.87 | 923.846 | 0.0267717 | 0.289573 | 1(Win) | true |
| lemire_digit_count | 4489.88 | 0.234857 | 198.215ms | 7503 | 96 | 1345.04 | 1593.78 | 0.201053 | 0.508036 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 8079.97 | 0.228123 | 108.142ms | 74962 | 48 | 19554.4 | 8847.75 | 0.0676712 | 0.287394 | 1(Win) | true |
| lemire_digit_count | 4565.52 | 0.423094 | 188.798ms | 75007 | 438 | 1.92472e+06 | 15667.8 | 0.175285 | 0.509632 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 7723.55 | 0.791183 | 110.755ms | 750131 | 30 | 1.61108e+07 | 92623.3 | 0.570316 | 0.301814 | 1(Win) | true |
| lemire_digit_count | 4567.18 | 0.43919 | 188.536ms | 750020 | 48 | 2.27088e+07 | 156612 | 0.150393 | 0.510489 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 1972.68 | 0.389859 | 1001.65ms | 100 | 768 | 27.1209 | 48.2018 | 0.20301 | 0.315264 | 1(Win) | true |
| lemire_digit_count | 1852.83 | 0.404069 | 1028.97ms | 100 | 384 | 16.4943 | 51.2917 | 0.183113 | 0.392594 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 7432.51 | 0.297416 | 198.2ms | 1000 | 768 | 111.814 | 128.293 | 0.0192874 | 0.226148 | 1(Win) | true |
| lemire_digit_count | 4763.88 | 0.366613 | 281.33ms | 1000 | 49152 | 26460.9 | 200.136 | 0.226484 | 0.39591 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 10359.7 | 0.577372 | 117.081ms | 10004 | 96 | 2714.02 | 920.906 | 0.184035 | 0.216202 | 1(Win) | true |
| lemire_digit_count | 5919.64 | 0.366393 | 198.024ms | 10003 | 5862 | 204359 | 1611.48 | 0.109977 | 0.385213 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 10810.2 | 0.229573 | 108.268ms | 99983 | 48 | 19681.7 | 8820.44 | 0.102262 | 0.214795 | 1(Win) | true |
| lemire_digit_count | 6096.86 | 0.429752 | 188.524ms | 99991 | 438 | 1.97889e+06 | 15640.7 | 0.0454107 | 0.381613 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 10756 | 0.566954 | 107.722ms | 999957 | 30 | 7.5801e+06 | 88660.3 | 0.296956 | 0.216709 | 1(Win) | true |
| lemire_digit_count | 6086.3 | 0.543804 | 187.736ms | 999957 | 30 | 2.17802e+07 | 156685 | 0.0581972 | 0.383071 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2411.61 | 0.176949 | 1006.83ms | 125 | 3072 | 23.4182 | 49.3421 | 0.221833 | 0.270509 | 1(Win) | true |
| lemire_digit_count | 2342.74 | 0.222383 | 1030.07ms | 125 | 1536 | 19.7304 | 50.9648 | 0.0613544 | 0.304483 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 9276.16 | 0.158348 | 197.652ms | 1249 | 3072 | 126.985 | 128.396 | 0.149611 | 0.182173 | 1(Win) | true |
| lemire_digit_count | 6101.13 | 0.298366 | 280.742ms | 1256 | 384 | 131.795 | 196.352 | 0.269961 | 0.3082 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 12931.6 | 0.550692 | 117.153ms | 12461 | 96 | 2458.78 | 919 | 0.153916 | 0.173236 | 1(Win) | true |
| lemire_digit_count | 7463.72 | 0.344698 | 198.089ms | 12506 | 48 | 1456.18 | 1597.9 | 0.0753028 | 0.305305 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 13462.5 | 0.264483 | 108.036ms | 125052 | 30 | 16468.2 | 8858.6 | 0.197939 | 0.172481 | 1(Win) | true |
| lemire_digit_count | 7577.01 | 0.485037 | 189.043ms | 125012 | 384 | 2.23659e+06 | 15734.5 | 0.220477 | 0.307066 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 13326.2 | 0.705241 | 107.121ms | 1249674 | 30 | 1.19337e+07 | 89431.3 | 0.0316917 | 0.174926 | 1(Win) | true |
| lemire_digit_count | 7618.64 | 0.509736 | 188.291ms | 1250565 | 30 | 1.91016e+07 | 156541 | 0.120645 | 0.306024 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2461.04 | 0.100854 | 998.136ms | 125 | 12288 | 29.3168 | 48.4313 | 0.251672 | 0.251464 | 1(Win) | true |
| lemire_digit_count | 2343.02 | 0.111925 | 1029.72ms | 125 | 6144 | 19.9417 | 50.901 | 0.261516 | 0.305053 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 9299.48 | 0.150751 | 197.627ms | 1250 | 3072 | 114.639 | 128.143 | 0.0670187 | 0.181078 | 1(Win) | true |
| lemire_digit_count | 6049.04 | 0.21281 | 281.155ms | 1250 | 768 | 135.174 | 197.139 | 0.112816 | 0.311152 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 12694.7 | 0.501946 | 117.402ms | 12501 | 5862 | 130249 | 939.09 | 0.46892 | 0.176581 | 1(Win) | true |
| lemire_digit_count | 7480.97 | 0.134874 | 197.639ms | 12501 | 384 | 1774.04 | 1593.63 | 0.045571 | 0.30468 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 13312.8 | 0.672485 | 108.24ms | 125003 | 384 | 1.39253e+06 | 8954.75 | 0.16035 | 0.174392 | 1(Win) | true |
| lemire_digit_count | 7705.52 | 0.183414 | 188.839ms | 124975 | 30 | 24145.2 | 15467.6 | 0.0215458 | 0.301913 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 13413.3 | 0.508392 | 107.133ms | 1249986 | 48 | 9.79885e+06 | 88872.6 | 0.0731317 | 0.173786 | 1(Win) | true |
| lemire_digit_count | 7597.03 | 0.589195 | 188.651ms | 1249974 | 30 | 2.56422e+07 | 156912 | 0.0908598 | 0.306897 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 2886.36 | 0.318753 | 1010.14ms | 150 | 768 | 19.1579 | 49.5495 | 0.00525597 | 0.227171 | 1(Win) | true |
| lemire_digit_count | 2805.38 | 0.0794387 | 1029.74ms | 150 | 12288 | 20.1617 | 50.9907 | 0.0159624 | 0.253681 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 11181.3 | 0.147951 | 197.678ms | 1500 | 3072 | 110.006 | 127.902 | 0.0178123 | 0.15081 | 1(Win) | true |
| lemire_digit_count | 7206.69 | 0.329432 | 280.328ms | 1500 | 49152 | 21021 | 198.513 | 0.0308186 | 0.261233 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 15216.6 | 0.421842 | 116.945ms | 15002 | 5862 | 92216.3 | 940.223 | 0.211968 | 0.147384 | 1(Win) | true |
| lemire_digit_count | 8970.24 | 0.20319 | 198.456ms | 14992 | 192 | 2013.9 | 1593.92 | 0.153995 | 0.253926 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 15790.1 | 0.703202 | 110.005ms | 149982 | 192 | 779057 | 9058.45 | 0.269234 | 0.147058 | 1(Win) | true |
| lemire_digit_count | 9106.28 | 0.423374 | 189.332ms | 150011 | 438 | 1.93769e+06 | 15710.2 | 0.0398282 | 0.255496 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 15948.7 | 0.940522 | 107.657ms | 1500178 | 30 | 2.13546e+07 | 89704.9 | 0.206136 | 0.14616 | 1(Win) | true |
| lemire_digit_count | 9179.03 | 0.515883 | 187.815ms | 1499920 | 30 | 1.93895e+07 | 155837 | 0.0618013 | 0.254003 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 3400.29 | 0.534959 | 997.308ms | 175 | 100000 | 6893.53 | 49.0795 | 0.111842 | 0.180166 | 1(Win) | true |
| lemire_digit_count | 3331.52 | 0.158116 | 1029.26ms | 175 | 30 | 0.188506 | 50.1333 | 0.0665336 | 0.219262 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 12962.2 | 0.112317 | 198.7ms | 1750 | 6144 | 128.503 | 128.762 | 0.234523 | 0.12963 | 1(Win) | true |
| lemire_digit_count | 8455.66 | 0.167154 | 281.006ms | 1750 | 1536 | 167.199 | 197.381 | 0.212295 | 0.22245 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 17900.9 | 0.508393 | 117.003ms | 17500 | 3072 | 69019.2 | 932.341 | 0.0339832 | 0.125248 | 1(Win) | true |
| lemire_digit_count | 10438.6 | 0.19933 | 198.118ms | 17502 | 384 | 3901.16 | 1599.03 | 0.0314219 | 0.218368 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 18869.3 | 0.315217 | 108.053ms | 175057 | 30 | 23333.9 | 8847.57 | 0.390325 | 0.123085 | 1(Win) | true |
| lemire_digit_count | 10620.2 | 0.421493 | 189.052ms | 175009 | 438 | 1.92179e+06 | 15715.4 | 0.116065 | 0.219071 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Cycles/Byte | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | ----------- | -------- | --------- |
| rtc_digit_count | 18865.6 | 0.520007 | 106.735ms | 1750035 | 48 | 1.01581e+07 | 88466.2 | 0.166152 | 0.123564 | 1(Win) | true |
| lemire_digit_count | 10652.1 | 0.515073 | 188.027ms | 1750060 | 30 | 1.95385e+07 | 156681 | 0.112565 | 0.218875 | 2(Loss) | true |
