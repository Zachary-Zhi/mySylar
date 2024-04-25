#include "util.h"


namespace sylar {

pid_t GetThreadId() {
    return (pid_t)syscall(SYS_gettid);
}

uint32_t GetFiberId() {
    return 0;
}



}