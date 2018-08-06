
var vec3 = Polyglot.evalFile("llvm", "Vec3.bc");

var v0 = vec3.allocNativeVector();

vec3.printVector(v0);

v0.m_floats[1] = 2.0;

vec3.printVector(v0);

vec3.freeNativeVector(v0);