PACKAGE=vendor.peyo.simple@1.0
hidl-gen -L c++-impl -r vendor.peyo:vendor/peyo/interfaces $PACKAGE -o default
hidl-gen -L androidbp-impl -r vendor.peyo:vendor/peyo/interfaces $PACKAGE -o default
hidl-gen -L androidbp -r vendor.peyo:vendor/peyo/interfaces $PACKAGE
