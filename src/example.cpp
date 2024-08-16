#include <emscripten.h>

extern "C" {
  const char* func() {
    return "test";
  }
}