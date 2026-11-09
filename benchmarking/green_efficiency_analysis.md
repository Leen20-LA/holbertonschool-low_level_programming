# Green Efficiency Analysis

## Measurement Methodology

The measurements in this experiment were collected using the `clock()` function from the `<time.h>` library, which returns the processor time consumed by the program. The value was divided by `CLOCKS_PER_SEC` to convert the result into seconds. In the `baseline_loop` program, a single loop of 100,000,000 iterations was timed across three consecutive runs. In the `comparison_algorithms` program, two implementations of the same counting logic were timed: a naive nested-loop approach and a single-pass approach. Finally, in the `instrumentation_lab` program, each phase of a multi-stage pipeline (BUILD_DATA, PROCESS, and REDUCE) was measured individually by placing `clock()` calls immediately before and after each function call. The TOTAL time was measured from the start of `main()` to after the checksum reduction, ensuring it includes all phases plus a small verification overhead.

## Observed Performance Differences

In the instrumentation_lab experiment, the PROCESS phase consistently consumed the most time (average 0.000329 seconds), followed by BUILD_DATA (average 0.000306 seconds), while REDUCE was the fastest (average 0.000138 seconds).

## Relation Between Runtime and Energy Consumption

While this experiment did not measure energy directly, runtime is a reasonable proxy for energy consumption on modern processors. A CPU that spends more time executing instructions will draw power for a longer period. Therefore, the naive algorithm, which ran approximately **18,831** times longer than the optimized version, would likely consume proportionally more energy. Similarly, within the `instrumentation_lab` pipeline, optimizing the PROCESS phase (the dominant cost) would yield the greatest energy savings. This demonstrates that algorithmic efficiency is not only a performance concern but also an environmental and cost-related one.

## Limitations of the Experiment

One clear limitation is that `clock()` measures CPU time but does not capture wall-clock time or system overhead, and it has limited resolution on some platforms. Additionally, the experiment was run on a single machine with a specific hardware configuration, so the absolute times may not generalize to other systems. Finally, the experiment did not measure actual energy consumption using hardware power meters, so the connection between runtime and energy remains an inference rather than a direct measurement. Other background processes running on the system could also introduce slight variability between runs.

## Practical Engineering Takeaway

The main takeaway from this experiment is that algorithmic choices have a far greater impact on performance and energy efficiency than micro-optimizations. Replacing an O(N²) algorithm with an O(N) algorithm reduced runtime by a factor of **18,831**. When optimizing a multi-phase pipeline, measurement should guide effort: time should be invested in the most expensive phase (PROCESS in this case) rather than in phases that already run quickly. Engineers should always measure before optimizing and should prefer efficient algorithms over clever low-level tricks, because the former directly translates into lower energy consumption and faster execution.
