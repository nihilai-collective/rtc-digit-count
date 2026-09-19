# Digit Counting
Performance profiling of functions (Compiled and run on Linux 6.17.0-1022-azure using the Clang 24.0.0 compiler).  

Latest Results: (Sep 19, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 -> 120 -> 240 -> ...) up to a per-test-size maximum (scaled so every size gets the same iterations*count memory/verification budget - smaller integer counts get proportionally more iterations to average out timing noise). Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.500000% AND mean shift < 1.000000% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
 This is the commit of BenchmarkSuite that was used to generate these results: [32913c9](https://github.com/realtimechris/benchmarksuite/commit/32913c9).
 
----
### uint32_t-integer_count[10]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1031.32 | 0.421312 | 547.605ms | 55 | 3072 | 140.409 | 50.7438 | 0.69749 | 1(Win) |
| lemire_digit_count | 994.902 | 1.20282 | 134.548ms | 55 | 768 | 312.944 | 53.0703 | 0.722342 | 2(Loss) |

----
### uint32_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5381.74 | 0.443863 | 135.508ms | 549 | 768 | 143.138 | 97.263 | 0.276339 | 1(Win) |
| lemire_digit_count | 4713.78 | 0.78457 | 30.0192ms | 549 | 192 | 145.644 | 111.01 | 0.334903 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8586.19 | 2.1089 | 1.53537ms | 5508 | 30 | 4994.03 | 611.8 | 0.255764 | 1(Win) |
| lemire_digit_count | 7873.93 | 0.22861 | 15.9092ms | 5501 | 96 | 222.735 | 666.292 | 0.278817 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 9923.12 | 1.22332 | 26.1471ms | 550099 | 30 | 1.25483e+07 | 52868 | 0.234806 | 1(Win) |
| lemire_digit_count | 8200.13 | 2.34641 | 30.5501ms | 550099 | 30 | 6.76037e+07 | 63976.5 | 0.284158 | 2(Loss) |

----
### uint32_t-integer_count[10]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 574.503 | 1.34744 | 7.09575ms | 30 | 48 | 21.9145 | 50.1458 | 1.2331 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 567.532 | 0.213577 | 538.226ms | 30 | 3072 | 35.5282 | 50.3525 | 1.24419 | 1(Tie) |

----
### uint32_t-integer_count[100]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2964.05 | 0.883182 | 30.0154ms | 301 | 192 | 140.911 | 97 | 0.494454 | 1(Win) |
| lemire_digit_count | 2521.58 | 1.18977 | 31.7163ms | 301 | 192 | 353.34 | 114.021 | 0.623074 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5005.15 | 0.258929 | 144.293ms | 3001 | 768 | 1683.63 | 571.824 | 0.436629 | 1(Win) |
| lemire_digit_count | 4293.13 | 0.450758 | 15.9497ms | 3004 | 96 | 868.81 | 667.396 | 0.511951 | 2(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5578.75 | 0.460836 | 5.62123ms | 30006 | 30 | 16763.7 | 5129.53 | 0.414881 | 1(Win) |
| lemire_digit_count | 4606.06 | 0.248327 | 6.14342ms | 30006 | 30 | 7140.67 | 6212.77 | 0.503394 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5440.6 | 1.11981 | 11.0957ms | 300043 | 30 | 1.0406e+07 | 52594.1 | 0.428302 | 1(Win) |
| lemire_digit_count | 4509.04 | 1.69646 | 65.5164ms | 300001 | 48 | 5.56168e+07 | 63451 | 0.516818 | 2(Loss) |

----
### uint32_t-integer_count[10]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1036.46 | 0.230265 | 1088.78ms | 55 | 6144 | 84.0113 | 50.7826 | 0.697986 | 1(Win) |
| lemire_digit_count | 1028.64 | 0.226556 | 1099.44ms | 55 | 6144 | 82.5677 | 51.1686 | 0.707481 | 2(Loss) |

----
### uint32_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5465.25 | 0.421794 | 134.19ms | 552 | 768 | 126.614 | 96.263 | 0.270414 | 1(Win) |
| lemire_digit_count | 4690.57 | 0.333806 | 133.364ms | 552 | 768 | 107.656 | 112.161 | 0.337914 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 9004.41 | 1.13627 | 15.6359ms | 5499 | 96 | 4204.95 | 582.458 | 0.242514 | 1(Win) |
| lemire_digit_count | 7755.65 | 0.526521 | 35.2544ms | 5500 | 192 | 2434.56 | 676.307 | 0.283746 | 2(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10325.3 | 1.54953 | 11.8972ms | 55028 | 48 | 297714 | 5082.52 | 0.224127 | 1(Win) |
| lemire_digit_count | 8462.43 | 0.189168 | 12.9882ms | 55028 | 48 | 6605.55 | 6201.35 | 0.273983 | 2(Loss) |

----
### uint32_t-integer_count[10]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1411.09 | 1.75649 | 14.568ms | 75 | 96 | 76.692 | 50.8854 | 0.491422 | 1(Win) |
| lemire_digit_count | 1265.23 | 0.95325 | 533.507ms | 75 | 3072 | 890.115 | 56.4684 | 0.65972 | 2(Loss) |

----
### uint32_t-integer_count[100]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7282.2 | 2.11475 | 29.9211ms | 751 | 192 | 829.655 | 98.2969 | 0.20588 | 1(Win) |
| lemire_digit_count | 6402.17 | 0.342845 | 134.08ms | 750 | 768 | 112.678 | 111.723 | 0.248237 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 12565.5 | 0.578654 | 70.5259ms | 7496 | 384 | 4161.55 | 568.909 | 0.173911 | 1(Win) |
| lemire_digit_count | 10688.7 | 0.302175 | 36.3764ms | 7498 | 192 | 784.543 | 668.958 | 0.205693 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 13746.5 | 0.789255 | 11.0919ms | 750103 | 30 | 5.06075e+06 | 52039.1 | 0.169509 | 1(Win) |
| lemire_digit_count | 11178.8 | 2.241 | 30.4285ms | 750192 | 30 | 6.17108e+07 | 63999.8 | 0.208471 | 2(Loss) |

----
### uint32_t-integer_count[10]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1920.15 | 1.20097 | 7.04013ms | 100 | 48 | 17.078 | 49.6667 | 0.372917 | 1(Win) |
| lemire_digit_count | 1687.45 | 2.28403 | 65.9995ms | 100 | 384 | 639.843 | 56.5156 | 0.445807 | 2(Loss) |

----
### uint32_t-integer_count[100]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 9745.87 | 0.831768 | 29.9769ms | 1000 | 192 | 127.193 | 97.8542 | 0.151214 | 1(Win) |
| lemire_digit_count | 8550.54 | 0.400353 | 135.965ms | 1000 | 768 | 153.131 | 111.534 | 0.186448 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 15036.6 | 2.43215 | 1.53273ms | 10000 | 30 | 7138.39 | 634.233 | 0.146583 | 1(Win) |
| lemire_digit_count | 13386.8 | 2.13665 | 3.5677ms | 10000 | 30 | 6950.8 | 712.4 | 0.16447 | 2(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 18388.2 | 0.439154 | 2.40705ms | 100000 | 30 | 15562.4 | 5186.33 | 0.125939 | 1(Win) |
| lemire_digit_count | 15329.1 | 0.25675 | 6.09032ms | 100000 | 30 | 7654.37 | 6221.33 | 0.151295 | 2(Loss) |
