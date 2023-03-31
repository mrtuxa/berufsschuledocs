default: all

all: clean compile

run: runFunc

runFunc: compile runFuncRun

runFuncRun:
	@./a.out

clean:
	@rm -rvf a.out *.log *.md

compile:
	gcc --verbose main.c -fgcse-after-reload -fipa-cp-clone -floop-interchange -floop-unroll-and-jam -fpeel-loops -fpredictive-commoning -fsplit-loops -fsplit-paths -ftree-loop-distribution -ftree-partial-pre -funswitch-loops -fvect-cost-model=dynamic -fversion-loops-for-strides
