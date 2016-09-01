default: sanitize-address sanitize-thread sanitize-memory sanitize-undefined sanitize-safe-stack
	sh -c './sanitizer-undefined {1..32}'
	sh -c './sanitizer-address'

sanitize-address: sanitizer.cc
	clang++ -Wall -Wextra -pedantic -std=c++14 -fsanitize=address -g sanitizer.cc -o sanitizer-address

sanitize-thread: sanitizer.cc
	clang++ -Wall -Wextra -pedantic -std=c++14 -fsanitize=thread -g sanitizer.cc -o sanitizer-thread

sanitize-memory: sanitizer.cc
	clang++ -Wall -Wextra -pedantic -std=c++14 -fsanitize=memory -g sanitizer.cc -o sanitizer-memory

sanitize-undefined: sanitizer.cc
	clang++ -Wall -Wextra -pedantic -std=c++14 -fsanitize=undefined -g sanitizer.cc -o sanitizer-undefined

#sanitize-dataflow: sanitizer.cc
#	clang++ -Wall -Wextra -pedantic -std=c++14 -fsanitize=dataflow sanitizer.cc -o sanitizer-dataflow

#sanitize-cfi: sanitizer.cc
#	clang++ -Wall -Wextra -pedantic -std=c++14 -fsanitize=cfi sanitizer.cc -o sanitizer-cfi

sanitize-safe-stack: sanitizer.cc
	clang++ -Wall -Wextra -pedantic -std=c++14 -fsanitize=safe-stack -g sanitizer.cc -o sanitizer-safe-stack
