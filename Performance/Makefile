default: kahan inliner

kahan: kahan.cc
	clang++ -std=c++14  -g -Wall -Wdeprecated kahan.cc -o kahan

inliner: inliner.cc
	clang++ -std=c++14  -g -Wall -Wdeprecated -O2 -Rpass-analysis=inline -Rpass=inline -Rpass-missed=inline inliner.cc -o inliner
