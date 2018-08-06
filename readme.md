
1. Compile
```bash
clang -g -O1 -c -emit-llvm -I/$GRAALVM_HOME/jre/languages/llvm Vec3.cpp
```

2. Run
```bash
js --polyglot Vec3.js
```