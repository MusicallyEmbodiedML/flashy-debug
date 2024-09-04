## Configuration

To make a data partition on the flash chip, flash a binary and specify the data partition (by default, there isn't one).

```
xflash  --target=XCORE-AI-EXPLORER --boot-partition-size 2097152 --factory a.xe
```

The flash on the explorer board is 4Mb (32 Mbit)



## Dump the flash to a file

```xflash -o test.bin --read-all --target=XCORE-AI-EXPLORER```

