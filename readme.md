
1. Compile
```bash
clang -g -O1 -c -emit-llvm -I/$GRAALVM_HOME/jre/languages/llvm Vec3.cpp
```

2. Run
```bash
js --polyglot Vec3.js
```

Expected result:
```
btVector3<0.000000,0.000000,0.000000>
btVector3<0.000000,2.000000,0.000000>
```