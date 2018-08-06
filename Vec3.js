
var vec3 = Polyglot.evalFile("llvm", "Vec3.bc");

var v0 = vec3.allocNativeVector();

vec3.printVector(v0);

vec3.freeNativeVector(v0);