#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

class utUtils {
 public:
  void get_dir_exec(char* dir, char* exec) {
    char* filename = nullptr;
    if (readlink("/proc/self/exe", dir, 1024) < 0) {
      dir[0] = '\0';
      return;
    }
    filename = strrchr(dir, '/');
    if (filename == nullptr) {
      dir[0] = '\0';
      return;
    }
    ++filename;
    if (exec) {
      sprintf(exec, "%s", filename);
    }

    *filename = '\0';
    return;
  }
};



