# Instrumentation Lab Metrics

## Measurement Strategy
- Each phase (BUILD_DATA, PROCESS, REDUCE) was timed individually by placing `clock()` calls immediately before and after the respective function.
- The TOTAL time was measured from the start of `main()` (before `build_dataset()`) to after `reduce_checksum()`, and it includes the checksum verification and printing overhead.

## Justification
- Measuring each function independently gives insight into which phase dominates execution time.
- The TOTAL is expected to be slightly larger than the sum of the three phases due to the overhead of the `if (checksum == 0)` check and the `printf` calls.

## Observations
- BUILD_DATA is fast (simple arithmetic loop).
- PROCESS is the slowest phase due to division and modulo operations.
- REDUCE is the fastest (simple multiplication and addition).

## Raw Measurements

### Run 1
TOTAL seconds: 0.000738
BUILD_DATA seconds: 0.000300
PROCESS seconds: 0.000299
REDUCE seconds: 0.000134

### Run 2
TOTAL seconds: 0.000849
BUILD_DATA seconds: 0.000331
PROCESS seconds: 0.000368
REDUCE seconds: 0.000144

### Run 3
TOTAL seconds: 0.000746
BUILD_DATA seconds: 0.000287
PROCESS seconds: 0.000319
REDUCE seconds: 0.000135

## Average Execution Times
- **TOTAL Average:** (0.000738 + 0.000849 + 0.000746) / 3 = **0.000778 seconds**
- **BUILD_DATA Average:** (0.000300 + 0.000331 + 0.000287) / 3 = **0.000306 seconds**
- **PROCESS Average:** (0.000299 + 0.000368 + 0.000319) / 3 = **0.000329 seconds**
- **REDUCE Average:** (0.000134 + 0.000144 + 0.000135) / 3 = **0.000138 seconds**
