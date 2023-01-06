## Integration Guide

### Include in your project

```bash
$ cd ${YOUR_PROJECT_DIR}
$ git submodule add https://github.com/libmcu/pl4.git pl4
```

### Add in your build system

Supported target platforms are:

- esp32

```cmake
set(TARGET_PLATFORM esp32)
add_subdirectory(pl4)
```
