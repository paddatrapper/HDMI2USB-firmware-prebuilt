
#ifndef PLATFORM_MIMASV2
#error "Version mismatch - PLATFORM_MIMASV2 not defined!"
#endif
const char* board = "mimasv2";

#ifndef TARGET_MEMTEST
#error "Version mismatch - TARGET_MEMTEST not defined!"
#endif
const char* target = "memtest";

const char* git_commit = "8e7dc58c0d4e5741ae707a14e54bed08d2fcb4bf";
const char* git_branch = "master";
const char* git_describe = "v0.0.3-709-g8e7dc58-dirty";
const char* git_status =
    "    --\r\n"
   "     M ../../../../third_party/litepcie\r\n"
   "     M ../../../../third_party/litesata\r\n"
   "     M ../../../../third_party/liteusb\r\n"
    "    --\r\n";

